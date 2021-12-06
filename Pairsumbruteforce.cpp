#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int> v,int sum)
{
	vector<int> result;

	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v.size();j++)
		{
			if(v[i]+v[j]==sum)
			{
				result.push_back(v[i]);
				result.push_back(v[j]);
				break;
			}
		}
	}
	
	if(result.size()==0)
	{
		return {};
	}
	else
	{
		return result;
	}
}

int main()
{
	vector <int> v{10,5,2,3,-6,9,11};
	int sum=4;

	auto results=pairsum(v,sum);

	cout<<result[0]<<result[1];

	return 0;


}