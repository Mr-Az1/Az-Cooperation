#include<D:\Mr.Az\armor.h>
int moncnt=1;
struct monster{
	string Name,Level,Num;
	string story;
	vector<pair<string,int>> manage;
	vector<int> Work[5];
	int damage_col,damage_val;
	int wea,ar,counter;
	bool Info,Manage[10],Weapon,Armor;
	int info,vwea,var;
//	inline void info(){
//		if(!Info){
//			sprint((string)"异想体名称: "+Name+"\n");
//			sprint((string)"等级: ");
//			sprint(Level+"\n",levcol(Level));
//			sprint((string)"编号: "+Num+"\n");
//			sprint((string)"逆卡巴拉计数器: "+itos(counter)+"\n");
//		}
//		else{
//			sprint((string)"异想体名称: ???\n");
//			sprint((string)"等级: ???");
//			sprint((string)"编号: "+Num+"\n");
//			sprint((string)"逆卡巴拉计数器: ???\n");
//		}
//		for(rint i=1;i<size(manage);i++){
//			if(!Manage[i]){
//				sprint((string)"管理须知 "+itos(i)+": "+manage[i].first+"\n");
//			}
//		}
//		if(!Weapon){
//			sprint((string)"E.G.O 武器: "+weapon[wea].name+"\n");
//			sprint((string)"伤害属性: ");
//			sprint((string)damage_color[weapon[wea].col].first+"\n",damcol(weapon[wea].col));
//		}
//		else{
//			sprint((string)"E.G.O 武器: ???\n");
//		}
//		if(!Armor){
//			sprint((string)"E.G.O 护甲: "+armor[ar].name+"\n");
//			for(rint az=1;az<=4;az++){
//				int i=damage_color[az].second;
//				sprint((string)damage_color[az].first,i);
//				sprint((string)"抗性: "+itos(armor[ar].damage_val[i]/10)+"."+itos(armor[ar].damage_val[i]%10)+"\n"); 
//			}
//		}
//		else{
//			sprint((string)"E.G.O 护甲: ???\n");
//		}
//		sprint((string)story,7,10);
//	}
	inline void set(string namee,string levell,string numm,string storyy,int coll,int vall,
					int weaponn,int armorr,int counterr,vector<pair<string,int>> managee=vector<pair<string,int>>()){
		Name=namee;Level=levell;Num=numm;story=storyy;damage_col=coll;damage_val=vall;wea=weaponn;ar=armorr;counter=counterr;manage=managee;
		return ;
	}
	inline void set2(vector<int> work1,vector<int> work2,vector<int> work3,vector<int> work4){
		Work[1]=work1;Work[2]=work2;Work[3]=work3;Work[4]=work4;
	}
	inline void set3(int infoo,int vweaa,int varr){
		info=infoo;vwea=vweaa;var=varr;
	} 
}monster[100];
inline void init_mon(string namee,string levell,string numm,string storyy,int coll,int vall,
					int weaponn,int armorr,int counterr,vector<pair<string,int>> managee=vector<pair<string,int>>(),
					vector<int> work1=vector<int>(),vector<int> work2=vector<int>(),vector<int> work3=vector<int>(),vector<int> work4=vector<int>(),
					int infoo=30,int vwea=20,int var=20){
	monster[moncnt].set(namee,levell,numm,storyy,coll,vall,weaponn,armorr,counterr,managee);
	monster[moncnt].set2(work1,work2,work3,work4);
	monster[moncnt].set3(infoo,vwea,var);
	moncnt++;
}
inline void init_monster(){
	init_mon("异想体一","SAn","H-2-16-65",
	(string)"8.24\n"+
	(string)"今天前锋队送来一块石头，他们说这是从这块石头上侦测到了未知高能反应，我知道小组成员都是认为这是对未知探索的契机。\n"+
	(string)"8.26\n"+
	(string)"奇怪……这块石头的各项数据都和路边的石头没有两样，也完全没有产生高能反应的痕迹。\n"+
	(string)"8.29\n"+
	(string)"前锋队或许搞错了……这根本就是一块鹅卵石！\n"+
	(string)"8.31\n"+
	(string)"我们的研究终于有了进展！它拥有意识！它回应了我们！一块石头有自己的思想，真是不可思议！\n"+
	(string)"8.32\n"+
	(string)"我有一种不好的预感……它好像在发生一些我们所不知的反应……\n"+
	(string)"8.33\n"+
	(string)"他正在苏醒！我们无法与之相抗，我必须马上离开这里，如果你看到了这篇日记，立即离开这里，他的力量不是我们做能理解的！\n"+
	(string)"祂……终将降临……祂将治愈我们……吾将重获新生！\n"+
	(string)"[blood]\n",
	damnum("精神"),10,1,1,3,{{},
	{(string)"当对 张壬泽 的工作情况为 优 时，有几率获得饰品 晨曦 并立刻恢复一定的精神值。",10},
	{(string)"当对 张壬泽 的工作情况为 差 时，该名员工扣除一定的精神值。",10},
	{(string)"当 张壬泽 突破收容时，所有佩戴饰品 晨曦 的员工立刻陷入恐慌。",10},
	{(string)"当 知识等级 小于等于 3级 时，该名员工立刻受到精神伤害。",10}},
	{0,1,1,2,3,4},
	{0,1,1,1,1,1},
	{0,1,2,2,3,3},
	{0,1,2,3,4,5},
	30,20,20
	);
}
inline void insert_mon(int num){mon.push_back(num);return ;};
