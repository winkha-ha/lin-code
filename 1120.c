#include <REGX52.H>
#include "Delay.h"
#include "LCD1602.h"
#include "Timer0.h"

unsigned char Sec=55,Min=59,Hour=23;

void main()
{
	LCD_Init();
	Timer0Init();	
	
	LCD_ShowString(1,1,"Clock:");
	LCD_ShowString(2,1,"  :  :");

     while(1)
      {
         LCD_ShowNum(2,1,Hour,2);
		  LCD_ShowNum(2,4,Min,2);
		  LCD_ShowNum(2,7,Sec,2);
      }
}

void Timer0_Routine() interrupt 1
{
	static unsigned int T0Count;
	TL0 = 0x66;		//设置定时初值
	TH0 = 0xFC;		//设置定时初值
	T0Count++;
	if(T0Count>=1000)
	{
		T0Count = 0;
		Sec++;
		if(Sec>=60)
		{
			Sec = 0;
			if(Min>=60)
			{
				Min=0;
				Hour++;
				if(Hour>=24)
				{
					Hour=0;
				}
			}
		}
	}
	
}
#include <REGX52.H>

/**
  * @brief  定时器0初始化，1毫秒@11.0592MHz
  * @param  无
  * @retval 无
  */

void Timer0Init(void)		
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
}

/*定时器中断函数模板
void Timer0_Routine() interrupt 1
{
	static unsigned int T0Count;
	TL0 = 0x66;		//设置定时初值
	TH0 = 0xFC;		//设置定时初值
	T0Count++;
	if(T0Count>=1000)
	{
		T0Count = 0;
	}
	
}
*/