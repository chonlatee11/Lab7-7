#include <stdio.h>
int main(void)
{
char day[7][10] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
char name[100];
int temp[7][2];
int Max, Min, i, j, swap;
int midH, midL;
float SumH, SumL;
printf("Enter yor name :");
scanf("%s",name);
printf("Hello %s \n",name);
printf("********************************\n");
// input temp 7 day
for(i=0;i<7;i++){
printf("High Temp %-10s \t: ",day[i]);
scanf("%d",&temp[i][0]);
printf("Low Temp %-10s \t: ",day[i]);
scanf("%d",&temp[i][1]);
}
printf("********************************\n");
//max - min
Max = temp[0][0];
Min = temp[0][0];
for(i=0;i<7;i++){
  for(j=0;j<2;j++){
    if(temp[i][j] < Max){
      Min = temp[i][j];
      }
      else if(temp[i][j] > Min){
      Max = temp[i][j];
    }
  }
}
// AVG High and Low
for(i=0;i<7;i++){
  SumH =+ SumH + temp[i][0];
  SumL =+ SumL + temp[i][1];
}
// sort data High and Low //
for(i=0;i<7;i++){
    for(j=0;j<7;j++){
      if(temp[j][1]>temp[j+1][1]){
        swap = temp[j][1];
        temp[j][1] = temp[j+1][1];
        temp[j+1][1] = swap;
      }
      if(temp[j][1]>temp[j+1][0]){
        swap = temp[j][0];
        temp[j][0] = temp[j+1][0];
        temp[j+1][0] = swap;
      }
    }
  }
// midian high and low ***n+1 / 2*** index of array start at 0
midH = temp[(6+1)/2][0];
midL = temp[(6+1)/2][1];
// show result
printf("Max Temperature is %d C\n",Max);
printf("Min Temperature is %d C\n",Min);
printf("Average High Temperature is %.2f C\n",SumH/7);
printf("Average Low Temperature is %.2f C\n",SumL/7);
printf("Median High Temperature is %d\n",midH); 
printf("Median Low Temperature is %d\n",midL);
}