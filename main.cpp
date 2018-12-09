#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	double nilaiujian;
	char skor;

	cout<<"masukan nilai ujian:";
	cin>>nilaiujian;

	if(nilaiujian >=90)
		skor= 'A';
	else

	if(nilaiujian >=70)
		skor= 'B';
	else

	if(nilaiujian >=60)
		skor= 'C';
	else

	if(nilaiujian >=50)
		skor= 'D';
	else
	skor='E';
cout<<"skor :"<<skor<<endl;
getch ();
}
