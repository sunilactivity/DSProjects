#pragma once
#include<iostream>
using namespace std;
#include<vector>

class MergeSort
{
	static int counter;
public:
	MergeSort();
	~MergeSort();
	void sort(vector<int>& list);
	void display(const vector<int>& list);
	void splitAndSort(vector<int>& list, int nStartPos, int nEndPos);
	void merge(vector<int>& list, int s1, int e1, int s2, int e2);
	void merge1(vector<int>& list, int s1, int e1, int s2, int e2);
	void displayInRange(vector<int>& list, int nStart, int nEnd);
};

