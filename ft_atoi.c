int ft_atoi(const char  *str)
{
    long    result;
    int     sign;
    int     i;

    i = 0;
    sign = 1;
    result = 0;
    if (!str)
        return (result);
    while((str[i] >= 9 && str[i] <= 13) || str[i] <= 32)
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1 ;
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57)
        result = result * 10 + str[i++] - '0';
    return (result * sign);
}