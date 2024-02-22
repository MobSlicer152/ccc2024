#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALPHA_COUNT 26

#define MIN(A, B) ((A) < (B) ? (A) : (B))

typedef enum WEIGHT
{
    WeightNone,
    WeightLight,
    WeightHeavy
} WEIGHT;

void CountWeights(char* string, uint32_t n, WEIGHT weights[ALPHA_COUNT]);

int main(void)
{
    uint32_t i;
    uint32_t j;
    char* string;
    WEIGHT weights[ALPHA_COUNT];

    uint32_t t = 0;
    uint32_t n = 0;
    scanf("%d %d", &t, &n);
    getchar();
    uint32_t rawN = n + 2; // account for NULs and newlines
    string = calloc(rawN, 1);
    for (i = 0; i < t; i++)
    {
        fgets(string, rawN, stdin);
        string[n] = 0; // get rid of newline
#ifdef DEBUG
        printf("%s\n", string);
#endif
        memset(weights, 0, sizeof(weights));
        CountWeights(string, n, weights);

        bool pattern = true;
        for (j = 1; j < n; j++)
        {
            char c1 = string[j - 1];
            char c2 = string[j];
#ifdef DEBUG
            printf("%c %u\n%c %u\n", c1, weights[c1 - 'a'], c2, weights[c2 - 'a']);
#endif
            if (weights[c1 - 'a'] == weights[c2 - 'a'])
            {
                pattern = false;
                break;
            }
        }
        printf("%c\n", pattern ? 'T' : 'F');
    }

    free(string);
}

void CountWeights(char* string, uint32_t n, WEIGHT weights[ALPHA_COUNT])
{
    uint32_t i;
    char c;

    for (i = 0; i < n; i++)
    {
        c = tolower(string[i]);
        if ('a' <= c && c <= 'z' && weights[c - 'a'] < WeightHeavy)
        {
            weights[c - 'a']++;
        }
    }

#ifdef DEBUG
    for (i = 0; i < ALPHA_COUNT; i++)
    {
        printf("%c %u ", 'a' + i, weights[i]);
    }
    printf("\n");
#endif
}