#include <iostream>
#include <string>
#include <ctime>
#include "Animal.h"

Animal match(Animal* zoo, int n)
{
    if (n > 1)
    {
        Animal* winners = new Animal[(n / 2) + n % 2];
        int j = 0;
        for (int i = 0; i < n - 1; i += 2)
        {
            if (zoo[i].GetStrength() > zoo[i + 1].GetStrength())
            {
                zoo[i].Mighter();
                winners[j].SetStrength(zoo[i].GetStrength());
                winners[j].SetType(zoo[i].GetType());
                winners[j].SetName(zoo[i].GetName());
            }
            if (zoo[i].GetStrength() == zoo[i + 1].GetStrength())
            {
                int luck1 = rand() % 900 + 100;
                int luck2 = rand() % 900 + 100;
                if (luck1 >= luck2)
                {
                    zoo[i].Mighter();
                    winners[j].SetStrength(zoo[i].GetStrength());
                    winners[j].SetType(zoo[i].GetType());
                    winners[j].SetName(zoo[i].GetName());

                }
                else
                {
                    zoo[i + 1].Mighter();
                    winners[j].SetStrength(zoo[i+1].GetStrength());
                    winners[j].SetType(zoo[i+1].GetType());
                    winners[j].SetName(zoo[i+1].GetName());
                }
            }
            if (zoo[i].GetStrength() < zoo[i + 1].GetStrength())
            {
                zoo[i + 1].Mighter();
                winners[j].SetStrength(zoo[i+1].GetStrength());
                winners[j].SetType(zoo[i+1].GetType());
                winners[j].SetName(zoo[i+1].GetName());
            }
            ++j;
        }
        if (n % 2 == 1)
        {
            winners[j].SetStrength(zoo[n - 1].GetStrength());
            winners[j].SetType(zoo[n - 1].GetType());
            winners[j].SetName(zoo[n - 1].GetName());
        }
        delete[] zoo;
        return match(winners, (n / 2) + n % 2);
    }
    else
    {
        return zoo[0];
    }
}

int main(int argc, char*argv[])
{
    srand(time(0));
    std::string names[8] = { "sanya", "nikita", "melman", "pavlik", "dzhonik", "miroslav", "igor", "Lee"};
    std::string types[8] = { "slon", "shakal", "tarakan", "psina", "klop", "albatros","bobr","astrahanskaya ribka" };
    Animal* punk = new Animal[100];
    for (int i = 0; i < 100; ++i)
    {
        punk[i].SetName(names[rand() % 8]);
        punk[i].SetType(types[rand() % 8]);
        punk[i].SetStrength(rand() % 5);
    }
    for (int i = 0; i < 100; ++i)
    {
        std::cout << i << ": ";
        punk[i].PrintInfo();
    }
    std::cout << "winner: ";
    match(punk, 100).PrintInfo();
    return EXIT_SUCCESS;
}


