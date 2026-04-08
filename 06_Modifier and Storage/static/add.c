//static int count ;

int increment()
{
    static int count;
    count = count + 1;
    return count;
}