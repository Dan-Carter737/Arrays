#include <iostream>
using namespace std;
using std::cout;


	const int n = 5;
	int arr[n];
	
void main()
{
	setlocale(LC_ALL, "");

	//arr[2] = 123; // ��������� � ��������� ������� �� ������
	//cout << arr[2] << endl; //��������� � ��������� ������� �� ������

	int Sum_arr = 0, Mid_arr = 0;
	cout << "������� �������� �������: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << endl <<  "�� ������ ��������� �������� �������: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl << endl;;
	for (int i = 0; i < n; i++)
	{
		Sum_arr += arr[i];
	}
		cout << "����� ���� ��������� ������� �����:  " << Sum_arr << endl << endl;
		cout << "������� ������������� �������� ��������� ������� �����: " << Sum_arr / n << endl << endl;
	int max = arr[0];

		for (int i = 1; i < n; i++)
	{   
			if (max < arr[i]) { max = arr[i]; }
			
	}
		cout << "������������ �������� �������� ������� �����: " << max << endl << endl;
		int min = arr[0];
		for (int i = 1; i < n; i++)
		{
			if (arr[i] < min) { min = arr[i]; }
		}
		cout << "����������� �������� �������� ������� �����: " << min << endl << endl;
}

