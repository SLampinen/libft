void *ft_memmove (void *dest, const void *src, int len)
{
    char *d;
    char *s;
    char *lastd;
    char *lasts;

    d = dest;
    s = (char *)src;
    if (d < s)
        while (len--)
            *d++ = *s++;
    else
    {
        lasts = s + (len - 1);
        lastd = d + (len - 1);
        while (len--)
            *lastd-- = *lasts--;
    }
return dest;
}