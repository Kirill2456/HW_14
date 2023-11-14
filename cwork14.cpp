#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
string soname;
int num;
int academ[5];
};

class buer
{
public:
string soname;
string name;
string name_father;
string adress;
long int number_credit;
int account;
};
void print(Student ivan)
{
cout << ivan.soname <<  endl;
cout << ivan.num <<  endl;
cout << ivan.academ[0] << endl;
cout << ivan.academ[1] << endl;
cout << ivan.academ[2] << endl;
cout << ivan.academ[3] << endl;
cout << ivan.academ[4] << endl;
}

void print2(buer k)
{
cout << "soname " << k.soname << endl;
cout << "name " << k.name << endl;
cout <<"name father "<< k.name_father << endl;
cout <<"adress " << k.adress << endl;
cout <<"number credit card " << k.number_credit << endl;
cout <<"number bank account " << k.account << endl;

}

int main()
{
Student ivan;
ivan.soname = "ivanov I.A.";
ivan.num = 3235;
ivan.academ[0]=4;
ivan.academ[1]=4;
ivan.academ[2]=3;
ivan.academ[3]=3;
ivan.academ[4]=3;

Student p;
p.soname = "Pupkin A.A.";
p.num = 123;
p.academ[0]=5;
p.academ[1]=4;
p.academ[2]=3;
p.academ[3]=2;
p.academ[4]=1;

print(ivan);
print(p);

buer k;
k.soname = "Kirill";
k.name = "Nikulin";
k.name_father = "Alekseevich";
k.adress = "Leningrad SPB.ru";
k.number_credit = 123456789100111213;
k.account = 987654321;

print2(k);
return 0;
}
