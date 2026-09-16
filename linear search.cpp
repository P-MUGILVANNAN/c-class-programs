#include<iostream>
using namespace std;

int main()
{
    int numbers[6] = {15,28,35,42,67,90};
    int searchValue;
    int position = -1;

    cout<<"Enter value to search"<<endl;
    cin>>searchValue;

    for(int i=0;i<6;i++){
        if(numbers[i] == searchValue){
            position = i;
            break;
        }
    }
    if(position != -1){
        cout<<"Element found at index: "<<position<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    return 0;
}
