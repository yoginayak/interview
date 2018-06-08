#include<iostream>
#include<string.h>
using namespace std;
class stud
{
	public:
		char name[30],usn[30];
		float cgpa;

	public:
		void display(){
			cout<<"Name is "<<name<<endl<<"usn is "<<usn<<endl<<"cgpa is "<<cgpa<<endl;
		}

		void input(){
			cout<<"Enter the name"<<endl;
			cin>>name;
			cout<<"Enter the usn"<<endl;
			cin>>usn;
			cout<<"Enter the cgpa"<<endl;
			cin>>cgpa;
		}
	
};
int main()
{
	int n;
	char usns[30];
	cout<<"Enter the total number of student";
	cin>>n;
	stud s[n];
	for (int i = 0; i < n; i++)
	{
		s[i].input();
	}
	
	cout<<"Enter the usn to search";
	cin>>usns;
	for (int i = 0; i < n; i++)
	{
		if (!strcmp(s[i].usn,usns))
		{
			s[i].display();
		}
	}

	return 0;
}