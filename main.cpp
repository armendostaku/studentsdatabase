#include <iostream>
#include <string>
#include <fstream>
using namespace std;

 class Student{ 
   public: 
   string name; 
   string surname; 
   int age; 
   ofstream data;
   void stdnt(){ 
       start: 
       cout<<"Please input student name .../ "; 
       cin>>name;
       cout<<"Please input student surname .../ ";
       cin>>surname; 
       cout<<"Please input student age .../ "; 
       cin>>age;
       cout<<"../saved successfully\n";
   }
   void recSave(){ 
      stdnt();
      data.open("database.txt", ios::out | ios::app | ios::binary);
      data<<"\nStudent name : "<<name<<"\n";
      data<<"Student surname : "<<surname<<"\n";
      data<<"Student age : "<<age<<"\n";
      data.close();
}};

int main(){ 
  Student call;
  call.recSave();
  return 0;
}
