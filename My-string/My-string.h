#pragma once

void * Mymemchr(const void * s, int c, size_t n);
int Mystrlen(const char * s);
int Yurstrhead(char * s1, char * s2);
int Mystrcmp(const char * s1, const char * s2);
int Mystrncmp(const char * s1, const char * s2, size_t n);
char * Mystrstr(const char * s1, const char * s2);
int Mystrcpy(char *  s1, char * s2);
void * Mymemcpy(void * s1, const void * s2, size_t n);
void Mymemmove(void * s1, const void * s2, size_t n);// what's it????
size_t Yurstrcpn(const char * s1, const char * s2);
size_t Mystrcspn(const char * s1, const char * s2);
int Mymemcmp(const void *s1, const void *s2, size_t n);
void Mymemset(char * s, int v, size_t n);

void * Mymemchr(const void * s, int c, size_t n)
{
    char * str = (char*)s;
    int len = Mystrlen(str);
    for (int i = 0; i < len; i++)
    {
        if (i == n)
            break;

        if (*(str + i) == c)
            return str + i;
    }
    return NULL;
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


int Mystrcmp(const char * s1, const char * s2)
{
    size_t len1 = Mystrlen(s1);
    size_t len2 = Mystrlen(s2);

    for (size_t i = 0; i < len1; i++)
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

int Mystrncmp(const char * s1, const char * s2, size_t n)
{
    size_t i = 0, j = 0;
    size_t len = Mystrlen(s1);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < len;);
    }
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

int Mymemcmp(const void *s1, const void *s2, size_t n)
{
    char * str1 = (char *)s1;
    char * str2 = (char *)s2;

    str1[n] = '\0';
    str2[n] = '\0';

    return Mystrcmp(str1, str2);
    //????
}

int Mystrcpy(char * s1, char * s2)
{
    if (s1 == NULL || s2 == NULL)
        return NULL;
    if (s1 == s2)
        return NULL;
    
    char *s = s1;
    while ((*s1++ = *s2++) != '\0');
    return s;
}

void * Mymemcpy(void * s1, const void * s2, size_t n)
{
    if (s1 == NULL || s2 == NULL)
        return NULL;
    if (s1 == s2)
        return NULL;
    char * str1 = s1;
    char *str2 = s2;
    for (int i = 0; i < n; i++)
    {
        str1[i] = str2[i];
    }
    
    return str1;
}

void Mymemmove(void * s1, const void * s2, size_t n)
{
    if (s1 == NULL || s2 == NULL)
        return NULL;
    if (s1 == s2)
        return NULL;
    char * str1 = s1;
    char *str2 = s2;
    for (int i = 0; i < n; i++)
    {
        str1[i] = str2[i];
    }

    return str1;
}

size_t Yurstrcpn(const char * s1, const char * s2)
{
    size_t len1 = Mystrlen(s1);
    size_t len2 = Mystrlen(s2);
    size_t i = 0, j = 0, k = 0;
    size_t max = 0, len = 0;
    for(k = 0; k < len1; k++)
    {
        len = 0;
        for (i = k; i < len1; i++)//len++
        {
            len++;
            for (j = 0; j < len2; j++)
            {

                if (s1[i] == s2[j])
                {
                    len--;
                    goto DoubleBreak;
                }
            }  

        }
        DoubleBreak:
        //break to here
        if (len > max)
            max = len;
    }
    return max;
}

size_t Mystrcspn(const char * s1, const char * s2)
{
    size_t len1 = Mystrlen(s1);
    size_t len2 = Mystrlen(s2);
    size_t i = 0, j = 0, k = 0;
    size_t max = 0, len = 0;

        for (i = 0; i < len1; i++)//len++
        {
            len++;
            for (j = 0; j < len2; j++)
            {

                if (s1[i] == s2[j])
                {
                    len--;
                    goto DoubleBreak;
                }
            }

        }
        DoubleBreak:
        //break to here
        if (len > max)
            max = len;

    return max;
}

void Mymemset(char * s, int v, size_t n)
{
    for (int i = 0; i < n; i++)
    {
        //if (s[i] != '\0')
            s[i] = v;
        //else
            //break;
    }
    s[n] = '\0';
    return;
}
