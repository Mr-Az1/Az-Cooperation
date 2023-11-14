#include<D:\Mr.Az\basic_info.h>
int weacnt=-1;
struct weapon{
	string name,level;
	int col;
	vector<pair<string,int>> describe;// {攻击描述,攻击伤害}
	vector<int> user;
	bool spe[100];
	
	inline void set(string nam,string lv,int co,vector<pair<string,int>> des,vector<int> sp=vector<int>()){
		 name=nam;level=lv;col=co;describe=des;
		 for(rint i=0;i<siz(sp);i++) spe[sp[i]]=1;
	}
	inline void info(){
		sprint((string)"名称: "+name+" 等级: ");
		sprint((string)level,levcol(level));
		sprint((string)" 伤害类型: ");
		sprint((string)damname(col),damcol(col));puts("");
	}
}weapon[100];
inline void insert_wea(string nam,string lv,int col,vector<pair<string,int>> des,vector<int> sp=vector<int>()){
	weacnt++;weapon[weacnt].set(nam,lv,col,des,sp);
}
inline void init_weapon(){
	insert_wea("警戒棍","Be",damnum("物理"),{{},{"挥舞手中的警戒棍",3}});
	
	insert_wea("樱落","SAn",damnum("精神"),{{},
	{"建立了平面直角坐标系",9},
	{"打开了手中的每日一题，发出耀眼白光",10},
	{"掏出成绩表",9}}	
	);
	return ;
} 
