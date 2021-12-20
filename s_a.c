#include <stdio.h>
    void main()
        {
            int n, i = 0;
            int sum = 0;
            float average = 0;
            while (n != -1)
            {
                printf("Enter value of n: ");
                scanf("%d", &n);
                if (n == -1)
                break;
                sum += n;
                i++;
            }
            average = (float)sum / i;
            printf("\nSum = %d\n", sum);
            printf("\nAverage = %.2f\n", average);
        }