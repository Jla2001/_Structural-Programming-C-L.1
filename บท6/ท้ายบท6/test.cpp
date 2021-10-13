#include <iostream>
using namespace std;
int main()
{
 char k,arr[10];
 int i,j,n;
 cout<<"Enter the size of array\n";
 cin>>n;
 cout<<"Enter the element of array\n";
    for (i=0;i<n;i++)
    {
     cin>>arr[i];
 }
 cout << i;
 j=i-1;
 for(i=0;i<j;i++)
 {
  k=arr[i];
  arr[i]=arr[j];
  arr[j]=k;
  j--;
 }
 cout<<"After reverse the array Elements\n";
 for(i=0;i<n;i++)
 {
  cout<<"\t"<<arr[i]<<endl;
 }
 return 0;
}