
char *func1(char *ndog)
{
    char *p;
    int i, j;

    if (ndog == NULL)
        return (NULL);
    for (i = 0; ndog[i] != '\0'; i++)
    p = malloc(sizeof(char) * i+1);

    if (p == NULL)
        return NULL;
    for (j = 0; ndog[j]; j++)
        p[j] = ndog[j];
}


dog_t *new_dog(char *name, float age, char *owner)
{
    
}
