#include <stdio.h>

int main()
{
   int i, to = 0, x, li, co = 0, tq;
   int wt = 0, tat = 0, at[10], bt[10], temp[10];

   float awt, atat;

   printf("\nEnter to Number of Processes: ");
   scanf("%d", &li);
   x = li;
    printf("\nProvide the details for Process\n");
    printf("Arrival Time:\t");
   for (i = 0; i < li; i++)
   {

      scanf("%d", &at[i]);
   }
   printf("Burst Time:\t");
for (i = 0; i < li; i++)
   {

      scanf("%d", &bt[i]);
      temp[i] = bt[i];}
   printf("\nEnter Time Quantum:\t");
   scanf("%d", &tq);
   for (to = 0, i = 0; x != 0;)
   {
      if (temp[i] <= tq && temp[i] > 0)
      {
         to = to + temp[i];
         temp[i] = 0;
         co = 1;
      }
      else if (temp[i] > 0)
      {
         temp[i] = temp[i] - tq;
         to = to + tq;
      }

      if (temp[i] == 0 && co == 1)
      {
         x--;
         wt = wt + to - at[i] - bt[i];

         tat = tat + to - at[i];
         co = 0;
      }

      if (i == li - 1)
      {
         i = 0;
      }
      else if (at[i + 1] <= to)
      {
         i++;
      }
      else
      {
         i = 0;
      }
   }

   awt = wt *1.0 / li;
   atat = tat *1.0 / li;

   printf("\n\nAverage Waiting Time:\t%f", awt);
   printf("\nAvg Turnaround Time:\t%f\n", atat);

   return 0;
}
