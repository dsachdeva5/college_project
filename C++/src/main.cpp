#include<iostream>
#include "student.h"
#include "module.h"
using namespace std;
int main(){
    while(1){
    int n;
    cout<<"Welcome to college registration system "<<endl;
     cout<<"--------------------------------------"<<endl;
    cout<<"Press 1 to add student record"<<endl;
    cout<<"press 2 to update student record"<<endl;
    cout<<"Press 3 to display all records"<<endl;
    cout<<"Press 4 to add Module record"<<endl;
    cout<<"press 5 to update Module record"<<endl;
    cout<<"Press 6 to display all Module records"<<endl;
    cout<<"Press 0 to exit"<<endl; 
    cin>>n;
    if(cin.fail()){
        cin.clear();
        cin.ignore(512,'\n');
        cout<<"Invalid Input"<<endl;
        continue;
    }
    
    if(n>=1&&n<4)
    input(n);
    else if(n>3&&n<7)
    input1(n);
    else
    break;
    }
    return 0;
}





