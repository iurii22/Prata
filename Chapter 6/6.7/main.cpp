#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    cout << "Enter words (q/Q to quit): " << endl;
    char ch;
    int vowels = 0;
    int consonants = 0;
    int others = 0;
    int first_elem = 0;
    cin.get(ch);
    while (ch != 'q' && ch != 'Q' )
    {
        if (isalpha(ch) && first_elem == 0)
        {
            switch(ch)
            {
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                case 'i':
                case 'I':
                case 'y':
                case 'Y': vowels++;  break;
                default : consonants++; break;
            }
            first_elem = 1;
        }
        else
            if (isspace(ch))
            {
                first_elem = 0;
            }
               else if ((ispunct(ch) || isdigit(ch))&& first_elem == 0)
                {
                    others++;
                  first_elem = 1;
                }

            cin.get(ch);
    }
    cout << vowels << " words beginning with vowels " << endl << consonants << " words beginning with consonants " << endl
         << others << " others";

    return 0;
}

