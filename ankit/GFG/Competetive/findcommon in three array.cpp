# include<bits/stdc++.h>
using namespace std;

int findcommon(int ar1[],int ar2[],int ar3[],int n1,int n2,int n3)
{
	int i=0,j=0,k=0;
	while(i<n1 && j<n2 && k<n3)                        //time complexity of this programm is O(n1+n2+n3)
	{
		if(ar1[i]==ar2[j] && ar2[j]==ar3[k])
		{cout<<ar1[i]<< " ";
		i++; j++; k++;
		}
		
		else
		if(ar1[i]<ar2[j])
		i++;
		else
		if(ar2[j]<ar3[k])
		j++;
		else
		k++;
	}
}

int main()
{
	int ar1[]={1,5,10,20,40,80};
	int ar2[]={6,7,20,80,100};
	int ar3[]={3,4,15,20,30,70,80,120};
	int n1=6,n2=5,n3=8;
	
	cout<<"common elements are\n";
	findcommon(ar1,ar2,ar3,n1,n2,n3);
	
	return 0;
}
