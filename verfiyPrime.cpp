

#include <iostream>

using namespace std;
 
 bool verifyPrime(int num)
{ 
bool flag=true; 
   if(num==0 || num==1){
     flag = false;
   }else{
for(int i = 2; i <= num/2; i++) {
 if(num % i == 0)
 {
 flag = false; 
break;
 }
 }}
 return flag; 
}

int main()
{
    int a,i,j,n,flag;
    cin>>a;
    j=verifyPrime(a);
    if(j=1){
     cout<<"PRIME";   
    }
    else{
        cout<<"NOT PRIME";
    }

    return 0;
}

