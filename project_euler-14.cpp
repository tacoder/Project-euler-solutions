/*
 * The following iterative sequence is defined for the set of positive integers:
 * n --> n/2 (n is even)
 * n --> 3n + 1 (n is odd)
 * Using the rule above and starting with 13, we generate the following sequence:
 * 13 --> 40 --> 20 --> 10 --> 5 --> 16 --> 8 --> 4 --> 2 --> 1
 * It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
 * Which starting number, under one million, produces the longest chain?
 * NOTE: Once the chain starts the terms are allowed to go above one million.
 */

#include<iostream>
#define UPPER_LIMIT 1000000
using namespace std;
int lengthCollatz(unsigned int num)
{
	int count=0;
	while(num!=1){
		count++;
		if(num%2==0)
			num/=2;
		else
			num=num*3+1;
	}
	return count+1;
}
int main()
{
unsigned int i=UPPER_LIMIT;
int max_chain=0;
while(i>1){
	int length=lengthCollatz(i);
	//cout<<"Num:"<<i<<":Len"<<length<<endl;	
	if(length>max_chain)
		{cout<<i<<endl;max_chain=length;}
	i--;
}
cout<<max_chain;

//cout<<lengthCollatz(13);return 0;
}
