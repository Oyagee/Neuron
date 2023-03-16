#include <iostream>
#include <vector>
#include <string>
#define LINE 100
#define COLUMN 15
using namespace std;


class Neuron {

public:
	int omega[COLUMN + 1] = {  3, 2, 8, 3, 3, 3, 4, 3, 4, 3, 4, 3, 3, 1 };
	int MAIN_SELECTOIN[LINE][COLUMN + 1] = {
		{8,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1},
		{3,1,1,1,0,1,0,1,1,1,0,1,0,1,0,0},
		{6,0,0,1,0,1,0,1,1,1,1,0,1,1,1,1},
		{8,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1},
		{6,0,0,1,0,1,0,1,1,1,1,0,1,1,1,1},
		{2,1,1,1,0,0,1,0,0,1,0,1,0,1,1,1},
		{2,1,1,1,0,0,1,0,0,1,0,1,0,1,1,1},
		{1,0,0,1,0,1,1,1,0,1,0,0,1,0,0,1},
		{4,1,0,1,1,0,1,1,1,1,0,0,1,0,0,1},
		{0,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1},
		{3,1,1,1,0,1,0,1,1,1,0,1,0,1,0,0},
		{4,1,0,1,1,0,1,1,1,1,0,0,1,0,0,1},
		{0,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1},
		{6,0,0,1,0,1,0,1,1,1,1,0,1,1,1,1},
		{7,1,1,1,0,1,0,1,0,0,1,0,0,1,0,0},
		{1,0,0,1,0,1,1,1,0,1,0,0,1,0,0,1},
		{0,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1},
		{0,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1},
		{7,1,1,1,0,1,0,1,0,0,1,0,0,1,0,0},
		{4,1,0,1,1,0,1,1,1,1,0,0,1,0,0,1},
		{0,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1},
		{6,0,0,1,0,1,0,1,1,1,1,0,1,1,1,1},
		{8,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1},
		{5,1,1,1,1,0,0,1,1,1,0,0,1,1,1,1},
		{2,1,1,1,0,0,1,0,0,1,0,1,0,1,1,1},
		{9,1,1,1,1,0,1,1,1,1,0,1,0,1,0,0},
		{0,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1},
		{6,0,0,1,0,1,0,1,1,1,1,0,1,1,1,1},
		{6,0,0,1,0,1,0,1,1,1,1,0,1,1,1,1},
		{3,1,1,1,0,1,0,1,1,1,0,1,0,1,0,0},
		{4,1,0,1,1,0,1,1,1,1,0,0,1,0,0,1},
		{9,1,1,1,1,0,1,1,1,1,0,1,0,1,0,0},
		{3,1,1,1,0,1,0,1,1,1,0,1,0,1,0,0},
		{9,1,1,1,1,0,1,1,1,1,0,1,0,1,0,0},
		{8,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1},
		{4,1,0,1,1,0,1,1,1,1,0,0,1,0,0,1},
		{3,1,1,1,0,1,0,1,1,1,0,1,0,1,0,0},
		{5,1,1,1,1,0,0,1,1,1,0,0,1,1,1,1},
		{7,1,1,1,0,1,0,1,0,0,1,0,0,1,0,0},
		{0,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1},
		{6,0,0,1,0,1,0,1,1,1,1,0,1,1,1,1},
		{1,0,0,1,0,1,1,1,0,1,0,0,1,0,0,1},
		{2,1,1,1,0,0,1,0,0,1,0,1,0,1,1,1},
		{5,1,1,1,1,0,0,1,1,1,0,0,1,1,1,1},
		{5,1,1,1,1,0,0,1,1,1,0,0,1,1,1,1},
		{1,0,0,1,0,1,1,1,0,1,0,0,1,0,0,1},
		{5,1,1,1,1,0,0,1,1,1,0,0,1,1,1,1},
		{6,0,0,1,0,1,0,1,1,1,1,0,1,1,1,1},
		{7,1,1,1,0,1,0,1,0,0,1,0,0,1,0,0},
		{8,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1},
		{2,1,1,1,0,0,1,0,0,1,0,1,0,1,1,1},
		{9,1,1,1,1,0,1,1,1,1,0,1,0,1,0,0},
		{5,1,1,1,1,0,0,1,1,1,0,0,1,1,1,1},
		{4,1,0,1,1,0,1,1,1,1,0,0,1,0,0,1},
		{3,1,1,1,0,1,0,1,1,1,0,1,0,1,0,0},
		{4,1,0,1,1,0,1,1,1,1,0,0,1,0,0,1},
		{4,1,0,1,1,0,1,1,1,1,0,0,1,0,0,1},
		{7,1,1,1,0,1,0,1,0,0,1,0,0,1,0,0},
		{8,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1},
		{8,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1},
		{3,1,1,1,0,1,0,1,1,1,0,1,0,1,0,0},
		{0,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1},
		{7,1,1,1,0,1,0,1,0,0,1,0,0,1,0,0},
		{9,1,1,1,1,0,1,1,1,1,0,1,0,1,0,0},
		{8,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1},
		{2,1,1,1,0,0,1,0,0,1,0,1,0,1,1,1},
		{2,1,1,1,0,0,1,0,0,1,0,1,0,1,1,1},
		{9,1,1,1,1,0,1,1,1,1,0,1,0,1,0,0},
		{6,0,0,1,0,1,0,1,1,1,1,0,1,1,1,1},
		{0,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1},
		{6,0,0,1,0,1,0,1,1,1,1,0,1,1,1,1},
		{9,1,1,1,1,0,1,1,1,1,0,1,0,1,0,0},
		{3,1,1,1,0,1,0,1,1,1,0,1,0,1,0,0},
		{5,1,1,1,1,0,0,1,1,1,0,0,1,1,1,1},
		{7,1,1,1,0,1,0,1,0,0,1,0,0,1,0,0},
		{8,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1},
		{2,1,1,1,0,0,1,0,0,1,0,1,0,1,1,1},
		{5,1,1,1,1,0,0,1,1,1,0,0,1,1,1,1},
		{0,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1},
		{7,1,1,1,0,1,0,1,0,0,1,0,0,1,0,0},
		{5,1,1,1,1,0,0,1,1,1,0,0,1,1,1,1},
		{3,1,1,1,0,1,0,1,1,1,0,1,0,1,0,0},
		{1,0,0,1,0,1,1,1,0,1,0,0,1,0,0,1},
		{1,0,0,1,0,1,1,1,0,1,0,0,1,0,0,1},
		{9,1,1,1,1,0,1,1,1,1,0,1,0,1,0,0},
		{1,0,0,1,0,1,1,1,0,1,0,0,1,0,0,1},
		{1,0,0,1,0,1,1,1,0,1,0,0,1,0,0,1},
		{7,1,1,1,0,1,0,1,0,0,1,0,0,1,0,0},
		{9,1,1,1,1,0,1,1,1,1,0,1,0,1,0,0},
		{2,1,1,1,0,0,1,0,0,1,0,1,0,1,1,1},
		{2,1,1,1,0,0,1,0,0,1,0,1,0,1,1,1},
		{9,1,1,1,1,0,1,1,1,1,0,1,0,1,0,0},
		{8,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1},
		{3,1,1,1,0,1,0,1,1,1,0,1,0,1,0,0},
		{5,1,1,1,1,0,0,1,1,1,0,0,1,1,1,1},
		{4,1,0,1,1,0,1,1,1,1,0,0,1,0,0,1},
		{4,1,0,1,1,0,1,1,1,1,0,0,1,0,0,1},
		{1,0,0,1,0,1,1,1,0,1,0,0,1,0,0,1},
		{1,0,0,1,0,1,1,1,0,1,0,0,1,0,0,1},
		{7,1,1,1,0,1,0,1,0,0,1,0,0,1,0,0}
	};

	int test_main[10][COLUMN + 1] = {
		{0,	1,1,1,1,0,1,1,0,1,1,0,1,1,1,1},
		{1,	0,0,1,0,1,1,1,0,1,0,0,1,0,0,1},
		{2,	1,1,1,0,0,1,0,0,1,0,1,0,1,1,1},
		{3,	1,1,1,0,1,0,1,1,1,0,1,0,1,0,0},
		{4,	1,0,1,1,0,1,1,1,1,0,0,1,0,0,1},
		{5,	1,1,1,1,0,0,1,1,1,0,0,1,1,1,1},
		{6,	0,0,1,0,1,0,1,1,1,1,0,1,1,1,1},
		{7,	1,1,1,0,1,0,1,0,0,1,0,0,1,0,0},
		{8,	1,1,1,1,0,1,1,1,1,1,0,1,1,1,1},
		{9,	1,1,1,1,0,1,1,1,1,0,1,0,1,0,0}
	};

	int teta = 0;
	int point = 0;
	bool end_flag = false;
	int weight = 0;
	int temp_mass[COLUMN + 1];

	void ADD(int omega[], int main_selection[]) {
		for (int i = 0; i < COLUMN; i++) {
			if (main_selection[i] == 1) {
				omega[i]++;
			}
		}
	}

	void SUB(int omega[], int main_selection[]) {
		for (int i = 0; i < COLUMN; i++) {
			if (main_selection[i] == 1) {
				omega[i]--;
			}
		}
	}

	void OriginOmega()
	{
		cout << "��������� ���: ";
		for (int i = 0; i < COLUMN; i++) {
			cout << omega[i] << " ";
		}
		cout << endl;
	}

	void InputTeta()
	{
		cout << "���� ����: ";
		cin >> teta;
		cout << endl;
	}

	void AI_TRAIN()
	{
		for (point = 0; point < LINE; point++) {
			for (int i = 1; i < COLUMN + 1; i++) {
				weight += MAIN_SELECTOIN[point][i] * omega[i];
				temp_mass[i] = MAIN_SELECTOIN[point][i];
			}

			if (weight > teta and MAIN_SELECTOIN[point][0] == 5) {
				end_flag = true;
			}
			else if (weight <= teta and MAIN_SELECTOIN[point][0] == 5) {
				ADD(omega, temp_mass);
				end_flag = false;
			}
			else if (weight > teta and MAIN_SELECTOIN[point][0] != 5) {
				SUB(omega, temp_mass);
				end_flag = false;
			}
			weight = 0;
		}
		if (end_flag == true) {
			cout << "������ ������" << endl;
			cout << "���������� ���: ";
			for (int i = 0; i < COLUMN; i++) {
				cout << omega[i] << " ";
			}
			cout << endl;
		}
		else if (end_flag == false) {
			AI_TRAIN();
		}

		for (int point = 0; point < 10; point++) {
			for (int i = 1; i < COLUMN + 1; i++) {
				weight += test_main[point][i] * omega[i];
			}
			cout << "����� ����� ����� " << test_main[point][0] << ": " << weight << endl;
			weight = 0;
		}
	}

};



int main() 
{
	setlocale(LC_ALL, "rus");
	Neuron Neuro;
	Neuro.OriginOmega();
	Neuro.InputTeta();
	Neuro.AI_TRAIN();
}