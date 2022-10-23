char *ft_strrchr(const char *str, int c)
{
    int i;
    int k;

    i = 0;
    k = 0;
    while(str && str[i])
    {
        if(str[i] == c)
        k = i;
        i++;
    }
    if(k) 
    return((char *)&str[k]);
    if(!(char )c)
        return((char *)&str[i]);
    return(0);
}
