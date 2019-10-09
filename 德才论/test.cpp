<<<<<<< HEAD
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<vector>

struct stu{
	int id;
	int dscore;
	int cscore;
	int sum;
};
bool compare(stu a,stu b){
	if(a.sum!=b.sum)
	    return a.sum>b.sum;
	else if(a.dscore!=b.dscore)
	    return a.dscore>b.dscore;
	else  return a.id<b.id;
}

int main(){
	int N,H,L;
	std::cin>>N>>L>>H;
	std::vector<stu>v[4];
	stu *s=new stu();
	int count=0;
	for (int i = 0; i < N; i++)
    {
        int priority;
        scanf("%d %d %d", &(s->id), &(s->dscore), &(s->cscore));
        s->sum = s->dscore + s->cscore;
        if ((s->dscore) >= L && (s->cscore) >= L)
        {
            if ((s->dscore) >= H && (s->cscore) >= H)
                priority = 0;
            else if ((s->dscore) >= H && (s->cscore) < H)
                priority = 1;
            else if ((s->dscore) < H && (s->cscore) < H && (s->dscore) >= (s->cscore))
                priority = 2;
            else
                priority = 3;
            
            v[priority].push_back(*s);
            count++;
        }
    }
	
	std::cout<<count<<std::endl;
	for(int i=0;i<4;++i){
		sort(v[i].begin(),v[i].end(),compare);
		for(int j=0;j<v[i].size();++j){
			printf("%d %d %d\n",v[i][j].id,v[i][j].dscore,v[i][j].cscore);
		}
	}
	
	
	return 0;
}
=======
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<vector>

struct stu{
	int id;
	int dscore;
	int cscore;
	int sum;
};
bool compare(stu a,stu b){
	if(a.sum!=b.sum)
	    return a.sum>b.sum;
	else if(a.dscore!=b.dscore)
	    return a.dscore>b.dscore;
	else  return a.id<b.id;
}

int main(){
	int N,H,L;
	std::cin>>N>>L>>H;
	std::vector<stu>v[4];
	stu *s=new stu();
	int count=0;
	for (int i = 0; i < N; i++)
    {
        int priority;
        scanf("%d %d %d", &(s->id), &(s->dscore), &(s->cscore));
        s->sum = s->dscore + s->cscore;
        if ((s->dscore) >= L && (s->cscore) >= L)
        {
            if ((s->dscore) >= H && (s->cscore) >= H)
                priority = 0;
            else if ((s->dscore) >= H && (s->cscore) < H)
                priority = 1;
            else if ((s->dscore) < H && (s->cscore) < H && (s->dscore) >= (s->cscore))
                priority = 2;
            else
                priority = 3;
            
            v[priority].push_back(*s);
            count++;
        }
    }
	
	std::cout<<count<<std::endl;
	for(int i=0;i<4;++i){
		sort(v[i].begin(),v[i].end(),compare);
		for(int j=0;j<v[i].size();++j){
			printf("%d %d %d\n",v[i][j].id,v[i][j].dscore,v[i][j].cscore);
		}
	}
	
	
	return 0;
}
>>>>>>> c58093d65bb9ac64ed075345ee2170f8e471647f
