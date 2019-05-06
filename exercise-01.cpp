/*
Program		: exercise-01
Nama		: Sitti Ufairoh Azzahra
NPM			: 140810180002
Deskripsi	: reversing a word, push each character to a stack array
Tanggal		: 6 Mei 2019
*/

#include <iostream>
using namespace std;

const int maxE=225;

struct Stack{
	int Top;
	char isi[maxE];
	
};

Stack S;

void createStack (Stack& S){
	S.Top=-1;
}

void push(Stack& S, char newElm){
	if (S.Top == maxE-1) 
		cout << "Stack Penuh" << endl;
	else{
		S.Top=S.Top+1;
		S.isi[S.Top]=newElm;
	}
}

void output(Stack S){
	for (int i=0; i<=S.Top; i++){
		cout << S.isi[i];
	}
}

void Reverse(Stack S){
	for (int i=S.Top; i>=0; i--){
		cout << S.isi[i];
	}
}

int main(int argc, char** argv) 
{
	Stack S;
	int n;
	char newElm;
	
	createStack(S);
	cout << "Jumlah Huruf yang menyusun: "; cin >> n;
	
	for (int i=0; i<n; i++){
		cout << "Huruf " << i+1 << ": "; cin >> newElm;
		push(S,newElm);
	}
	cout << "\nA Word: ";
	output(S);
	cout << "\nReversing a word: ";
	Reverse(S);
}
