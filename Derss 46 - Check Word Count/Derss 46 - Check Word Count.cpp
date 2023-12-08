#include <iostream>

// Girilen cümlede kaç tane kelime olduğunu bulan c++ uygulamasını yapınız.
int CountWords(std::string sentence)
{
	if (sentence.length() == 0)
	{
		return 0;
	}
	else if (isblank(sentence[0]))
	{
		return 0;
	}
	else
	{
		int word_counter = 0;
		int blank_counter = 0;
		for (int i = 0; i < sentence.length(); i++)
		{
			if (isblank(sentence[i]))
			{
				blank_counter++;
				if (!isblank(sentence[i + 1]))
				{
					word_counter++;
					// Aşağıdaki kısmı ilk boşluktan önceki kelimeyi saydırması için ekledim
					if (blank_counter == 1)
					{
						word_counter++;
					}
				}
				else
				{
					if (blank_counter == 1)
					{
						word_counter++;
					}
					break;
				}
				
			}
		}

		return word_counter;
	}

}

int main()
{
	int count = CountWords(" ");
	std::cout << count;
}
