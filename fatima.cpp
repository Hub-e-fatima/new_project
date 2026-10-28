#include<iostream>
using namespace std;
int main()
{
	int n;
	int target; 
	int found=-1;
	cout << "Enter number of element in the array: ";
	cin >> n;
	int arr[n];
	cout << "Enter values of array: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "Enter target to find: ";
	cin >> target;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == target)
		{
			cout << "Eement found at index: " << i <<endl;
		}
		found=i;
	    break;
	}
	if(found != -1)
	{
		cout<<"element found successfull"<<endl;
	}
	else
	{
		cout<<"Element did not found" ;
	}
}
