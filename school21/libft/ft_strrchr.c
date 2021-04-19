char *mystrchr(const char *s, int c) {
    while (*s != (char) c) {
        i = ft_strlen(c);
        if (!*s++) {
            return NULL;
        }
    }
    return (char *)s;
}