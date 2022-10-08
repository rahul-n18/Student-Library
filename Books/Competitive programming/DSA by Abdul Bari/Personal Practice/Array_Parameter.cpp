#include<iostream>
using namespace std;
int * Create(int n)
{
    int *p;
    p=new int[n];
    return(p); 
}

int main()
{
    cout<<"Enter The Size of Array"<<endl;
    int size;
    cin>>size;
    int *A;
    A=Create(size);
    for(int i=0;i<size;i++)
    A[i]=i+1;
    cout<<"Displaying The array items"<<endl;
    for(int i=0;i<size;i++)
    cout<<A[i]<<endl;
}