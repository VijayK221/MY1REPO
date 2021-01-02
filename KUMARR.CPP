#include<iostream.h>
#include<conio.h>
class x
{
char name[25],fname[10],mname[10],inrolno[20],course[20],clgname[30];
int rn;
int al,cal,pb,s,cp,ial,ical,ipb,is,icp;
public:
void get()
{
cout<<"enter name of student::\n" ;
cin>>name;
cout<<"enter father name ::\n";
cin>>fname;
cout<<"enter mother name:\n ";
cin>>mname;
cout<<" enter roll no \n";
cin>>rn;
cout<<"enter enrolment no::\n";
cin>>inrolno;
cout<<"enter course::\n";
cin>>course;
cout<<"enter colage name ::\n";
cin>>clgname;
}
void display()
{
cout<<"name          :"<<name<<endl;
cout<<"father's name :"<<fname<<endl;
cout<<"mother's name :"<<mname<<endl;
cout<<                                                 "Roll no :"<<rn<<endl;
cout<<                                                    "E No :"<<inrolno<<endl;
cout<<"Examination   :"<<course<<endl;
cout<<"Collage Name  :"<<clgname<<endl<<endl;
}
void getmark ()
{
cout<<"enter marks of algebra of theory and internal \n";
cin>>al>>ial;
cout<<"enter marks of calculas theory and internal  \n";
cin>>cal>>ical;
cout<<"enter marks of probability theory and internal  \n";
cin>>pb>>ipb;
cout<<"enter marks of stat theory and internal  \n";
cin>>s>>is;
cout<<"enter marks of computer theory and internal  \n";
cin>>cp>>icp;
}
void show1()
{
cout<<"ALGEBRA AND TRIGONOMETRY                   70  "<<al<<"    30  "<<ial<<"     100\n";
cout<<"                                           28        12         40\n";
cout<<"CALCULUS                                   70  "<<cal<<"    30  "<<ical<<"     100\n";
cout<<"                                           28        12         40\n";
cout<<"PROBABILITY                                70  "<<pb<<"    30  "<<ipb<<"     100\n";
cout<<"                                           28        12         40\n";
cout<<"STATISTICAL METHODS                        70  "<<s<<"    30  "<<is<<"     100\n";
cout<<"                                           28        12         40\n";
cout<<"COMPUTER FUNDAMENTAL WITH PROGRAMMING IN C 70  "<<cp<<"    30  "<<icp<<"     100\n";
cout<<"                                           28        12         40\n";
cout<<"\n\n";
}
};
class y
{
int statp;
int progp;
public:
void getpact()
{
cout<<"enter practical marks of statistics \n";
cin>>statp;
cout<<"enter practical marks of programming \n";
cin>>progp;
 }
 void show2()
 {
 cout<<"PRACTICAL(BASED ON STATISTICAL METHODS)                         50  " <<statp<<endl;
 cout<<"                                                                20\n";
 cout<<"PRACTICAL(BASED ON C pROGRAMMING)                               50  " <<progp<<endl;
 cout<<"                                                                20\n";
 }
 };
 void main()
 {
 clrscr();
 x obj1;
 y obj2;
 obj1.get();
 obj1.getmark();
 obj2.getpact();
 obj1.display();
 cout<<"Name of paper                            Theory    Internal    Grand    \n";
 cout<<"\n                                          Max Marks Max Marks  Max Marks\n";
 cout<<"                                           Min Obt.  Min Obt.   Min Obt.\n";
 obj1.show1();
 cout<<"PRACTICAL\n";
obj2.show2();
cout<<"\n\n";
cout<<"TOTAL					Max 600 Min 240 Obtained  ";
 getch();
 }


