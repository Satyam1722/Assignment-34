#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;
int main()
{
   fstream fout;
   char c;
   int count=0;
   try
   {
    fout.open("file.txt");
     if(fout)
     puts("file created successfulty");
     else
     throw 0;
   }
   catch(int a)
   {
     printf("file unable to create %d",a);
   }
   
   while(!fout.eof()){
     fout>>c;
     count++;
   }

   cout<<count<<endl;
   fout.close();
   return 0;
   


}