#include"BubbleSort.h"

void BubbleSort::sort(vector<int>& list)
{
	for (vector<int>::reverse_iterator iter = list.rend() - 1; iter != list.rbegin(); iter--)
	{
		bool bSwapped = false;
		
		for (vector<int>::reverse_iterator iter1 = list.rbegin(); iter1 != iter; iter1++)
		{
			if (*(iter1 + 1) > *iter1)
			{
				int tmp = *iter1;
				*iter1 = *(iter1 + 1);
				*(iter1 + 1) = tmp;
				bSwapped = true;
			
				//display(list);
			}
			
		}
		//cout << "iteration..." << endl;
		display(list);
		if (bSwapped == false)
		{
			cout << "No Swap" << endl;
			break;
		}
		
	}
}


void BubbleSort::display(const vector<int>& list)
{
	for (vector<int>::const_iterator iter = list.begin(); iter != list.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
}
