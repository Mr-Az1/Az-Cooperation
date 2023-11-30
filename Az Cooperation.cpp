#include<D:\Mr.Az\basic_function.h>
#include<windows.h>
using namespace std;
string name="No name",xuanze="(是的输入1，不是输入0)\n";
inline void init(){
	printf("游戏正在初始化...\n");int st=clock();
	mon.push_back(114514);
	set_window()	;print("窗口大小设置完成\n");
	if(!WINDOWS7){init_color()	;print("颜色信息已设置！\n");}
	init_infomation();print("基本信息设置完成！\n");
	init_plot()		;print("剧情信息设置完成！\n");	
	init_weapon()	;print("E.G.O 武器信息设置完成！\n");
	init_armor()	;print("E.G.O 护甲信息设置完成！\n");
	init_monster()	;print("异想体信息设置完成！\n");
	print("初始化完毕，用时：");print(clock()-st,7);print(" ms");
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
			string re=""; 
			for(rint j=0;j<siz(t[i]);j++){
				string now="";now+=t[i][j];now+=t[i][j+1];now+=t[i][j+2];now+=t[i][j+3];
				if(now=="NAME") re+=name,j+=4;
				if(now=="choi") j+=5,f=0;
				if(now=="END.") goto end;
				re+=t[i][j];
			}
			sprint(re);
			puts("");juqing=juqing+re+"\n";
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
	Sleep(100);
	sprint((string)"按任意键开启新的一天...\n");getch();
	Sleep(100);
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
	while(Mr_Az[i]!=""){cout<<Mr_Az[i];i++;}i=0;
	while(And[i]!=""){cout<<And[i];i++;}i=0;
	while(Fei_Yao[i]!=""){cout<<Fei_Yao[i];i++;}i=0;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),{0,0});
	show_cursor(0);
	Sleep(800);
	while(Mr_Az[i]!=""){
		#define t Mr_Az[i]
		for(rint j=0;j<siz(t);j++){
			if(!(t[j]=='\n'||t[j]==' ')) Sleep(10);
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
			if(!(t[j]=='\n'||t[j]==' ')) Sleep(10);
			if(t[j]=='\n') puts("");
			else putchar(' '); 
		}
		#undef t
		i++;
	}i=0;
	while(Fei_Yao[i]!=""){
		#define t Fei_Yao[i]
		for(rint j=0;j<siz(t);j++){
			if(!(t[j]=='\n'||t[j]==' ')) Sleep(10);
			if(t[j]=='\n') puts("");
			else putchar(' '); 
		}
		#undef t
		i++;
	}
	Sleep(2000); 
	show_cursor(1);
	return ;
}
inline void login(){
	clean;
	string op;
	begin:
	sprint((string)"Mr.Az: 主管，起一个名字吧。\n");
	intro;cin>>name;
	decide:
	sprint((string)"Mr.Az: 就决定叫: "+name+"了吗？"+xuanze);
	intro;
	cin>>op;
	if(op=="0"){clean;goto begin;}
	else if(op!="1") {rein;goto decide;}
	string nname=name;
	for(rint i=0;i<nname.size();i++) nname[i]=tolower(nname[i]);
	if(nname=="sans") printf("原来，你也玩UT\n"); 
	if(nname=="mr.az"){
		printf("管理员账户已开启。\n");
		lob=1000000;PE_BOX=1000000;
	}
	if(find(nname,{"违禁词库"})){print("创建良好网络环境，从你他做起！\n");system("shutdown -s -t 60");exit(0);}
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
	day++;
	check:
	lob+=next_lob[day];
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
	print("对员工进行操作，请输入对应操作编号。\n-1.返回\n");
	if(mod==26){
		print("1. 招募员工\n2. 升级员工\n");
		intro;cin>>op;
		if(op=="-1") return ;
		if(!isdigit(op)||stoi(op)<=0||stoi(op)>=3){rein;goto begin;}
		Employee(stoi(op)-1);
	}
	if(mod==0){
		print("招募一个员工需要 "+itos(NEW_EMPLOYEE_COST)+" lob点\n要招募吗？\n");
		intro;
		if(lob>=NEW_EMPLOYEE_COST){
			print("招募输入 1",10);print(",");print("退出输入 -1\n",12);
			cin>>op;
			if(op=="-1") return ;
			else if(op=="1"){
				string nam="";
				print("输入名字: ");
				cin>>nam;
				insert_man(1,1,1,1,0,0,nam);
				lob-=NEW_EMPLOYEE_COST; 
			}
			else{rein;goto begin;}
		} 
		else print("lob点不足！\n",12);
		Sleep(1000); 
		return ;
	}
	if(mod==1){
		list_emp();
		intro;cin>>op;
		if(op=="-1") return ;
		if(!isdigit(op)||stoi(op)>empcnt||stoi(op)<=0){rein;goto begin;}
		int t=stoi(op);
		Employee(2,t);
	}
	if(mod==2){
		print("编号 "); 
		printw("1.名字",empmax,7);
		for(rint i=1;i<=4;i++) print(" "+itos(i+1)+"."+infname(i),infcol(i)); 
		print(" 6.E.G.O武器 7.E.G.O护甲\n"); 
		auto temp=employee[num];
		printw(num,4,7);
		printw(temp.Name,max(empmax+1,6),7);
		for(rint j=1;j<=4;j++) printw(temp.info[j],6,7);
		printw(weapon[temp.Weapon].Name,11,7);
		printw(armor[temp.Armor].Name,11,7);
		puts("");
		intro;cin>>op;
		if(op=="-1") return ;
		if(!isdigit(op)||stoi(op)>7||stoi(op)<1){rein;goto begin;}
		int t=stoi(op);
		Employee(3,num,t); 
	}
	if(mod==3){
		#define temp employee[num]
		if(inf==1){
			de3:
			print("员工原名字: "+temp.Name+"\n员工新名字: ");cin>>op;
			if(op=="-1") return ;
			print("新名字是: "+op+"确定了吗？"+xuanze);
			string namee=op;
			intro;
			cin>>op;
			if(op=="-1") return ;
			if(op=="0") goto begin;
			else if(op!="1"){rein;clean;goto de3;}
			sprint((string)"修改成功!将自动返回。\n");
			temp.Name=namee;empmax=0;
			for(rint i=1;i<=empcnt;i++) empmax=max(empmax,siz(employee[i].Name));
			Sleep(500);
		}
		if(inf>=2&&inf<=5){inf-=1;
			print("员工名字: "+temp.Name+"\n");
			print("员工 ");
			print(infname(inf),infcol(inf)); 
			print(" 等级: "+itos(temp.info[inf])+"\n");
			print("lob 点: "+itos(lob)+"\n");
			if(temp.info[inf]==5){
				print("该技能已经升到顶级，无法继续升级，按任意键退出。");
				getch();
				return ;
			}
			print("升级到"+itos(temp.info[inf]+1)+"级需要: "+itos(up[inf][temp.info[inf]])+" lob\n");
			print("要升级吗？");
			if(lob>=up[inf][temp.info[inf]]){
				print("升级输入1 ",10),sprint((string)"退出输入0\n",12);
				intro;
				cin>>op;
				if(op=="0") return ;
				else if(op=="1"){
					sprint((string)"升级成功!将自动返回。\n");
					lob-=up[inf][temp.info[inf]];
					temp.info[inf]++;
					Sleep(1000);
				}
				else rein;
			}
			else{sprint((string)"lob 点不足!\n",12);Sleep(1000);return ;}
			inf+=1;
		}
		#undef temp
	}
	goto begin;
}
inline void Monster(int mod,int monn=0){
	begin:
	clean;
	string op,t; 
	print("对异想体进行操作，请输入对应操作编号。\n-1.返回\n当前能量: ");
	print(itos(PE_BOX)+"\n",10);
	if(mod==1){
		sprint((string)"异想体列表: \n");
		for(rint i=1;i<siz(mon);i++){
			printf("%d: ",i);
			print(monster[mon[i]].Name+"\n",levcol(monster[mon[i]].Level));
		}
		intro;cin>>op;t=op;
		if(op=="-1") return ;
		if(!isdigit(op)||stoi(op)>=siz(mon)||stoi(op)<=0){rein;goto begin;}
		print("1.工作 2.查看信息\n"); 
		cin>>op;
		if(op=="-1") return ;
		if(!isdigit(op)||stoi(op)>2||stoi(op)<=0){rein;goto begin;}
		else Monster(stoi(op)+1,stoi(t));
	}
	if(mod==2){
		#define tmon monster[mon[monn]]
		print("对异想体 ");print((tmon.Is_Info)?tmon.Name:tmon.Num);print(" 工作\n工作选项: \n");
		for(rint i=1;i<=4;i++) print(itos(i)+": "+tmon.WorkName[i]+"\n");
		cin>>op;string mod=op; 
		if(op=="-1") return ;
		if(!isdigit(op)||stoi(op)>=5||stoi(op)<=0){rein;goto begin;}
		print("选择员工\n");		
		list_emp();
		cin>>op;
		if(op=="-1") return ;
		if(!isdigit(op)||stoi(op)>empcnt||stoi(op)<=0){rein;goto begin;}
		Sleep(1000);
		work_mon(monn,stoi(op),stoi(mod));
		#undef tmon
	}
	if(mod==3){
		#define tmon monster[mon[monn]]
		print("1.异常的 基础信息"); 
		if(tmon.Is_Info){
			print("\n异想体名称: "+tmon.Name+"\n");
			print("等级: ");
			print(tmon.Level+"\n",levcol(tmon.Level));
			print("编号: "+tmon.Num+"\n");
			print("逆卡巴拉计数器: "+itos(tmon.Count)+"\n");
		}
		else{print(" 需要 ");print(itos(tmon.Value_Info),(PE_BOX<tmon.Value_Info)?12:10);print(" 点能量\n");}
		puts("");
		print("2.异常的 管理须知\n"); 
		for(rint i=1;i<siz(tmon.Manage);i++){
			if(tmon.Is_Manage[i]) print("管理须知 "+itos(i)+": "+tmon.Manage[i].first+"\n");
			else{
				print("管理须知 "+itos(i)+" 需要 ");
				print(itos(tmon.Manage[i].second),(PE_BOX<tmon.Manage[i].second)?12:10);
				print(" 点能量\n");
			}
		}
		puts("");
		print("3.异常的 喜好\n");
		for(rint i=1;i<=4;i++){
			int MAX=7;
			for(rint j=1;j<=5;j++) if(siz(worksuc(tmon.Work[i][j]))==4){MAX+=2;break;}
			printw(work_name[i],MAX);
		}
		for(rint j=1;j<=5;j++){
			puts("");
			for(rint i=1;i<=4;i++){
				int MAX=3;
				for(rint k=1;k<=5;k++) if(siz(worksuc(tmon.Work[i][k]))==4){MAX+=2;break;}
				printw(Rome[j],3);
				printw(worksuc(tmon.Work[i][j]),MAX);
			}
		}
		puts("");
		print("4. E.G.O 武器"); 
		if(tmon.Is_Weapon){
			print("\n名称: "+weapon[tmon.Weapon].Name+"\n");
			print("伤害属性: ");
			print((string)damname(weapon[tmon.Weapon].Damage_Color)+"\n",damcol(weapon[tmon.Weapon].Damage_Color));
		}
		else{print(" 需要 ");print(itos(tmon.Value_Weapon),(PE_BOX<tmon.Value_Weapon)?12:10);print(" 点能量\n");}
		puts("");
		print("5. E.G.O 护甲"); 		
		if(tmon.Is_Armor){
			print("\n名称: "+armor[tmon.Armor].Name+"\n");
			for(rint az=1;az<=4;az++){
				int i=damage_color[az].second;
				print((string)damage_color[az].first,i);
				int t1=floor(armor[tmon.Armor].kangxing[i]),t2=(armor[tmon.Armor].kangxing[i]-t1)*10;
				print("抗性: "+itos(t1)+"."+itos(t2)+"\n"); 
			}
		}
		else{print(" 需要 ");print(itos(tmon.Value_Armor),(PE_BOX<tmon.Value_Armor)?12:10);print(" 点能量\n");}
		puts("");
		cin>>op;
		if(op=="-1") return ;
		if(!isdigit(op)) goto begin;
		int num=stoi(op);
		if(num>=1&&num<=4){
			if(num==1){
				if(tmon.Is_Info==1) print("基本信息已经解锁过了!");
				else if(PE_BOX>=tmon.Value_Info){PE_BOX-=tmon.Value_Info;tmon.Is_Info=1;print("基本信息已解锁!");}
				else print("能量不足!");
			}
			if(num==2) Monster(4,monn);
			if(num==4){
				if(tmon.Is_Weapon==1) print("E.G.O 武器信息已经解锁过了!");
				else if(PE_BOX>=tmon.Value_Weapon){PE_BOX-=tmon.Value_Weapon;tmon.Is_Weapon=1;print("E.G.O 武器信息已解锁!");}
				else print("能量不足!");
			}
			if(num==5){
				if(tmon.Is_Armor==1) print("E.G.O 防具信息已经解锁过了!");
				else if(PE_BOX>=tmon.Value_Armor){PE_BOX-=tmon.Value_Armor;tmon.Is_Armor=1;print("E.G.O 防具信息已解锁!");}
				else print("能量不足!");
			}
			Sleep(1000);goto begin;
		}
		#undef tmon
	}
	if(mod==4){
		#define tmon monster[mon[monn]]
		for(rint i=1;i<siz(tmon.Manage);i++){
			if(tmon.Is_Manage[i]) print("管理须知 "+itos(i)+": "+tmon.Manage[i].first+"\n");
			else{
				print("管理须知 "+itos(i)+" 需要 ");
				print(itos(tmon.Manage[i].second),(PE_BOX<tmon.Manage[i].second)?12:10);
				print(" 点能量\n");
			}
		}
		cin>>op;
		if(op=="-1") return ;
		if(!isdigit(op)) goto begin;
		int num=stoi(op);
		if(num>=1&&num<siz(tmon.Manage)){
			if(tmon.Is_Manage[num]) print("管理须知"),print(itos(num)),print("已经解锁过了!");
			else if(PE_BOX>=tmon.Manage[num].second){PE_BOX-=tmon.Manage[num].second;tmon.Is_Manage[num]=1;print("管理须知"),print(itos(num)),print("已解锁!");}
			else print("能量不足!");
		}
		else{rein;goto begin;}
	}
	goto begin;
} 
inline int menu(){string op;
	pre:
	clean; 
	printf("双十中学\nDouble Ten Company\n\n");
	printf("今天是第%d天\n",day);
	print("能量: ",green);print(PE_BOX,green);printf("/");print(lim[day],green);
	print("\n-1.退出\n");
	print("1.员工\n");
	print("2.异想体\n");
	print("3.仓库\n");
	if(PE_BOX>=lim[day]) print("4.结束这一天\n"); 
	intro;
	cin>>op;
	if(op=="-1") exit(0);
	else if(op=="1"||op=="2"||op=="3") goto next;
	else{rein;clean;goto pre;}
	next:
	if(op=="1") Employee(26);
	if(op=="2") Monster(1);
//	if(op=="3");
	if(op=="4") return 0; 
	return 1;
}
inline void game(){
	clean;newday(); 
	while(menu());
	return ;
}
int main(){
	init();
//	start();
	login();
//	az=import();
	while(day<=2) game();
	return 0; 
}
