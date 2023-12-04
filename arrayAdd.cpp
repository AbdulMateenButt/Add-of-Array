#include<iostream>
using namespace std;
double add(int* arr,int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum=sum+arr[i];
    }
    return sum/size;
}
void display()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of Array: "<<'\n';
   for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }   
    int result=add(arr,size);
    cout<<"Sum Of Elements is "<<result;
}
int main()
{
    display();
}