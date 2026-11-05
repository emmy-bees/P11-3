//Introductory Programming Lab 11 -- Emerson Beesley -- November 5, 2026
#include <iostream>
using namespace std;

int highScore(int num, int array[]);
int lowScore(int num, int array[]);

int main(void) {
	const int ARRAY_SIZE = 20;
	int studentGradeArray[ARRAY_SIZE];
	int numOfStudents;
	cout << "Number of students: ";
	cin >> numOfStudents;
	for (int i = 0; i < numOfStudents; i++) {
		cout << "Enter score #" << i + 1 << ": ";
		cin >> studentGradeArray[i];
	}

	cout << "high = " << highScore(numOfStudents, studentGradeArray);
	cout << endl;
	cout << "low = " << lowScore(numOfStudents, studentGradeArray);
	cout << endl;

	double average;
	int sum = 0;
	for (int i = 0; i < numOfStudents; i++) {
		sum += studentGradeArray[i];
	}
	average = (double)sum / (double)numOfStudents;


	cout << "average = " << average;
	return 0;
}

int highScore(int num, int array[]) {
	int highScore = 0;
	for (int i = 0; i < num; i++) {
		if (array[i] >= highScore) {
			highScore = array[i];
		}
	}
	return highScore;
}

int lowScore(int num, int array[]) {
	int lowScore = 100;
	for (int i = 0; i < num; i++) {
		if (array[i] <= lowScore) {
			lowScore = array[i];
		}
	}
	return lowScore;
}

