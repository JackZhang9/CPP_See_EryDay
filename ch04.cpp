//表达式
#include<iostream>
#include<vector>

using namespace std;


int q_1()
{
    vector<string> text={"as","asd","regvsf","sdfdv."," ","kjlx"," ","dfdl"};
    for(auto &s:text)
    {
        cout<<s;
        //遇到空字符串
        if(s.empty() || s[-1]=='.')
        {
            cout<<endl;
        }
        else
        {
            cout<<"+_+";
        }
    }
    return 0;
}


int q_2()
{
    int i;
    while(cin>>i && i!=42)
    {
        cout<<i;
    }
    return 0;
}

int q_3()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b && b>c && c>d)
    {
        cout<<"true";
    }
    return 0;
}

int q_4()
{
    vector<int> i_vec={1,2,3,4,5,6,7,8};
    auto beg=i_vec.begin();
    while (beg!=i_vec.end())
    {
        cout<<*beg++; //先输出原始值，再解引用，再把当前值加1，
    }
    
    return 0;
}

int q_5()
{
    vector<string> s_vec={"can","you","speak","in","english"};
    for(auto beg=s_vec.begin();beg!=s_vec.end();++beg)
    {
        // for(auto &c:*beg)
        // {
        //     c=toupper(c);
        // }
        //首字符大写
        (*beg)[0]=toupper((*beg)[0]); //toupper修改一个字符的大小写，
    }
   
    auto beg2=s_vec.begin();
    while (beg2!=s_vec.end())
    {
        cout<<*beg2++; //先返回迭代器beg2指向的元素，再迭代器指向下一个元素
    }
    return 0;
}

int q_6()
{
    string s1="a sjd sldkl",*p_s=&s1;
    auto s_n=s1.size();  //字符串长度
    cout<<s_n; 
    auto s_p=(*p_s).size(); //指针长度
    cout<<s_p;
    auto s_p_n=p_s->size(); //指针先解引用运算，得到字符串，再点运算调用成员函数
    cout<<s_p_n;
    return 0;
}

int q_7()
{
    vector<string> s_vec={"sda","alsd","sdpyf","aposkd"};
    for(auto beg=s_vec.begin();beg!=s_vec.end();++beg)
    {
        // auto s_n=(*beg).size(); //先解迭代器的引用，再调用成员函数
        // cout<<s_n;
        cout<<beg->size();
        cout<<beg->empty();
    }
    return 0;
}

int q_8()
{
    double score=70; 
    auto grade=(score<60)?"failed":"successfully"; //条件运算符
    cout<<grade;
    return 0;
}

int q_9()
{
    vector<int> v_i={3,4,5,6,7,8};
    for(auto beg=v_i.begin();beg!=v_i.end();++beg)
    {
        cout<<((*beg & 0x1)?(*beg)*2:*beg); //遇见奇数就乘以2, &位与运算
    }
    return 0;
}

int q_10()
{
    //使用if条件语句区分成绩，不能用太多嵌套()?:
    for(unsigned score;cin>>score;)
    {
        if(score>=90) {cout<<"high ";}
        else if(score>=80) {cout<<"good";}
        else if(score>=60) {cout<<"low";}
        else {cout<<"failed";}
    }
    return 0;
}

int q_11()
{
    int op,*p=&op;
    double ez,*e;
    char ryze;
    vector<string> v_s={"as","asd","sda","fdf","adsd","wefw","pldf"};
    string s="asdasdas";

    cout<<sizeof(op);
    cout<<sizeof(ez);
    cout<<sizeof(*p);
    cout<<sizeof(e);
    cout<<sizeof(ryze);
    cout<<sizeof(v_s);
    cout<<sizeof(s)<<endl;
    cout<<"bool"<<sizeof(bool)<<"bytes"<<endl;
    cout<<"char"<<sizeof(char)<<endl;
    cout<<"int"<<sizeof(int)<<endl;
    cout<<"float"<<sizeof(float)<<endl;
    cout<<"double"<<sizeof(double)<<endl;
    cout<<"string"<<sizeof(string)<<endl;
    return 0;
}

int q_12()
{
    vector<int> x(100,1);
    cout<<sizeof(*x);
    return 0;
}

int main()
{
    // q_1();
    // q_2();
    // q_3();
    // q_4();
    // q_5();
    // q_6();
    // q_7();
    // q_8();
    // q_9();
    // q_10();
    // q_11();
    q_12();
    return 0;
}