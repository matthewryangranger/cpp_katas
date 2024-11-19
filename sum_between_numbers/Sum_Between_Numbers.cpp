class Sum_Between_Numbers
{
    public:
    void determineMax(const int& a, const int& b,  int& max,  int& min)
    {
        if (a > b)
        {
            max = a;
            min = b;
            return;
        }
        max = b;
        min = a;
    }
    int get_sum(int a, int b)
    {
        int max, min;
        if (a == b)
            return a;
        determineMax(a, b, max, min);
        int sum = min;
        for (int i = min+1; i <= max; i++)
            sum += i;
        return sum;
    }
};