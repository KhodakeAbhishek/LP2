#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the size of array :- ";
  cin>>n;
  
  int arr[n];
  cout<<"Enter "<<n<<" Integers in ascending order";
  for(int i=0;i<n;i++)
    cin>>arr[i];
  
  int target;
  cout<<"Enter the number you want to search :-";
  cin>>target;
  
  int start =0, end=n-1, mid;
  int pos= -1;
  
  while(start<=end)
  {
    mid = (start+end)/2;
    if(arr[mid]==target){
            pos = mid;
            break;
        }
        else if(arr[mid]<target)
            start = mid +1;   
        else
            end = mid - 1;
    }
    
    if(pos==-1)
        cout<<target<<" is not present in the array"<<endl;
    else
        cout<<target<<" is present in the array at position "<<pos<<endl;
        
    return 0;
}
    
