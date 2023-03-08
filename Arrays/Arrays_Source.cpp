#include <iostream>
using namespace std;
using std::cout;


	const int n = 5;
	int arr[n];
	
void main()
{
	setlocale(LC_ALL, "");

	//arr[2] = 123; // обращение к эелементу массива на запись
	//cout << arr[2] << endl; //обращение к эелементу массива на чтение

	int Sum_arr = 0, Mid_arr = 0;
	cout << "Введите элементы массива: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << endl <<  "Вы ввелли следующие значения массива: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl << endl;;
	for (int i = 0; i < n; i++)
	{
		Sum_arr += arr[i];
	}
		cout << "Сумма всех элементов массива равна:  " << Sum_arr << endl << endl;
		cout << "Среднее арифмтическое значение элементов массива равно: " << Sum_arr / n << endl << endl;
	int max = arr[0];

		for (int i = 1; i < n; i++)
	{   
			if (max < arr[i]) { max = arr[i]; }
			
	}
		cout << "Максимальное значение элемента массива равно: " << max << endl << endl;
		int min = arr[0];
		for (int i = 1; i < n; i++)
		{
			if (arr[i] < min) { min = arr[i]; }
		}
		cout << "Минималбное значение элемента массива равно: " << min << endl << endl;
}

