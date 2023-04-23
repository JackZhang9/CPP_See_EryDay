#include<iostream>
#include<string>
#include<vector>
#include<cctype>

using namespace std;

int q_1()
{
    int i;
    cin>>i;
    cout<<i;
    return 0;
}

int q_2()
{
    string s1;
    string s3="value";
    string s4(5,'c');
    cout<<s4;
    return 0;
}

int q_3()
{
    string s1;
    cin>>s1;
    cout<<s1;
    return 0;
}

int q_4()
{
    string line;
    while (getline(cin,line))
    {
        // if(!line.empty())
        // cout<<line<<endl;
        if(line.size()>2)
        cout<<line<<endl;
    }
    return 0;
}

int q_5()
{
    string s2;
    cin>>s2;
    decltype(s2.size()) punc_cnt=0;
    for(auto &i:s2)
    {
        if(ispunct(i))  //是标点符号就累加 
        ++punc_cnt;
        i=toupper(i); //变成大写字母
    }
    cout<<s2<<punc_cnt<<endl;
    return 0;
}

int q_6()
{
    string::size_type n;
    while (cin>>n)
    {
        cout<<n<<endl;
    }
    
    return 0;
}

int q_7()
{
    vector<int> i_v1;
    vector<string> s_v1;
    string text;
    for(int i=0;i<2;++i)
    {
        i_v1.push_back(i);
        cin>>text;
        s_v1.push_back(text);
    }
    for(const auto &value:i_v1 )
    {
        cout<<value;
    }
    cout<<i_v1.size()<<i_v1.empty();
    return 0;
}

int q_8()
{
    vector<int> s_vec(11,0);
    unsigned grade;
    while(cin>>grade)
    {
        if(grade<=100) //只处理有效成绩
        {
            ++s_vec[grade/10];
            cout<<s_vec[0];
        }
        
    }
    for(auto i:s_vec)
    {
        cout<<i;
    }
    return 0;
}

// int q_9()
// {
//     vector<string> word;
//     string s;
//     cin>>s;
//     word.push_back(s);
//     for(auto &c:word)
//     {
//         c=toupper(c);
//     }
//     for(auto c:word)
//     {
//         cout<<c<<endl;
//     }
//     return 0;
// }

int q_10()
{
    vector<string> v;
    // v.push_back("can");
    // v.push_back("you");
    // v.push_back("speak");
    // v.push_back("in");
    // v.push_back("English");
    
    string s1,s2,s3,s4;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    cin>>s4;
    v.push_back(s1);
    v.push_back(s2);
    v.push_back(s3);
    v.push_back(s4);
    // string s;
    // while (cin>>s)
    // {
    //     v.push_back(s);
    // }
    for(auto &str:v)
    {
        cout<<str<<" ";
    }
    return 0;
}

int q_11()
{
    string s2;
    cin>>s2;
    for(auto &i:s2)
    {
        i=toupper(i); //变成大写字母
    }
    cout<<s2<<endl;
    return 0;
}

int q_12()
{
    vector<int> words;
    int s;
    cin>>s;
    words.push_back(s);
    for(auto it=words.begin();it!=words.end();it++)
    {
        *it *= 2;
        cout<<words[0];
    }
    for(auto i:words)
    {
        cout<<i;
    }
    return 0;
}

int q_13()
{
    vector<string> text={"abcdewes", "sdsd", "dfsdsd"," "};
    for(auto it=text.begin();it!=text.end() && !it->empty();++it)
    {
        cout<<*it<<endl;
    }
    return 0;
}

int q_323()
{
    vector<int> i_vec={1,2,3,4,5,6,7,8,9,10}; //创建10个整数的vector
    for(auto it=i_vec.begin();it!=i_vec.end();++it)
    {
        *it*=2;
    }
    for(auto i:i_vec)
    {
        cout<<i;
    }
    return 0;
}

int q_14()
{
    vector<int> i_vec(20,1);
    auto mid=i_vec.begin()+i_vec.size()/2;
    cout<<mid[0];
    return 0;
}

int q_15()
{
    vector<int> text={1,2,3,4,15,16,17,28,39,110,121};
    auto beg=text.begin(),end=text.end();
    auto mid=beg+(end-beg)/2;
    int sou;
    cin>>sou;
    while(mid!=end && *mid!=sou)
    {
        if(sou<*mid)
        {
            end=mid;
        }
        else
        {
            beg=mid+1;
        }
        mid=beg+(end-beg)/2;
    }
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
    // q_12();
    // q_13();
    // q_323();
    // q_14();
    q_15();
    return 0;
}