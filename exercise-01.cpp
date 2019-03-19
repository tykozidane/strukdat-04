/*
Nama	: Tyko Zidane Badhawi
NPM		: 140810180031
Kelas	: A
Program	: Data Pegawai
*/
#include<iostream>
using namespace std;

struct Elementlist{
	char nama[50];
	char bidang[20];
	int gaji;
	Elementlist* next;
};
typedef Elementlist* pointer;
typedef pointer List;
void createList (List& First)
{
	First = NULL;
}
void createElemt (pointer& pBaru)
{
	pBaru=new Elementlist;
	cin.ignore();
	cout << "Nama	: "; cin.getline(pBaru->nama, 50);
	cout << "Bidang	: " ; cin >> pBaru->bidang;
	cout << "Gaji	: " ; cin >> pBaru->gaji;
	pBaru->next=NULL;
}
void insertFirst (List& First, pointer pBaru)
{
	if(First=NULL)
	First=pBaru;
	else{
		pBaru->next=First;
		First=pBaru;
	}
}
void insertLast (List& First, pointer pBaru)
{
	pointer last;
    if(First==NULL){
        First=pBaru;
    }
    else{
        last=First;
        while(last->next!=NULL){
            last=last->next;
    }
    last->next=pBaru;
    }
}
void tranversal (List First)
{
	pointer pBantu;
	
	if (First=NULL)
	{
		cout << "List Kosong\n";
	}
	else{
		pBantu=First;
		 do{
   cout << "Nama  : "<<pBantu->nama<<endl;
   cout << "Bidang  : "<<pBantu->bidang<<endl;
   cout << "Gaji  : "<<pBantu->gaji<<endl<<endl;
   pBantu = pBantu->next;}
   while(pBantu != NULL);{
   cout << endl;
  }
	}
}
void deleteFirst(List& First, pointer& pHapus){
    if (First==NULL){
        pHapus=NULL;
        cout << "List kosong, tidak ada yang dihapus"<<endl;
    }
    else if(First->next==NULL){
        pHapus=First;
        First=NULL;
    }
    else{
        pHapus=First;
        First=First->next;
        pHapus->next=NULL;
    }
	cout << "info yang dihapus	: " << pHapus->nama<< endl;
}
void deleteLast(List& First, pointer& pHapus){
    pointer last,precLast;
    
    if (First==NULL){
        pHapus=NULL;
        cout << "List Kosong, tidak ada yang dihapus"<<endl;
    }
    else if(First->next==NULL){
        pHapus=First;
        First=NULL;
    }
    else{
        last=First;
        precLast=NULL;
        while(last->next !=NULL){
            precLast=last;
            last=last->next;
        }
        pHapus=last;
        precLast->next=NULL;
    }
    cout << "info yang dihapus	: " << pHapus->nama<< endl;
}

int main(){
	pointer p;
	List pgw;
	int pil;
	createList(pgw);
	do{
		cout << "======MENU======\n";
		cout << "1. Insert First" << endl;
		cout << "2. Insert Last" << endl;
		cout << "3. Delete First " << endl;
		cout << "4. Delete Last " << endl;
		cout << "5. Tranversal " << endl;
		cout << "6. Exit " << endl;
		cin >> pil;
		switch (pil){
			case 1 :
				createElemt(p);
				insertFirst(pgw, p);
				break;
			case 2 :
				createElemt(p);
				insertLast(pgw, p);
				break;
			case 3 :
				deleteFirst(pgw, p);
				break;
			case 4 : 
				deleteLast(pgw, p);
				break;
			case 5 :
				tranversal(pgw);
				break;
			case 6 :
				return 0;
		}
	}while(1);
}
