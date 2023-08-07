#include<iostream>
using namespace std;
void swap_(int * x,int * y);
void heapify(int arr[],int n,int i);
void heapsort(int arr[],int n);
void print_array(int arr[],int n);

int main()
{
    int a[] = { 12, 31, 25, 8, 32, 17 };
    heapsort(a,sizeof(a)/sizeof(a[0]));
}

void swap_(int * x,int * y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void heapify(int arr[],int n,int i)
{
    int largest =i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<n && arr[left]>arr[largest])
        largest=left;
    if(right<n && arr[right]>arr[largest])
        largest=right;
    if(largest!=i)
    {
        swap_(&arr[i],&arr[largest]);
        heapify(arr,n,i);
    }
}

void heapsort(int arr[],int n)
{
    int i;
    for(i=n/2-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }

    for(int i=n-1;i>=0;i--)
    {
        swap_(&arr[i],&arr[0]);
        heapify(arr,i,0);
    }

    print_array(arr,n);
}
void print_array(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<'\t';
    }
}