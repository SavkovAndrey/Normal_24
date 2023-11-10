#include <iostream>

#include <string>

using namespace std;
//---------------------Функции и Прототипы---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");

	//-------------------------------САМА ПРОГА-------------------------------------

	string str, str_count, str_count_max;
	int count_c = 0, count_w = 0, count_c_max = 0, count_w_max = 0;;
	//char ch = ' ';

	cout << "Enter the string: ";
	getline(cin, str);

	for (int i = 0; i <= str.size(); i++)
	{
		//ch = str[i];
		if (isspace(str[i]) || str[i] == '\0')
		{
			count_w++;

			if (count_c > count_c_max)
			{
				count_c_max = count_c;
				count_w_max = count_w;
				str_count_max = str_count;

			}

			str_count = "";
			count_c = 0;
		}
		else
		{
			count_c++;
			str_count = str_count + str[i];
		}
	}

	cout << "\nThe longest word at number " << count_w_max << ", its length is " << count_c_max << endl;
	cout << "this is the word: " << str_count_max << endl;





	system("pause");
	return 0;
}
