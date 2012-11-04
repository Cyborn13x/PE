#include <stdio.h>
#include <math.h>

int main()
{
	char word[100];
	int i, sum, cnt = 0, rt, d;
	FILE *in = fopen("words.txt", "r");
	while(fscanf(in, "%s", word)==1)
	{
		sum = 0;
		for(i=0; word[i]; i++) sum += word[i]-'A'+1;
		d = 1+8*sum;
		rt = sqrt(d);
		if(rt*rt==d && (rt-1)%2==0) cnt++;
	}
	printf("%d\n", cnt);
	fclose(in);
	return 0;
}
