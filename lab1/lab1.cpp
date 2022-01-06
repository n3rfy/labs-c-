#include <iostream>
#include <string>

using namespace std;

unsigned short height;
//объявляем рост-только положительное

unsigned short ReadPersonAge(){
    //Запись возраста, только положительное
    //Возвращает возраст
    
	std::cout << "Age: ";
	unsigned short age;
	std::cin >> age;
	return age;
}

std::string ReadPersonName(){
    //Запись имя, стоковый тип данных
    //Возвращает имя
    
	std::cout << "Name: ";
	std::string name = "";
	std::cin >> name;
	return name;
}

void ReadPersonHeigth(){
    //Запись роста 
    //Записывает рост в переменную

	std::cout << "Height: ";
	std::cin >> height;
}

void ReadPersonWeigth(unsigned short& weight){
    //Запись веса, передаем на вход weight - только положительное
    //Записывает вес в переменную

	std::cout << "Weight: ";
	std::cin >> weight;
}

void ReadPersonSalary(double* salary){
    //Запись зарплаты, salary - дабл
    //Записывает зарплату в ссылку salary 

	std::cout << "Salary: ";
	std::cin >> *salary;
}

void ReadPersonData(std::string& name, unsigned short& age,double& salary){
    //Чтение персональных данных, на вход имя-стринг 
    //                                    возраст-только положительный
    //                                    salary-дабл

	std::cout << "Enter your data: \n";
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonSalary(&salary);
}

void ReadPersonData(std::string& name, unsigned short& age,
                                            unsigned short& height, unsigned short& weight){
    //Перегруженная функция Чтение персональных данных, на вход имя-стринг
    //                                                          возраст-только положительный
    //                                                          рост-только положительный
    //                                                          вес-только положительный  

	std::cout << "Enter your data: \n";
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonHeigth();
	height = ::height;
	ReadPersonWeigth(weight);
}

void WritePersonData(const std::string& name, unsigned short age, 
                     const std::string& height = "", const std::string& weight = "", 
                                                                const std::string& salary = ""){
    //Запись персональных данных, передаем на вход имя-стринг
    //                                             возраст-только положительный
    //                                             рост-только положительный
    //                                             вес-только положительный
    //                                             зарплата-дабл

	std::cout << "Age: " << age << "\n";
	std::cout << "Name: " << name << "\n";
	std::cout << "Heignt: " << height << "\n";
	std::cout << "Weight: " << weight << "\n";
	std::cout << "Salary: " << salary << "\n\n";
}

int main() {
	std::string name;
	unsigned short weight;
    //объявляем вес-только положительный
	unsigned short age;
    //объявляем возраст-только положительный
	double salary;
    //объявляем зарплату-дабл
	ReadPersonData(name,age,salary);
	WritePersonData(name,age,"","",std::to_string(salary));

	ReadPersonData(name,age,height,weight);
	WritePersonData(name,age,std::to_string(height),std::to_string(weight),"");
	return 0;
}

