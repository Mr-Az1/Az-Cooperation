#include<D:\Mr.Az\basic_info.h>
int weacnt=-1;
struct weapon{
	string name,level;
	int col;
	vector<pair<string,int>> describe;// {��������,�����˺�}
	vector<int> user;
	bool spe[100];
	
	inline void set(string nam,string lv,int co,vector<pair<string,int>> des,vector<int> sp=vector<int>()){
		 name=nam;level=lv;col=co;describe=des;
		 for(rint i=0;i<siz(sp);i++) spe[sp[i]]=1;
	}
	inline void info(){
		sprint((string)"����: "+name+" �ȼ�: ");
		sprint((string)level,levcol(level));
		sprint((string)" �˺�����: ");
		sprint((string)damname(col),damcol(col));puts("");
	}
}weapon[100];
inline void insert_wea(string nam,string lv,int col,vector<pair<string,int>> des,vector<int> sp=vector<int>()){
	weacnt++;weapon[weacnt].set(nam,lv,col,des,sp);
}
inline void init_weapon(){
	insert_wea("�����","Be",damnum("����"),{{},{"�������еľ����",3}});
	
	insert_wea("ӣ��","SAn",damnum("����"),{{},
	{"������ƽ��ֱ������ϵ",9},
	{"�������е�ÿ��һ�⣬����ҫ�۰׹�",10},
	{"�ͳ��ɼ���",9}}	
	);
	return ;
} 
