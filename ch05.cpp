#include <iostream>
#include <vector>
#include<fstream>
#include<opencv2/opencv.hpp>

using namespace std;


//将class加载到vector中
vector<string> load_class_list()
{
    vector<string> class_list;
    string line;
    ifstream ifs("config_files/classes.txt"); 
    while(getline(ifs,line))
    {
        class_list.push_back(line);
    }
    return class_list;
}

int print_(vector<string> str_vec)
{
    for(auto s:str_vec)
    {
        cout<<s<<endl;
    }
    return 0;
}


int main()
{
    //加载类别
    auto class_list=load_class_list();
    print_(class_list);
    //读取视频文件，判断是否成功打开
    cv::Mat frame; //声明一张图片
    cv::VideoCapture capture("sample.mp4"); //初始化一个捕捉的视频
    if(!capture.isOpened()) //如果图片不能打开，isOpened()是能打开，能打开不需要处理
    {
        cout<<"error openning video!!!";
        return -1;
    }
    //判断是否使用cuda
    bool is_cuda=true; //默认使用cuda
    //加载网络
    cv::dnn::Net net; //声明一个网络
    load_net(net,is_cuda); //根据声明的网络和是否使用cuda，加载网络结构
    //创建计时器

    //记录视频输出帧数
    int frame_count=0;
    //计算fps
    int total_frames=0;
    float fps=-1;

    while(true)
    {
        //读取视频帧
        capture.read(frame);
        if(frame.empty())
        {
            cout<<"end of stream";
            break;
        }
        vector<Detection> output;
        //前向推理
        detect(frame,net,output,class_list); //输入帧，网络，输出，类别
        frame_count++;
        total_frames++;
        //检测的框总数
        int detections=output.size();
        for(int i=0;i<detections;++i)
        {
            auto detection =output[i]; //第i个检测框
            auto box=detection.box;
            auto classId=detection.class_id;
            //为边界框确定颜色
            const auto color=colors[classId%colors.size()];
            //绘制边界框
            cv::rectangle(frame,box,color,3);
            //类别边框
            cv::rectangle(frame,cv::point(box.x,box.y-20))
        }
    }

    return 0;
}