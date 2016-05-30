#pragma once

int Yurstrhead(char * s1, char * s2);
int Mystrlen(const char * s);
int Mystrcmp(const char * s1, const char * s2);
char * Mystrstr(const char * s1, const char * s2);

int Yurstrhead(char * s1, char * s2)
{
    int len2 = Mystrlen(s2);

    if (len2 == 0)
        return 1;

    int i = 0;

    for (i = 0; i < len2; i++)
    {
        if (s1[i] == '\0')
            return 0;

        if (s1[i] == s2[i])
            continue;
        else
            return 0;;
    }
    return 1;
}

int Mystrlen(const char * s)
{
    int i = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        //NULL
    }
    return i;
}

int Mystrcmp(const char * s1, const char * s2)
{
    size_t len1 = Mystrlen(s1);
    size_t len2 = Mystrlen(s2);

    for (int i = 0; i < len1; i++)
    {
        if (s1[i] == s2[i])
            continue;
        else if (s1[i] < s2[i])
            return -1;
        else
            return 1;
    }

    if (len1 < len2)
        return -1;
    else if (len1 > len2)
        return 1;

    return 0;
}

char * Mystrstr(const char * s1, const char * s2)
{
    int i = 0, j = 0;
    int len1, len2;

    len1 = Mystrlen(s1);
    len2 = Mystrlen(s2);

    for (i = 0; i <= len1; i++)
    {
        //printf("%d_ ", Yurstrhead(s1 + i, s2 + i));
        if (Yurstrhead(s1 + i, s2))
            return (s1 + i);
    }

    return NULL;
}
