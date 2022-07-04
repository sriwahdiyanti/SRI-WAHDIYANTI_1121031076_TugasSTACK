//1121031076
//Sri Wahdiyanti

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>

using namespace std;

int maks,top,pil,karakter,i;

int top2;

char elemen,aa,bb;

char stack[20];

char infiks[20];

char postfiks[20];

char stack2[10];

char hasil[20];

void delay();

COORD coord = {0,0};
void gotoxy(int x, int y){
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);}

void create(int x) {
top = 0;

gotoxy(50,3); printf(" ");
for(i=0;i<100;i++){
    gotoxy(59,4+i);printf(" ");
}
if(x<=20){
    for(i=0;i<=x;i++){
        if(i==x){
            gotoxy(60,4+i);printf("-");
        }
        else{
            gotoxy(59,4+i);printf("| |");
        }
    }
}
}


void push(char aa){

gotoxy(50,2);printf(" ");

if(top == maks){

gotoxy(53,2);printf("—-OVERFLOW—-");

}

else{

stack[top]=aa;

for(i=0;i<11;i++){

gotoxy(50+i,3);cout<<" ";

gotoxy(51+i,3);cout<<aa;

delay();

}

for(i=0;i<(maks-top);i++){

gotoxy(61,3+i);cout<<" ";

gotoxy(61,4+i);cout<<aa;

delay();

}

top = top + 1;

}

}

void pop(){

gotoxy(50,2);printf(" ");

if(top == 0){

gotoxy(53,2);printf("—-UNDERFLOW—-");

}

else{

bb = stack[top-1];
for(i=(maks-(top-1));i>0;i) {
    gotoxy(61,3+i);cout<<" ";
    gotoxy(61,2+i);cout<<bb;
    delay();
}


for(i=10;i<21;i++){

gotoxy(50+i,3);cout<<" ";

gotoxy(51+i,3);cout<<bb;

delay();

}

gotoxy(71,3);printf(" ");
top = top - 1;

}

}
int main(){
maks = 0;
top = 0;

do{

gotoxy(3,1);printf("====================================");

gotoxy(3,2);printf("PROGRAM STACK 2IA01");

gotoxy(3,3);printf("====================================");

gotoxy(4,4);printf("1 : BUAT STACK BARU (CREATE)");

gotoxy(4,5);printf("2 : TAMBAH ELEMEN (PUSH)");

gotoxy(4,6);printf("3 : HAPUS ELEMEN (POP)");

gotoxy(4,7);printf("4 : KELUAR");

gotoxy(3,9);printf("====================================");

for(i=10;i<20;i++){

gotoxy(3,i);printf(" ");

}

gotoxy(3,10);printf("Masukan pilihan : ");cin>>pil;

switch(pil){

case 1:{

gotoxy(3,12);printf("Masukan kapasitas stack (maksimal 20) : ");cin>>maks;

create(maks);
break;


}

case 2:{

if(maks==0){

gotoxy(3,12);printf("Stack belum dibuat.Create stack terlebih dahulu");

getch();

}

else{

gotoxy(3,12);printf("masukan satu karakter : ");cin>>elemen;

push(elemen);

}

break;

}

case 3:{

if(maks==0){

gotoxy(3,12);printf("masukan satu karakter : ");

getch();

}

else{

pop();

}
break;

}

}

}

while(pil!=4);

}


void delay()

{

for(int y=1;y<100;y++)

for(int x=1;x<100;x++)

for(int p=1;p<30;p++)

cout<<" ";

}
