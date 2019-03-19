#include<iostream>
using namespace std;

typedef struct data* pointer;
typedef struct data {
	int info;
	pointer next;
}data ;
int main()
{
	pointer p1, p2, p3;
	cout << "input	: \n";
	p1=new data;
	cout << "info p1	: ";
	cin >> p1->info;
	p1->next=p2;
	p2=new data;
	
	cout << "info p2	: ";
	cin >> p2->info;
	p2->next=p3;
	p3=new data;
	cout << "info p3	: ";
	cin >> p3->info;
	p3->next=NULL;
	
	cout << "\nOutput	: \n";
	cout << "info p1	: " << p1->info;
	cout << "\ninfo p2	: " << p2->info;
	cout << "\ninfo p3	: " << p3->info;
 } 
