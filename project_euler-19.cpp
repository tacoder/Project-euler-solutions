/*question
 *  You are given the following information, but you may prefer to do some research for yourself.
 *  
 *      1 Jan 1900 was a Monday.
 *      Thirty days has September,
 *      April, June and November.
 *      All the rest have thirty-one,
 *      Saving February alone,
 *      Which has twenty-eight, rain or shine.
 *      And on leap years, twenty-nine.
 *      A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.
 *  
 *  How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?
 *  
 */
 

#include<iostream>
#include<fstream>
using namespace std;
enum{JAN=0,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};
int noOfDays(int month,int year)
{
	if(month==FEB)
	if(year%4==0)
		return 29;
	else return 28;
	
	switch(month)
	{
		case SEP:
		case APR:
		case JUN:
		case NOV:return 30;
			break;
		default:return 31;
	}

}
int main()
{
	int curFirstDay=2,curYear=1901,count=0;
	//sun=0,mon=1,...,sat=6
	
	for(int i=1901;i<=2000;i++)
	{	//int i=1901;
		if(i==1999)
		cout<<"breakpoint!!";
		for(int j=0;j<12;j++)
		{//cout<<curFirstDay<<" "<<j<<" "<<i<<endl;
			if(curFirstDay==0)
				{/*cout<<curFirstDay<<" "<<j<<" "<<i<<endl;//*/count++;}
			curFirstDay=(curFirstDay+noOfDays(j,i))%7;
			
		}
	//cout<<curFirstDay<<" "<<i+1<<endl;
	}
	if(curFirstDay==0)
				count++;
	cout<<count;
	/* for(int i=0;i<12;i++)
	cout<<i<<" "<<noOfDays(i,2000)<<endl;
	/* cout<<JAN<<" "<<FEB<<" "<<MAR<<" "<<APR<<" "<<MAY<<" "<<JUN<<" "<<JUL<<" "<<SEP<<" "<<OCT<<" "<<NOV<<" "<<DEC; */ 
	return 0;
}
