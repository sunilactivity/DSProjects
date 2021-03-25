#include"InsertionSort.h"

void InsertionSort::sort(vector<int>& list)
{
	for (int i = 1; i < list.size(); i++)
	{	
		for (int j = i-1; j>= 0; j--)
		{
			//cout << "pushing " << list[j+1] << endl;
			if (list[j+1] < list[j])
			{
				int tmp = list[j+1];
				list[j+1] = list[j];
				list[j] = tmp;			
			}
			else
			{
				cout << "in order" <<j<<":"<<j+1<< endl;
				break; // already in order
			}
			
		}
		display(list);
	}
}

void InsertionSort::sort1(vector<int>& list)
{

	for (int i = 0; i < list.size() - 1; i++)
	{
		for (int j = i + 1; j > 0; j--)
		{
			//cout << "pushing " << list[j+1] << endl;
			if (list[j] < list[j - 1])
			{
				int tmp = list[j - 1];
				list[j - 1] = list[j];
				list[j] = tmp;
			}
			else
			{
				cout << "in order" << j << ":" << j + 1 << endl;
				break; // already in order
			}

		}
		display(list);
	}
}

void InsertionSort::display(const vector<int>& list)
{
	for (vector<int>::const_iterator iter = list.begin(); iter != list.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
}
