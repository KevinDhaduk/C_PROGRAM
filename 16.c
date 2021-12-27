#include <stdio.h>
    void main()
        {

            int i, j, n, k;
            char ch = 'A';


            printf("Enter n: ");
            scanf("%d", &n);

            
            k = n;
            for (i = 1; i <= n; i++, k--)
            {
                ch = 'A';
                for (j = 1; j <= k; j++)
                {
                    printf("%c ", ch++);
                }
                printf("\n");
            }
        }