#include<iostream>
#include<algorithm>

bool compare(int a,int b){
	return a<b;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int b[n];
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;++i){
		scanf("%d",&b[i]);
	}
	int temp=b[0];
	int i=0;
	for(i=0;i<n;++i){
		if(temp<b[i+1]){
			temp=b[i+1];
		}else{
			break;
		}
	}
	++i;
	int flag=0;
	temp=i;
	while(temp<n){
		if(a[temp]!=b[temp]){
			flag=1;
			break;
		}
		++temp;
	}
	if(flag){
		printf("Merge Sort\n");
		int dis=2*i;
		int count=n/dis;
		for(int j=0;j<count;++j){
			std::sort(b+j*dis,b+j*dis+dis,compare);
		}
		for(int m=0;m<n;++m){
		       	printf("%d ",b[m]);
		}
	}else{
		printf("Insertion Sort\n");
		for(int j=0;j<i;++j){
			if(b[j]>b[i]){
				temp=b[i];
				int k=i;
				for(k=i;k>j;--k){
					b[k]=b[k-1];
				}
				b[j]=temp;
				for(int m=0;m<n;++m){
		       	printf("%d ",b[m]);
		       }
		      break;
		}   
	  }
	}
	return 0;
}
