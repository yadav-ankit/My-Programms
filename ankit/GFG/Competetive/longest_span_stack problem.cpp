# include<bits/stdc++.h>

using namespace std;

int longest_span(int arr[],int n,int s[])
{
	stack<int>st;
	
	st.push(0);
	s[0]=1;
	
	for(int i=1;i<n;i++)
	{
		while(!st.empty() && arr[st.top()] <=arr[i] )
		st.pop();
		
		s[i]=(st.empty())?(i+1):(i-st.top());
		st.push(i);
	}
	
	
}
int print(int p[],int n)
{
	for(int i=0;i<n;i++) 
	cout<<p[i]<<" ";
}

int main()
{
	int arr[]={10,4,5,90,120,80};
	int n=6; 
	int s[n];
	longest_span(arr,n,s);
	print(s,n);
	
	return 0;
}
