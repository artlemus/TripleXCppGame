#include <iostream>

void PrintIntroduction(int Difficulty)
{
    // print welcome messages to the terminal
    std::cout << std::endl;
    std::cout << "########################################################################################\n";
    std::cout << "#*                                                                                    *#\n";
    std::cout << "#*               You are trapped on level " << Difficulty;
    std::cout << " of the mollting pits of HELL              *#\n";
    std::cout << "#*                                                                                    *#\n";
    std::cout << "########################################################################################\n";
    std::cout << "########################################################################################\n";
    std::cout << "##                                                                                    ##\n";
    std::cout << R"(##                      \.   \.      __,-"-.__      ./   ./"                          ##       
##                  \.   \`.  \`.-'"" _,="=._ ""`-.'/  .'/   ./                       ##
##                   \`.  \_`-''      _,="=._      ``-'_/  .'/                        ##
##                    \ `-',-._   _.  _,="=._  ,_   _.-,`-' /                         ##
##                 \. /`,-',-._"""  \ _,="=._ /  """_.-,`-,'\ ./                      ##
##                  \`-'  /    `-._  "       "  _.-'    \  `-'/                       ##
##                  /)   (         \    ,-.    /         )   (\                       ##
##               ,-'"     `-.       \  /   \  /       .-'     "`-,                    ##
##             ,'_._         `-.____/ /  _  \ \____.-'         _._`,                  ##
##            /,'   `.                \_/ \_/                .'   `,\                 ##
##           /'       )                  _            Krogg (       `\                ##
##                   /   _,-'"`-.  ,++|T|||T|++.  .-'"`-,_   \                        ##
##                  / ,-'        \/|`|`|`|'|'|'|\/        `-, \                       ##
##                 /,'             | | | | | | |             `,\                      ##
##                /'               ` | | | | | '               `\                     ##
##                                   ` | | | '                                        ##
##                                     ` | '";                                        ##)"
              << std::endl;
    std::cout << "##                                                                                    ##\n";
    std::cout << "########################################################################################\n";
    std::cout << "########################################################################################\n";
    std::cout << "#*                                                                                    *#\n";
    std::cout << "#*                     Unless you can enter the correct code!                         *#\n";
    std::cout << "#*                    or be stuck in HELL for all of eternity!!!!                     *#\n";
    std::cout << "#*                                                                                    *#\n";
    std::cout << "########################################################################################\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    // declare three number code

    const int CodeX = rand() % 6;
    const int CodeY = rand() % 6;
    const int CodeZ = rand() % 6;

    const int CodeSum = CodeX + CodeY + CodeZ;
    const int CodeProduct = CodeX * CodeY * CodeZ;

    // print sum and prod to terminal

    std::cout << "\n                            + There are 3 numbers in the code";
    std::cout << "\n                            + The codes adds-up to: " << CodeSum;
    std::cout << "\n                            + The codes multiply to give: " << CodeProduct << std::endl;

    // Stores Player guess
    int GuessA, GuessB, GuessC;
    std::cout << "CODE ENTRY NUMBER: \n";
    std::cin >> GuessA;
    std::cout << "CODE ENTRY NUMBER: \n";
    std::cin >> GuessB;
    std::cout << "CODE ENTRY NUMBER: \n";
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // finds out if the players guess matches the answer
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << " you've guessed correct, WOW!";
        return true;
    }
    else
    {
        std::cout << " Sorry! wrong answer!! game over!";
        return false;
    }
}

int main()
{
    int LevelDifficulty = 1;
    int const MaxDifficulty = 6;

    while (LevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();  // clears any errors
        std::cin.ignore(); //discards the buffer

        if (bLevelComplete)
        {
            //increase the level difficulty
            ++LevelDifficulty;

        }
        
    }
    std::cin.clear();  // clears any errors
    std::cin.ignore(); //discards the buffer
    std::cout << "########################################################################################\n";
    std::cout << "#*                                                                                    *#\n";
    std::cout << "#*                              Congratulations!!!!!!!!                               *#\n";
    std::cout << "#*                    YOU HAVE ESCAPED THE DEPTHS OF HELL!!!!!!!!                     *#\n";
    std::cout << "#*                                                                                    *#\n";
    std::cout << "########################################################################################\n";
    return 0;
}