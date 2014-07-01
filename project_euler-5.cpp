/*
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 */
//There's room for iprovement in  here, the loops need to be optimized. no need to look for palindromes less that the grreatest palindrome found uptill then
#include<iostream>
#include<string>
#include<sstream>
#define MAX 20
using namespace std;

bool isDivisible(int x)
{
bool flag=true;
	for(int i=1;i<=MAX;i++)
	{if(x%i!=0)flag=false;}
return flag;
}

int main()
{
int i=2520;
while(true)

{

	if(isDivisible(i))
		{cout<<i<<endl;break;}
	
	i+=10;

}

return 0;
}
