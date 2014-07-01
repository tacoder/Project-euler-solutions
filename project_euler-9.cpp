/*
 * A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
 * a^2 + b^2 = c^2
 * For example, 32 + 42 = 9 + 16 = 25 = 52.
 *
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
 */
#include<iostream>
using namespace std;
/*
int max(int a,int b, int c){  // returns the max integer from the 3 int arguments
	if(a>=b&&a>=c)
		return a;
	else if (b>=a&&b>=c)
		return b; 
	else if (c>=a&&c>=b)
		return c;
}
*/

//we need a modified version of the above. we need to know which one of the 3 variables is the largest.
int max(int a,int b, int c){  // returns the max integer from the 3 int arguments
	if(a>=b&&a>=c)
		return 1;
	else if (b>=a&&b>=c)
		return 2; 
	else if (c>=a&&c>=b)
		return 3;
}

bool isTriplet(int a, int b, int c){
	switch(max(a,b,c)){
			case 1: if((a*a)==(b*b)+(c*c)) return true;	else return false;
				break;
			case 2: if((b*b)==(a*a)+(c*c)) return true;	else return false;
				break;
			case 3: if((c*c)==(b*b)+(a*a)) return true;	else return false;
				break;
			
		}
}

int main()
{
for(int a=1;a<999;a++)
	for(int b=1;b<1000-a;b++)
		{int c=1000-a-b;
		//if a<500, a!=largest
			//if b<1000-a b!=largest
				//c=largest
			//else 
				//b = largest
		//else
			//a=largest
		if(isTriplet(a,b,c))
		
		cout<<a<<" "<<b<<" "<<c<<endl;
			
		
		}
return 0;
}
