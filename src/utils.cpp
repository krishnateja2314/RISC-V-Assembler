#include "../include/utilis.h"
using namespace std;

vector<string> tokenize(const string &line)
{
    vector<string> tokens;
    string token = "";
    bool xCount = 0;
    for (int i = 0; i < line.length(); i++)
    {
        if (line[0] == '#' || line[0] == ';')
        {
            break;
        }
        if (line[i] == ',')
            continue;
        if (line[i] == ' ')
        {
            tokens.push_back(token);
            token = "";
            continue;
        }
        token += line[i];
    }
    tokens.push_back(token);
    if (tokens.size() == 3 && ((tokens[2][0] <= '9' && tokens[2][0] >= '0') || tokens[2][0] == '-'))
    {
        string token = tokens[2];
        string newToken = "";
        int j;
        for (j = 0; j < token.length(); j++)
        {
            if (token[j] == '(')
            {
                tokens.push_back(newToken);
                newToken = "";
                break;
            }
            newToken += token[j];
        }
        for (j++; j < token.length(); j++)
        {
            if (token[j] == ')')
            {
                tokens[2] = (newToken);
                token = newToken;
                break;
            }
            newToken += token[j];
        }
    }
    return tokens;
}

int32_t strToInt(const string &num)
{
    int32_t i = 0;
    if (num[0] == '-')
    {
        string token = "";
        for (int j = 1; j < num.length(); j++)
        {
            token += num[j];
        }
        i = stoi(token);
        i *= -1;
    }
    else
    {
        string token = "";
        for (int j = 0; j < num.length(); j++)
        {
            token += num[j];
        }
        i = stoi(token);
    }
    return i;
}