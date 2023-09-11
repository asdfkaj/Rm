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
	vector<float> vec;				//定义一个动态数组
	vec.resize(100);				//提前分配vec的内存大小，否则当下标过大时，系统会报错
	vector<std::function<float(std::vector<float>&)>> func;	//定义一个函数模板
	func.resize(4);					//同vec理
	srand((unsigned)time(NULL));	//srand()函数初始化随机数发生器，参数是从系统得到的时间，代表种子,不同的种子使rand()函数有不同的数
	for (int i = 0;i <= 99;i++)		//生成内存大小为100的动态数组，其中含100个随机数
	{
		vec[i] = rand() % 10 + 1;	//生成一定范围的随机数
	}
	for (int i = 0;i < 4;i++)
	{
		switch (i)
		{
		case 0:
			func[i] = my_Add;				//func里的第一个位置存求和函数
			break;
		case 1:
			func[i] = my_Average;			//func里的第二个位置存求均值函数
			break;
		case 2:
			func[i] = my_Multiplication;	//func里的第三个位置存方差函数
			break;
		case 3:								
			func[i] = my_Variance;			//func里的第四个位置存累乘乘积函数
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
	float sum = 0;				//初始化sum变量
	for (int i = 0;i <= 99;i++)
	{
		sum = vec[i] + sum;
	}
	return sum;
}

float my_Average(vector<float>& vec)
{
	float average = 0;		//初始化average变量
	average = my_Add(vec) / 100;
	return average;
}

float my_Variance(vector<float>& vec)
{
	float differ = 0;		//每个值与均值的差值
	float sum_v = 0;		//平方和
	float V = 0;			//方差
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
	float multiplication = 1;		//初始化multiplication变量
	for (int i = 0;i <= 99;i++)
	{
		multiplication = multiplication * vec[i];
	}
	return multiplication;
}

float createTimerLoop(int period, std::vector<float>& data,
	std::vector<std::function<float(std::vector<float>&)>>& operations)
{
	if (period < 0)				//如果输入的值小于0，不符合逻辑，不调用该函数
		return 0;
	clock_t start, finish;		//定义start和finish变量用于计算时间
	double totletime = 0;		//定义总的时间量totaltime
	start = clock();
	while (1)
	{
		finish = clock();			//记录start到现在的时间
		totletime = finish - start; //使用while(1)循环来进行500秒的计时
		if (totletime >= period)	
		{
			if (rand() % 4 == 0)	//调用求和函数,使用rand()函数获得0~3的随机值，满足随机调用函数的条件
			{
				cout << "Add_Result:" << endl;
				return operations[0](data);
			}
			else if (rand() % 4 == 1)//调用求均值函数
			{
				cout << "Average_Result:" << endl;
				return operations[1](data);
			}
			else if (rand() % 4 == 2)//调用求方差函数
			{
				cout << "Variance_Result:" << endl;
				return operations[2](data);
			}
			else if (rand() % 4 == 3)//调用求累积乘积函数
			{
				cout << "Multiplication_Result:" << endl;
				return operations[3](data);
			}
			break;
		}
	}
}