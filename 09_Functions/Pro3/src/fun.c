int funcount(){
    static int count = 0;

    count++;
    return count;
}