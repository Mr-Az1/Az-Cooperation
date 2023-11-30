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
#define rein {sprint(writer[rand1(6)]+": 请好好输入！\n");Sleep(1000);}
#define endl '\n'
#define SLEEP_TIME 0
#define WINDOWS7 1 
#define NEW_EMPLOYEE_COST 2 
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
struct RGB{int r,g,b;}; 
mt19937 hsh(time(NULL));
pair<string,int> damage_color[]={{},{"精神",15},{"物理",red},{"侵蚀",purple},{"灵魂",11}};
pair<string,int> level_color[]={{},{"Be",green},{"Ani",red},{"SAn",purple}};
pair<string,int> info_color[]={{},{"勇气",12},{"谨慎",11},{"自律",10},{"知识",15}};
string work_name[]={"","心理","沟通","侦察","压迫"};
string work_suc[]={"","极低","低","一般","高","极高"};
string Rome[]={"","I","II","III","IV","V"};
string writer[]={"","Mr.Az","老菠uuu","向日葵","艾勒西赫","高xx","tyh"};
map<stack<int>,vector<string>> plot;
struct pi{int first,second,third;};
vector<int> mon;
vector<pii> wea,ar;
int mcnt=1,lob=3,day,PE_BOX;
int lim[100],next_lob[100];
int up[5][6]={{0,1,2,3,4,5},{0,1,2,3,4,5},{0,1,2,3,4,5},{0,1,2,3,4,5},{0,1,2,3,4,5}};
char cyx[1000];
string Mr_Az[30]={"\n","\n","\n","\n","\n",
				"                                                   ■       ■                              ■					\n", 
				"                                                 ■ ■     ■■                          ■■					\n",
				"                                                ■   ■   ■  ■   ■   ■■           ■  ■					\n",
				"                                               ■     ■ ■    ■    ■■            ■   ■■  ■■■			\n",
				"                                              ■      ■■     ■    ■             ■■■   ■    ■			\n",
				"                                             ■       ■       ■    ■     ■  ■■        ■    ■■■■	    \n"};
string And[30]={"\n","\n","\n","\n","\n",
		"                                                                     ■■■	\n",
		"                                                                    ■    ■	\n",
		"                                                                    ■    ■	\n",
		"                                                                     ■■■	\n",
		"                                                                    ■  ■  ■	\n",
		"                                                                    ■    ■ 	\n",
		"                                                                     ■■■ ■	\n",
		"                                                                                                                  \n",
	};
string Fei_Yao[30]={"\n","\n","\n","\n","\n",
				"                                                 ■■■■                    ■    ■					\n", 
				"                                                ■                ■          ■  ■					\n",  
				"                                               ■■■■  ■■■                ■■					\n",
				"                                              ■        ■    ■  ■            ■    ■■      ■■■ \n",
				"                                             ■        ■■■■■ ■            ■   ■   ■   ■    ■\n",
				"                                            ■          ■        ■            ■   ■   ■   ■    ■\n",
				"                                           ■             ■■■  ■  ■■■■  ■    ■■■■  ■■■	\n"};
inline void set_window(){system("mode con cols=150 lines=45");return ;}
inline void show_cursor(bool vis){
	CONSOLE_CURSOR_INFO info={20,vis};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&info);
}
inline void reset_color(){
	if(!WINDOWS7)wprintf(L"\x1b[38;2;%d;%d;%dm",192,192,192);	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
}
inline void init_infomation(){
	for(rint i=1;i<=50;i++) lim[i]=20*(i*i)+30*i+20,next_lob[i]=(i/5)*2;
	
}
inline int rand0 (int p)   {return hsh()%p;}
inline int rand1 (int p)   {return hsh()%p+1;}
inline int rand(int l,int r){return hsh()%(r-l+1)+l;}
inline int rand(pii x)		{return rand(x.first,x.second);}
inline bool random(int p){return int(hsh()%10000)<int(p*100);}
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
inline string worksuc(int p){return work_suc[(p-1)/20+1];}
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
inline bool is(char ch){
	string ss="~~~<^_^>~~~ !@#$%&*()+-={}[]|\\:;\"\',./?";
	for(rint i=0;i<siz(ss);i++) if(ch==ss[i]) return 1;
	return 0;
}
inline bool isdigit(string s){
	rint i=0;
	if(s[i]=='-') i++;
	if(s=="-") return 0;
	for(;i<siz(s);i++) if(!isdigit(s[i])) return 0;
	return 1;
} 
inline int sstoi(string s){
	if(!isdigit(s)) return -114514;
	int res=0,i=0,f=1;
	if(s[i]=='-') i++,f=-1;
	for(;i<siz(s);i++) res=res*10+s[i]-'0';
	return res*f;
}
inline string itos(ll x){
	if(x==0) return "0";
	string s="";
	if(x<0) s+="-",x*=-1;
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
inline bool find(string s,vector<string> search){
	for(rint i=0;i<search.size();i++) if(s.find(search[i])!=string::npos) return 1;
	return 0;
}
inline string to_string(const char* x){return string(x);}
template<typename T>
inline string to_string(const basic_string<T> x){return x.c_str();}
inline bool check_name(string s){
	if(s.size()>8) return 0;
	for(rint i=0;i<siz(s);i++) if(!(isalpha(s[i])||isdigit(s[i])||is(s[i]))) return 0;
	return 1;
}
inline void print(string s,int color=7){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
	cout<<s;
	reset_color(); 
	return ;
}
inline void rprint(string s,RGB color={192,192,192}){
	wprintf(L"\x1b[38;2;%d;%d;%dm",color.r,color.g,color.b);
	printf("%s",s.c_str());
	reset_color();
	return ;
}
inline void sprint(string s,int color=7,int t=SLEEP_TIME){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
	for(rint i=0;i<siz(s);i++){cout<<s[i];Sleep(t);}
	reset_color();
	return ;
}
inline void rsprint(string s,RGB color={192,192,192},int t=SLEEP_TIME){
	wprintf(L"\x1b[38;2;%d;%d;%dm",color.r,color.g,color.b);
	for(rint i=0;i<siz(s);i++) printf("%c",s[i]),Sleep(t);
	reset_color();
	return ;
}
template<typename T>
inline void sprint(T x,int color=7,int t=1){sprint(to_string(x),color,t);return ;}
template<typename T>
inline void print(T x,int color=7){print(to_string(x),color);return ;}
template<typename T>
inline void rsprint(T x,int color=7,int t=1){rsprint(to_string(x),color,t);return ;}
template<typename T>
inline void rprint(T x,int color=7){rprint(to_string(x),color);return ;}
template<typename T>
inline void sprintw(T x,int w=0,int color=7,int t=SLEEP_TIME){
	string s=to_string(x);
	sprint(s,color,t);
	for(rint i=siz(s);i<=w;i++) print(" ");
	return ;
}
template<typename T>
inline void rsprintw(T x,int w=0,RGB color={192,192,192},int t=SLEEP_TIME){
	string s=to_string(x);
	rsprint(s,color,t);
	for(rint i=siz(s);i<=w;i++) print(" ");
	return ;
}
template<typename T>
inline void printw(T x,int w=0,int color=7){
	string s=to_string(x);
	print(s,color);
	for(rint i=siz(s);i<=w;i++) print(" ");
	return ;
}
template<typename T>
inline void rprintw(T x,int w=0,RGB color={192,192,192}){
	string s=to_string(x);
	rprint(s,color);
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
inline void init_color(){
	HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	DWORD dwMode=0; 
	GetConsoleMode(hOut,&dwMode);
	dwMode|=0x0004;
	SetConsoleMode(hOut,dwMode);
	return ;
}
