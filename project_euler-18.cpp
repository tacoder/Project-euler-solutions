/*question
 * 
 * Maximum path sum I
 * Problem 18
 * 
 * By starting at the top of the triangle below and moving to adjacent numbers on the row below, the maximum total from top to bottom is 23.
 * 
 * 3
 * 7 4
 * 2 4 6
 * 8 5 9 3
 * 
 * That is, 3 + 7 + 4 + 9 = 23.
 * 
 * Find the maximum total from top to bottom of the triangle below:
 * 
 * 75
 * 95 64
 * 17 47 82
 * 18 35 87 10
 * 20 04 82 47 65
 * 19 01 23 75 03 34
 * 88 02 77 73 07 63 67
 * 99 65 04 28 06 16 70 92
 * 41 41 26 56 83 40 80 70 33
 * 41 48 72 33 47 32 37 16 94 29
 * 53 71 44 65 25 43 91 52 97 51 14
 * 70 11 33 28 77 73 17 78 39 68 17 57
 * 91 71 52 38 17 14 91 43 58 50 27 29 48
 * 63 66 04 68 89 53 67 30 73 16 69 87 40 31
 * 04 62 98 27 23 09 70 98 73 93 38 53 60 04 23
 * 
 * NOTE: As there are only 16384 routes, it is possible to solve this problem by trying every route. However, Problem 67, is the same challenge with a triangle containing one-hundred rows; it cannot be solved by brute force, and requires a clever method! ;o)
 * 
 */
 
/*
 * data structure is like
 *  null.
 *  ^
 *  A  -> v1 ->null.
 *  ^  
 *  B  -> v1 -> v2 -> null.
 *  ^
 *  start 
 */
// Analyse the tree as its formed. print it out to see what the fuck went on there
#include<iostream>
#include<fstream>
#define TREE_SIZE 5
using namespace std;
/* 
class list{
		int data;
		list *next;
	public:
		void setData(int i) {data=i;}
		void setNext(list *nxt) {next=nxt;}
		int getData() {return data;}
		list* getNext() {return next;}
};

class level{
		list* begin;
		//list *end;  // We don't need to reverse the order of list, the answer will be the same either way
		level* next;
	public:
		level() 	{next=NULL;begin=NULL;}
		void push(list *toPush)
		{
			toPush->setNext(begin);
			begin=toPush;
		}
		void pushInt(int i)
		{
			list *temp;
			temp=new list;
			temp->setData(i);
			push(temp);
		}
};

class tree{
		level *begin;
		void insertNode(level* toInsert)
		{
		toInsert->next=begin;
		begin=toInsert;
		}
	public:
		tree()
			{begin=NULL;}
		
		level* getFirstNode()
			{return begin;}
				
		void newNode()
		{
			level *temp;
			temp=new level;
			insertNode(temp);
		}
		
		void push(int i)
		{
			begin->pushInt(i);
		}
}; */
class node{
	int data;
	node *next;
	// node *left;
	// node *right;
	public:
	void setData(int toSet) {data=toSet;}
	void setNext(node *toSet) {next=toSet;}
	int getData() {return data;}
	node* getNext() {return next;}
};

class level{
		level *next;
		node *list;
	public:
		level() { next=NULL; list=NULL; }
		void setNext(level* toSet)
		{
		next=toSet;
		}
		node* getCurrentLevel(){return list;}
		level* getNextLevel(){return next;}
		void push(int toPush)
		{
		node *temp;
		temp=new node;
		temp->setData(toPush);
		insertNode(temp);
		}
		void insertNode(node *toInsert)
		{
		toInsert->setNext(list);
		list=toInsert;
		}
};	

class tree{
		level* first;
	public:
		tree()	{first=NULL;}
		
		void newLevel()
		{
			level *temp;
			temp=new level;
			temp->setNext(first);
			first=temp;
		}
		
		level* getFirstLevel()	{return first;}
		
		void push(int toPush)
		{
		first->push(toPush);
		}
}tree1;

int main()
{
	ifstream fin("project_euler-18.txt");
	if(!fin.good())
		{cout<<"File error!";return -1;}
	int n=1,tmp;
	while(fin.good())
	{	
		
		for(int i=0;i<TREE_SIZE;i++)
		{
			tree1.newLevel();
			for(int j=0;j<i;j++)
				{
				if(!fin.good()) {cout<<"BREAK!";break;}
				fin>>tmp;
				tree1.push(tmp);
				}
		}
	}
	//tree1.link(); // no need for that!
	level *higher,*lower;
	node *top,*bLeft,*bRight;
	lower=tree1.getFirstLevel();
	higher=lower->getNextLevel();
	for(int i=0;i<TREE_SIZE;i++)
		{
			if(i!=0)
			{lower=higher; higher=lower->getNextLevel();}
			top=higher->getCurrentLevel();
			bLeft=lower->getCurrentLevel();
			bRight=bLeft->getNext();
			
			for(int j=0;j<i;j++)
				{
				int t,bl,br;
				t=top->getData();
				bl=bLeft->getData();
				br=bRight->getData();
				cout<<"Triangle(t,bl,br)"<<t<<":"<<bl<<":"<<br<<endl;
				t=bl>br?bl:br;
				cout<<"Triangle(t,bl,br)"<<t<<":"<<bl<<":"<<br<<endl;
				top->setData(t);
				}
		}
	return 0;
}
