#include<stdio.h>
    void main()
        {
            char ch_max[20];

            printf("enter month:");
            scanf("%c",&ch_max[20]);

            switch(ch_max[20])
            {
               case jan:
               case mar:
               case may:
               case jul:
               case aug:
               case oct:
               case dec:

                printf("31 Days");
                break;

                case 'apr':
                case 'jun':
                case 'sep':
                case 'nov':

                printf("30 Days");
                break;

                case 'fab':

                printf("28 Or 29 Days");

            }
        }