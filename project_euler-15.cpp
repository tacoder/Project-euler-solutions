/*
 * Lattice paths
 * Problem 15
 * 
 * Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
 * http://projecteuler.net/project/images/p_015.gif
 * How many such routes are there through a 20×20 grid?
 * 
 */
#include<iostream>
#define GRID_SIZE 5
#define GRID_TRIM 0  //grid trimmed by value
//define SGRID GRID_TRIM+1 //Smallest square size
#define SGRID_VAL 1   //the smallest square's value
using namespace std;

int grid(int x=0, int y=0)
{
	if(x>GRID_SIZE-GRID_TRIM||y>GRID_SIZE-GRID_TRIM)
		return 0;
	else if(x==y&&x==GRID_SIZE-GRID_TRIM)
		return SGRID_VAL; 
	else
		return grid(x+1,y)+grid(x,y+1);
}

int main()
{
	cout<<grid();
	return 0;
}
