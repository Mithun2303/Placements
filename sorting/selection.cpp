#include<iostream>
using namespace std;

void print_array(int arr[],int n);
void swap_(int * x,int * y);
void selectionSort(int arr[],int n);

int main()
{
    int a[] = { 12, 31, 25, 8, 32, 17 };
    selectionSort(a,sizeof(a)/sizeof(a[0]));
}


void print_array(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<'\t';
    }
}

void swap_(int * x,int * y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void selectionSort(int arr[],int n)
{
    int key;
    for(int i=0;i<n-1;i++)
    {
        key=i;
        for(int j=i+1;j<n;j++)
        {
            if (arr[j]<arr[key])
            {
                key=j;
            }
        }
        swap_(&arr[i],&arr[key]);
    }
    print_array(arr,n);
}