#include<iostream>
using namespace std;
#include<vector>

class ShellSort
{
public :
	void sort(vector<int>& list);
	void insertionsort(vector<int>& list, int startPos, int increment);
	void display(const vector<int>& list);
};