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

        void queue3()
    {
        printf("\nFirst come First Serve\n");

        int n,bt[20],wt[20],tt[20],avg_wt=0,avg_tt=0,i,j;

        printf("Enter total number of processes(maximum 20):");
        scanf("%d",&n);

        printf("\nEnter Process Burst Time\n");
        for(i=0;i<n;i++)
        {
            printf("P[%d]:",i+1);
            scanf("%d",&bt[i]);
        }

        wt[0]=0;

        for(i=1;i<n;i++)
        {
            wt[i]=0;
            for(j=0;j<i;j++)
                wt[i]+=bt[j];
        }

        printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");

        for(i=0;i<n;i++)
        {
            tt[i]=bt[i]+wt[i];
            avg_wt+=wt[i];
            avg_tt+=tt[i];
            printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tt[i]);
        }

        avg_wt/=i;
        printf("\n\nAverage Waiting Time:%d",avg_wt);

        avg_tt/=i;
        printf("\nAverage Turnaround Time:%d",avg_tt);
    }


}
