class MedianFinder
{
public:
    priority_queue<int, vector<int>, greater<int>> pu;
    priority_queue<int> pl;
    MedianFinder()
    {
    }

    void addNum(int num)
    {
        if (pl.empty() || pl.top() >= num)
            pl.push(num);
        else
            pu.push(num);
        if (pu.size() - pl.size() == 2)
        {
            pl.push(pu.top());
            pu.pop();
        }
        else if (pl.size() - pu.size() == 2)
        {
            pu.push(pl.top());
            pl.pop();
        }
    }

    double findMedian()
    {

        if (pu.size() == pl.size())
        {
            return (pu.top() + pl.top()) / 2.0;
        }
        else if (pl.size() > pu.size())
            return pl.top();
        else
            return pu.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */