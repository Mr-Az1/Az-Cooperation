#include<D:\Mr.Az\plot.h>
#include<windows.h>
using namespace std;
string name="No name",xuanze="(�ǵ�����1����������0)\n";
inline void init(){
	printf("��Ϸ���ڳ�ʼ��...\n");int st=clock();
	mon.push_back(114514);
	set_window()  ;print("���ڴ�С�������\n");
	init_plot()   ;print("������Ϣ������ɣ�\n");	
	init_weapon() ;print("E.G.O ������Ϣ������ɣ�\n");
	init_armor()  ;print("E.G.O ������Ϣ������ɣ�\n");
	init_monster();print("��������Ϣ������ɣ�\n");
	print("��ʼ����ϣ���ʱ��");print(clock()-st);print(" ms");
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
	sprint((string)"�ѽ����鱣������ϷĿ¼�¡�\n");
	for(rint i=0;i<siz(juqing);i++) fputc(juqing[i],fp);
	fclose(fp);
	endd:
	Sleep(1000);
	sprint((string)"������������µ�һ��...\n");getch();
	Sleep(1000);
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
	sprint((string)"Mr.Az: ���ܣ���һ�����ְɡ�\n");
	intro;
	cin>>name;
	decide:
	sprint((string)"Mr.Az: �;�����: "+name+"����"+xuanze);
	intro;
	cin>>op;
	if(op=="0"){clean;goto setname;}
	else if(op=="1") goto next;
	else{rein;goto decide;}
	next:;
	if(name=="������") printf("ԭ������Ҳ��UT\n"); 
	if(name=="Mr.Az"){
		printf("����Ա�˻��ѿ�����\n");
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
	check:
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
	if(mod==1){
		print("��Ա�����в������������Ӧ������š�\n-1.����\n");
		print("��� ");
		printw("����",empmax-1);
		for(rint i=1;i<=4;i++) print(" "+infname(i),infcol(i)); 
		print(" E.G.O���� E.G.O����\n"); 
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
		print("��Ա�����в������������Ӧ������š�\n-1.����\n");
		print("��� "); 
		printw("1.����",empmax-1);
		for(rint i=1;i<=4;i++) print(" "+itos(i+1)+"."+infname(i),infcol(i)); 
		print(" 6.E.G.O���� 7.E.G.O����\n"); 
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
		print("��Ա�����в������������Ӧ������š�\n-1.����\n");
		if(inf==1){
			de3:
			print("Ա��ԭ����: "+tt.name+"\nԱ��������: ");cin>>op;
			print("��������: "+op+"ȷ������"+xuanze);
			string namee=op;
			intro;
			cin>>op;
			if(op=="0") goto begin;
			else if(op!="1"){rein;clean;goto de3;}
			sprint((string)"�޸ĳɹ�!���Զ����ء�\n");
			tt.name=namee;empmax=max(empmax,siz(namee));
			Sleep(1500);
		}
		if(inf>=2&&inf<=5){inf-=2;
			print("Ա������: "+tt.name+"\n");
			print("Ա��"+infname(inf)+"  ");
			print("�ȼ�: "+itos(tt.info[inf])+"\n");
			print("lob ��: "+itos(lob)+"\n");
			print("������"+itos(tt.info[inf]+1)+"����Ҫ: "+itos(up[inf][tt.info[inf]])+" lob\n");
			print("Ҫ������");
			if(lob>=up[inf][tt.info[inf]]){
				print("��������1 ",10),sprint((string)"�˳�����0\n",12);
				intro;
				cin>>op;
				if(op=="0") return ;
				sprint((string)"�����ɹ�!���Զ����ء�\n");
				lob-=up[inf][tt.info[inf]];
				tt.info[inf]++;
				Sleep(1000);
			}
			else{sprint((string)"lob �㲻��!\n",12);}
		}
		#undef tt
	}
	return ;
}
inline void Monster(int mod,int monn=0){
	begin:
	clean;
	string op; 
	print("����������в������������Ӧ������š�\n-1.����\n��ǰ����: ");
	print(itos(energy)+"\n",10);
	if(mod==1){
		sprint((string)"�������б�: \n");
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
		print("1.������Ϣ"); 
		if(t.Info){
			print("\n����������: "+t.Name+"\n");
			print("�ȼ�: ");
			print(t.Level+"\n",levcol(t.Level));
			print("���: "+t.Num+"\n");
			print("�濨����������: "+itos(t.counter)+"\n");
		}
		else{print(" ��Ҫ ");print(itos(t.info),(energy<t.info)?12:10);print(" ������\n");}
		puts("");
		print("2.������֪\n"); 
		for(rint i=1;i<siz(t.manage);i++){
			if(t.Manage[i]) print("������֪ "+itos(i)+": "+t.manage[i].first+"\n");
			else{
				print("������֪ "+itos(i)+" ��Ҫ ");
				print(itos(t.manage[i].second),(energy<t.manage[i].second)?12:10);
				print(" ������\n");
			}
		}
		puts("");
		print("3. E.G.O ����"); 
		if(t.Weapon){
			print("\n����: "+weapon[t.wea].name+"\n");
			print("�˺�����: ");
			print((string)damname(weapon[t.wea].col)+"\n",damcol(weapon[t.wea].col));
		}
		else{print(" ��Ҫ ");print(itos(t.vwea),(energy<t.vwea)?12:10);print(" ������\n");}
		puts("");
		print("4. E.G.O ����"); 		
		if(t.Armor){
			print("\n����: "+armor[t.ar].name+"\n");
			for(rint az=1;az<=4;az++){
				int i=damage_color[az].second;
				print((string)damage_color[az].first,i);
				print("����: "+itos(armor[t.ar].damage_val[i]/10)+"."+itos(armor[t.ar].damage_val[i]%10)+"\n"); 
			}
		}
		else{print(" ��Ҫ ");print(itos(t.var),(energy<t.var)?12:10);print(" ������\n");}
		puts("");
		cin>>op;
		if(op=="-1") return ;
		if(!isdigit(op)) goto begin;
		int num=stoi(op);
		if(num>=1&&num<=4){
			if(num==1){
				if(t.Info==1) print("������Ϣ�Ѿ���������!");
				else if(energy>=t.info){energy-=t.info;t.Info=1;print("������Ϣ�ѽ���!");}
				else print("��������!");
			}
			if(num==2) Monster(3,monn);
			if(num==3){
				if(t.Weapon==1) print("E.G.O ������Ϣ�Ѿ���������!");
				else if(energy>=t.vwea){energy-=t.vwea;t.Weapon=1;print("E.G.O ������Ϣ�ѽ���!");}
				else print("��������!");
			}
			if(num==4){
				if(t.Armor==1) print("E.G.O ������Ϣ�Ѿ���������!");
				else if(energy>=t.var){energy-=t.var;t.Armor=1;print("E.G.O ������Ϣ�ѽ���!");}
				else print("��������!");
			}
			Sleep(1000);goto begin;
		}
		#undef t
	}
	if(mod==3){
		#define t monster[mon[monn]]
		for(rint i=1;i<siz(t.manage);i++){
			if(t.Manage[i]) print("������֪ "+itos(i)+": "+t.manage[i].first+"\n");
			else{
				print("������֪ "+itos(i)+" ��Ҫ ");
				print(itos(t.manage[i].second),(energy<t.manage[i].second)?12:10);
				print(" ������\n");
			}
		}
		cin>>op;
		if(op=="-1") return ;
		if(!isdigit(op)) goto begin;
		int num=stoi(op);
		if(num>=1&&num<siz(t.manage)){
			if(t.Manage[num]==1) print("������֪"),print(itos(num)),print("�Ѿ���������!");
			else if(energy>=t.manage[num].second){energy-=t.manage[num].second;t.Manage[num]=1;print("������֪"),print(itos(num)),print("�ѽ���!");}
			else print("��������!");
		}
		else{rein;goto begin;}
	}
	return ;
} 
inline void menu(){string op;
	pre:
	clean; 
	printf("˫ʮ��ѧ\nDouble Ten Company\n\n");
	printf("�����ǵ�%d��\n",day);
	print("����: ",green);print(energy,green);printf("/");print(lim[day],green);
	print("\n-1.�˳�\n");
	print("1.Ա��\n");
	print("2.������\n");
	print("3.�ֿ�\n");
	if(energy<=lim[day]) print("4.������һ��\n"); 
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

