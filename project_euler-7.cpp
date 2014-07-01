/*
 *By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 *What is the 10001st prime number?
 */

#include<iostream>
#include<string>
#include<sstream>
#define MAX 1000000
#define LIM 10001
using namespace std;

int main()
{
bool sieve[MAX]={true};
for(int i=2;i<MAX;i++)
sieve[i]=true;
//for(int i=2;i<MAX;i++)
//if(sieve[i]==true);


//sieve of erasthonesis implementation
//sieve[0]=sieve[1]=false;
for(int i=2;i<=MAX/2;i++)
for(int j=2;j<=MAX/i;j++)
if(i*j<MAX)
sieve[i*j]=false;
else
cout<<"you fucking broke it i="<<i<<" j="<<j<<endl;
//sieve formed,
int count=0;

for(int i=2;i<MAX;i++)
if(sieve[i]==true)
{
count++;
cout<<"prime:"<<i<<" count:"<<count<<endl;

if(count==10001)
{cout<<"found:"<<i;return 0;}

}
return 0;
}
