#include<iostream>
#include<string>

using namespace std;

template<class T>
class MyGenericClass
{
	T value;
public:
	void setValue(T v)
	{
		this->value = v;
	}

	T getValue()
	{
		return this->value;
	}
};

void main()
{
	MyGenericClass<int>* myNum = new MyGenericClass<int>();
	myNum->setValue(1);
	cout << myNum->getValue() << endl;

	MyGenericClass<string>* myString = new MyGenericClass<string>();
	myString->setValue("rishabh");
	cout << myString->getValue() << endl;
}