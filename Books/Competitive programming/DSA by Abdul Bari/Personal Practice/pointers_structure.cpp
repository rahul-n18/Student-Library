#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct Cuboid
{
    int l;
    int b;
    int h;
};
int main()
{
    struct Cuboid *p;
    cout<<sizeof(p)<<endl;
    p=new Cuboid;
    p->l=12;
    p->b=5;
    p->h=10;
    cout<<p->l<<endl;
    cout<<p->b<<endl;
    cout<<p->h<<endl;
    cout<<sizeof(p)<<endl;
    delete p;
    return 0;
}
