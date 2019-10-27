#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
struct stu{
	int ID;
	int score;
};
bool compare(stu a,stu b){
	return a.score>b.score;
}
int main(){
	int n;
	std::cin>>n;
	std::vector<stu>student;
	std::vector<stu>school;
	std::set<int>ID;
	stu *s=new stu();
	for(int i=0;i<n;++i){
		int tempID,tempscore;
		std::cin>>tempID>>tempscore;
		s->ID=tempID;
		s->score=tempscore;
		ID.insert(tempID);
		student.push_back(*s);
	}
	
	for(std::set<int>::iterator it=ID.begin();it!=ID.end();++it){
		int sumscore=0;
		for(int i=0;i<n;++i){
			if(student[i].ID==*it){
				sumscore+=student[i].score;
			}
		}
		s->ID=*it;
		s->score=sumscore;
		school.push_back(*s);
	}
	sort(school.begin(),school.end(),compare);
	std::cout<<school[0].ID<<" "<<school[0].score;
	return 0;
} 
