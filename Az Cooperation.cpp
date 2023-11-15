#include<D:\Mr.Az\plot.h>
#include<windows.h>
using namespace std;
string name="No name",xuanze="(是的输入1，不是输入0)\n";
inline void init(){
	printf("游戏正在初始化...\n");int st=clock();
	mon.push_back(114514);
	set_window()  ;print("窗口大小设置完成\n");
	init_plot()   ;print("剧情信息设置完成！\n");	
	init_weapon() ;print("E.G.O 武器信息设置完成！\n");
	init_armor()  ;print("E.G.O 护甲信息设置完成！\n");
	init_monster();print("异想体信息设置完成！\n");
	print("初始化完毕，用时：");print(clock()-st);print(" ms");
	Sleep(1000);
	clean; 
	return ;
}
inline void dayplot(int day){
	char file[100];
	stoc(file,(string)"DAY "+itos(day)+(string)".txt");
	string juqing="";
	printf("要跳过本段剧情吗？(输入 1)\n");
	string opp;cin>>opp;
	stack<int> op;clear(op);
	op.push(day);
	FILE *fp=fopen(file,"w");
	if(opp=="1") goto endd;
	while(1){
		auto t=plot[op];bool f=1;
		for(rint i=0;i<siz(t);i++){
			for(rint j=0;j<siz(t[i]);j++){
				string now="";now+=t[i][j];now+=t[i][j+1];now+=t[i][j+2];now+=t[i][j+3];
				if(now=="NAME") juqing+=name,sprint(name),j+=4;
				if(now=="choi") j+=5,f=0;
				if(now=="END.") goto end;
				sprint(t[i][j]);juqing+=t[i][j];
			}
			puts("");juqing+="\n";
			if(f) getch(); 
		}
		azz:
		char ch=getch();
		while(!isdigit(ch)) cout<<char(8),ch=getch();
		op.push(stoi(ch));
		if(plot.find(op)==plot.end()){op.pop();goto azz;}
//		puts("DEBUG:");print(op);
	}
	end:
	sprint((string)"已将剧情保存至游戏目录下。\n");
	for(rint i=0;i<siz(juqing);i++) fputc(juqing[i],fp);
	fclose(fp);
	endd:
	Sleep(1000);
	sprint((string)"按任意键开启新的一天...\n");getch();
	Sleep(1000);
	return ;
}
inline void start(){
	sprint((string)"双十公司\n");Sleep(500);
	sprint((string)"Double Ten Company\n");
	Sleep(500);clean;
	sprint((string)"设计者：");
	sprint((string)" 咕咕咕的小飞瑶 ",240);printf(" ");
	sprint((string)" Az先生 \n",240);Sleep(500); 
	sprint((string)"Designer: Fei_Yao Mr.Az");
	Sleep(500);clean;
	sprint((string)"致敬伟大的游戏：脑叶公司 & 废墟图书馆\n");
	sprint((string)"A Tribute to Great Games : Lobotomy Corporation & The Library of Ruins\n");
	Sleep(500);
	clean;
	int i=0;
	while(Mr_Az[i]!=""){
		cout<<Mr_Az[i];i++;
	}
	i=0;
	while(And[i]!=""){
		cout<<And[i];i++;
	}i=0;
	while(Fei_Yao[i]!=""){
		cout<<Fei_Yao[i];i++;
	}
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),{0,0});
	Sleep(800);
	i=0;
	while(Mr_Az[i]!=""){
		#define t Mr_Az[i]
		for(rint j=0;j<siz(t);j++){
			if(!(t[j]=='\n'||t[j]==' ')) Sleep(20);
			if(t[j]=='\n') puts("");
			else putchar(' '); 
		}
		#undef t
		i++;
	}
	i=0;
	while(And[i]!=""){
		#define t And[i]
		for(rint j=0;j<siz(t);j++){
			if(!(t[j]=='\n'||t[j]==' ')) Sleep(20);
			if(t[j]=='\n') puts("");
			else putchar(' '); 
		}
		#undef t
		i++;
	}i=0;
	while(Fei_Yao[i]!=""){
		#define t Fei_Yao[i]
		for(rint j=0;j<siz(t);j++){
			if(!(t[j]=='\n'||t[j]==' ')) Sleep(20);
			if(t[j]=='\n') puts("");
			else putchar(' '); 
		}
		#undef t
		i++;
	}
	Sleep(2000); 
	return ;
}
inline void login(){
	clean;
	string op;
	setname:
	sprint((string)"Mr.Az: 主管，起一个名字吧。\n");
	intro;
	cin>>name;
	decide:
	sprint((string)"Mr.Az: 就决定叫: "+name+"了吗？"+xuanze);
	intro;
	cin>>op;
	if(op=="0"){clean;goto setname;}
	else if(op=="1") goto next;
	else{rein;goto decide;}
	next:;
	if(name=="安黛因") printf("原来，你也玩UT\n"); 
	if(name=="Mr.Az"){
		printf("管理员账户已开启。\n");
		lob=1000000;energy=1000000;
	}
	Sleep(500);
	return ;
}
inline bool filein(){
	freopen("cd.txt","r",stdin);
	int cnt=0;
	char info[1000];
	while(~scanf("%s",info)) cnt++;
	if(cnt==0){CONin;sprint((string)"未找到相关存档。请重新尝试。");return 1;}
	return 0;
}
inline bool import(){
	string op;
	inport:
	sprint((string)"Mr.Az: 是否要导入存档？"+xuanze);
	print(name+": ");cin>>op;
	if(op=="0"){clean;goto end;}
	else if(op=="1") goto next;
	else{rein;clean;goto inport;}
	next:
	if(filein()){Sleep(1000);clean;goto inport;}
	return 0;
	end:
	return 1;
}
inline void newday(){
	clean;
	check:
	printf("今天是第%d天\n",day); 
	if(day==1){
		naming:
		sprint((string)"Mr.Az: 给你第一个员工起一个名字吧(汉字一个算两个，上限8个字母)\n");
		intro;
		string nam,op;cin>>nam;
		if(!check_name(nam)){sprint((string)"名字不符合要求\n");goto naming;} 
		sprint((string)"Mr.Az: 就叫"+nam+"了吗？"+xuanze);
		intro;
		cin>>op; 
		if(op=="0"){clean;goto naming;}
		else if(op=="1") goto next;
		else{rein;clean;goto check;}
		next:
		insert_man(1,1,1,1,0,0,nam);
		choose:
		sprint((string)"今天的异想体: \n1. H-2-16-65 描述: 一个sb\n选择异想体(输入前面的编号)\n");
		intro;
		cin>>op;
		if(op=="1") goto next1;
		else{rein;clean;goto choose;}
		next1:
			
		sprint((string)"你选择了 H-2-16-65，确定你的选择了吗？"+xuanze);
		intro;
		inin:
		cin>>op;
		if(op=="1"){clean;goto end;}
		else if(op=="0") goto choose;
		else{rein;goto inin;}
		end:
		sprint((string)"第一天开始了\n");
		insert_mon(1);
	}
	dayplot(day);
	return ;
}
inline void Employee(int mod,int num=0,int inf=0){string op;
begin:
	clean;
	if(mod==1){
		print("对员工进行操作，请输入对应操作编号。\n-1.返回\n");
		print("编号 ");
		printw("名字",empmax-1);
		for(rint i=1;i<=4;i++) print(" "+infname(i),infcol(i)); 
		print(" E.G.O武器 E.G.O护甲\n"); 
		for(rint i=1;i<=empcnt;i++){
			auto t=man[i];
			printw(itos(i),4);
			printw(t.name,empmax);
			for(rint j=0;j<4;j++) sprintw(itos(t.info[j]),4);
			printw(weapon[man[i].weapon].name,9);
			printw(armor[man[i].armor].name,9);
			puts("");Sleep(10);
		}
		intro;cin>>op;
		printf("DEBUG!! %d\n",stoi(op));
		if(op=="-1") return ;
		if(!isdigit(op)||stoi(op)>empcnt||stoi(op)<=0){rein;clean;goto begin;}
		int t=stoi(op);
		Employee(2,t);
	}
	if(mod==2){
		print("对员工进行操作，请输入对应操作编号。\n-1.返回\n");
		print("编号 "); 
		printw("1.名字",empmax-1);
		for(rint i=1;i<=4;i++) print(" "+itos(i+1)+"."+infname(i),infcol(i)); 
		print(" 6.E.G.O武器 7.E.G.O护甲\n"); 
		auto tt=man[num];
		printw(itos(num),4);
		printw(tt.name,empmax+2);
		for(rint j=0;j<4;j++) printw(itos(tt.info[j]),6);
		printw(weapon[man[num].weapon].name,11);
		printw(armor[man[num].armor].name,11);
		puts("");
		intro;cin>>op;
		if(op=="-1") return ;
		if(!isdigit(op)||stoi(op)>7){rein;clean;goto begin;}
		int t=stoi(op);
		Employee(3,num,t); 
	}
	if(mod==3){
		#define tt man[num]
		print("对员工进行操作，请输入对应操作编号。\n-1.返回\n");
		if(inf==1){
			de3:
			print("员工原名字: "+tt.name+"\n员工新名字: ");cin>>op;
			print("新名字是: "+op+"确定了吗？"+xuanze);
			string namee=op;
			intro;
			cin>>op;
			if(op=="0") goto begin;
			else if(op!="1"){rein;clean;goto de3;}
			sprint((string)"修改成功!将自动返回。\n");
			tt.name=namee;empmax=max(empmax,siz(namee));
			Sleep(1500);
		}
		if(inf>=2&&inf<=5){inf-=2;
			print("员工名字: "+tt.name+"\n");
			print("员工"+infname(inf)+"  ");
			print("等级: "+itos(tt.info[inf])+"\n");
			print("lob 点: "+itos(lob)+"\n");
			print("升级到"+itos(tt.info[inf]+1)+"级需要: "+itos(up[inf][tt.info[inf]])+" lob\n");
			print("要升级吗？");
			if(lob>=up[inf][tt.info[inf]]){
				print("升级输入1 ",10),sprint((string)"退出输入0\n",12);
				intro;
				cin>>op;
				if(op=="0") return ;
				sprint((string)"升级成功!将自动返回。\n");
				lob-=up[inf][tt.info[inf]];
				tt.info[inf]++;
				Sleep(1000);
			}
			else{sprint((string)"lob 点不足!\n",12);}
		}
		#undef tt
	}
	return ;
}
inline void Monster(int mod,int monn=0){
	begin:
	clean;
	string op; 
	print("对异想体进行操作，请输入对应操作编号。\n-1.返回\n当前能量: ");
	print(itos(energy)+"\n",10);
	if(mod==1){
		sprint((string)"异想体列表: \n");
		for(rint i=1;i<siz(mon);i++){
			printf("%d: ",i);
			print(monster[mon[i]].Name+"\n",levcol(monster[mon[i]].Level));
		}
		intro;cin>>op;
		if(op=="-1") return ;
		if(!isdigit(op)||stoi(op)>=siz(mon)||stoi(op)<=0){rein;goto begin;}
		Monster(2,stoi(op));
	}
	if(mod==2){
		#define t monster[mon[monn]]
		print("1.基本信息"); 
		if(t.Info){
			print("\n异想体名称: "+t.Name+"\n");
			print("等级: ");
			print(t.Level+"\n",levcol(t.Level));
			print("编号: "+t.Num+"\n");
			print("逆卡巴拉计数器: "+itos(t.counter)+"\n");
		}
		else{print(" 需要 ");print(itos(t.info),(energy<t.info)?12:10);print(" 点能量\n");}
		puts("");
		print("2.管理须知\n"); 
		for(rint i=1;i<siz(t.manage);i++){
			if(t.Manage[i]) print("管理须知 "+itos(i)+": "+t.manage[i].first+"\n");
			else{
				print("管理须知 "+itos(i)+" 需要 ");
				print(itos(t.manage[i].second),(energy<t.manage[i].second)?12:10);
				print(" 点能量\n");
			}
		}
		puts("");
		print("3. E.G.O 武器"); 
		if(t.Weapon){
			print("\n名称: "+weapon[t.wea].name+"\n");
			print("伤害属性: ");
			print((string)damname(weapon[t.wea].col)+"\n",damcol(weapon[t.wea].col));
		}
		else{print(" 需要 ");print(itos(t.vwea),(energy<t.vwea)?12:10);print(" 点能量\n");}
		puts("");
		print("4. E.G.O 护甲"); 		
		if(t.Armor){
			print("\n名称: "+armor[t.ar].name+"\n");
			for(rint az=1;az<=4;az++){
				int i=damage_color[az].second;
				print((string)damage_color[az].first,i);
				print("抗性: "+itos(armor[t.ar].damage_val[i]/10)+"."+itos(armor[t.ar].damage_val[i]%10)+"\n"); 
			}
		}
		else{print(" 需要 ");print(itos(t.var),(energy<t.var)?12:10);print(" 点能量\n");}
		puts("");
		cin>>op;
		if(op=="-1") return ;
		if(!isdigit(op)) goto begin;
		int num=stoi(op);
		if(num>=1&&num<=4){
			if(num==1){
				if(t.Info==1) print("基本信息已经解锁过了!");
				else if(energy>=t.info){energy-=t.info;t.Info=1;print("基本信息已解锁!");}
				else print("能量不足!");
			}
			if(num==2) Monster(3,monn);
			if(num==3){
				if(t.Weapon==1) print("E.G.O 武器信息已经解锁过了!");
				else if(energy>=t.vwea){energy-=t.vwea;t.Weapon=1;print("E.G.O 武器信息已解锁!");}
				else print("能量不足!");
			}
			if(num==4){
				if(t.Armor==1) print("E.G.O 防具信息已经解锁过了!");
				else if(energy>=t.var){energy-=t.var;t.Armor=1;print("E.G.O 防具信息已解锁!");}
				else print("能量不足!");
			}
			Sleep(1000);goto begin;
		}
		#undef t
	}
	if(mod==3){
		#define t monster[mon[monn]]
		for(rint i=1;i<siz(t.manage);i++){
			if(t.Manage[i]) print("管理须知 "+itos(i)+": "+t.manage[i].first+"\n");
			else{
				print("管理须知 "+itos(i)+" 需要 ");
				print(itos(t.manage[i].second),(energy<t.manage[i].second)?12:10);
				print(" 点能量\n");
			}
		}
		cin>>op;
		if(op=="-1") return ;
		if(!isdigit(op)) goto begin;
		int num=stoi(op);
		if(num>=1&&num<siz(t.manage)){
			if(t.Manage[num]==1) print("管理须知"),print(itos(num)),print("已经解锁过了!");
			else if(energy>=t.manage[num].second){energy-=t.manage[num].second;t.Manage[num]=1;print("管理须知"),print(itos(num)),print("已解锁!");}
			else print("能量不足!");
		}
		else{rein;goto begin;}
	}
	return ;
} 
inline void menu(){string op;
	pre:
	clean; 
	printf("双十中学\nDouble Ten Company\n\n");
	printf("今天是第%d天\n",day);
	print("能量: ",green);print(energy,green);printf("/");print(lim[day],green);
	print("\n-1.退出\n");
	print("1.员工\n");
	print("2.异想体\n");
	print("3.仓库\n");
	if(energy<=lim[day]) print("4.结束这一天\n"); 
	intro;
	cin>>op;
	if(op=="-1") exit(0);
	else if(op=="1"||op=="2"||op=="3") goto next;
	else{rein;clean;goto pre;}
	next:
	if(op=="1") Employee(1);
	if(op=="2") Monster(1);
	if(op=="3");
	return ;
}
inline void game(){
	clean;newday(); 
	while(1) menu();
	return ;
}
int main(){
	init();
//	start();
	login();
//	az=import();
	game();
	return 0; 
}

