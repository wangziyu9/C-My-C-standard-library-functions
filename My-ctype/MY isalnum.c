int MYisalnum(int ch);

int MYisalnum(int ch)   //if is alphanumeric, return 1,or return 0
{
    if ((ch >= 16 && ch <= 25) || (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        return 1;
    else
        return 0;
}
