#pragma once

void * Mymemchr(const void * s, int c, size_t n);
int Mystrlen(const char * s);
char * Mystrstr(const char * s1, const char * s2);
int Mystrcmp(const char * s1, const char * s2);
int Mystrncmp(const char * s1, const char * s2, size_t n);

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
