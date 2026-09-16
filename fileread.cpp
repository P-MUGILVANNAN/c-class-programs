#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream file("file1.txt");
    if(!file){
        cout<<"File Not Found"<<endl;
    }
    string text;
    while(file >> text){
        cout<<text<<endl;
    }
    file.close();
    return 0;
}


