#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;

//可以联系我们获取以加入团队或获取最完整的源码
//www.Red-Union-Group.com
//HiJack2025@outlook.com 

void midmorcout(const string& midoutchar);
void clrcout(const string& text, int clr);
int  BJ_card_choose(int n1,int n2);
void midcout(const string& text);
void Wrong(const string& text);
int  BJ_outs_choose();
void Delay(int time);
void cardcout(int n);
int  BJ_make_num();
void ptcout();
int  waitEnter();
void now_time();
void marktime(int n); 
int  moneycout(int n);
void cinmoney(int n);
void ptcout_from();
void ptcin(int n);
int  clockget();
void clockcin();
void time_cin();
void time_cout();
void skill(int n);
void AAS_change();
int  New_choose();

void sc_1();
void sc_2();
void sc_3(int n);
void sc_4();
void sc_5();
void start_1();
void start_2();
int  start_3();
int  BJ_1();
int  BJ_2();
void BJ_3();
void BJ_4();
void BJ_5();
void BJ_6();
void BJ_ptget(int n);
int  BJ_chip_choose_1();
int  BJ_chip_choose_2(int n);
int  BJ_win_choose(int n1,int n2);

int  tax_choose_1(int n);
int  tax_choose_2(int n);
void tax_cin();
void tax_cout();

void GrowMoney();
int  GM_1();
int  GM_2();
void GM_3();
int  GM_pps_choose(int n);

void FlowMoney();
int  FM_2(); 
void FM_3();
int  FM_win_choose();
int  FM_outs_choose();

void td_1();
void td_2();
void time_stop();
int  time_choose();

char str[1000],Vchar[]={"Open"};
int v=6,Y=2025,M=4,fy=0,money=5000,pt,Card[2][15],Morcard[2],chip,card1,card2,card3,prps[4],pge[4],lochip=0;
int mark1,mark2,mark3,mark4,mark5,mark6,mark7=0,mark8=0,mark9,mark10=0,mark11,mark12,mark13=0;
int time_year,time_month,time_day,time_hour,time_min,time_week; 
int plntm_yer,plntm_mon,plntm_day,plntm_our,plntm_min;
int All_time,on_time,off_time,long_time,hom_time,sleep_time,used_time,skill_time[8]={0};
int tax_year_time,tax_month_time,tax_date_time;
long long pps;
int main()
{
	start_1();
	start_2();
}
void FlowMoney()
{
	mark10=1;
	if(GM_1()==0)return;
	while(FM_2()!=0)FM_3();
}
int FM_2()
{
	if(BJ_1()==0)return 0;
	system("cls");
	sc_2();
	if(BJ_2()==0)return 0;
	cout<<"押注金额: "<<chip<<endl<<endl;
	cout<<"正在生成不幸数...";
	srand(time(NULL));
	mark2=1+rand()%(9-2+1);
	Delay(2);
	system("cls");
	sc_2();
	cout<<"押注金额: "<<chip<<endl;
	cout<<"不幸数: "<<mark2<<endl;
	cout<<endl<<"正在生成幸运数...";
	mark1=1+rand()%(9-1+1);
	while(mark2==mark1)
	mark1=1+rand()%(9-1+1);
	Delay(1);
	lochip=chip;
	system("cls");
	sc_2(); 
	cout<<"押注金额: "<<chip<<endl;
	cout<<"不幸数: "<<mark2<<endl;
	cout<<"幸运数: "<<mark1<<endl;
	cout<<endl;
	cout<<"Enter 继续...";
	gets(str); 
	system("cls");
	sc_2();
	cout<<"赢金: "<<chip<<"	败金: "<<lochip<<endl; 
	cout<<"不幸数: "<<mark2<<"	幸运数: "<<mark1<<endl;
	cout<<endl<<"Enter 继续..."; 
	gets(str);
	if(chip==66)gets(str);
	system("cls");
	sc_2();
	cout<<"赢金: "<<chip<<"	败金: "<<lochip<<endl; 
	cout<<"不幸数: "<<mark2<<"	幸运数: "<<mark1<<endl;

	cout<<endl;
	cout<<"手牌: ";
	mark3=1+rand()%(10-1+1);
	mark6=1+rand()%(10-1+1);
	Card[0][0]=mark3;
	Card[0][1]=mark6;
	if(mark3>10)Morcard[0]=10;
	else Morcard[0]=mark3;
	if(mark6>10)Morcard[0]+=10;
	else Morcard[0]+=mark6;
	cardcout(Card[0][0]);
	cout<<"  ";
	cardcout(Card[0][1]);
	cout<<endl<<"总点: "<<Morcard[0]<<endl<<endl;
	mark11=FM_outs_choose();
	while(mark11==1)
	{
		cout<<"你希望补牌吗？";
		skill(8);
		if(waitEnter()!=1){mark11=16;break;}
		//waitEnter是等待回车函数，为了实现空格补牌  
		//返回 1 - 监测到用户按下空格
		//返回 0 - 监测到用户按下回车 
		mark4++;
		chip*=10;
		lochip*=2;
		mark3=1+rand()%(10-1+1);
		Card[0][mark4-1]=mark3;
		if(mark3>10)Morcard[0]+=10;
		else Morcard[0]+=mark3;
		system("cls");
		sc_2();
		cout<<"赢金: "<<chip<<"	败金: "<<lochip<<endl; 
		cout<<"不幸数: "<<mark2<<"	幸运数: "<<mark1<<endl;
		cout<<endl;
		cout<<"手牌: ";
		for(int i=0;i<mark4;i++)
		{cardcout(Card[0][i]);cout<<"  ";}
		cout<<endl<<"总点: "<<Morcard[0]<<endl<<endl;
		mark11=FM_outs_choose();
	}
	
	//以下为特殊情况 
	if(mark11==10)cout<<"你已经15张牌了，Enter 继续...";
	if(mark11==12)clrcout("你已经踩中幸运数，Enter 继续...",2);
	if(mark11==13)clrcout("你已经超过100点了，Enter 继续...",1);
	if(mark11==14)clrcout("你已经 Bright-Dot 了，Enter 继续...",2);
	if(mark11==15)cout<<"你的资金已经不再支持，Enter 继续...";
	if(mark11==16)
	{
		system("cls");
		sc_2();
		cout<<"赢金: "<<chip<<"	败金: "<<lochip<<endl; 
		cout<<"不幸数: "<<mark2<<"	幸运数: "<<mark1<<endl;

		cout<<endl;
		cout<<"手牌: ";
		for(int i=0;i<mark4;i++)
		{cardcout(Card[0][i]);cout<<"  ";}
		cout<<endl<<"总点: "<<Morcard[0]<<endl<<endl;
		cout<<"Enter 继续...";
	}
	if(mark11==17)clrcout("你已经踩中不幸倍数，Enter 继续...",1); 
	gets(str);
	return 1;
}
void FM_3()
{
	system("cls");
	sc_2();
	cout<<"赢金: "<<chip<<"	败金: "<<lochip<<endl; 
	cout<<"不幸数: "<<mark2<<"	幸运数: "<<mark1<<endl<<endl;
	cout<<"本局状况: ";
	mark12=FM_win_choose();
	if(mark12==1){clrcout("成功",2);}
	if(mark12==0){clrcout("失败",1);}
	if(mark12==2){clrcout("奖励",2);}
	cout<<endl<<"Bemoney:  ";moneycout(1);
	if(mark12==1){cout<<"+"<<chip<<"=";money+=chip;}
	if(mark12==0){cout<<"-"<<lochip<<"=";money-=lochip;}
	if(mark12==2){cout<<"+"<<chip<<"×"<<mark1<<"=";money+=(chip*mark1);}
	cinmoney(money);
	moneycout(1);cout<<endl<<endl;
	cout<<"Enter 继续...";
	gets(str);
}
int FM_win_choose()
{
	if(mark11==17||mark11==13)return 0;
	if(mark11==10||mark11==15||mark11==16)return 1;
	return 2;
}

//是否可补牌判断  
int FM_outs_choose()
{
	if(Morcard[0]==mark1*11)return 12;
	if(Morcard[0]%mark2==0)return 17;
	if(Morcard[0]>100)return 13;
	if(Morcard[0]==100)return 14;
	if(lochip*2>money)return 15;
	if(mark4==15)return 10;
	return 1;
}
void GrowMoney()
{
	if(GM_1()==0)return;
	while(GM_2()!=0)GM_3();
}
int GM_1()
{
	if(money==0)
	{
		system("cls");
		sc_2();
		cout<<endl;
		Wrong("已经没有 Bemoney.");
		gets(str);
		mark10=0;
		return 0;
	}
	if(money<12000||pt<2)
	{
		system("cls");
		sc_2();
		mark1=0;mark2=0;
		cout<<endl<<"进入 ";
		if(mark10==0)cout<<"Grow Money";
		else cout<<"Flow Money";
		cout<<" 需要达到以下条件:"<<endl;
		cout<<endl;
		if(money<12000)mark1=1;
		if(pt<2)mark2=1;
		clrcout("· Bemoney 达到 12000.",mark1);cout<<endl;
		clrcout("· 等级达到2级富豪.",mark2); 
		mark10=0;
		mark1=0;
		mark2=0;
		gets(str);
		skill(7);
		return 0;
	}
	
	money-=5000;
	cinmoney(money);
	return 1;
}
int GM_2()
{
	time_stop();
	if(money<5000)return 0;
	fy++;
	system("cls");
	sc_2();
	cout<<endl;
	cout<<"目前奖池: ";
	srand(time(NULL));
	mark3=1+rand()%(120-10+1);
	mark4=1+rand()%(120-10+1);
	mark5=1+rand()%(120-10+1);
	mark6=1+rand()%(120-10+1);
	pps=mark3*mark4*mark5*mark6/1000*1000;
	cout<<pps<<endl;
	cout<<"投入奖池: 5000×";
	cin>>mark1;
	mark2=GM_pps_choose(mark1);
	while(mark2!=1)
	{
		if(mark2==0)return 0;
		system("cls");
		sc_2();
		mark3=0;mark4=0;mark5=0;
		if(mark2==10)mark3=1;
		if(mark2==11)mark4=1;
		if(mark2==12)mark5=1;
		cout<<endl<<"投入奖池的金币要达到以下要求:"<<endl<<endl;
		clrcout("· 不超过30个.",mark3);cout<<endl;
		clrcout("· 不能为0.",mark4);cout<<endl;
		clrcout("· 不能超您的 Bemoney.",mark5);cout<<endl;
		cout<<endl<<"Enter 重新输入...";
		gets(str);
		gets(str);
		system("cls");
		sc_2();
		cout<<endl<<"目前奖池: ";
		cout<<pps<<endl;
		cout<<"投入奖池: 5000×";
		cin>>mark1;
		mark2=GM_pps_choose(mark1);
	}
	system("cls");
	sc_2();
	cout<<endl<<"目前奖池: "<<pps<<endl;
	cout<<"投入奖池: "<<mark1*5000;
	money-=(mark1*5000);
	cinmoney(money);
	gets(str);
	gets(str);
	system("cls");
	sc_2();
	cout<<endl<<"目前奖池: ";
	pps+=(mark1*5000);
	cout<<pps<<endl;
	cout<<endl<<endl<<"正在分配百分比...";
	Delay(1);
	system("cls");
	sc_2();
	cout<<endl<<"目前奖池: ";
	cout<<pps<<endl;
	cout<<"百分比值: ";
	srand(time(NULL));
	mark3=1+rand()%(6-1+1);
	if(mark3!=6)
	{
		if(mark3%2==0)mark3=mark1*3+mark3/2;
		else mark3=mark1*3-mark3/2; 
	}
	else
	mark3=mark1*3/2+(100-mark1*3/2)*0.3;
	cout<<mark3<<"%"<<endl;
	cout<<endl<<"正在流入市场...";
	Delay(3);
	system("cls");
	sc_2();
	cout<<endl<<"目前奖池: ";
	cout<<pps<<endl;
	cout<<"百分比值: "<<mark3<<"%";
	cout<<endl<<"市场情况: ";
	srand(time(NULL));
	mark6=1+rand()%(10-1+1);
	if(mark6==1)mark4=2;
	else if(mark6<5)mark4=0;
	else mark4=1;
	if(mark4==1)clrcout("正增长",2);
	if(mark4==2)clrcout("零增长",3);
	if(mark4==0)clrcout("负增长",1);
	cout<<endl;
	Delay(1);
	return 1;
}
void GM_3()
{
	if(mark4==1){cout<<"盈利金额: ";money=money+(pps*mark3/10000*100);}
	if(mark4==0){cout<<"亏损金额: ";money=money-(pps*mark3/10000*100);}
	if(mark4!=2)cout<<pps<<"×"<<mark3<<"%="<<pps*mark3/10000*100<<endl;
	cinmoney(money);
	cout<<"Bemoney:  ";
	if(money>=0)moneycout(1);
	else {clrcout("资不抵债",1);cinmoney(0);money=0;}
	gets(str);
}
int GM_pps_choose(int n)
{
	if(n==66)return 0;
	if(n>30)return 10;
	if(n==0)return 11;
	if(n*5000>money)return 12;
	return 1;
}
void Again()
{
	cout<<endl<<"你希望重新启动吗(Y/N)？";
	gets(str);
	if(strcmp(str,"y")&&strcmp(str,"Y"))return;
	system("cls");
	sc_2();
	cout<<endl<<"正在重启..";
	for(int i=0;i<3;i++)
	{cout<<".";Delay(1);}
	Delay(1);
	system("cls");
	midmorcout("Red-Union-Group");
	Delay(1);
	system("cls");
	start_1();
}
void New_must()
{
	return;//由于代码兼容问题，我们不能公开判断产品过期的公式  
	midmorcout("你的版本不再支持");
	cout<<endl;
	midcout("-- 你的版本已过支持时间，下载最版本或终极版以保证产品安全和体验效果 --");
	Delay(3);
	system("start www.red-union-group.com/Begame-Time_1.asp");
	for(int i=0;i<1;i+=0) 
	{
		gets(str);
		midmorcout("你的版本不再支持");
		cout<<endl;
		midcout("-- 你的版本已过支持时间，下载最新版本或终极版以保证产品安全和体验效果 --");
	}
}
void New()
{
	system("cls");
	sc_1();
	cout<<endl;
	cout<<"正在检查更新...";
	Delay(2);
	system("cls");
	sc_1();
	cout<<endl;
	if(New_choose()==0) 
	{clrcout("可能已是最新版本，没有更新计划.",2);cout<<endl<<endl<<"但是建议前往 Begame-Time 官方网站以确保获得最新体验.";}
	else clrcout("可能有更新计划，请前往 Begame-Time 官方网站以确保获取最新体验.",1);
	cout<<endl<<"目前版本: Begame-Time-"<<Vchar<<"-V."<<v;
	Delay(1);
	cout<<endl<<endl<<endl;
	cout<<"(1)退出"<<endl;
	cout<<"(2)打开 Begame-Time 官方网站"<<endl<<endl;
	cout<<"输入指令: ";
	gets(str);
	if(strcmp(str,"2")==0)system("start www.red-union-group.com/Begame-Time_1.asp");
	return;
}
int New_choose()
{
	return 0;//由于代码兼容问题，此处并不公开展示 
}
void Contact()
{
	midmorcout("成为第一批支持我们的用户");
	Delay(2);
	system("cls");
	sc_1();
	cout<<endl;
	cout<<"官方网站: www.Red-Union-Group.com"<<endl;
	cout<<"联系我们: HiJack2025@outlook.com"<<endl;
	Delay(1);
	cout<<endl<<endl;
	cout<<"(1)前往 Begame-Time 官方网站"<<endl;
	cout<<"(2)返回"<<endl;
	cout<<endl;
	cout<<"输入指令: ";
	gets(str);
	if(strcmp(str,"1")==0)system("start www.Red-Union-Group.com");
}
void Skill_does()
{
	system("cls");
	sc_1();
	cout<<endl;
	clrcout("初次教程在第二次打开游戏后默认关闭.",2);
	cout<<endl<<endl;
	cout<<"(1)打开初次教程"<<endl;
	cout<<"(2)关闭初次教程"<<endl;
	cout<<"(3)联系我们"<<endl;
	cout<<"(4)退出"<<endl;
	cout<<endl;
	cout<<"输出指令: ";
	gets(str);
	if(strcmp(str,"1")==0)mark13=1;
	if(strcmp(str,"2")==0)mark13=0;
	if(strcmp(str,"3")==0)Contact();
}
void tax_does()
{
	now_time();
	tax_cin();//上次缴税的日期 
	int n=(time_year-tax_year_time)*365+(time_month-tax_month_time)*30+(time_day-tax_date_time);
	int n1=tax_choose_1(money);
	int n2=tax_choose_2(n1);
	//n - 未缴税的天数 
	//n1- 缴税的等级
	//n2- 缴税的数额 
	for(int i=0;i<n;i++)
	money=money-(money*n2/100);
	cinmoney(money); 
	tax_cout();
} 
void tax()
{
	system("cls");
	sc_2();
	cout<<endl;
	cout<<"BTTO (Begame-Time Tax Office)"<<endl;
	cout<<endl;
	int n1=tax_choose_1(money);
	int n2=tax_choose_2(n1);
	cout<<"税务等级: "<<n1<<"级税务"<<endl;
	cout<<"所得税率: "<<n2<<".00 %"<<endl;
	cout<<"缴税情况: 已自动缴税";
	cout<<endl<<endl;
	cout<<"Enter 返回...";
	gets(str); 
}
int tax_choose_1(int n)
{
	if(n<100)return 0;
	if(n<10000)return 1;
	if(n<35000)return 2;
	if(n<72000)return 3;
	if(n<100000)return 4;
	if(n<240000)return 5;
	if(n<810000)return 6;
	if(n<1000000)return 7;
	if(n<3300000)return 8;
	if(n<9800000)return 9;
	return 10;
}
int tax_choose_2(int n)
{
	if(n==0)return 0;
	if(n==1)return 5;
	if(n==2)return 10;
	if(n==3)return 13;
	if(n==4)return 17;
	if(n==5)return 18;
	if(n==6)return 19;
	if(n==7)return 22;
	if(n==8)return 23;
	if(n==9)return 25;
	if(n==10)return 30;
}
void AAS()
{
	system("cls");
	sc_1();
	time_cin();
	cout<<endl;
	cout<<"Anti-Addiction System (AAS)"<<endl<<endl;
	
	cout<<"状态: ";
	if(All_time==1)cout<<"Turn on(开启)";
	if(All_time==0)cout<<"Turn off(关闭)";
	
	cout<<endl;
	cout<<"密码设置: ";
	if(hom_time==1)cout<<"Turn on(开启)";
	if(hom_time==0)cout<<"Turn off(关闭)";
	
	cout<<endl;
	cout<<"限制时段: ";
	if(All_time==0)cout<<"None(没有)";
	if(All_time==1)cout<<on_time<<":00 - "<<off_time<<":00";
	
	cout<<endl;
	cout<<"限制时长: ";
	if(All_time==0)cout<<"None(没有)";
	if(All_time==1)cout<<long_time<<" Minute";
	
	cout<<endl;
	cout<<"休息时长: ";
	if(All_time==0)cout<<"None(没有)";
	if(All_time==1)cout<<sleep_time<<" Minute";
	
	cout<<endl<<endl<<endl;
	
	cout<<"(1)退出"<<endl;
	cout<<"(2)更改设置"<<endl<<endl;
	cout<<"输入指令: ";
	gets(str);
	if(strcmp(str,"2"))return;
	AAS_change();
}
void AAS_change()
{
	system("cls");
	sc_1();
	cout<<endl;
	cout<<"Anti-Addiction System (AAS)"<<endl;
	cout<<"*部分设置无法更改，我们会在以后的版本中不断更新...";
	Delay(1);
	system("cls");
	sc_1();
	cout<<endl;
	cout<<"Anti-Addiction System (AAS)"<<endl<<endl;
	
	cout<<"状态(Y/N): ";gets(str);
	if(strcmp(str,"y")&&strcmp(str,"Y")){All_time=0;time_cout();return;}
	All_time=1;
	
	cout<<"状态: Turn on(开启)"<<endl;
	cout<<"密码设置: Turn off(关闭)"<<endl;
	cout<<"限制时段: None(没有)"<<endl;
	
	cout<<"限制时长: ";cin>>long_time;
	cout<<"休息时长: ";cin>>sleep_time;
	cout<<endl<<endl;
	cout<<"Enter 完成...";
	gets(str);
	gets(str);
	time_cout();
	AAS();
}
void About()
{
	system("cls");
	sc_1();
	cout<<endl;
	cout<<"Company:  Red-Union-Group"<<endl;
	cout<<"Technic:  Ma Kaijie"<<endl;
	cout<<"CTO:	  Allen"<<endl;
	cout<<"程序:	  Begame-Time-"<<Vchar<<"-V."<<v<<endl;
	cout<<"系列:	  Begame-Time-Series"<<endl;
	cout<<"版本号:	  V."<<v<<endl; 
	cout<<"版本码:	  "<<Vchar<<endl;
	cout<<"出版时间: "<<Y<<"-"<<M<<endl;
	cout<<"支持系统: Microsoft Windows"<<endl;
	cout<<"官方网址: www.Red-Union-Group.com"<<endl; 
	cout<<"联系我们: HiJack2025@outlook.com"<<endl; 
	cout<<endl;
	Delay(1);
	cout<<"· 关于 Begame-Time 的解释权归 Red-Union-Group 所有."<<endl;
	cout<<endl<<"Enter 返回...";
	gets(str);
	return;
}
void Clock()
{
	system("cls");
	if(clockget()==1)
	{
		cout<<endl;
		midmorcout("今日已打卡");
		Delay(1);
		return;
	}
	sc_2();
	cout<<endl<<"Enter 开始打卡...";
	gets(str); 
	if(strcmp(str,"66")==0)return;
	Delay(1);
	system("cls");
	money+=3000;
	cinmoney(money);
	midmorcout("打卡成功");
	clockcin();
	Delay(1);
	system("cls");
	sc_2();
	cout<<endl<<"Bemoney+3000";
	gets(str);
	system("cls");
	midmorcout("今日已打卡");
	Delay(1);
}
void BlackJack()
{
	while(BJ_1()!=0)
	{
		if(BJ_2()==0)return;
		BJ_3();
		BJ_4(); 
		BJ_5();
		BJ_6();
	}
}
int BJ_1()
{
	time_stop();
	fy++;
	mark4=2;
	mark5=2;
	mark9=0;
	for(int i=0;i<2;i++)
	for(int j=0;j<5;j++)
	Card[i][j]=0;
	Morcard[0]=0;
	Morcard[1]=0;
	system("cls");
	sc_2();
	if(money==0)
	{	
		cout<<endl;
		Wrong("已经没有 Bemoney.");
		gets(str);
		return 0;
	}
	else return 1;
}
int BJ_2()
{
	cout<<endl<<"押注金额: ";
	skill(2);
	gets(str);
	if(strcmp(str,"A")==0){system("cls");sc_2();chip=money;return 1;}
	else mark1=BJ_make_num();
	//输入 A 全赌，如果不是则进行字符与数字转化 
	
	if(mark1==66)
	{
		cout<<"确认退出: ";
		cin>>mark2;
		if(mark1==mark2)return 0;
	}
	mark9=BJ_chip_choose_1();
	if(mark9==0)return 0;
	if(mark9==2){system("cls");sc_2();chip=money;return 1;}
	while(mark1*100/money>=90)
	{
		cout<<endl<<"注意: 押注金额已经占 Bemoney 的"<<mark1*100/money<<"%，我们需要启动安全确认...";
		gets(str);
		system("cls");
		sc_2();
		cout<<endl<<"押注金额: "<<mark1<<endl<<"确认金额: ";
		cin>>mark3;
		if(mark1!=mark3)
		{
			cout<<endl;
			Wrong("两次输入不相同.");
			cout<<endl<<"Enter 重新输入...";
			gets(str);
			gets(str);
			system("cls");
			sc_2();
			cout<<endl<<"押注金额: ";
			gets(str);
			if(strcmp(str,"A")==0){system("cls");sc_2();chip=money;return 1;}
			else mark1=BJ_make_num();
			if(mark1==66)
			{
				cout<<"确认退出: ";
				cin>>mark2;
				if(mark1==mark2)return 0;
			}
			mark9=BJ_chip_choose_1();
			if(mark9==0)return 0;
			if(mark9==2){system("cls");sc_2();chip=money;return 1;}
		}
		else break; 
	}
	system("cls");
	sc_2();
	chip=mark1;
	return 1;
}
void BJ_3()
{
	if(mark8==0)cout<<"押注金额: "<<chip;
	if(mark8==1)cout<<"-- Regal Challenge --";
	cout<<endl<<endl;
	Delay(1);
	cout<<"手牌: ";
	srand(time(NULL));
	card1=1+rand()%(15-1+1);
	card2=1+rand()%(15-1+1);
	cardcout(card1);
	cout<<"  ";
	cardcout(card2);
	Card[0][0]=card1;
	Card[0][1]=card2;
	if(card1>10)Morcard[0]=10;
	else Morcard[0]=card1;
	if(card2>10)Morcard[0]+=10;
	else Morcard[0]+=card2;
	if(BJ_card_choose(card1,card2)==1)
	Morcard[0]=21;
	cout<<endl<<"总点: "<<Morcard[0];
	cout<<endl<<endl;
}
void BJ_4()
{
	mark1=BJ_outs_choose();
	while(mark1==1)
	{
		cout<<"你希望补牌吗？";
		skill(4);
		if(waitEnter()!=1)break;
		mark4++;
		card2=1+rand()%(15-1+1);
		Card[0][mark4-1]=card2;
		if(card2>10)Morcard[0]+=10;
		else Morcard[0]+=card2;
		system("cls");
		sc_2();
		if(mark8==0)cout<<"押注金额: "<<chip;
		if(mark8==1)cout<<"-- Regal Challenge --"; 
		cout<<endl<<endl;
		cout<<"手牌: ";
		for(int i=0;i<mark4;i++)
		{cardcout(Card[0][i]);cout<<"  ";}
		cout<<endl<<"总点: "<<Morcard[0];
		cout<<endl<<endl;
		mark1=BJ_outs_choose();
	} 
	if(mark1==1)
	{
		system("cls");
		sc_2();
		if(mark8==0)cout<<"押注金额: "<<chip;
		if(mark8==1)cout<<"-- Regal Challenge --";
		cout<<endl<<endl;
		cout<<"手牌: ";
		for(int i=0;i<mark4;i++)
		{cardcout(Card[0][i]);cout<<"  ";}
		cout<<endl<<"总点: "<<Morcard[0];
		cout<<endl<<endl;
		cout<<"Enter 开牌...";
	}
	if(mark1==10)clrcout("你已经 BlackJack 了，Enter 开牌...",2);
	if(mark1==11)cout<<"你已经21点了，Enter 开牌...";
	if(mark1==12)cout<<"你已经超过21点了，Enter 开牌...";
	if(mark1==13)clrcout("你已经 Five-Card Charlie 了，Enter 开牌...",2);
	gets(str);
}
void BJ_5()
{
	card1=1+rand()%(15-1+1);
	card2=1+rand()%(15-1+1);
	Card[1][0]=card1;
	Card[1][1]=card2;
	if(card1>10)Morcard[1]=10; else Morcard[1]=card1;
	if(card2>10)Morcard[1]+=10;else Morcard[1]+=card2;
	while(Morcard[1]<16&&mark5<5)
	{
		card3=1+rand()%(15-1+1);
		mark5++;
		if(card3>10)Morcard[1]+=10;
		else Morcard[1]+=card3;
		Card[1][mark5-1]=card3;
	}
	while((Morcard[1]==16||Morcard[1]==17)&&mark5<5)
	{
		mark1=1+rand()%(2-1+1);
		if(mark1==1)
		{
			card3=1+rand()%(15-1+1);
			mark5++;
			if(card3>10)Morcard[1]+=10;
			else Morcard[1]+=card3;
			Card[1][mark5-1]=card3;
		} 
		else break;
	}
	system("cls");
	sc_2();
	if(mark8==0)cout<<"押注金额: "<<chip;
	if(mark8==1)cout<<"-- Regal Challenge --";
	cout<<endl<<endl;
	cout<<"我方手牌: ";
	for(int i=0;i<mark4;i++){cardcout(Card[0][i]);cout<<"  ";}
	cout<<endl<<"我方总点: "<<Morcard[0];
	cout<<endl<<endl;
	cout<<"对方手牌: ";
	for(int i=0;i<mark5;i++){cardcout(Card[1][i]);cout<<"  ";}
	cout<<endl<<"对方总点: "<<Morcard[1];
	cout<<endl<<endl<<"本局情况: ";
	mark1=BJ_win_choose(Morcard[0],Morcard[1]);
	if(mark1==0)clrcout("失败",1);
	if(mark1==1)clrcout("胜利",2);
	if(mark1==2)clrcout("平局",4);
	if(mark8==0)
	{	
		cout<<endl<<"Bemoney:  ";moneycout(1);
		if(mark1==0){cout<<"-";money-=chip;}
		if(mark1==1){cout<<"+";money+=chip;}
		cinmoney(money);
		if(mark1!=2){cout<<chip<<"=";moneycout(1);}
	}
	if(mark8==1)
	if(mark1==1)
	{
		cout<<endl<<"获得荣誉: 富豪证、Bemoney"<<endl;
		cout<<"Bemoney:  ";moneycout(1);cout<<"+";moneycout(1);cout<<"×";
		if(money>=5000000){cout<<"70%=";money=money*70/100+money;}
		else if(money>=100000){cout<<"50%=";money=money*50/100+money;}
		else {cout<<"30%=";money=money*30/100+money;}
		cinmoney(money);
		moneycout(1);
	}
	skill(5);
	gets(str);
	if(mark8==1)
	{
		system("cls");
		if(mark1==1)midmorcout("恭喜，成功了");
		else midmorcout("很遗憾，没有成功");
		Delay(1);
	}
}
void BJ_6()
{
	if(money>=1000000000&&pt<10&&mark7==0)BJ_ptget(10);
	else if(money>=10000000&&pt<9&&mark7==0)BJ_ptget(9);
	else if(money>=5000000&&pt<8&&mark7==0)BJ_ptget(8);
	else if(money>=1000000&&pt<7&&mark7==0)BJ_ptget(7);
	else if(money>=700000&&pt<6&&mark7==0)BJ_ptget(6);
	else if(money>=300000&&pt<5&&mark7==0)BJ_ptget(5);
	else if(money>=100000&&pt<4&&mark7==0)BJ_ptget(4);
	else if(money>=50000&&pt<3&&mark7==0)BJ_ptget(3);
	else if(money>=20000&&pt<2&&mark7==0)BJ_ptget(2);
	else if(money>=7000&&pt<1&&mark7==0)BJ_ptget(1);
}
void BJ_ptget(int n)
{
	cout<<endl;
	clrcout("你的 Bemoney 已经足以参加 Regal Challenge 了...",2);
	skill(5);
	gets(str);
	system("cls");
	midcout("Regal Challenge");
	cout<<endl<<endl;
	cout<<"-- 介绍 --"<<endl;
	cout<<"欢迎来到富豪挑战赛，你将从平民起步，逐步积累财富和经验，每次挑战成功后会得到相应的奖励，并且离最终目标越来越近，最终晋升至10级富豪，成为经济领域的顶级人才。";
	cout<<endl<<endl;
	cout<<"-- 等级 --"<<endl;
	cout<<"·1级富豪  	所需 Bemoney:7000		获得荣誉: 富豪证、30% Bemoney"<<endl;
	cout<<"·2级富豪  	所需 Bemoney:20000		获得荣誉: 富豪证、30% Bemoney"<<endl;
	cout<<"·3级富豪  	所需 Bemoney:50000		获得荣誉: 富豪证、30% Bemoney"<<endl;
	cout<<"·4级富豪 	所需 Bemoney:100000		获得荣誉: 富豪证、50% Bemoney"<<endl;
	cout<<"·5级富豪  	所需 Bemoney:300000		获得荣誉: 富豪证、50% Bemoney"<<endl;
	cout<<"·6级富豪  	所需 Bemoney:700000		获得荣誉: 富豪证、50% Bemoney"<<endl;
	cout<<"·7级富豪  	所需 Bemoney:1000000		获得荣誉: 富豪证、50% Bemoney"<<endl;
	cout<<"·8级富豪  	所需 Bemoney:5000000		获得荣誉: 富豪证、70% Bemoney"<<endl;
	cout<<"·9级富豪  	所需 Bemoney:10000000		获得荣誉: 富豪证、70% Bemoney"<<endl;
	cout<<"·10级富豪  	所需 Bemoney:1000000000		获得荣誉: 富豪证、70% Bemoney"<<endl;
	cout<<endl;
	cout<<"你已经拥有";moneycout(1);cout<<" Bemoney，可以挑战当"<<n<<"级富豪。"<<endl;
	cout<<"你希望参加吗(Y/N/A)？";
	skill(6);
	gets(str);
	if(strcmp(str,"a")==0||strcmp(str,"A")==0)return;
	if(strcmp(str,"Y")&&strcmp(str,"y"))
	{
		clrcout("拒绝富豪挑战赛后将永久禁入，是否接受富豪挑战赛的邀请(Y/N/A)？",1);
		gets(str);
		if(strcmp(str,"a")==0||strcmp(str,"A")==0)return;
		if(strcmp(str,"y")&&strcmp(str,"Y")){mark7=1;return;}
	}
	mark8=1;
	system("cls");
	midmorcout("Regal Challenge");
	Delay(1);
	BJ_1();
	BJ_3();
	BJ_4();
	BJ_5();
	if(mark1==1){pt=n;ptcin(pt);}
	mark8=0;
}
int BJ_win_choose(int n1,int n2)//输赢判断 
{
	if(BJ_card_choose(Card[0][0],Card[0][1])==1&&BJ_card_choose(Card[1][0],Card[1][1])==0)
	return 1;
	if(BJ_card_choose(Card[0][0],Card[0][1])==0&&BJ_card_choose(Card[1][0],Card[1][1])==1)
	return 0;
	if(mark4==5&&Morcard[0]<=21&&mark5!=5)
	return 1;
	if(mark4!=5&&mark5==5&&Morcard[1]<=21)
	return 0;
	if(n1<=21&&n2<=21)
	{
		if(n1>n2)return 1;
		if(n2>n1)return 0;
		if(n1==n2)
		{
			
			return 2;
		}
	}
	if(n1<=21&&n2>21)
	return 1;
	if(n1>21&&n2<=21)
	return 0;
	if(n1>21&&n2>21)
	return 2;
}
int BJ_outs_choose()
{
	if(BJ_card_choose(Card[0][0],Card[0][1])==1)return 10;
	if(Morcard[0]==21)return 11;
	if(Morcard[0]>21)return 12;
	if(mark4==5)return 13;
	return 1;
}
int BJ_card_choose(int n1,int n2)
{
	if(n1==1)
	{
		if(n2==1)return 1;
		if(n2>=10)return 1;
	}
	if(n2==1)
	{
		if(n1==1)return 1;
		if(n1>=10)return 1;
	}
	return 0;
}
int BJ_chip_choose_1()
{
	mark2=BJ_chip_choose_2(mark1);
	while(mark2!=1)
	{
		cout<<endl;
		if(mark2==10)Wrong("押注金额小于等于0.");
		if(mark2==11)Wrong("押注金额不能大于 Bemoney.");
		cout<<endl<<"Enter 重新输入...";
		gets(str);
		system("cls");
		sc_2();
		cout<<endl<<"押注金额: ";
		gets(str);
		if(strcmp(str,"A")==0)return 2;
		else mark1=BJ_make_num();
		if(mark1==66)
		{
			cout<<"确认退出: ";
			cin>>mark2;
			if(mark1==mark2)return 0;
		}
		mark2=BJ_chip_choose_2(mark1);
	}
	return 1;
}
int BJ_chip_choose_2(int n)
{
	if(n<=0)return 10;
	if(n>money)return 11;
	return 1;
}
void start_1()
{
	sc_1();
	time_cin();
	used_time++;
	if(used_time==1)mark13=1;//初次教学打开 
	skill(1);//初次教学 
	gets(str);
	system("cls");
	midmorcout("Begame-Time");
	Delay(2);
	system("cls");
	midmorcout("Red-Union-Group");
	Delay(1);
	if(used_time==1)
	{
		sc_3(0);
		gets(str);
		system("cls");
		sc_3(1);
		gets(str);
		tax_cout();
	}
	New_must();//是否依然支持产品的判断  
	time_cout();
	money=moneycout(2);
	ptcout_from();
	fy=0;
	marktime(long_time);
	tax_does();
}
void start_2()
{
	
	mark1=1000;
	do{
		if(mark1==1)BlackJack();
		if(mark1==2)GrowMoney();
		if(mark1==3)FlowMoney();
		if(mark1==4)Clock();
		if(mark1==5)Again(); 
		if(mark1==6)New();
		if(mark1==7){sc_3(0);gets(str);}
		if(mark1==8)Contact();
		if(mark1==9)AAS();
		if(mark1==10)Skill_does();
		if(mark1==11)tax();
		if(mark1==12)About();
		time_stop();
		system("cls");
		sc_2();
		mark1=start_3();
	}while(mark1!=0);
}
int start_3()
{
	sc_4();
	cout<<endl<<"进入游戏: ";
	skill(3);
	gets(str);
	if(strcmp(str,"BlackJack")==0||strcmp(str,"1")==0)return 1;
	if(strcmp(str,"Grow Money")==0||strcmp(str,"2")==0)return 2;
	if(strcmp(str,"Flow Money")==0||strcmp(str,"3")==0)return 3;
	if(strcmp(str,"Clock Money")==0||strcmp(str,"4")==0)return 4;
	if(strcmp(str,"重新启动")==0||strcmp(str,"5")==0)return 5;
	if(strcmp(str,"检查更新")==0||strcmp(str,"6")==0)return 6;
	if(strcmp(str,"条款声明")==0||strcmp(str,"7")==0)return 7;
	if(strcmp(str,"联系我们")==0||strcmp(str,"8")==0)return 8;
	if(strcmp(str,"屏幕限制")==0||strcmp(str,"9")==0)return 9;
	if(strcmp(str,"初次教程")==0||strcmp(str,"10")==0)return 10;
	
	if(strcmp(str,"BTTO")==0||strcmp(str,"11")==0)return 11;
	if(strcmp(str,"关于")==0||strcmp(str,"12")==0)return 12;
	while(strcmp(str,"exit")==0||strcmp(str,"0")==0)
	{
		cout<<"你希望退出吗？";
		gets(str);
		if(strcmp(str,"")==0)
		{
			system("cls");
			midmorcout("你已经退出 Begame-Time.");
			Delay(1);
			return 0;
		}
		else return 10000;
	}
	return 1000;
}
void sc_1()
{
	cout<<"Begame-Time	   -  Company	   Red-Union-Group"<<endl;
	cout<<"Version: Open."<<v<<"    -  Technician   Ma Kaijie"<<endl;
	cout<<"Version: Open."<<v<<"    -  CTO          Allen"<<endl;
	cout<<"====================================================="<<endl;
}
void sc_2()
{
	cout<<"Begame-Time          -     Red-Union-Group"<<endl;
	cout<<"Frequency: 第"<<used_time<<"回   ";
	if(used_time<10)cout<<" ";
	if(used_time<100)cout<<" ";
	cout<<"-     ";ptcout();cout<<endl;
	cout<<"Frequency: ";
	if(fy==0)cout<<"未开始";
	else     cout<<"第"<<fy<<"次 ";
	if(fy<10)cout<<" ";
	if(fy<100)cout<<" ";
	cout<<"  -     Bemoney: ";moneycout(1);cout<<"$"<<endl;
	cout<<"====================================================="<<endl;
}
void sc_3(int n)
{
	system("cls");
	midcout("条款声明");
	cout<<endl<<endl;
	cout<<"首先，感谢您使用 Begame-Time-Open 。在此，我们必须特别声明的是，我们的服务仅限娱乐。在使用我们的服务之前，请先阅读、理解并同意遵守我们的条款声明，以保证您的心理健康和合法权益不受侵犯。"<<endl; 
	cout<<"条款如下：";
	cout<<endl<<endl;
	cout<<"-- 政府条款 --";
	cout<<endl<<"· 《中华人民共和国刑法》第303条"; 
	cout<<endl<<"· 《治安管理处罚法》第70条";
	cout <<endl<<endl;
	cout<<"-- 使用准则 --";
	cout<<endl<<"· 该游戏只限于游戏中虚拟货币的交换，不得进行任何形式的实际货币交易和违法活动。";
	cout<<endl<<"· 该游戏只以娱乐为目的，没有任何盈利目的，仅限娱乐，无引不良。";
	cout<<endl<<"· 用户只能将该游戏用于合法娱乐，禁止利用该游戏进行违法活动。" ;
	cout<<endl<<"· 知法守法，禁止赌博。";
	cout<<endl<<"· 该游戏解释权归 Red-Union-Group 所有。";
	cout<<endl<<"· 该开源码归 Red-Union-Group 所有。";
	cout<<endl<<endl<<endl;
	if(n==0){clrcout("您一旦开始使用了我们服务，即代表用户已经阅读、理解，并同意遵守我们的条款声明。",1);cout<<endl;}
	if(n==0)clrcout("且下次登录会默认同意该条款。",1);
	if(n==1)clrcout("该游戏由 Ma Kaijie 单人完成，如果觉得不错，可用联系我们！感谢使用！",2);
	cout<<endl;
	cout<<endl<<"Enter 开始...";
}
void sc_4()
{
	cout<<endl;
	cout<<"(1) BlackJack"<<endl;
	cout<<"(2) Grow Money"<<endl;
	cout<<"(3) Flow Money"<<endl;
	cout<<"(4) Clock Money"<<endl;
	cout<<"(5) 重新启动"<<endl;
	cout<<"(6) 检查更新"<<endl;
	cout<<"(7) 条款声明"<<endl;
	cout<<"(8) 联系我们"<<endl;
	cout<<"(9) 屏幕限制"<<endl;
	cout<<endl;
	
	cout<<"(10)初次教学"<<endl;
	cout<<"(11)BTTO"<<endl;
	cout<<"(12)关于"<<endl;
	cout<<"(0) exit(退出)"<<endl;
}
void midmorcout(const string& midoutchar)//屏幕正中输出 
{
    system("cls");
    HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
    if(hOut==INVALID_HANDLE_VALUE)
    {
        cerr<<"Failed to get standard output handle."<<endl;
        return;
    }
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if(!GetConsoleScreenBufferInfo(hOut, &csbi))
    {
        cerr<<"Failed to get console screen buffer info."<<endl;
        return;
    }
    int screenWidth=csbi.srWindow.Right-csbi.srWindow.Left+1;
    int screenHeight=csbi.srWindow.Bottom-csbi.srWindow.Top+1;
    COORD position;
    position.X=max(0,(screenWidth-static_cast<int>(midoutchar.length())) / 2);
    position.Y=screenHeight/2;
    SetConsoleCursorPosition(hOut, position);
    cout<<midoutchar;
}
void midcout(const string& text)
{
	int n=text.size();
	n=(98-n)/2;
	for(int i=0;i<n;i++)
	cout<<" ";
	cout<<text;
}
void clrcout(const string& text, int clr)//颜色输出 
{
    #ifdef _WIN32
    HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    switch(clr)
	{
		case 1:
	    SetConsoleTextAttribute(hConsole,FOREGROUND_RED);//1-Red
        break;
        case 2:
        SetConsoleTextAttribute(hConsole,FOREGROUND_GREEN);//2-Green
        break;
    	case 3:
        SetConsoleTextAttribute(hConsole,FOREGROUND_RED | FOREGROUND_GREEN);//3-Yellow
        break;
    	case 4:
        SetConsoleTextAttribute(hConsole,FOREGROUND_BLUE);//4-Blue
        break;
        default:
        SetConsoleTextAttribute(hConsole,FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);//other-White
        break;
    }
    cout<<text;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    #else
    switch(clr)
	{
        case 1:
        cout<<"\033[31m"<<text<<"\033[0m"<<endl;//Red
        break;
        case 2:
        cout<<"\033[32m"<<text<<"\033[0m"<<endl;//Green
        break;
    	case 3:
        cout<<"\033[33m"<<text<<"\033[0m"<<endl;//Yellow
        break;
    	case 4:
        cout<<"\033[34m"<<text<<"\033[0m"<<endl;//Blue
        break;
        default:
        cout<<text;//White
        break;
    }
    #endif
}
void Delay(int time)//等待 
{ 
	time*=1000;
	clock_t now=clock(); 
	while(clock()-now<time); 
}
void ptcout()
{
	if(pt==1)clrcout("1",2);
	if(pt==2)clrcout("2",2);
	if(pt==3)clrcout("3",2);
	if(pt==4)clrcout("4",2);
	if(pt==5)clrcout("5",2);
	if(pt==6)clrcout("6",2);
	if(pt==7)clrcout("7",2);
	if(pt==8)clrcout("8",2);
	if(pt==9)clrcout("9",2);
	if(pt==10)clrcout("10",2);
	if(pt!=0)clrcout(" 级富豪",2);
	if(pt==0)cout<<"平民";
}
void Wrong(const string& text)
{
	clrcout("错误: ",1);
	clrcout(text,1);
}
int BJ_make_num()
{
	int n1=0,n2=1;
	for(int i=strlen(str);i>0;i--)
	{
		n1+=(int(str[i-1])-48)*n2;
		n2*=10;
	}
	return n1;
}
void cardcout(int n)
{
	if(n==1)	  cout<<"A";
	else if(n==11)cout<<"J";
	else if(n==12)cout<<"Q";
	else if(n==13)cout<<"K";
	else if(n==14)cout<<"小鬼";
	else if(n==15)cout<<"大王";
	else cout<<n;
}
int waitEnter() 
{
    bool exitLoop=false;
    while(!exitLoop)
	{
        if(_kbhit())
		{
            char key=_getch();
            if(key==' ')
			return 1;
            else if(key=='\r') 
			exitLoop=true;
        }
    }
}
void now_time()//目前时间 
{
	time_t now=time(0);
    struct tm *localTime = localtime(&now);
    time_year=localTime->tm_year+1900;
    time_month=localTime->tm_mon+1;  
    time_day=localTime->tm_mday;  
    time_hour=localTime->tm_hour; 
    time_min=localTime->tm_min;  
    time_week=localTime->tm_wday; 
}
void time_stop()//AAS禁止使用时间 
{
	now_time();
	if(time_hour>=on_time&&time_hour<off_time)td_1();
	if(time_choose()==1)td_2();
}
void td_1()
{
	while(time_hour>=on_time&&time_hour<=off_time)
	{
		system("cls");
		midmorcout("Anti-Addiction System");
		cout<<endl;
		midcout("| 时段未到，限制使用 |");
		gets(str);//刷新 
		now_time();
	}
	system("cls");
}
void td_2()
{
	if(All_time==1)
	{
		marktime(sleep_time); 
		while(time_choose()==0)
		{
			system("cls");
			midmorcout("Anti-Addiction System");
			cout<<endl;
			midcout("| 使用过长，限制使用 |");
			gets(str);//刷新 
			now_time();
		}
		system("cls");
	}
	marktime(long_time);
} 
void marktime(int n)//计划下一次报时 
{
	now_time();
	plntm_min=time_min+n;
	plntm_our=time_hour;
	plntm_day=time_day;
	plntm_mon=time_month;
	plntm_yer=time_year;
	if(plntm_min>59){plntm_our+=1;plntm_min-=60;}
	if(plntm_our>23){plntm_day+=1;plntm_our-=24;}
	if(time_month==1||time_month==3||time_month==5||time_month==7||time_month==8||time_month==10||time_month==12)
	{if(plntm_day>31){plntm_mon+=1;plntm_day=1;}}
	else if(time_month==2)
	{
		if((time_year%4==0&&time_year%100!=0)||(time_year%400==0))
		{
			if(plntm_day>29)
			{
				plntm_mon+=1;
				plntm_day=1;
			}
		}
		else if(plntm_day>28){plntm_mon+=1;plntm_day=1;}
	}
	else if(plntm_day>30){plntm_mon+=1;plntm_day=1;}
	if(plntm_mon>12){plntm_yer+=1;plntm_mon=1;}
}
int time_choose()//时间是否已经结束 
{
	if(time_year<plntm_yer)return 0;
	if(time_year>plntm_yer)return 1;
	if(time_month<plntm_mon)return 0;
	if(time_month>plntm_mon)return 1;
	if(time_day<plntm_day)return 0;
	if(time_day>plntm_day)return 1;
	if(time_hour<plntm_our)return 0;
	if(time_hour>plntm_our)return 1;
	if(time_min<plntm_min)return 0;
	return 1;
}


//由于数据安全原因，数据传输过程的代码我们无法公开 
//以下代码与我们程序使用的真实代码绝不相同 

//但是如果联系我们，我们可以为您公开具体内容 
int moneycout(int n)
{
    if(n==2)return money;
    cout<<money;
}
void cinmoney(int n)
{
    return;
}
void ptcin(int n)
{
    return;
}
void ptcout_from()
{
	pt=0;
}
void time_cout()
{
	return;
}
void time_cin()
{
    on_time=0;
    off_time=0;
    long_time=0;
    hom_time=0;
    sleep_time=0;
    All_time=0;
    used_time=0;
}
int clockget()
{
    return 1;
}
void clockcin()
{
	return;
}
void tax_cin()
{
	now_time();
    tax_year_time=time_year;
    tax_month_time=time_month;
    tax_date_time=time_day;
}
void tax_cout()
{
	return;
}
void skill(int n)
{
	if(mark13!=1||skill_time[n-1]>0)return;
	if(n==5||n==6)cout<<endl;
	clrcout("[初次教学]",2);
	if(n==1)cout<<"Enter 开始...";
	if(n==2)cout<<"(输入66退出，输入大写A全赌)";
	if(n==3)cout<<"(输入编号，例如输入1)";
	if(n==4)cout<<"按下空格补牌，回车不补牌.";
	if(n==5)cout<<"Enter 继续...";
	if(n==6)cout<<"(Y代表参加，N代表永久不参加，A代表此次不参加)";
	if(n==7){cout<<"门票 5000 Bemoney.";gets(str);}
	if(n==8)cout<<"按下空格补牌，回车不补牌.每次补牌赢金×10，败金×2.";
	skill_time[n-1]++;
}
