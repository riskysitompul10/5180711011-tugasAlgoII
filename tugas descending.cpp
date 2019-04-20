
#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main (){
int i,j, b, k, m, n,x,z,ketemu=0;
int data[ÔnÕ], temp[100];
cout<<Ò\n======================\nÓ<<endl;
cout<<Ò\nÑ-BELAJAR SORTINGÑ\nÓ;
cout<<Ò\n======================\nÓ<<endl;
cout<<ÒInputkan Banyak Data: Ò;
cin>>n;
for(i=0; i<n; i++){
cout<<ÒData Ke-Ò<<i<<Ó : Ò;
cin>>data[i];
}

cout<<Ò\n\nÓ;
cout<<ÒData Sebelum diurutkanÓ<<endl;
for(int i=0; i<n; i++){
cout<<i+1<<Ò.Ó;
cout<<data[i]<<Ó Ò;
cout<<endl;
}

for (i=0; i<n; i++){
for (j=0; j<=i; j++)
{
if(data[i]<data[j])
{
m=data[i];
data[i]=data[j];
data[j]=m;
}
}
cout<<Ò\n#Ó<<i<<Ò: Ò;
for(k=0; k<=i; k++)
{
cout<<Ó Ò<<data[k];
}
}

cout<<Ò\n\nÓ;
cout<<Ò\nData Setelah Diurutkan (Ascending):Ó<<endl;
for(i=0; i<n; i++){
cout<<i+1<<Ó Ò;
cout<<data[i]<<Ó Ò<<endl;}

for (i=0; i<n; i++){
for (j=0; j<=i; j++)
{
if(data[i]>data[j])
{
m=data[i];
data[i]=data[j];
data[j]=m;
}
}
cout<<Ò\n#Ó<<i<<Ò: Ò;
for(k=0; k<=i; k++)
{
cout<<Ó Ò<<data[k];
}
}

cout<<Ò\n\nÓ;
cout<<Ò\nData Setelah Diurutkan (Descending):Ó<<endl;
for(i=0; i<n; i++){
cout<<i+1<<Ò.Ó;
cout<<data[i]<<Ó Ò<<endl;
}

getch();
}
