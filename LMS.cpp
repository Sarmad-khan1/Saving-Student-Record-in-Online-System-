#include <iostream>
using namespace std;
int main()
{
	int size;
	cout << "Number of Students: ";
	cin >> size;
	string students[size];
	int rolls[size];
	float marks[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Student Name: ";
		cin >> students[i];

		cout << "Enter student Roll Number: ";
		cin >> rolls[i];
		cout << "Enter Student Marks: ";
		cin >> marks[i];
	}
	cout << "Name" << "\t" << "Roll Number" << "\t" << "CGPA"<< endl;
	for (int i = 0; i < size; i++)
	{
		cout << students[i] << "\t" << rolls[i] << "\t"<<"\t"<< marks[i]<<endl;
	}
}