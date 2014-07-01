#include <iostream>
#include <cmath>
#define start 286
using namespace std;

long long int triNo(int n) { return (n*(n+1))/2; }
long long int pentNo(int n) { return (n*(3*n-1))/2; }
long long int hexNo(int n) { return n*(2*n-1); }

bool isPerfectSquare(int num)
{
	int sq = sqrt(num);
	return ((sq * sq) == num);
}

bool isPent(int num) 
{
	int sq = ceil(sqrt(ceil((num*2)/3)));
	return ( ((sq*(3*sq-1))/2) == num);
}
bool isHex(int num) 
{
	int sq = ceil(sqrt(ceil(num/2)));
	return (sq*(2*sq-1) == num);
}

int main() {
	int num = start;
	while( (! ( isPent(triNo(num)) ) ) || (! (isHex(triNo(num))) ) )
		{num++;/*cout<<num<<endl;*/}
	cout<<num<<" : "<<triNo(num);
	/*if(isPent(triNo(285)))
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	
	if(isHex(triNo(285)))
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
		
	cout<<triNo(285)<<endl;
	cout<<pentNo(165)<<endl;
	cout<<hexNo(143);*/
	
}