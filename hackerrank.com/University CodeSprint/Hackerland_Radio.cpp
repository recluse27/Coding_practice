#include <cmath>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

int main()
{
	map <int, int> hmap;
	int n, k, i = 0, h, count = 0;
	cin >> n >> k;
	
	while (i < n)
	{
		cin >> h;
		hmap[h]++;
		i++;
	}

	//for(auto it = hmap.begin(); it != hmap.end(); ++it)
	//	cout << (*it).first << " : " << (*it).second << endl; 

	//cout << hmap[0];
	
	int cur = hmap.begin()->first;
	while(cur <= hmap.rbegin()->first)
	{
		while(hmap[cur] == 0)
			cur++;
		cur+=k;
		while(hmap[cur] == 0)
			cur--;
		count++;
		cur += k+1;
	}

	cout << count;


	cin.get();
	cin.get();
	return 0;
}