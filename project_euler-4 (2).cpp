/*
 * A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */
//There's room for iprovement in  here, the loops need to be optimized. no need to look for palindromes less that the grreatest palindrome found uptill then
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

string convertInt(int number)   //converts integers to string. 
{
   stringstream ss;//create a stringstream
   ss << number;//add number to the stream
   return ss.str();//return a string with the contents of the stream
}

bool isPalindrome(string str){  // checks whether string is palindrome or not
	bool flag=true;
	for(int i=0,l=str.length();i<l;i++)
		if(str[i]!=str[l-i-1])
			flag=false;
	return flag;
}

int main()
{
int i,j,palin=0;
for(i=999;i>99;i--){
    for(j=999;j>99;j--)
        {
	int num=i*j;
	if(num<palin)
	break;
        if(isPalindrome(convertInt(num)))
          {cout<<"True:"<<i<<" : "<<j<<" : "<<num<<endl;if(palin<num)palin=num;}
	}}
cout<<"palin="<<palin;

return 0;
}
