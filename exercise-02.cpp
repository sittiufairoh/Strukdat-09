/*
Program		: exercise-02
Nama		: Sitti Ufairoh Azzahra
NPM			: 140810180002
Deskripsi	: reversing a word, pop each character from stack linkedlist
Tanggal		: 6 Mei 2019
*/

#include <iostream>
using namespace std;

struct stackList{
	char isi;
	stackList* next;
};
typedef stackList* pointer;
typedef pointer Stack;

void createStack (Stack& Top){
	Top=NULL;
}

void createElmnt(pointer& pBaru){
	pBaru=new stackList;
	cout << "Huruf: "; cin >> pBaru->isi;
	pBaru->next=NULL;
}

void push (Stack& Top, pointer& pBaru){
	if (Top==NULL) 
		Top=pBaru;
	else{
		pBaru->next=Top;
		Top=pBaru;
	}
}

void reverse(Stack Top){
	pointer pBantu=Top;
	if (Top==NULL) 
		cout << "Stack kosong" << endl;
	else{
		while (pBantu!=NULL){
			cout << pBantu->isi;
			pBantu=pBantu->next;
		}
	}
}

void output(Stack Top){
	pointer pBottom;
	pointer pPrecBottom;
	if (Top==NULL) 
		cout << "Stack Kosong" << endl;
	else{
		while (pBottom!=NULL){
			pBottom=Top;
			pPrecBottom=NULL;
			while (pBottom->next!=NULL){
				pPrecBottom=pBottom;
				pBottom=pBottom->next;
			}
			cout << pBottom->isi;
			if (pPrecBottom!=NULL) 
				pPrecBottom->next=NULL;
			else break;
		}
	}
}

int main(){
	Stack S;
	int n;
	pointer p;
	
	createStack(S);
	cout << "Jumlah Huruf yang menyusun: "; cin >> n;
	
	for (int i=0; i<n; i++){
		createElmnt(p);
		push(S,p);
	}
	cout << "\nReversing A word: ";
	reverse(S);
	cout << "\nA Word: ";
	output(S);
	
	
}
