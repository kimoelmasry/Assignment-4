#include <iostream>
#include <vector>
using namespace std;

void Store(int n, int *arr, vector<int> &V)
{
	
	int j = 0;
	for (size_t i = 0; i < n; i++)
	{
		V.push_back(arr[j]);
		j++;

	}

}

void insertAfter(int firstvalue, int secondvalue, vector<int> V)
{
	
	vector <int>::iterator i;
	for ( i = V.begin(); i!=V.end(); i++)
	{
		if (*i == firstvalue)
		{
			V.insert(i+1, secondvalue);

		}

	
	}


}

void CreateList();


int main()
{
	
	vector <int> Vec;
	int n;
	cout << "Enter how many numbers you will input" << endl;
	cin >> n;
	
	int* ar = new int[n];
	int i = 0;
	while (i < n)
	{
		cin >> ar[i];
		i++;
	}
	Store(n, ar, Vec);
	cout << endl;
	
	
	for (size_t i = 0; i < Vec.size(); i++)
	{
		cout << Vec.at(i)<<endl;

	}
	int num1 = 0;
	int num2 = 0;

	cout << endl << "Enter the first number then the second number";
	cin >> num1;
	cin >> num2;
	

	insertAfter(num1, num2, Vec);

	for (size_t i = 0; i < Vec.size(); i++)
	{
		cout << Vec.at(i)<<endl;

	}
}

