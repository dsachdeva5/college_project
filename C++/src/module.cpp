#include<iostream>
#include<string>
#include<unordered_map>
#include "module.h"
using namespace std;
unordered_map<int, Module > md;
void Module::insert(){
  cout<<"enter moduleNo"<<endl;
   int mno;
   cin>>mno;
   cout<<"enter moduleName"<<endl;
   string name;
   cin.ignore();
   cin>>name;
   cout<<"Enter duration"<<endl;
   int dur;
   cin>>dur;
   cout<<"Enter Fees"<<endl;
   int fee;
   cin>>fee;
   cout<<"Enter tentativeStartDate"<<endl;
   string tsd;
   cin.ignore();
   getline(cin,tsd);
    moduleNo=mno;
    moduleName=name;
    duration=dur;
    fees=fee;
    tentativeStartDate=tsd;
  }
  void Module:: display(){
    cout<<"Details of all Modules are :"<<endl;
   cout<<this->moduleNo<<" "<<this->moduleName<<" "<<this->duration<<" "<<this->fees<<" "<<this->tentativeStartDate<<endl;
  }
  void Module:: update(){
   insert();
  }
void input1(int n){
  switch(n){

      case 4:{
        Module m;
        m.insert();
        ::md[m.moduleNo] =m;
    cout<<"Record added Successfully!!"<<endl;
         break;
      }
      case 5:{
       cout<<"Enter the moduleNo which you want to update:"<<endl;
       int mn;
       cin>>mn;
       if(::md.count(mn)>0){
         ::md[mn].update();
         ::md[mn] =::md[mn];
         cout<<"Record Updated Successfully!!"<<endl;
       }
       else{
        cout<<"Module not found!!"<<endl;
       }
       break;
      }
      case 6:{
        for(auto i  : ::md ){
            i.second.display();
        }
      }
      
    }
  }

