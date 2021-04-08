#include <iostream>
#include <string>
#include "MyArray.hpp"
using namespace std;

void printIntArr(MyArray<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr[i] << endl;
	}
}

class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void printPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr[i].m_Name << " " << arr[i].m_Age << endl;
	}
}

void test1()
{
	MyArray<int> arr1(5);
	for (int i = 0; i < 5; i++) {
		arr1.Push_Back(i);
	}
	arr1.Pop_Back();
	printIntArr(arr1);
	cout << arr1.getSize() << endl;
	cout << arr1.getCapacity() << endl;
}

void test2()
{
	MyArray<Person> arr(5);
	Person p1("tom", 18);
	Person p2("jerry", 16);
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	printPersonArray(arr);
	cout << arr.getSize() << endl;
	cout << arr.getCapacity() << endl;
}

int main()
{
	//test1();
	test2();
	return 0;
}