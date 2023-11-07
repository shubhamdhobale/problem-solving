#include <stdio.h>

// A utility function that returns maximum of two integers
int max(int a, int b) {
   if(a>b){
      return a;
   } else {
      return b;
   }
}

int main()
{
	int i,j,w,k;
	int sw=0,sp=0;
	int val[] = {10,15,36,20,12};
	int wt[] = {1,2,5,3,2};
	int W = 8;
	int n = sizeof(val) / sizeof(val[0]);
	int K[n+1][W+1];
	//solution vector
	int x[]={0,0,0,0};
	//code to find maximum profit earned
	for (i = 0; i <= n; i++)
	{
		for (w = 0; w <= W; w++)
		{
			if (i == 0 || w == 0)
				K[i][w] = 0;
			else if (wt[i - 1] <= w)
				K[i][w] = max(val[i - 1]
						+ K[i - 1][w - wt[i - 1]],
						K[i - 1][w]);
			else
				K[i][w] = K[i - 1][w];
		}
	}
	
	printf("\nMaximum profit=%d\n", K[4][8]);
	for(i=0;i<=n;i++){
	for(j=0;j<=W;j++)
	printf("%d	",K[i][j]);
	printf("\n");
	}

	//code to find items to include or not
	i=n,j=W;

	while(j>0)
	{
		printf("\nK[i][j]=%d",K[i][j]);
		printf("\tK[i-1][j]=%d\n",K[i-1][j]);
		if(K[i][j]==K[i-1][j])
		{
		printf("\nDo not include item=%d\n",wt[i-1]);
		i--;
		}
		else
		{
		x[i-1]=wt[i-1];
		printf("\nInclude item=%d\n",x[i-1]);
		j=j-wt[i-1];
		i--;
		}
	}
	printf("\n Included items in knapsack is=\n");
	for(k=0;k<4;k++)
		{
		printf(" %d",x[k]);
		}
	
	return 0;
}