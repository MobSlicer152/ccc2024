#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	uint32_t i;
	uint32_t n;
	uint32_t halfN;
	uint32_t* h;
	uint32_t o;
	uint32_t r;

	n = 0;
	scanf("%u\n", &n);
	h = calloc(n, sizeof(int));
	for (i = 0; i < n; i++)
	{
		scanf("%d\n", &h[i]);
	}

	r = 0;
	halfN = n / 2;
	for (i = 0; i < n / 2; i++)
	{
		o = i + halfN;
#ifdef DEBUG
		printf("%d %d %d\n", n, i, o);
#endif
		if (o < n && h[i] == h[o])
		{
			r += 2;
		}
	}

	printf("%d\n", r);

	free(h);
}
