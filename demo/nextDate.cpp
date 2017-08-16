public struct MyDate  //定义一个结构体，存储日期
{
	public int my_year; //年份
	public int my_month; //月份
	public int my_day;   //日
};
MyDate computerNextDate(MyDate date)  //计算下一天的日期
{
	MyDate tomorrow = new MyDate();  //将今天日期赋值给明天的日期
	tomorrow.m_year = date.m_year;
	tomorrow.m_month = date.m_month;
	tomorrow.m_day = date.m_day;
	int lastday = 28;  //计算某个月的月末日期
	if ((date.m_month % 2 == 1 && date.m_month < 8) || 
		(date.m_month % 2 == 0 && date.m_month > 8))
		 lastday = 31;
	else if(date.m_month == 4 || date.m_month == 6 ||
		date.m_month == 9 ||date.m_month == 11)
		 lastday = 30;
	else 
	{//2月
		if ((date.m_year % 4 == 0 && date.m_year % 100 != 0 )||
			date.m_year % 400 == 0)  //判断是否闰年
		    lastday = 29;
		else 
			lastday = 28;

	}
	if (date.m_day == lastday)
	{
		tomorrow.m_day = 1;
		if (date.m_month = 12) //年末日期
		{
			tomorrow.m_month = 1;
			tomorrow.m_year++;
		}
		else
		{//月末日期
			tomorrow.m_month++;

		}
	}
	else //普通日期
    {
		tomorrow.m_day++;
	}
	return tomorrow;
}
