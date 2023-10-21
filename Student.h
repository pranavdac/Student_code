#include<iostream>
using namespace std;

void Student::Student(){
}

void Student::Student(int id,string nm,int a,int b, int c){
	
	studid = id;
	name = nm;
	m1 = m1;
	m2 = m2;
	m3 = m3;
	
}

void Student::Percentage(){
	
	total = m1+m2+m3;
	cout << "total marks = " << total << endl;
	
}

void Student::CalculateTotalMarks() {
	
	percentage = total/3;
	cout << "percentage = " << percentage;
	
}
