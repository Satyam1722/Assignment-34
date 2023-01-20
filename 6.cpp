#include<iostream>
#include<fstream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
   ifstream fin;
   char c;
   int countc=0,countw=0,countl=0;
   try
   {
    fin.open("file.txt");
     if(fin)
     puts("file created successfulty");
     else
     throw 0;
   }
   catch(int a)
   {
     printf("file unable to create %d",a);
   }
   
   string s;
   while(!fin.eof()){
      fin>>s;
      countw++;
      int i=0;
      while(s[i++])
      {
        countc++;
      }
   }

   fin.seekg(0,ios::beg);
   
while(!fin.eof())
   {
    getline(fin,s);
    countl++;
   }

   puts("Number of characters are : ");
   cout<<countc<<endl;
   puts("Number of words are : ");
   cout<<countw<<endl;
   puts("Number of line are : ");
   cout<<countl<<endl;
   fin.close();
   return 0;
   


}