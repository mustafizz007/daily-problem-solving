#include<bits/stdc++.h>
using namespace std;
bool is_prime (int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
vector<int>generate_prime(int n)
{
    vector<int> primes;
    int num = 3;
    while (primes.size() < n)
    {
        if (is_prime(num)) 
        {
            primes.push_back(num);
        }
        num += 2; 
    }
    return primes;
} 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> prime_numbers = generate_prime(n);
        for (int i=0; i<n; i++)
        {
            cout<<prime_numbers[i]<<" ";
        }
        cout<<endl;

    }
}