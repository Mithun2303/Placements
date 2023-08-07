#include<iostream>
using namespace std;
void print_array(int arr[],int n);
void insertionSort(int arr[],int n);

int main()
{
    int a[] = { 12, 31, 25, 8, 32, 17 };
    insertionSort(a,sizeof(a)/sizeof(a[0]));
}
void insertionSort(int arr[],int n)
{
    int temp;
    int i,j;
    for(i=1;i<n;i++)
    {
        temp = arr[i];
        j = i-1;
        while(j>=0 && temp<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
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
