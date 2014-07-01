/*
 * 
 * http://projecteuler.net/problem=15
 * Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
 * http://projecteuler.net/project/images/p_015.gif
 * How many such routes are there through a 20×20 grid?
 */

#include<iostream>
#define GRID_SIZE 20
using namespace std;
//The following function takes too much time for 20x20 matrix
/*
int grid(int x=0, int y=0)
{
if(x==GRID_SIZE && y==GRID_SIZE)
	return 1;
else if(x>GRID_SIZE || y>GRID_SIZE)
	return 0;
else
	return grid(x+1,y)+grid(x,y+1);

}
*/
//Alternate function
int grid(int x, int y)
{
	if(x*y==0)
		return 1;
	else if(x*y==1)
		return 2;
	else 
		return grid(x-1,y)+grid(x,y-1);

}
int main()
{
cout<<grid(GRID_SIZE,GRID_SIZE);
return 0;
}
