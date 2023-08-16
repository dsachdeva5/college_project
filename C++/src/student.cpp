#include<iostream>
#include<string>
#include<unordered_map>
#include "student.h"
using namespace std;
unordered_map<int, Student > st;
void Student::insert(){
  cout<<"enter admno"<<endl;
   int admn;
   cin>>admn;
   cout<<"enter student name"<<endl;
   string name;
   cin.ignore();
   getline(cin,name);
   cout<<"Enter bloodgrp"<<endl;
   string grp;
   getline(cin,grp);
   cout<<"Enter Student Address"<<endl;
   string addr;
   getline(cin,addr);
   cout<<"Enter DOB"<<endl;
   string dob;
  getline(cin,dob);
    admNo=admn;
    studName=name;
    bloodGrp=grp;
    studAddr=addr;
    studob=dob;
  }
  void Student:: display(){
   cout<<"Details of Students are :"<<endl;
   cout<<this->admNo<<" "<<this->studName<<" "<<this->bloodGrp<<" "<<this->studAddr<<" "<<this->studob<<endl;
  }
  void Student:: update(){
   insert();
  }
void input(int n){
  switch(n){
      case 1:{
        Student s;
        s.insert();
        ::st[s.admNo] =s;
    cout<<"Record added Successfully!!"<<endl;
         break;
      }
      case 2:{
       cout<<"Enter the admno of student which you want to update:"<<endl;
       int admn;
       cin>>admn;
       if(::st.count(admn)>0){
         ::st[admn].update();
         ::st[admn] =::st[admn];
         cout<<"Record Updated Successfully."<<endl;
       }
       else{
        cout<<"AdmNo not found!!"<<endl;
       }
       break;
      }
      case 3:{
        for(auto i  : ::st ){
            i.second.display();
        }
      }
      case 4:{
        
         break;
      }
    }
  }

