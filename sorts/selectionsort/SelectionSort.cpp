#include"SelectionSort.h"

void SelectionSort::sort(vector<int>& list)
{
	for (vector<int>::iterator iter = list.begin(); (iter + 1) != list.end(); iter++)
	{
		for (vector<int>::iterator iter1 = iter + 1; iter1 != list.end(); iter1++)
		{
			if (*iter > *iter1)
			{
				int tmp = *iter1;
				*iter1 = *iter;
				*iter = tmp;
			}
		}
	}
}


void SelectionSort::display(const vector<int>& list)
{
	for (vector<int>::const_iterator iter = list.begin(); iter != list.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
}
