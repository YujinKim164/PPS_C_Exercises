#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	char S[1003];
	int len,res=0;
	int arr[26];
	for(int i = 0 ; i < t ; i++){
		scanf("%s",&S);
		len = strlen(S);
		for(int j = 0 ; j < len ; j++){
			arr[S[j]-65] = 1;
		}
		for(int j = 0 ; j < 26 ; j++){
			if(arr[j]!=1)
				res += (j+65);
			arr[j] = 0;
		}
		printf("%d\n",res);
		res=0;
	}
}