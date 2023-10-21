#include<iostream>
using namespace std;

class Student{
	
	private :
		int studid;
		string name;
		int m1,m2,m3,total;
		float percentage;
	
	public :
		Student();
		Student(int id,string nm,int a,int b,int c);
		
		void CalculateTotalMarks();
		
		void Percentage();
	
};
