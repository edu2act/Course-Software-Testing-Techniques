public struct MyDate  //����һ���ṹ�壬�洢����
{
	public int my_year; //���
	public int my_month; //�·�
	public int my_day;   //��
};
MyDate computerNextDate(MyDate date)  //������һ�������
{
	MyDate tomorrow = new MyDate();  //���������ڸ�ֵ�����������
	tomorrow.m_year = date.m_year;
	tomorrow.m_month = date.m_month;
	tomorrow.m_day = date.m_day;
	int lastday = 28;  //����ĳ���µ���ĩ����
	if ((date.m_month % 2 == 1 && date.m_month < 8) || 
		(date.m_month % 2 == 0 && date.m_month > 8))
		 lastday = 31;
	else if(date.m_month == 4 || date.m_month == 6 ||
		date.m_month == 9 ||date.m_month == 11)
		 lastday = 30;
	else 
	{//2��
		if ((date.m_year % 4 == 0 && date.m_year % 100 != 0 )||
			date.m_year % 400 == 0)  //�ж��Ƿ�����
		    lastday = 29;
		else 
			lastday = 28;

	}
	if (date.m_day == lastday)
	{
		tomorrow.m_day = 1;
		if (date.m_month = 12) //��ĩ����
		{
			tomorrow.m_month = 1;
			tomorrow.m_year++;
		}
		else
		{//��ĩ����
			tomorrow.m_month++;

		}
	}
	else //��ͨ����
    {
		tomorrow.m_day++;
	}
	return tomorrow;
}
