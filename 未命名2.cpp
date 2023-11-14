#include<bits/stdc++.h>
#include<windows.h>
#include<D:\Mr.Az\plot.h>
#define clean system("cls");
#define rint register int
#define rint register int
#define blue (FOREGROUND_BLUE|FOREGROUND_INTENSITY)
#define green (FOREGROUND_GREEN|FOREGROUND_INTENSITY)
#define red (FOREGROUND_RED|FOREGROUND_INTENSITY)
#define purple (blue|red)
#define yellow (red|green)
#define white (red|blue|green)
#define gray (FOREGROUND_INTENSITY)
using namespace std;
inline void test1(){
	int x,y;
	while(1){
		scanf("%d%d",&x,&y);
		cout<<__gcd(x,y)<<" "<<x/__gcd(x,y)<<" "<<y/__gcd(x,y)<<endl;
		Sleep(1000);
		string xx="mode con cols="+itos(x)+(string)" lines="+itos(y); 
		char s[100]="";
		for(rint i=0;i<xx.size();i++) s[i]=xx[i];
		system(s);
	}
}
inline void test2(){printf("   ");
	for(rint i=0;i<16;i++) printf("%d%d ",i/10,i%10);puts("");
	for(rint i=0;i<16;i++){
		printf("%d%d ",i/10,i%10);
		for(rint j=0;j<16;j++){
			int t=i*16+j;
			sprint((string)"Az ",t,0);
		}
		puts(""); 
	}
	while(1){
		int x,y;
		cin>>x>>y;
		cout<<x*16+y<<endl;
	}
}
inline void test3(){
	for(rint i=0;i<15;i++) sprint((string)"hyh is sb.\n",i);
}
inline void test4(){
	string s="";
	freopen("¾çÇéDAY 4.txt","r",stdin);
	freopen("az.txt","w",stdout);
	while(s!="114514"){
getline(cin,s);		cout<<"t.pb(\""<<s<<"\");"<<endl;
	}
	return ;
}
inline void test5(){init_plot();
	stack<int> st;int x=-11;
	stack<int> test;
//	for(auto it=plot.begin();it!=plot.end();it++){
//		print((*it).first);
//		for(rint i=0;i<(*it).second.size();i++) cout<<(*it).second[i]<<endl;
//		
//	}
	while(x!=-1){
		
		cin>>x;
		st.push(x);
		puts("st:");
		print(st);
		for(rint i=0;i<plot[st].size();i++) cout<<plot[st][i]<<endl;
		puts("--------");
	}
}
inline void test6(){
	init_plot();
}
int main(){
	test6();
} 
