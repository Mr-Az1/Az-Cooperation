#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
#define pb push_back
#define clean system("cls");
#define CONin {fclose(stdin);freopen("CON","r",stdin);}
#define rint register int
#define blue (FOREGROUND_BLUE|FOREGROUND_INTENSITY)
#define green (FOREGROUND_GREEN|FOREGROUND_INTENSITY)
#define red (FOREGROUND_RED|FOREGROUND_INTENSITY)
#define purple (blue|red)
#define yellow (red|green)
#define white (red|blue|green)
#define gray (FOREGROUND_INTENSITY)
#define siz(a) int(a.size())
#define intro {print((string)name+": ");}
#define rein {sprint((string)"Mr.Az: 给老子好好输入！\n");Sleep(1000);}
#define endl '\n'
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
mt19937 hsh(time(NULL));
pair<string,int> damage_color[]={{},{"精神",15},{"物理",red},{"侵蚀",purple},{"灵魂",11}};
pair<string,int> level_color[]={{},{"Be",green},{"Ani",red},{"SAn",purple}};
pair<string,int> info_color[]={{},{"勇气",12},{"谨慎",11},{"自律",10},{"知识",15}};
string work_name[]={"","工作1","工作2","工作3","工作4"};
string work_suc[]={"","极低","低","中等","高","极高"};
map<stack<int>,vector<string>> plot;
struct pi{int first,second,third;};
vector<int> mon;
vector<pii> wea,ar;
int mcnt=1,lob=3,day=1,energy;
int lim[100];
int up[5][6]={{0,1,2,3,4,5},{0,1,2,3,4,5},{0,1,2,3,4,5},{0,1,2,3,4,5},{0,1,2,3,4,5}};
char cyx[1000];
string Mr_Az[30]={"\n","\n","\n","\n","\n",
				"                                                   ■       ■                          ■\n", 
				"                                                 ■ ■     ■■                      ■■\n",
				"                                                ■   ■   ■  ■   ■   ■■       ■  ■\n",
				"                                               ■     ■ ■    ■    ■■        ■   ■■  ■■■\n",
				"                                              ■      ■■     ■    ■         ■■■   ■    ■\n",
				"                                             ■        ■■       ■   ■    ■  ■        ■   ■■■■\n"};
string And[30]={"\n","\n","\n","\n","\n",
		"                                                                     ■■■                                                          \n",
		"                                                                    ■    ■                                                      \n",
		"                                                                    ■    ■                                                  \n",
		"                                                                     ■■■                                                    \n",
		"                                                                    ■  ■  ■                                                     \n",
		"                                                                    ■    ■                                                      \n",
		"                                                                     ■■■ ■                                                       \n",
		"                                                                                                                  \n",
	};
string Fei_Yao[30]={"\n","\n","\n","\n","\n",
				"                                                 ■■■■                    ■    ■            \n", 
				"                                                ■                ■          ■  ■            \n",  
				"                                               ■■■■  ■■■                ■■                \n",
				"                                              ■        ■    ■  ■            ■    ■■      ■■■ \n",
				"                                             ■        ■■■■■ ■            ■   ■   ■   ■    ■      \n",
				"                                            ■          ■        ■            ■   ■   ■   ■    ■       \n",
				"                                           ■             ■■■  ■  ■■■■  ■    ■■■■  ■■■      \n"};
inline void set_window(){system("mode con cols=150 lines=45");return ;} 
inline int rand0 (int p)   {return hsh()%p;}
inline int rand1 (int p)   {return hsh()%p+1;}
inline int damcol(string p){for(rint i=1;i<=4;i++) if(damage_color[i].first==p) 	return damage_color[i].second;	return -1;}
inline int levcol(string p){for(rint i=1;i<=3;i++) if(level_color[i].first==p) 		return level_color[i].second;	return -1;}
inline int infcol(string p){for(rint i=1;i<=4;i++) if(info_color[i].first==p) 		return info_color[i].second;	return -1;}
inline int damnum(string p){for(rint i=1;i<=4;i++) if(damage_color[i].first==p) 	return i;						return -1;}
inline int levnum(string p){for(rint i=1;i<=3;i++) if(level_color[i].first==p) 		return i;						return -1;}
inline int infnum(string p){for(rint i=1;i<=4;i++) if(info_color[i].first==p) 		return i;						return -1;}
inline int damnum(int p)   {for(rint i=1;i<=4;i++) if(damage_color[i].second==p)	return i;						return -1;}
inline int levnum(int p)   {for(rint i=1;i<=3;i++) if(level_color[i].second==p) 	return i;						return -1;}
inline int infnum(int p)   {for(rint i=1;i<=4;i++) if(info_color[i].second==p) 		return i;						return -1;}
inline int damcol(int p)   {return damage_color[p].second;	}
inline int levcol(int p)   {return level_color[p].second;	}
inline int infcol(int p)   {return info_color[p].second;	}
inline string damname(int p){
	if(p<=4) return damage_color[p].first;
	int i;
	for(i=1;i<=4;i++) if(damage_color[i].second==p) return damage_color[i].first;
	return "";
}
inline string levname(int p){
	if(p<=3) return level_color[p].first;
	int i;
	for(i=1;i<=3;i++) if(level_color[i].second==p) return level_color[i].first;
}
inline string infname(int p){
	if(p<=4) return info_color[p].first;
	int i;
	for(i=1;i<=3;i++) if(info_color[i].second==p) return info_color[i].first;
	return ""; 
}
inline string workname(int p){return work_name[p];}
inline string worksuc(int p){return work_suc[p];}
inline bool is(char ch){
	string ss="~~~<^_^>~~~ !@#$%&*()+-={}[]|\\:;\"\',./?";
	for(rint i=0;i<siz(ss);i++) if(ch==ss[i]) return 1;
	return 0;
}
inline bool isdigit(string s){
	rint i=0;
	if(s[i]=='-') i++;
	for(;i<siz(s);i++) if(!isdigit(s[i])) return 0;
	return 1;
} 
//inline int sstoi(string s){
//	int res=0,i=0,f=1;
//	if(s[i]=='-') i++,f=-1;
//	for(rint i=0;i<s.size();i++) res=res*10+s[i]-'0';
//	return res*f;
//}
inline string itos(ll x){
	if(x==0) return "0";
	string s;
	while(x) s+=x%10+'0',x/=10;
	reverse(s.begin(),s.end());
	return s;
}
inline ll stoi(char ch){if(isdigit(ch)) return ch-'0';else return -1;}
inline auto stoc(string s){
	for(rint i=0;i<siz(s);i++) cyx[i]=s[i];
	return cyx;
}
inline void stoc(auto &t,string s){
	for(rint i=0;i<siz(s);i++) t[i]=s[i];
	return ;
} 
inline bool check_name(string s){
	if(s.size()>8) return 0;
	for(rint i=0;i<siz(s);i++) if(!(isalpha(s[i])||isdigit(s[i])||is(s[i]))) return 0;
	return 1;
}
template<typename T>
inline void print(T s,int color=7){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
	cout<<s;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
	return ;
}
inline void sprint(string s,int color=7,int t=1){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
	for(rint i=0;i<siz(s);i++) putchar(s[i]),Sleep(t);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
	return ;
}
inline void sprint(ll x,int color=7,int t=1){
	sprint(itos(x),color,t);
	return ;
}
inline void sprint(char x,int color=7,int t=1){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
	putchar(x),Sleep(t);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
	return ;
}
inline void sprintw(string s,int w=0,int t=1){
	sprint(s,7,t);
	for(rint i=siz(s);i<=w;i++) print(" ");
	return ;
}
inline void printw(string s,int w=0){
	print(s,7);
	for(rint i=siz(s);i<=w;i++) print(" ");
	return ;
}
inline void fputs(string s,FILE *stream){
	for(rint i=0;i<siz(s);i++) fputc(char(s[i]),stream);
	return ;
} 
inline void clear(stack<int> &s){while(s.size()) s.pop();return ;}
inline void clear(vector<string> &s){s.clear();return ;}
inline void print(stack<int> s){while(s.size()) printf("%d ",s.top()),s.pop();puts("");}
