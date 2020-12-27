#include <stdio.h>
#include <inttypes.h>

int64_t add(int64_t, int64_t);

void main()
{	
	int a;
	int b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%ld\n",add(a,b));
	return;
}
