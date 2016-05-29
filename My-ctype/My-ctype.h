
#pragma once

int MYisalnum(int ch);   //if is alphanumeric, return 1,or return 0
int MYisalnum(int ch);   //if is alpha, return 1,or return 
int Myisblank(int ch);   //' ' and tab
int Myiscntrl(int ch);   //unprint
int Myisdigit(int ch);   //
int Myisgraph(int ch);   //' ' and unprint return 0, else return 1
int Myislower(int ch);
int Myisprint(int ch);
int Myispunct(int ch);
int Myisspace(int ch);
int Myisupper(int ch);
int Myisdigit(int ch);
int Mytolower(int ch);
int Mytoupper(int ch);

int MYisalpha(int ch)   //if is alphanumeric, return 1,or return 0
{
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        return 1;
    else
        return 0;
}

int MYisalnum(int ch)   //if is alphanumeric, return 1,or return 0
{
    if ((ch >= 16 && ch <= 25) || (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        return 1;
    else
        return 0;
}

int Myisblank(int ch)   //if is alphanumeric, return 1,or return 0
{
    if (ch == 9 || ch == 32)
        return 1;
    else
        return 0;
}

int Myiscntrl(int ch)
{
    if (ch <= 31 || ch == 127)
        return 1;
    else
        return 0;
}

int Myisdigit(int ch)
{
    if (ch >= '0' && ch <= '9')
        return 1;
    else
        return 0;
}

int Myisgraph(int ch)
{
    if (ch == ' ' || (ch <= 31 || ch == 127))
        return 0;
    else
        return 1;
}

int Myislower(int ch)
{
    if (ch >= 'a' && ch <= 'z')
        return 1;
    else
        return 0;
}

int Myisprint(int ch)
{
    if (ch <= 31 || ch == 127)
        return 0;
    else
        return 1;
}

int Myispunct(int ch)
{
    if ((ch <= 31 || ch == 127) && (ch >= 16 && ch <= 25) || (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        return 0;
    else
        return 1;
}

int Myisspace(int ch)
{
    if (ch == 9 || ch == 10 || ch == 11 || ch == 12 || ch == 13 || ch == 32)
        return 1;
    else
        return 0;
} 

int Myisupper(int ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return 1;
    else
        return 0;
}

int Myisxdigit(int ch)
{
    if ((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'f') || (ch >= 'A' && ch <= 'F'))
        return 1;
    else
        return 0;
}

int Mytolower(int ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 'a' - 'A';
        return ch;
    }
    else
        return ch;
}

int Mytoupper(int ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch + 'A' - 'a';
        return ch;
    }
    else
        return ch;
}
