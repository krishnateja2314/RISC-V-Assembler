#include "../include/utilis.h"

using namespace std;

vector<string> tokenize(const string &line)
{
    vector<string> tokens;
    string token = "";
    bool xCount = 0;
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == ' ')
            continue;
        if (line[i] == 'x' && xCount == 0)
        {
            tokens.push_back(token);
            token = 'x';
            xCount = 1;
            continue;
        }
        if (line[i] == ',')
        {
            tokens.push_back(token);
            token = "";
            continue;
        }
        token += line[i];
    }

    tokens.push_back(token);
    return tokens;
}