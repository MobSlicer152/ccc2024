#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 32-bit integer limit length
#define MAX_INT_LENGTH 13

#define LINE_COUNT 2

int main(void)
{
    uint32_t i;
    uint32_t j;

    uint32_t n = 0;
    scanf("%u", &n);
    getchar();
    uint32_t** t = calloc(LINE_COUNT * sizeof(uint32_t*) + LINE_COUNT * n, 1);
    for (i = 0; i < LINE_COUNT; i++)
    {
        t[i] = (uint32_t*)(t + LINE_COUNT) + i;
    }

    for (i = 0; i < LINE_COUNT; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%u ", &t[i][j]);
#ifdef DEBUG
            printf("%u ", t[i][j]);
        }
        printf("\n");
#else
        }
#endif
    }

    free(t);
}
