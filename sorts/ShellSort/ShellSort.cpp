#include"ShellSort.h"
#include<algorithm>
void ShellSort::insertionsort(vector<int>& list, int startPos, int increment)
{
	for (int i = startPos + increment; i < list.size(); i+=increment)
	{
		for (int j = i - increment; j >= startPos; j-= increment)
		{
			//cout << "pushing " << list[j+1] << endl;
			if (list[j + increment] < list[j])
			{
				int tmp = list[j + increment];
				list[j + increment] = list[j];
				list[j] = tmp;
			}
			else
			{
				cout << "break" << endl;
				break; // already in order
			}
		}
	}
}

void ShellSort::sort(vector<int>& list)
{
	int increment = list.size() / 2;
	
	while (increment > 0)
	{
		for (int i = 0; i < list.size(); i += increment)
		{
			insertionsort(list, i, increment);

			display(list);
		}
		increment /= 2;
	}
}


void ShellSort::display(const vector<int>& list)
{
	for (vector<int>::const_iterator iter = list.begin(); iter != list.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
}
