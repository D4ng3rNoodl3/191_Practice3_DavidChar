/*
	191
	Practice_3
	Dchar, ZFuchs 
*/

#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

double max, min, average, sum, whileInput, doInput, caseNum;

int numCount;

int main()
{
	cout << "Enter 1 for a While loop, or 2 for a Do-While loop : " << endl;
	cin >> caseNum;
	min = 10000000, max = 0;
	if (caseNum == 1) {
		cout << "While Loop : " << endl;
		while (sum < 100)
		{
			cout << "Input a positive interger: " << endl;
			cin >> whileInput;
			if (whileInput == 0)
			{
				break;
			}
			sum += whileInput;
			if (min > whileInput)
			{
				min = whileInput;
			}
			if (max < whileInput)
			{
				max = whileInput;
			}
			numCount++;
		}
		cout << "Average: " << double(sum / numCount) << "\n";
	}
	else if (caseNum == 2)
	{
		cout << "Do While Loop : " << endl;
		do
		{
			cout << "Input an interger: \n";
			cin >> doInput;
			if (doInput == 0)
			{
				break;
			}
			sum += doInput;
			if (min > doInput)
			{
				min = doInput;
			}
			if (max < doInput)
			{
				max = doInput;
			}
			numCount++;
		} while (sum < 100);
		cout << "Average: " << fixed << setprecision(1) << double(sum / numCount) << "\n";
	}
	cout << "Sum: " << sum << "\n"
		 << "Maximum: " << max << "\n"
		 << "Minimum: " << min << endl;
}