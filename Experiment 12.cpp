#include<iostream>
using namespace std;
void max_heap(int a[],int i,int n)
{
    int l=2*i+1;
    int r=2*i+2;
    int max;
    if(l<n&&a[l]>a[i])
    max=l;
    else
        max=i;
    if(r<n&&a[r]>a[max])
        max=r;
    if(max!=i)
    {
        swap(a[i],a[max]);
        max_heap(a,max,n);
    }
}
void build(int a[],int n)
{
    for(int i=n/2-1;i>=0;i--)
        max_heap(a,i,n);
}
void heapsort(int a[],int n)
{
    int s=n;
    build(a,n);
    for(int i=n-1;i>=0;i--)
    {
        swap(a[0],a[i]);
        s=s-1;
        max_heap(a,0,s);
    }
}
int main()
{
    int n,i;
    int a[20];
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    heapsort(a,n);
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
}
