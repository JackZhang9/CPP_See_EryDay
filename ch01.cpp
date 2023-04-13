#include<iostream>
#include"Sales_item.h"

int basic_io()
{
    std::cout<<"enter two nums"<<std::endl;
    int v1,v2;
    std::cin>>v1>>v2;
    std::cout<<"the sum of "<<v1<<" and "<<v2<<" is "<<v1+v2<<std::endl;
}

int basic_while()
{
    int sum=0, num=1;
    while (num<11)
    {
        sum+=num;
        ++num;
    }
    std::cout<<"sum of 1 to 10 is "<<sum<<std::endl;
    return 0;
}

int basic_for()
{
    int sum=0;
    for(int i=1;i<11;++i)
    {
        sum+=i;
    }
    std::cout<<"sum of 1 to 10 is "<<sum<<std::endl;
    return 0;
}

int basic_cin()
{
    int sum=0,num;
    while (std::cin>>num)
    {
        sum+=num;
    }
    std::cout<<"sum is "<<sum<<std::endl;
    return 0;
}

int basic_if_cnt()
{
    int cnt=1,currVal,otherVal;
    if(std::cin>>currVal)
    {
        while (std::cin>>otherVal)
        {
            if(currVal==otherVal)
            {
                ++cnt;
            }
            else
            {
                std::cout<<currVal<<" cnt is "<<cnt<<std::endl;
                currVal=otherVal;
                cnt=1;
            }
        }
        std::cout<<currVal<<" cnt is "<<cnt<<std::endl;
    }
    return 0;
}

int basic_item()
{
    for(Sales_item item;std::cin>>item;std::cout<<item<<std::endl);
    return 0;
}

int basic_items()
{
    Sales_item item1,item2;
    std::cin>>item1>>item2;
    std::cout<<item1+item2<<std::endl;
    return 0;
}

int main()
{
    Sales_item sum_item;
    std::cin>>sum_item;
    std::cout<<sum_item<<std::endl;
    for(Sales_item item;std::cin>>item;std::cout<<item<<std::endl)
    {
        sum_item+=item;
    }
    std::cout<<"sum_item is "<<sum_item<<std::endl;
    return 0;
}