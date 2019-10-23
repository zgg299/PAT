#include<iostream>
#include<map>
#include<algorithm>
struct Node{
	int ads,data,next;
}node[100000];

int main(){
	int n,k,str,start;
	map<int,Node>m;
	std::cin>>start>>n>>k;
	//map m 中存储键值对 
	for(int i=0;i<n;++i){
		scanf("%d",&str);
		scanf("%d %d",&m[str].data,&m[str].next);
	}
	//将map m 中的节点放到Node数组中存放，顺序存放 
	for(int i=0;i<n;++i){
		node[i]={start,m[start].data,0};
		start=m[start].next;
		//链表结束 
		if(start==-1)
		    n=i+1;
		if((i+1)%k==0)
			reverse(node+i+1-k,node+i+1);
	}
	
	for(int i=0;i<n;++i){
		printf("%05d %d",node[i].ads,node[i].data);
		if(i!=n-1)
			printf("%05d\n",node[i+1].ads);
		else
			printf("-1");
	}
	
	
	return 0;
}
