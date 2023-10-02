#include "iostream"
#include "string";
using namespace std;


class Dogs {
private:
	string name, color;
	int age;
public:

	// Конструктор
	Dogs(string name_dog, int age_dog, string color_dog) {
		name = name_dog;
		age = age_dog;
		color = color_dog;
		cout << "Данные о собаке по имени " << name << " добавлены"<<endl;
	}

	// Деструктор
	~Dogs()
	{
		cout << "Переходим к следующей собаке " << endl;
	}

	string GetColor() {
		return color;
	}
	string GetName() {
		return name;
	}

	int GetAge() {
		return age;
	}

	void SetColor(string value_color) {
		color = value_color;
	}

};

int Summa_grey_dogs(string color, int grey_dogs_sum) {
	grey_dogs_sum += 1;
	return grey_dogs_sum;
}

int Summa_black_dogs(string color, int black_dogs_sum) {
	black_dogs_sum += 1;
	return black_dogs_sum;
}

int Summa_white_dogs(string color, int white_dogs_sum) {
	white_dogs_sum += 1;
	return white_dogs_sum;
}

int Summa_ginger_dogs(string color, int ginger_dogs_sum) {
	ginger_dogs_sum += 1;
	return ginger_dogs_sum;
}


int main() {

	setlocale(LC_ALL, "ru");
	cout << "Возможные цвета: white, grey, black, ginger" << endl;
	cout << "Можно ввести информацию о трех собаках" << endl;
	string Name, Color;
	int Age;
	int sum_grey=0, sum_white=0, sum_black=0, sum_ginger=0;
	


	for (int amount = 0; amount <= 2; amount++)
	{
		cout << "Введите имя:" << endl;
		cin >> Name;
		cout << "Введите возраст:" << endl;
		cin >> Age;
		cout << "Введите цвет:" << endl;
		cin >> Color;
		if (amount == 0)
		{
			// Создание объекта класса
			Dogs dog1(Name,Age, Color);
			dog1.SetColor(Color);
			if (dog1.GetColor() == "grey")
			{
				sum_grey = Summa_grey_dogs(dog1.GetColor(), sum_grey);
			}
			if (dog1.GetColor() == "black")
			{
				sum_black = Summa_black_dogs(dog1.GetColor(), sum_black);
			}
			if (dog1.GetColor() == "white")
			{
				sum_white = Summa_white_dogs(dog1.GetColor(), sum_white);
			}
			if (dog1.GetColor() == "ginger")
			{
				sum_ginger = Summa_ginger_dogs(dog1.GetColor(), sum_ginger);
			}	
		}
		if (amount == 1)
		{
			// Создание объекта класса
			Dogs dog2(Name, Age, Color);
			dog2.SetColor(Color);
			if (dog2.GetColor() == "grey")
			{
				sum_grey = Summa_grey_dogs(dog2.GetColor(), sum_grey);
			}
			if (dog2.GetColor() == "black")
			{
				sum_black = Summa_black_dogs(dog2.GetColor(), sum_black);
			}
			if (dog2.GetColor() == "white")
			{
				sum_white = Summa_white_dogs(dog2.GetColor(), sum_white);
			}
			if (dog2.GetColor() == "ginger")
			{
				sum_ginger = Summa_ginger_dogs(dog2.GetColor(), sum_ginger);
			}
		}
		if (amount == 2)
		{
			// Создание объекта класса
			Dogs dog3(Name, Age, Color);
			dog3.SetColor(Color);
			if (dog3.GetColor() == "grey")
			{
				sum_grey = Summa_grey_dogs(dog3.GetColor(), sum_grey);
			}
			if (dog3.GetColor() == "black")
			{
				sum_black = Summa_black_dogs(dog3.GetColor(), sum_black);
			}
			if (dog3.GetColor() == "white")
			{
				sum_white = Summa_white_dogs(dog3.GetColor(), sum_white);
			}
			if (dog3.GetColor() == "ginger")
			{
				sum_ginger = Summa_ginger_dogs(dog3.GetColor(), sum_ginger);
			}
		}
	}
	 
	
	
	cout << "Количество серых собак: "<<sum_grey << endl;
	cout << "Количество черных собак: " <<sum_black << endl;
	cout << "Количество белых собак: " << sum_white << endl;
	cout << "Количество рыжих собак: " << sum_ginger << endl;
	
	
	

	return 0;
}
