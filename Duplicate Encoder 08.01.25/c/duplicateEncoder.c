#include<stdio.h>
#include<string.h>
#include<ctype.h>

void duplicate_encode(const char *word, char *result)
// we have the word variable as a constant so that it cannot be modified within the function . provides read-only access to the string
{
    int char_count[256] = {0};
    char temp_word[strlen(word) + 1]; // this is an array
    for (size_t i = 0; word[i]; i++)
    {
        temp_word[i] = tolower(word[i]); // convert to a lower case
        char_count[(unsigned char)temp_word[i]]++;
    }

    temp_word[strlen(word)] = '\0';

    for (size_t i = 0 ; temp_word[i] ; i++)
    {
        result[i] = char_count[(unsigned char)temp_word[i]] > 1 ? ')' : '(';
    }
    result[strlen(word)] = '\0';
}

int main()
{
    const char *test_cases[] = {"din", "recede" , "Success", "(( @"};
    char result[256];
    for(int i = 0 ; i < 4 ; i++)
    {
        duplicate_encode(test_cases[i], result);
        printf("Input %s -> Output %s\n", test_cases[i], result);
    }
    return 0;
}
