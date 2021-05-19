#include <iostream>
using namespace std;
 
int main(){
     int n;
     cout << "Enter the size of the Array: ";
    cin >> n;
    int a[n];
    cout<<"Array elements: "<<endl;
    for(int i =0 ; i < n ; i++)
        cin >> a[i];
    int start =0;
    int end = n-1;
    while(start < end){
         swap(a[start] , a[end]);
         start ++;
         end--;
    }
     cout<<"After Reversing: "<< endl;
     for(int j =0 ; j < n ; j++) 
       cout << a[j] << " ";
       
  return 0 ;
}
