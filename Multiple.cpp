#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class Info{
    private:char Name[25];
            int id;
            char sex;
    public: void input();
            void output();
};
class Academic{
    private: char course[30];
             char semester[20];
             int ranK;
    public: void input();
            void output();
};
class Financai:public Info,public Academic{
    private: float Amount;
    public:  void input();
             void output();
};
void Info::input(){
    cout<<"Enter ID   = ";cin>>id;
    cout<<"Enter Name = ";cin.sync();cin.get(Name,25);
    cout<<"Enter sex  = ";cin.sync();cin>>sex;
}
void Info::output(){
    cout<<id<<"\t"<<Name<<"\t"<<sex;
}


void Academic::input(){
    cout<<"Enter course  = ";cin.sync();cin.get(course,30);
    cout<<"Enter semester= ";cin.sync();cin.get(semester,20);
    cout<<"Enter rank    = ";cin>>ranK;

}
void Academic::output(){
    cout<<"\t"<<course<<"\t"<<semester<<"\t"<<ranK;
}
void Financai::input(){
    Info::input();
    Academic::input();
    cout<<"Enter Amount = ";cin>>Amount;
}
void Financai::output(){
    Info::output();
    Academic::output();
    cout<<"\t"<<Amount;
}
int main(){
    cout<<"\n Use object derived class";
    cout<<"\n Input n object frome keyboard"<<endl;;
    int n,i;
    Financai *ptr;
    cout<<"\n \t\tEnter n = ";cin>>n;
    ptr=new Financai[n];
    for(i=0;i<n;i++){
        ptr[i].input();
    }
    cout<<"\n_____________________output all information___________________"<<endl;
    cout<<endl;
    cout<<"id\tName\tsex\tcourse\tsemester\tranK"<<endl;
    for(i=0;i<n;i++){
        ptr[i].output();
        cout<<endl;
    }
    cout<<endl;
    cout<<"___________________________pleast Pratice__________________________";
    getch();
    return 0;
}
