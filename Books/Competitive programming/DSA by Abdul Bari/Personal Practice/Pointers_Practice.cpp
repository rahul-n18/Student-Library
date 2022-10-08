#include<iostream>
using namespace std;
struct Cuboid
{
    int length;
    int breadth;
    int height;
};
int main()
{
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Cuboid *p5;
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;
    
    return 0;
}
