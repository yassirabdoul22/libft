void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    if(!src)
        return NULL;
    i = 0;
    while(i<n)
    {
        dest[i]=src[i];
        i++;
    }
    return dest;
}



