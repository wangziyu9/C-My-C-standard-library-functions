#pragma once

int Myabs(signed int c)
{
    if (c < 0)
        return ~(--c);
    return c;
}

double Myfabs(double f)    //from the internet

{

    *(((int *)& f) + 1) &= 0x7FFFFFFF;

    return f;
}

double Mysqrt(double f)
{
    double x = f;
    double y = 0;
    while (1)
    {
        y = x * x - f;
        if (fabs(y) < 0.0000001)
            break;
        x = x - y / (2 * x);
    }
    return x;
}
