#include <stdio.h>

int main(void)
{
	int x=0;
	int nums[59];
	
	freopen("output.txt","w",stdout);
	for (x=0; x<=59; x++) {
		nums[x]=x;
	}
	for (x=0; x<=59; x++) {
		printf("\tnums[%d]=\n",nums[x]);
	}
	return 0;
}

