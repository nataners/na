#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int two(vector<vector<int>> two_vc)
{
	int de_two = (two_vc[0][0] * two_vc[1][1]) - (two_vc[0][1] * two_vc[1][0]);
	return de_two;
}




vector<vector<int>> copying(vector<vector<int>> main_vc, int n)
{
	vector<vector<int>> new_vc; 
	new_vc = main_vc;
	new_vc.erase(new_vc.begin());
	for (int i = 0; i < main_vc[0].size() - 1; i++)
	{
		new_vc[i].erase(new_vc[i].begin() + n);
	}
	return new_vc;
}

int deter(vector<vector<int>> all_vc)
{
	int count = 0;
	int result;
	if (all_vc.size() == 2)
	{
		two(all_vc);
		return two(all_vc);
	}
	else
	{
		for (int i = all_vc[0].size(); i > 0; i--)
		{
			result = all_vc[0][i - 1] * pow(-1, i+1) * deter(copying(all_vc, i - 1));
			count += result;
		}
	}
	return count;
}

int main(int argc, char** argv)
{
	vector<vector<int>> vc;



	vc = { {5, 4, 2, 9,1, 5},
		  {4, 5, 6, 9, 1, 8},
		  {7, 8, 9, 9, 2, 9},
		  {5, 4, 2, 9, 2, 1},
		  {5, 4, 2, 9, 6, 0},
		  {9, 9, 9, 9, 8, 12} };



	cout << deter(vc);





	return 0;
}