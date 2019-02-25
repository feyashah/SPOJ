#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, n, x, y, start;
	scanf("%d",&i);
	int m = 0;
	for(m = 0; m < i; m++)
	{
		scanf("%d",&n);
		scanf("%d",&x);
		scanf("%d",&y);
		scanf("%d",&y);
		for(start = x; start < n;)
		{
			if(start%y != 0)
			{
				printf("%d ",start);
			}
			start = start + x;
		}
		if(m!= i - 1)
			printf("\n");
	}
	return 0;
}