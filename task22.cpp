#include<iostream>
using namespace std;
main()
{
	int inter,matric,ecat;
	cout<<"enter matric marks";
	cin>> matric;
	cout<<"enter inter marks:";
	cin>> inter;
	cout<<"enter ecat marks:";
	cin>> ecat;
	int matric_percentage=matric/1100.0*100*0.25;
	cout<< "matric percentage"<<matric_percentage<<endl;
	int inter_percentage=inter/1100.0*100*0.45;
	cout<< "inter percentage"<<inter_percentage<<endl;
	int ecat_percentage=ecat/400.0*100*0.30;
	int total=inter_percentage+ecat_percentage+matric_percentage;
	cout<<"your UET aggregate:";
	cout<< total;
}