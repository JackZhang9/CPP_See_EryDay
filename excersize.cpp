#include<iostream>

int excer1()
{
    std::cout<<"hello world!"<<std::endl;
    return 0;
}

int excer2()
{
    int sum=0,num=50;
    while(num<101)
    {
        sum+=num;
        ++num;
    }
    std::cout<<"sum of 50 to 100 is "<<sum<<std::endl;
    return 0;
}

int excer3()
{
    int num=10;
    while (num>=0)
    {
        std::cout<<num<<std::endl;
        num--;
    }
    return 0;
}

int excer4()
{
    int start,end;
    std::cout<<"enter two ints"<<std::endl;
    std::cin>>start>>end;
    if(end>start)
    {
        while(start<=end)
        {
            std::cout<<start<<std::endl;
            ++start;
        }
    }
    else
    {
        std::cout<<"first number should be smaller than second number !"<<std::endl;
    }
    return 0;
}

