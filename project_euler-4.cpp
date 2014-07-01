//cd C:\\Users\\ghanshyam\ singh\\Documents\\codechef\\c-c++
/*
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 */
#include<iostream>
using namespace std;
unsigned long long j=600851475143ULL;
bool isprime(unsigned long long int var){
	if(var==1||var==0) return false;
    if(var==2) return true;
	if(var%2==0) return false;
	for(unsigned long long int i=3;i<var-1;i+=2)
		if(var%i==0)
			{/*cout<<"Divisible by:"<<i<<endl;*/return false;}
	return true;
}
int main()
{
/*
for(unsigned long long i=j-1; i>1;i--){
	{/*cout<<"iteration with"<<i<<endl;* / 
		if(j%i==0)
		{cout<<"FACTOR FOUND!"<<i<<endl;
			if(isprime(i))
			{cout<<"ITS PRIME!";break;}
		}
	}

}
*/


if(isprime(71          )) cout<<"1";
if(isprime(839         )) cout<<"2";
if(isprime(1471        )) cout<<"3";
if(isprime(6857        )) cout<<"4";
if(isprime(59569       )) cout<<"5";
if(isprime(104441      )) cout<<"6";
if(isprime(486847      )) cout<<"7";
if(isprime(1234169     )) cout<<"8";
if(isprime(5753023     )) cout<<"9";
if(isprime(10086647    )) cout<<"10";
if(isprime(87625999    )) cout<<"11";
if(isprime(408464633   )) cout<<"12";
if(isprime(716151937   )) cout<<"13";
if(isprime(8462696833ULL  )) cout<<"14";

return 0;
}
