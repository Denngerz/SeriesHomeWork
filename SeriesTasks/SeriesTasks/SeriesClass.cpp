#include <iostream>
#include <vector>
#include "SeriesClass.h"

float SeriesClass::SeriesClass1(float a) {
	a = 0;
	float sum = 0;

	for (int i = 0; i < 10; i++) {
		std::cin >> a;
		sum += a;
	}

	return sum;
}

void SeriesClass::SeriesClass4(int n) {
	float numbers;
	int sum = 0;
	int pro = 1;

	for (int i = 0; i < n; i++) {
		std::cin >> numbers;
		sum += numbers;
		pro *= numbers;
	}

	std::cout << sum << " " << pro << std::endl;
}

void SeriesClass::SeriesClass5(int n) {
	float numbers;
	int pro = 1;
	int whole;

	for (int i = 0; i < n; i++) {
		std::cin >> numbers;
		whole = static_cast<int>(numbers);
		std::cout << whole << std::endl;
		pro *= whole;
	}

	std::cout << pro << std::endl;
}

void SeriesClass::SeriesClass9(int n) {
	int k = 0;
	int number;

	for (int i = 1; i <= n; i++) {
		std::cin >> number;
		if (number % 2 != 0) {
			k++;
			std::cout << i << std::endl;
		}
	}

	std::cout << k << std::endl;
}

bool SeriesClass::SeriesClass11(int k, int n) {
	for (int i = 0; i < n; i++) {
		int number;
		std::cin >> number;

		if (k > number) {
			return true;
		}
	}

	return false;
}


void SeriesClass::SeriesClass13() {
	int number = 1;
	int sum = 0;

	while (number != 0) {
		std::cin >> number;
		if (number > 0 && number % 2 == 0) {
			sum += number;
		}
	}

	std::cout << sum << std::endl;
}

void SeriesClass::SeriesClass16(int k) {
	int number = 1;
	int biggerK;

	while (number != 0) {
		std::cin >> number;
		if (number > k) {
			biggerK = number;
		}
	}
	
	std::cout << biggerK << std::endl;
}

void SeriesClass::SeriesClass19(int n) {
	int number = 0;
	int k = 0;
	int a;

	for (int i = 1; i <= n; i++) {
		a = number;
		std::cin >> number;
		if (number < a) {
			k++;
			std::cout << "Smaller than on the left:" << i << std::endl;
		}
	}

	std::cout << k << std::endl;
}

void SeriesClass::SeriesClass21(int n) {
	std::vector<double> numbers(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> numbers[i];
	}

	bool isIncreasing = true;
	for (int i = 1; i < n; ++i) {
		if (numbers[i] <= numbers[i - 1]) {
			isIncreasing = false;
			break;
		}
	}

	if (isIncreasing) {
		std::cout << "True" << std::endl;
	}
	else {
		std::cout << "False" << std::endl;
	}
}

void SeriesClass::SeriesClass23(int n) {
	std::vector<double> numbers(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> numbers[i];
	}

	bool isNeeded = true;
	for (int i = 1; i < n; i+= 2) {
		if ((numbers[i] > numbers[i - 1] && numbers[i] > numbers[i + 1]) || (numbers[i] < numbers[i - 1] && numbers[i] < numbers[i + 1])) {
			isNeeded = false;
			std::cout << numbers[i] << std::endl;
			break;
		}
	}

	if (isNeeded) {
		std::cout << 0 << std::endl;
	}
}


void SeriesClass::SeriesClass25(int n) {
	std::vector<double> numbers(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> numbers[i];
	}

	int first_zero = 0;
	int second_zero = 0;

	for (int i = 0; i < n; i++) {
		if (numbers[i] == 0) {
			first_zero = i;
			break;
		}
	}

	for (int i = first_zero + 1; i < n; i++) {
		if (numbers[i] == 0) {
			second_zero = i;
			break;
		}
	}

	int sum = 0;
	if (second_zero - first_zero > 1) {
		for (int i = first_zero + 1; i < second_zero; i++) {
			sum += numbers[i];
		}
	}

	std::cout << sum << std::endl;
}


void SeriesClass::SeriesClass26(int k, int n) {
	std::vector<double> numbers(n);
	for (int i = 0; i < n; i++) {
		std::cin >> numbers[i];
	}

	for (int i = 0; i < n; i++) {
		std::cout << pow(numbers[i], k) << std::endl;
	}
}

void SeriesClass::SeriesClass28(int n) {
	std::vector<double> numbers(n);
	for (int i = 0; i < n; i++) {
		std::cin >> numbers[i];
	}
	
	for (int i = 0; i < n; i++) {
		std::cout << pow(numbers[i], n - i) << std::endl;
	}
}

void SeriesClass::SeriesClass30(int k, int n) {
	int whole_num = n * k;

	std::vector<double> numbers(whole_num);
	for (int i = 0; i < whole_num; i ++) {
		std::cin >> numbers[i];
	}

	int sum = 0;
	for (int i = 0; i < whole_num; i++) {
		sum += numbers[i];
	}

	std::cout << sum << std::endl;
}

void SeriesClass::SeriesClass32(int k, int n) {
	int whole_num = n * k;

	std::vector<double> numbers(whole_num);
	for (int i = 0; i < whole_num; i++) {
		std::cin >> numbers[i];
	}

	bool num_two;
	for (int i = 0; i < k; i++) {
		num_two = false;
		for (int j = i * n; j < n + (i * n); j++) {
			if (numbers[j] == 2) {
				std::cout << j - i * n << std::endl;
				num_two = true;
				break;
			}
		}
		if (num_two == false) {
			std::cout << 0 << std::endl;
		}
	}
}

void SeriesClass::SeriesClass34(int k, int n) {
	int whole_num = n * k;

	std::vector<double> numbers(whole_num);
	for (int i = 0; i < whole_num; i++) {
		std::cin >> numbers[i];
	}

	bool num_two;
	int sum = 0;
	for (int i = 0; i < k; i++) {
		num_two = false;
		sum = 0;
		for (int j = i * n; j < n + (i * n); j++) {
			sum += numbers[j];
			if (numbers[j] == 2) {
				std::cout << j - i * n << std::endl;
				num_two = true;
			}
		}
		if (num_two == true) {
			std::cout << sum;
		}
		if (num_two == false) {
			std::cout << 0 << std::endl;
		}
	}
}

void SeriesClass::SeriesClass36(int k) {
	int countIncreasingSets = 0;  

	for (int i = 0; i < k; ++i) {
		bool isIncreasing = true;
		int prevNumber, number;

		std::cout <<  i + 1  << std::endl;
		std::cin >> prevNumber; 

		while (true) {
			std::cin >> number;
			if (number == 0) break; 

			if (number <= prevNumber) {
				isIncreasing = false;  
			}
			prevNumber = number;
		}

		if (isIncreasing) {
			countIncreasingSets++; 
		}
	}

	std::cout << countIncreasingSets << std::endl;
}

void SeriesClass::SeriesClass38(int k) {
	for (int set = 0; set < k; ++set) {
		std::vector<int> numbers;
		int num;

		while (std::cin >> num && num != 0) {
			numbers.push_back(num);
		}

		bool increasing = true;
		bool decreasing = true;
		for (int i = 1; i < numbers.size(); ++i) {
			if (numbers[i] <= numbers[i - 1]) {
				increasing = false;
			}
			if (numbers[i] >= numbers[i - 1]) {
				decreasing = false;
			}
		}

		if (increasing) {
			std::cout << "1\n"; 
		}
		else if (decreasing) {
			std::cout << "-1\n"; 
		}
		else {
			std::cout << "0\n";
		}
	}
}


void SeriesClass::SeriesClass39(int k) {
	int countSawtoothSets = 0;  

	for (int i = 0; i < k; ++i) {
		std::vector<int> numbers;
		int num;

		while (std::cin >> num && num != 0) {
			numbers.push_back(num);
		}

		bool isSawtooth = true;
		for (int j = 1; j < numbers.size() - 1; ++j) {
			if (!((numbers[j] > numbers[j - 1] && numbers[j] > numbers[j + 1]) || (numbers[j] < numbers[j - 1] && numbers[j] < numbers[j + 1]))) {
				isSawtooth = false;
				break;
			}
		}

		if (isSawtooth) {
			countSawtoothSets++;
		}
	}

	std::cout << countSawtoothSets << std::endl;
}

void SeriesClass::SeriesClass40(int k) {
	for (int i = 0; i < k; ++i) {
		std::vector<int> numbers;
		int num;

		while (std::cin >> num && num != 0) {
			numbers.push_back(num);
		}

		bool isSawtooth = true;
		int firstNonToothIndex = -1;

		for (int j = 1; j < numbers.size() - 1; ++j) {
			if (!((numbers[j] > numbers[j - 1] && numbers[j] > numbers[j + 1]) ||
				(numbers[j] < numbers[j - 1] && numbers[j] < numbers[j + 1]))) {
				isSawtooth = false;
				firstNonToothIndex = j; 
				break;
			}
		}

		if (isSawtooth) {
			std::cout << numbers.size() << std::endl;
		}
		else {
			std::cout << firstNonToothIndex + 1 << std::endl;
		}
	}
}