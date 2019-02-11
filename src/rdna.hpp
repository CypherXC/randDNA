#include <iostream>
#include <string>
#include <random>

using namespace std;

string randDNA(int seed, string bases, int n)
{
	char bases[4] = {'C', 'G', 'A', 'T'};
	random_device rd;
	mt19937 eng1(rd());
	
	int min = 0;
	int max = 3;
	 
	uniform_int_distribution<int> unifrm(min, max);
	
	for(int x=0; x < n; x++)
	{
		cout<<unifrm(eng1)<< " ";
		
	}
	
	return sequence;
}
	
	
