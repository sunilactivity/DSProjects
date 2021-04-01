#include "MergeSort.h"

int MergeSort::counter = 0;
MergeSort::MergeSort()
{
	
}

MergeSort::~MergeSort()
{
}


void MergeSort::sort(vector<int>& list)
{
	splitAndSort(list, 0, list.size() -1);
}


void MergeSort::display(const vector<int>& list)
{

	for (vector<int>::const_iterator iter = list.begin(); iter != list.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
}


void MergeSort::splitAndSort(vector<int>& list, int nStartPos, int nEndPos)
{
   
	int tempCounter = counter++;
	//cout << "Enter split and sort " <<nStartPos<<" "<<nEndPos<< endl;
	//cout << "ID : " << tempCounter << endl;
	int nTotalLength = nEndPos - nStartPos + 1;
	
	if (nTotalLength == 2)
	{
		//cout << "splited to " << nStartPos << "-" << nStartPos << " and " << nEndPos << "-" << nEndPos << endl;
		merge(list, nStartPos, nStartPos, nEndPos, nEndPos);
	}
	if (nTotalLength > 2)
	{
		
		int nMedian = nTotalLength / 2;
		
		//cout << "splited to " << nStartPos << "-" << nStartPos + nMedian -1 << " and "<< nStartPos + nMedian << "-" << nEndPos <<endl;

		splitAndSort(list, nStartPos, nStartPos + nMedian - 1);
		splitAndSort(list, nStartPos + nMedian, nEndPos);
		//cout << "ID: " << tempCounter << "Merge... " << endl;
		merge(list, nStartPos, nStartPos + nMedian - 1, nStartPos + nMedian, nEndPos);
		//cout << "ID: " << tempCounter << "Done merging... " << endl;
	}
}

void MergeSort::merge1(vector<int>& list, int s1, int e1, int s2, int e2)
{

}
void MergeSort::merge(vector<int>& list, int s1, int e1, int s2, int e2)
{
	//cout << "Merging..." <<s1<<"-"<<e1<<" and "<<s2<<"-"<<e2<< endl;
	
	//displayInRange(list, s1, e2);

	int i = s1;
	int j = s2;
	vector<int> tmp;
	while (i <= e1 && j <= e2)
	{
		if (list[i] < list[j])
		{
			tmp.push_back(list[i]);
			i++;
		}
		else
		{
			tmp.push_back(list[j]);
			j++;
		}
	}
	while (i <= e1)
	{
		tmp.push_back(list[i]);
		i++;
	}
	while (j <= e2)
	{
		tmp.push_back(list[j]);
		j++;
	}
	
	
	//display(tmp);

	vector<int>::iterator iter1 = list.begin() + s1;
	vector<int>::iterator iter2 = list.begin() + e2;
	vector<int>::iterator iterRet = list.erase(iter1, iter2 + 1);

	list.insert(iterRet, tmp.begin(), tmp.end());

	//cout << "After Merge" << endl;

	//displayInRange(list, s1, e2);
}


void MergeSort::displayInRange(vector<int>& list, int nStart, int nEnd)
{
	for (int i = nStart; i <= nEnd; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;
}
