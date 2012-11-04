#include <stdio.h>

int main()
{
	int ans = 0, res, i;
	char num[1001];
	freopen("PE8.txt", "r", stdin);
	scanf("%s", num);
	for(i=0; num[i+4]; i++)
	{
		res = (num[i]-48)*(num[i+1]-48)*(num[i+2]-48)*(num[i+3]-48)*(num[i+4]-48);
		if(res > ans) ans = res;
	}
	printf("%d\n", ans);
	return 0;
}
