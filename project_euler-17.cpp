/*question
 * 
 * Number letter counts
 * Problem 17
 * 
 * If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
 * If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?
 * 
 * NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters. The use of "and" when writing out numbers is in compliance with British usage.
 * 
 */
 
/*
1,2,3,4
wxyz
1-(z)define them
2-Y+defined
3-X+hundred(7)+and(3)+Y+Z
4-one thousand
and is subject to condition. 
 */
int tens(int num)
{
switch(num)
{
	case 5:
	case 4:
	case 6:return 5;
		break;
	case 2:
	case 3:
	case 8:
	case 9:return 6;
		break;
	case 7:return 7;
		break;
}
/*fifty
sixty
twenty
thirty
eighty
ninety
fourty
seventy
*/

}
int ones(int num)
{
if(num>19)
return tens(num/10)+ones(num%10);
switch(num){
	case 1:
	case 2:
	case 6:
	case 10:return 3;
		break;
	case 4:
	case 5:
	case 9:return 4;
		break;
	case 3:
	case 7:
	case 8:return 5;
		break;
	case 11:
	case 12:return 6;
		break;
	case 15:
	case 16:return 7;
		break;
	case 13:
	case 14:
	case 18:
	case 19:return 8;
		break;
	case 17:return 9 ;
		break;
	
	default: return 0;
		break;
	
	}

}

int length(int num)
{
if(num<100)
	return ones(num);
else if(num<1000)
	{
	if (num%100==0)
	return ones(num/100) + 7 + ones(num%100);
	else
	return ones(num/100) + 7 + 3 + ones(num%100);
	}
else if(num==1000)
	return 11;

}
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
/*cout<<"TESTING THE NEW FUCKIGN FUNTION"<<endl;
cout<<"  1:"<<length(  1)<<endl;
cout<<"115:"<<length(115)<<endl;
cout<<" 45:"<<length( 45)<<endl;
cout<<"100:"<<length(100)<<endl;
cout<<"112:"<<length(112)<<endl;
cout<<"181:"<<length(145)<<endl;
cout<<"1000:"<<length(1000)<<endl;
*/int sum=0;
for(int i=1;i<1001;i++)
sum+=length(i);
cout<<sum;

return 0;
}
