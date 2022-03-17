#include <iostream>
#include <string>
using namespace std;

bool palindromTest(string p);
int marksCount(string str);

int main() {
	setlocale(LC_ALL, "Russian");

	//Задача 1
	string str = "Hello world!!!\n";
	string newStr;
	cout << "Задача 1\n";
	cout << str;
	cout << "Введите символ: ";
	char sym;
	(cin >> sym).get();
	for (int i = 0; i < str.length(); i++) {
		if (sym == str[i])
			newStr += str[i];
	}
	cout << newStr << "\n\n";

	//Задача 2
	cout << "Задача 2\nВведите слово - палиндром: ";
	string palindrom;
	getline(cin, palindrom);
	if (palindromTest(palindrom))
		cout << "Это слово палиндром.\n\n";
	else
		cout << "Это не палиндром.\n\n";

	//Задача 3
	cout << "Задача 3\nВведите предложение:\n";
	string str1;
	getline(cin, str1);
	cout << "Количество знаков припенания в предложении - " << marksCount(str1) << "\n\n";

	return 0;
}

//Задача 3
int marksCount(string str) {
	char arr1[5] = { ' ', '.', ',', '!', '?' };
	int count = 0;
	for (int i = 0; i < str.length(); i++) {
		for (int j = 0; j < 5; j++) 
			if (str[i] == arr1[j])
				count++;
	}
	return count;
}
//Задача 2
bool palindromTest(string p) {
	for (int i = 0; i < p.length(); i++)
		p[i] = tolower(p[i]);
	for (int j = 0; j < p.length() / 2; j++) {
		if (p[j] == p[p.length() - j - 1])
			return true;
	}
	return false;
}