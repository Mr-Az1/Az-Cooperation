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
//			sprint((string)"����������: "+Name+"\n");
//			sprint((string)"�ȼ�: ");
//			sprint(Level+"\n",levcol(Level));
//			sprint((string)"���: "+Num+"\n");
//			sprint((string)"�濨����������: "+itos(counter)+"\n");
//		}
//		else{
//			sprint((string)"����������: ???\n");
//			sprint((string)"�ȼ�: ???");
//			sprint((string)"���: "+Num+"\n");
//			sprint((string)"�濨����������: ???\n");
//		}
//		for(rint i=1;i<size(manage);i++){
//			if(!Manage[i]){
//				sprint((string)"������֪ "+itos(i)+": "+manage[i].first+"\n");
//			}
//		}
//		if(!Weapon){
//			sprint((string)"E.G.O ����: "+weapon[wea].name+"\n");
//			sprint((string)"�˺�����: ");
//			sprint((string)damage_color[weapon[wea].col].first+"\n",damcol(weapon[wea].col));
//		}
//		else{
//			sprint((string)"E.G.O ����: ???\n");
//		}
//		if(!Armor){
//			sprint((string)"E.G.O ����: "+armor[ar].name+"\n");
//			for(rint az=1;az<=4;az++){
//				int i=damage_color[az].second;
//				sprint((string)damage_color[az].first,i);
//				sprint((string)"����: "+itos(armor[ar].damage_val[i]/10)+"."+itos(armor[ar].damage_val[i]%10)+"\n"); 
//			}
//		}
//		else{
//			sprint((string)"E.G.O ����: ???\n");
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
	init_mon("������һ","SAn","H-2-16-65",
	(string)"8.24\n"+
	(string)"����ǰ�������һ��ʯͷ������˵���Ǵ����ʯͷ����⵽��δ֪���ܷ�Ӧ����֪��С���Ա������Ϊ���Ƕ�δ֪̽����������\n"+
	(string)"8.26\n"+
	(string)"��֡������ʯͷ�ĸ������ݶ���·�ߵ�ʯͷû��������Ҳ��ȫû�в������ܷ�Ӧ�ĺۼ���\n"+
	(string)"8.29\n"+
	(string)"ǰ��ӻ������ˡ������������һ�����ʯ��\n"+
	(string)"8.31\n"+
	(string)"���ǵ��о��������˽�չ����ӵ����ʶ������Ӧ�����ǣ�һ��ʯͷ���Լ���˼�룬���ǲ���˼�飡\n"+
	(string)"8.32\n"+
	(string)"����һ�ֲ��õ�Ԥ�С����������ڷ���һЩ��������֪�ķ�Ӧ����\n"+
	(string)"8.33\n"+
	(string)"���������ѣ������޷���֮�࿹���ұ��������뿪�������㿴������ƪ�ռǣ������뿪��������������������������ģ�\n"+
	(string)"�k�����ս����١����k���������ǡ����Ὣ�ػ�������\n"+
	(string)"[blood]\n",
	damnum("����"),10,1,1,3,{{},
	{(string)"���� ������ �Ĺ������Ϊ �� ʱ���м��ʻ����Ʒ ���� �����ָ̻�һ���ľ���ֵ��",10},
	{(string)"���� ������ �Ĺ������Ϊ �� ʱ������Ա���۳�һ���ľ���ֵ��",10},
	{(string)"�� ������ ͻ������ʱ�����������Ʒ ���� ��Ա����������ֻš�",10},
	{(string)"�� ֪ʶ�ȼ� С�ڵ��� 3�� ʱ������Ա�������ܵ������˺���",10}},
	{0,1,1,2,3,4},
	{0,1,1,1,1,1},
	{0,1,2,2,3,3},
	{0,1,2,3,4,5},
	30,20,20
	);
}
inline void insert_mon(int num){mon.push_back(num);return ;};
