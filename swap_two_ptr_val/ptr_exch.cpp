#include<iostream>

//use two ptr args swap  int  val
int exchg(int *p,int *q)
{
    std::cout<<"origin--->"<<*p<<*q<<std::endl;
    int tmp;
    tmp=*p;
    *p=*q; //pzhixiangq p=2
    *q=tmp;
    std::cout<<"now--->"<<*p<<*q<<std::endl;
    return 0;
}

int reset_ptr(int *p)
{
    *p=0; //ptr reset to 0
    return 0;
}

int  main()
{
    int m=1,n=2;
    
    // exchg(p,q);
    exchg(&m,&n);
    reset_ptr(&m);
    int  *p=&m,*q=&n;
    std::cout<<"reset later--->"<<*p<<std::endl;
    return 0;
}