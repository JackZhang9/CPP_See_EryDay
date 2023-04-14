//变量和基本类型

#include<iostream>
#include"Sales_item.h"
#include<string>

//一个函数
void basic_instance()
{
    Sales_item book;
    std::cin>>book;
    std::cout<<book<<std::endl;
}

void unsign_func()
{
    unsigned u=10,u2=42;
    std::cout<<u-u2<<std::endl;
    std::cout<<u2-u<<std::endl;
    int i=10,i2=42;
    std::cout<<i-i2<<std::endl;
    std::cout<<i2-i<<std::endl;
    std::cout<<u-i<<std::endl;
    std::cout<<i-u<<std::endl;
}

struct Sale_data
{
    //书名,售价，利润
    std::string bookNo;
    unsigned unit_sold;
    double revenue;
};

int sale_instance()
{
    Sale_data book;
    double price;
    std::cin>>book.bookNo>>book.unit_sold>>price;
    book.revenue=book.unit_sold*price;
    std::cout<<book.bookNo<<" "<<book.unit_sold<<" "<<book.revenue<<std::endl;
    return 0;
}

int ref_func()
{
    int i=1,&ri=i;
    ri=10;
    std::cout<<i<<" "<<ri<<std::endl;
    return 0;
}

int ptr_func()
{
    int dva1=2,*ip1=&dva1,*ip2=ip1;
    int ival;
    std::cout<<ip1<<std::endl;
    std::cout<<ip2<<std::endl;
    std::cout<<*ip2<<std::endl;
    ip2=&ival;
    std::cout<<dva1<<std::endl;
    std::cout<<ip1<<std::endl;
    std::cout<<ip2<<std::endl;
    std::cout<<*ip1<<std::endl;
    return 0;
}

int main()
{
    // basic_instance();
    // unsign_func();
    // sale_instance();
    // ref_func();
    ptr_func();
    return 0;
}