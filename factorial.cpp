#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int N;
	cin>>N;
	int ans=1;
	if(1<=N<=10){
		for (int i = 1; i <= N; ++i)
		{
			ans*=i;
		}
		cout<<ans;
	}
	return 0;
}