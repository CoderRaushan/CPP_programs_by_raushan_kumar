bool isSubsetPresent(int n, int k, vector<int> a) {
    if (k == 0)
        return true;
    if (n == 0)
        return false;
    if (a[n - 1] > k)
        return isSubsetPresent(n - 1, k, a);
    return isSubsetPresent(n - 1, k, a) || isSubsetPresent(n - 1, k - a[n - 1], a);
}
int main()
{
    cout<<isSubsetPresent();
}