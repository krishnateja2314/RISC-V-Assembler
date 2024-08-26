#include "../include/utilis.h"

using namespace std;

vector<string> tokenize(const string &line)
{
    vector<string> tokens;
    string token = "";
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == ' ' || line[i] == ',')
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