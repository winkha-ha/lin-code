#include <REGX52.H>
#include "Timer0.h"
#include "Key.h"

unsigned char KeyNum;

/*void Timer0Init(void)		//1毫秒@11.0592MHz
{
	TMOD &= 0xF0;		//设置定时器模式
	TMOD |= 0x01;		//设置定时器模式
	TL0 = 0x66;		//设置定时初值
	TH0 = 0xFC;		//设置定时初值
	TF0 = 0;		//清除TF0标志
	TR0 = 1;		//定时器0开始计时
	ET0 = 1;
	EA = 1;
	PT0 = 0;
}*/


void main()
{
	//Timer0Init();
     while(1)
      {
          KeyNum = Key();
		  if(KeyNum)
		  {
			  if(KeyNum==1)P2_1 =~ P2_1;
			  if(KeyNum==2)P2_2 =~ P2_2;
			  if(KeyNum==3)P2_3 =~ P2_3;
			  if(KeyNum==4)P2_4 =~ P2_4;
		  }
      }
}

//unsigned int T0Count;

//void Timer0_Routine() interrupt 1
//{
//	static unsigned int T0Count;
//	TL0 = 0x66;		//设置定时初值
//	TH0 = 0xFC;		//设置定时初值
//	T0Count++;
//	if(T0Count>=1000)
//	{
//		T0Count = 0;
//		P2_0 =~ P2_0;
//	}
//	
//}