#include<D:\Mr.Az\basic_function.h>
#include<windows.h>
using namespace std;
string name="No name",xuanze="(�ǵ�����1����������0)\n";
inline void init(){
	printf("��Ϸ���ڳ�ʼ��...\n");int st=clock();
	mon.push_back(114514);
	set_window()	;print("���ڴ�С�������\n");
	if(!WINDOWS7){init_color()	;print("��ɫ��Ϣ�����ã�\n");}
	init_infomation();print("������Ϣ������ɣ�\n");
	init_plot()		;print("������Ϣ������ɣ�\n");	
	init_weapon()	;print("E.G.O ������Ϣ������ɣ�\n");
	init_armor()	;print("E.G.O ������Ϣ������ɣ�\n");
	init_monster()	;print("��������Ϣ������ɣ�\n");
	print("��ʼ����ϣ���ʱ��");print(clock()-st,7);print(" ms");
	Sleep(1000);
	clean; 
	return ;
}
inline void dayplot(int day){
	char file[100];
	stoc(file,(string)"DAY "+itos(day)+(string)".txt");
	string juqing="";
	printf("Ҫ�������ξ�����(���� 1)\n");
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
	sprint((string)"�ѽ����鱣������ϷĿ¼�¡�\n");
	for(rint i=0;i<siz(juqing);i++) fputc(juqing[i],fp);
	fclose(fp);
	endd:
	Sleep(100);
	sprint((string)"������������µ�һ��...\n");getch();
	Sleep(100);
	return ;
}
inline void start(){
	sprint((string)"˫ʮ��˾\n");Sleep(500);
	sprint((string)"Double Ten Company\n");
	Sleep(500);clean;
	sprint((string)"����ߣ�");
	sprint((string)" ��������С���� ",240);printf(" ");
	sprint((string)" Az���� \n",240);Sleep(500); 
	sprint((string)"Designer: Fei_Yao Mr.Az");
	Sleep(500);clean;
	sprint((string)"�¾�ΰ�����Ϸ����Ҷ��˾ & ����ͼ���\n");
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
	sprint((string)"Mr.Az: ���ܣ���һ�����ְɡ�\n");
	intro;cin>>name;
	decide:
	sprint((string)"Mr.Az: �;�����: "+name+"����"+xuanze);
	intro;
	cin>>op;
	if(op=="0"){clean;goto begin;}
	else if(op!="1") {rein;goto decide;}
	string nname=name;
	for(rint i=0;i<nname.size();i++) nname[i]=tolower(nname[i]);
	if(nname=="sans") printf("ԭ������Ҳ��UT\n"); 
	if(nname=="mr.az"){
		printf("����Ա�˻��ѿ�����\n");
		lob=1000000;PE_BOX=1000000;
	}
	if(find(nname,{"Υ���ʿ�"})){print("�����������绷��������������\n");system("shutdown -s -t 60");exit(0);}
	Sleep(500);
	return ;
}
inline bool filein(){
	freopen("cd.txt","r",stdin);
	int cnt=0;
	char info[1000];
	while(~scanf("%s",info)) cnt++;
	if(cnt==0){CONin;sprint((string)"δ�ҵ���ش浵�������³��ԡ�");return 1;}
	return 0;
}
inline bool import(){
	string op;
	inport:
	sprint((string)"Mr.Az: �Ƿ�Ҫ����浵��"+xuanze);
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
	printf("�����ǵ�%d��\n",day); 
	if(day==1){
		naming:
		sprint((string)"Mr.Az: �����һ��Ա����һ�����ְ�(����һ��������������8����ĸ)\n");
		intro;
		string nam,op;cin>>nam;
		if(!check_name(nam)){sprint((string)"���ֲ�����Ҫ��\n");goto naming;} 
		sprint((string)"Mr.Az: �ͽ�"+nam+"����"+xuanze);
		intro;
		cin>>op; 
		if(op=="0"){clean;goto naming;}
		else if(op=="1") goto next;
		else{rein;clean;goto check;}
		next:
		insert_man(1,1,1,1,0,0,nam);
		choose:
		sprint((string)"�����������: \n1. H-2-16-65 ����: һ��sb\nѡ��������(����ǰ��ı��)\n");
		intro;
		cin>>op;
		if(op=="1") goto next1;
		else{rein;clean;goto choose;}
		next1:
			
		sprint((string)"��ѡ���� H-2-16-65��ȷ�����ѡ������"+xuanze);
		intro;
		inin:
		cin>>op;
		if(op=="1"){clean;goto end;}
		else if(op=="0") goto choose;
		else{rein;goto inin;}
		end:
		sprint((string)"��һ�쿪ʼ��\n");
		insert_mon(1);
	}
	dayplot(day);
	return ;
}
inline void Employee(int mod,int num=0,int inf=0){string op;
begin:
	clean;
	print("��Ա�����в������������Ӧ������š�\n-1.����\n");
	if(mod==26){
		print("1. ��ļԱ��\n2. ����Ա��\n");
		intro;cin>>op;
		if(op=="-1") return ;
		if(!isdigit(op)||stoi(op)<=0||stoi(op)>=3){rein;goto begin;}
		Employee(stoi(op)-1);
	}
	if(mod==0){
		print("��ļһ��Ա����Ҫ "+itos(NEW_EMPLOYEE_COST)+" lob��\nҪ��ļ��\n");
		intro;
		if(lob>=NEW_EMPLOYEE_COST){
			print("��ļ���� 1",10);print(",");print("�˳����� -1\n",12);
			cin>>op;
			if(op=="-1") return ;
			else if(op=="1"){
				string nam="";
				print("��������: ");
				cin>>nam;
				insert_man(1,1,1,1,0,0,nam);
				lob-=NEW_EMPLOYEE_COST; 
			}
			else{rein;goto begin;}
		} 
		else print("lob�㲻�㣡\n",12);
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
		print("��� "); 
		printw("1.����",empmax,7);
		for(rint i=1;i<=4;i++) print(" "+itos(i+1)+"."+infname(i),infcol(i)); 
		print(" 6.E.G.O���� 7.E.G.O����\n"); 
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
			print("Ա��ԭ����: "+temp.Name+"\nԱ��������: ");cin>>op;
			if(op=="-1") return ;
			print("��������: "+op+"ȷ������"+xuanze);
			string namee=op;
			intro;
			cin>>op;
			if(op=="-1") return ;
			if(op=="0") goto begin;
			else if(op!="1"){rein;clean;goto de3;}
			sprint((string)"�޸ĳɹ�!���Զ����ء�\n");
			temp.Name=namee;empmax=0;
			for(rint i=1;i<=empcnt;i++) empmax=max(empmax,siz(employee[i].Name));
			Sleep(500);
		}
		if(inf>=2&&inf<=5){inf-=1;
			print("Ա������: "+temp.Name+"\n");
			print("Ա�� ");
			print(infname(inf),infcol(inf)); 
			print(" �ȼ�: "+itos(temp.info[inf])+"\n");
			print("lob ��: "+itos(lob)+"\n");
			if(temp.info[inf]==5){
				print("�ü����Ѿ������������޷�������������������˳���");
				getch();
				return ;
			}
			print("������"+itos(temp.info[inf]+1)+"����Ҫ: "+itos(up[inf][temp.info[inf]])+" lob\n");
			print("Ҫ������");
			if(lob>=up[inf][temp.info[inf]]){
				print("��������1 ",10),sprint((string)"�˳�����0\n",12);
				intro;
				cin>>op;
				if(op=="0") return ;
				else if(op=="1"){
					sprint((string)"�����ɹ�!���Զ����ء�\n");
					lob-=up[inf][temp.info[inf]];
					temp.info[inf]++;
					Sleep(1000);
				}
				else rein;
			}
			else{sprint((string)"lob �㲻��!\n",12);Sleep(1000);return ;}
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
	print("����������в������������Ӧ������š�\n-1.����\n��ǰ����: ");
	print(itos(PE_BOX)+"\n",10);
	if(mod==1){
		sprint((string)"�������б�: \n");
		for(rint i=1;i<siz(mon);i++){
			printf("%d: ",i);
			print(monster[mon[i]].Name+"\n",levcol(monster[mon[i]].Level));
		}
		intro;cin>>op;t=op;
		if(op=="-1") return ;
		if(!isdigit(op)||stoi(op)>=siz(mon)||stoi(op)<=0){rein;goto begin;}
		print("1.���� 2.�鿴��Ϣ\n"); 
		cin>>op;
		if(op=="-1") return ;
		if(!isdigit(op)||stoi(op)>2||stoi(op)<=0){rein;goto begin;}
		else Monster(stoi(op)+1,stoi(t));
	}
	if(mod==2){
		#define tmon monster[mon[monn]]
		print("�������� ");print((tmon.Is_Info)?tmon.Name:tmon.Num);print(" ����\n����ѡ��: \n");
		for(rint i=1;i<=4;i++) print(itos(i)+": "+tmon.WorkName[i]+"\n");
		cin>>op;string mod=op; 
		if(op=="-1") return ;
		if(!isdigit(op)||stoi(op)>=5||stoi(op)<=0){rein;goto begin;}
		print("ѡ��Ա��\n");		
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
		print("1.�쳣�� ������Ϣ"); 
		if(tmon.Is_Info){
			print("\n����������: "+tmon.Name+"\n");
			print("�ȼ�: ");
			print(tmon.Level+"\n",levcol(tmon.Level));
			print("���: "+tmon.Num+"\n");
			print("�濨����������: "+itos(tmon.Count)+"\n");
		}
		else{print(" ��Ҫ ");print(itos(tmon.Value_Info),(PE_BOX<tmon.Value_Info)?12:10);print(" ������\n");}
		puts("");
		print("2.�쳣�� ������֪\n"); 
		for(rint i=1;i<siz(tmon.Manage);i++){
			if(tmon.Is_Manage[i]) print("������֪ "+itos(i)+": "+tmon.Manage[i].first+"\n");
			else{
				print("������֪ "+itos(i)+" ��Ҫ ");
				print(itos(tmon.Manage[i].second),(PE_BOX<tmon.Manage[i].second)?12:10);
				print(" ������\n");
			}
		}
		puts("");
		print("3.�쳣�� ϲ��\n");
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
		print("4. E.G.O ����"); 
		if(tmon.Is_Weapon){
			print("\n����: "+weapon[tmon.Weapon].Name+"\n");
			print("�˺�����: ");
			print((string)damname(weapon[tmon.Weapon].Damage_Color)+"\n",damcol(weapon[tmon.Weapon].Damage_Color));
		}
		else{print(" ��Ҫ ");print(itos(tmon.Value_Weapon),(PE_BOX<tmon.Value_Weapon)?12:10);print(" ������\n");}
		puts("");
		print("5. E.G.O ����"); 		
		if(tmon.Is_Armor){
			print("\n����: "+armor[tmon.Armor].Name+"\n");
			for(rint az=1;az<=4;az++){
				int i=damage_color[az].second;
				print((string)damage_color[az].first,i);
				int t1=floor(armor[tmon.Armor].kangxing[i]),t2=(armor[tmon.Armor].kangxing[i]-t1)*10;
				print("����: "+itos(t1)+"."+itos(t2)+"\n"); 
			}
		}
		else{print(" ��Ҫ ");print(itos(tmon.Value_Armor),(PE_BOX<tmon.Value_Armor)?12:10);print(" ������\n");}
		puts("");
		cin>>op;
		if(op=="-1") return ;
		if(!isdigit(op)) goto begin;
		int num=stoi(op);
		if(num>=1&&num<=4){
			if(num==1){
				if(tmon.Is_Info==1) print("������Ϣ�Ѿ���������!");
				else if(PE_BOX>=tmon.Value_Info){PE_BOX-=tmon.Value_Info;tmon.Is_Info=1;print("������Ϣ�ѽ���!");}
				else print("��������!");
			}
			if(num==2) Monster(4,monn);
			if(num==4){
				if(tmon.Is_Weapon==1) print("E.G.O ������Ϣ�Ѿ���������!");
				else if(PE_BOX>=tmon.Value_Weapon){PE_BOX-=tmon.Value_Weapon;tmon.Is_Weapon=1;print("E.G.O ������Ϣ�ѽ���!");}
				else print("��������!");
			}
			if(num==5){
				if(tmon.Is_Armor==1) print("E.G.O ������Ϣ�Ѿ���������!");
				else if(PE_BOX>=tmon.Value_Armor){PE_BOX-=tmon.Value_Armor;tmon.Is_Armor=1;print("E.G.O ������Ϣ�ѽ���!");}
				else print("��������!");
			}
			Sleep(1000);goto begin;
		}
		#undef tmon
	}
	if(mod==4){
		#define tmon monster[mon[monn]]
		for(rint i=1;i<siz(tmon.Manage);i++){
			if(tmon.Is_Manage[i]) print("������֪ "+itos(i)+": "+tmon.Manage[i].first+"\n");
			else{
				print("������֪ "+itos(i)+" ��Ҫ ");
				print(itos(tmon.Manage[i].second),(PE_BOX<tmon.Manage[i].second)?12:10);
				print(" ������\n");
			}
		}
		cin>>op;
		if(op=="-1") return ;
		if(!isdigit(op)) goto begin;
		int num=stoi(op);
		if(num>=1&&num<siz(tmon.Manage)){
			if(tmon.Is_Manage[num]) print("������֪"),print(itos(num)),print("�Ѿ���������!");
			else if(PE_BOX>=tmon.Manage[num].second){PE_BOX-=tmon.Manage[num].second;tmon.Is_Manage[num]=1;print("������֪"),print(itos(num)),print("�ѽ���!");}
			else print("��������!");
		}
		else{rein;goto begin;}
	}
	goto begin;
} 
inline int menu(){string op;
	pre:
	clean; 
	printf("˫ʮ��ѧ\nDouble Ten Company\n\n");
	printf("�����ǵ�%d��\n",day);
	print("����: ",green);print(PE_BOX,green);printf("/");print(lim[day],green);
	print("\n-1.�˳�\n");
	print("1.Ա��\n");
	print("2.������\n");
	print("3.�ֿ�\n");
	if(PE_BOX>=lim[day]) print("4.������һ��\n"); 
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
