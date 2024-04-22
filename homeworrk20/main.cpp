#include <iostream>
#include <algorithm>
//Задание 1.
void fill_arr(int arr[], const int length, int left, int right) {
	srand(time(NULL));
	std::cout << "{ ";
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % (right - left) + left;
		std::cout << arr[i] << ", ";
	}
	std::cout << "\b\b }\n";
}
//Задание 2 
void print_arr(int arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
}
//Задание 3 - 4.
template <typename T>
int search_index(T arr[], const int length, T key, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == key)
			return i;
	return -1;
}
template <typename T>
int search_last_index(T arr[], const int length, T key, int begin) {
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == key)
			return i;
	return -1;
}
//Задание 5.
void arr_min(int arr[], const int length) {
	int min = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] < min)
			min = arr[i];
	std::cout << "Минимальное число: " << min << std::endl;
}
//Задание 6.
void arr_max(int arr[], const int length) {
	int max = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] > max)
			max = arr[i];
	std::cout << "Максимальное число: " << max << std::endl;
}
//Задание 7.
void mean_value(int arr[], const int length) {
	int average = 0;
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += length;
	average = sum / length;
	std::cout << "Среднее арифметическое массива: " << average << std::endl;
}
//Задание 8.
void range(int arr[], const int length, int left, int right) {
	srand(time(NULL));
	std::cout << "{ ";
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % (right + 1 - left) + left;
		std::cout << arr[i] << ", ";
	}
	std::cout << "\b\b }\n";
}
//Задание 9.
template <typename T>
void count(T arr[], const int length, T key) {
	int counter = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] == key)
			counter++;
	}
	std::cout << counter << std::endl;
}
//Задание 10.
void bubble_sort(int arr[], const int length) {
	int tmp = 0;
	std::cout << "{ ";
	for (int i = length - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (arr[j] < arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
}




int main() {
	setlocale(LC_ALL, "Russian");
	//Задание 1.
	std::cout << "Задание 1.\n";
	int n, m;
	std::cout << "Введите два числа от -50 до 50 -> ";
	std::cin >> n >> m;

	const int size = 20;
	int arr[size]{};
	fill_arr(arr, size, n, m);

	//Задание 2.
	std::cout << "Задание 2.\n Массив:\n";
	const int size1 = 20;
	int arr1[size1];
	fill_arr(arr1, size1, -50, 50);
	print_arr(arr1, size1);
	std::cout << std::endl;

	//Задание 3 - 4.
	int num, num1;
	std::cout << "Задание 3 - 4.\nВведите число для поиска -> ";
	std::cin >> num;
	const int size2 = 20;
	int arr2[size2];

	fill_arr(arr2, size2, -50, 50);
	int index = search_index(arr2, size2, num);
	if (index != -1)
		std::cout << "Позиция числа: " << index << std::endl;
	else
		std::cout << "Числа нет в массиве.\n";

	std::cout << "Введите число для поиска -> ";
	std::cin >> num1;
	const int size3 = 20;
	int arr3[size3];

	fill_arr(arr3, size3, -50, 50);
	int last_index = search_last_index(arr3, size3, num1, 6);
	if (last_index != -1)
		std::cout << "Позиция числа: " << last_index << std::endl;
	else
		std::cout << "Числа нет в массиве!\n";

	//Задание 5.
	std::cout << "Задание 5.\n";
	const int size4 = 20;
	int arr4[size4];

	fill_arr(arr4, size4, -50, 50);
	arr_min(arr4, size4);

	//Задание 6.
	std::cout << "Задание 6.\n";
	const int size5 = 20;
	int arr5[size5];

	fill_arr(arr5, size5, -50, 50);
	arr_max(arr5, size5);

	//Задание 7.
	std::cout << "Задание 7.\n";
	const int size6 = 20;
	int arr6[size6];

	fill_arr(arr6, size6, -50, 50);
	mean_value(arr6, size6);

	//Задание 8.
	int n1, m1;
	std::cout << "Задание 8.\nВведите два числа от -50 до 50 -> ";
	std::cin >> n1 >> m1;

	const int size7 = 20;
	int arr7[size7]{};
	range(arr7, size7, n1, m1);

	//Задание 9.
	std::cout << "Задание 9.\n Введите любое число от - 50 до 50 -> ";
	int n2;
	std::cin >> n2;
	const int size8 = 20;
	int arr8[size8];
	std::cout << "Массив:\n";
	fill_arr(arr8, size8, -50, 50);
	std::cout << "Кол-во вхождений:\n";
	count(arr8, size8, n2);

	//Задание 10.
	std::cout << "Задание 10.\n";
	const int size9 = 20;
	int arr9[size9];
	std::cout << "Массив:\n";
	fill_arr(arr9, size9, -50, 50);
	std::cout << "Отсортированный массив:\n";
	bubble_sort(arr9, size9);



	return 0;
}