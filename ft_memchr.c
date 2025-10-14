void *ft_memchr(const void *s, int c, size_t n)
 {
        unsigned char *res;
        unsigned char cara;
        size_t i;
        if(!s)
            return  NULL;
        i = 0;
        res = (unsigned char *)s;
        cara = (unsigned char )c;
        
        while(i<n)
        {
            if(res[i]==cara)
                return (void *)(res+i);
            i++;
        }
        return NULL;
 }
