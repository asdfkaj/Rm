#include <iostream>
#include <functional>
#include <vector>

using namespace std;

float my_Add(vector<float>& vec);
float my_Average(vector<float>& vec);
float my_Variance(vector<float>& vec);
float my_Multiplication(vector<float>& vec);

float createTimerLoop(int period, std::vector<float>& data,
	std::vector<std::function<float(std::vector<float>&)>>& operations);


int main(int argc, char **argv) 
{
	vector<float> vec;				//����һ����̬����
	vec.resize(100);				//��ǰ����vec���ڴ��С�������±����ʱ��ϵͳ�ᱨ��
	vector<std::function<float(std::vector<float>&)>> func;	//����һ������ģ��
	func.resize(4);					//ͬvec��
	srand((unsigned)time(NULL));	//srand()������ʼ��������������������Ǵ�ϵͳ�õ���ʱ�䣬��������,��ͬ������ʹrand()�����в�ͬ����
	for (int i = 0;i <= 99;i++)		//�����ڴ��СΪ100�Ķ�̬���飬���к�100�������
	{
		vec[i] = rand() % 10 + 1;	//����һ����Χ�������
	}
	for (int i = 0;i < 4;i++)
	{
		switch (i)
		{
		case 0:
			func[i] = my_Add;				//func��ĵ�һ��λ�ô���ͺ���
			break;
		case 1:
			func[i] = my_Average;			//func��ĵڶ���λ�ô����ֵ����
			break;
		case 2:
			func[i] = my_Multiplication;	//func��ĵ�����λ�ô淽���
			break;
		case 3:								
			func[i] = my_Variance;			//func��ĵ��ĸ�λ�ô��۳˳˻�����
			break;
		}
	}
	while (1)
	{
		cout << createTimerLoop(500, vec, func) << endl;
	}
	return 0;
}

float my_Add(vector<float>& vec)
{
	float sum = 0;				//��ʼ��sum����
	for (int i = 0;i <= 99;i++)
	{
		sum = vec[i] + sum;
	}
	return sum;
}

float my_Average(vector<float>& vec)
{
	float average = 0;		//��ʼ��average����
	average = my_Add(vec) / 100;
	return average;
}

float my_Variance(vector<float>& vec)
{
	float differ = 0;		//ÿ��ֵ���ֵ�Ĳ�ֵ
	float sum_v = 0;		//ƽ����
	float V = 0;			//����
	for (int i = 0;i <= 99;i++)
	{
		differ = vec[i] - my_Average(vec);
		sum_v = sum_v + pow(differ,2);
	}
	V = sum_v / 100;
	return V;
}

float my_Multiplication(vector<float>& vec)
{		
	float multiplication = 1;		//��ʼ��multiplication����
	for (int i = 0;i <= 99;i++)
	{
		multiplication = multiplication * vec[i];
	}
	return multiplication;
}

float createTimerLoop(int period, std::vector<float>& data,
	std::vector<std::function<float(std::vector<float>&)>>& operations)
{
	if (period < 0)				//��������ֵС��0���������߼��������øú���
		return 0;
	clock_t start, finish;		//����start��finish�������ڼ���ʱ��
	double totletime = 0;		//�����ܵ�ʱ����totaltime
	start = clock();
	while (1)
	{
		finish = clock();			//��¼start�����ڵ�ʱ��
		totletime = finish - start; //ʹ��while(1)ѭ��������500��ļ�ʱ
		if (totletime >= period)	
		{
			if (rand() % 4 == 0)	//������ͺ���,ʹ��rand()�������0~3�����ֵ������������ú���������
			{
				cout << "Add_Result:" << endl;
				return operations[0](data);
			}
			else if (rand() % 4 == 1)//�������ֵ����
			{
				cout << "Average_Result:" << endl;
				return operations[1](data);
			}
			else if (rand() % 4 == 2)//�����󷽲��
			{
				cout << "Variance_Result:" << endl;
				return operations[2](data);
			}
			else if (rand() % 4 == 3)//�������ۻ��˻�����
			{
				cout << "Multiplication_Result:" << endl;
				return operations[3](data);
			}
			break;
		}
	}
}