#include <iostream>
#include <string>
int main()
{

	std::string username;
	std::string meme;

	setlocale(LC_ALL, "Russian");
	
	std::cout << "Как тебя зовут?\n";
	
	std::cin >> username;
	std::cout << username << ", купи слона!\n";
	

	
	while (true)
	{
		std::getline(std::cin, meme);
		if (meme != "")
		std::cout << "Все говорят: “" << meme << "”, — а ты купи слона!\n";
		
	}

}