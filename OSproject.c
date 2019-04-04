#include<stdio.h>

main()
{
        int i=0, j, a, number[30];

        for (i = 0; i < 3; ++i)
        {
            printf("Enter the priority of the queue %d\n",i+1);
            scanf("%d", &number[i]);

        }


        for (i = 0; i < 3; ++i)
        {

            for (j = i + 1; j < 3; ++j)
            {

                if (number[i] > number[j])
                {

                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;

                }

            }

        }

        printf("The Queues arranged in ascending order of priority\n");
        for (i = 0; i < 3; ++i)
            printf("%d\n", number[i]);

        int high= 0;
            high= number[0];
        if(high>0)
        {
            Queue1();
        }
        int mid= 0;
            mid = number[1];
        if(mid>0)
        {
            Queue2();
        }
        int low= 0;
            low=number[2];
        if(low>0)
        {
            queue3();
        }


}
