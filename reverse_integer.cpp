# Reverse_integer
#include<iostream>
using namespace std;

class Solution 
{
public:
	int reverse(int x)
	{
		long long y = 0;
		while (x)     //the point
		{
			y = y * 10 + x % 10;
			x = x / 10;
		}
		if ((y > INT_MAX) || (y < INT_MIN))
			return 0;
		else
			return y;
	}
};

void main()
{
	Solution s;
	s.reverse(1534236469);
}
