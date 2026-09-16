#include<iostream>
#include<iterator>
using namespace std;


int main()
{
    int arr[5] = {1,2,3,4,5};
    arr[2] = 40;
    int arr1[5] = {1,2};
    int arr2[5];
    cout<<arr[2]<<endl;
    cout<<"Enter the array values"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr2[i];
    }
    cout<<"Entered array values"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<endl;
    }

    int total_size = sizeof(arr);
    int length = total_size/sizeof(arr[0]);
    cout<<total_size<<endl;
    cout<<length<<endl;
    //cout<<std::size(arr1)<<endl;

    return 0;
}
