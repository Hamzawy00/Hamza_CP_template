#include <bits/stdc++.h>
#include <iomanip>
#include <chrono>
using namespace std;
// collapse
using std::chrono::duration;
using std::chrono::duration_cast;
using std::chrono::high_resolution_clock;
using std::chrono::milliseconds;

bool global_use_clock = false;
bool global_use_test_case = false;
#define use_clock global_use_clock = true;
#define use_test_case global_use_test_case = true;
#define space << " " <<
#define spaceEnd << " "

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vec;
typedef deque<ll> deq;
typedef vector<ull> vecull;
typedef vector<pair<ll, ll>> vecp;
typedef vector<vector<ll>> vecv;
typedef vector<set<ll>> vecset;
typedef vector<string> vecstr;
typedef pair<ll, ll> pl;
typedef map<ll, ll> mpll;
#define vec(type) vector<type>
ll OO = 1e9;
ull MOD = 1e9 + 7;

#define sz(cont) size(cont)
#define of :
#define nl << "\n"
#define null nullptr
#define no return void(cout << "No" nl)
#define yes return void(cout << "Yes" nl)
#define all(vec) vec.begin(), vec.end()
#define allrev(vec) vec.rbegin(), vec.rend()
#define forn(i, n) for (ll i = 0; i < n; ++i)
#define for1n(i, n) for (ll i = 1; i <= n; ++i)
#define forr(i, n) for (ll i = n - 1; i >= 0; --i)
#define negMod(n, m) (n % m + m) % m
bool by_len(string &a, string b)
{
    return a.size() < b.size();
}
template <typename T>
istream &operator>>(istream &in, vector<T> &into)
{
    for (ll i = 0; i < size(into); i++)
        in >> into[i];

    return in;
}
template <typename T, typename S>
istream &operator>>(istream &in, vector<pair<T, S>> &into)
{
    for (ll i = 0; i < size(into); i++)
        in >> into[i].first >> into[i].second;

    return in;
}
template <typename T>
ostream &operator<<(ostream &out, vector<T> &outto)
{
    for (ll i = 0; i < size(outto); i++)
        out << outto[i] << " ";
    out nl;
    return out;
}
template <typename T>
ostream &operator<<(ostream &out, deque<T> &outto)
{
    for (ll i = 0; i < size(outto); i++)
        out << outto[i] << " ";
    out nl;
    return out;
}
template <typename T, typename S>
ostream &operator<<(ostream &out, vector<pair<T, S>> &outto)
{
    for (ll i = 0; i < size(outto); i++)
        out << outto[i].first << ":" << outto[i].second nl;
    return out;
}
template <typename T, typename S>
ostream &operator<<(ostream &out, pair<T, S> &outto)
{
    out << outto.first << ":" << outto.second nl;
    return out;
}
#define sep cout << "===================================" << endl;
#define rv(exp) return void(cout << exp)
#define str string
#define maxHeap(type) priority_queue<type, vector<type>, less<type>>
#define minHeap(type) priority_queue<type, vector<type>, greater<type>>

void FastIO()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif
}

void test_case()
{
}
int main()
{
    use_test_case;

    auto t1 = high_resolution_clock::now();
    FastIO();
    ll tc = 1;
    if (global_use_test_case)
        cin >> tc;
    while (tc--)
        test_case();
    auto t2 = high_resolution_clock::now();

    /* Getting number of milliseconds as a double. */
    duration<double, std::milli> ms_double = t2 - t1;
    if (global_use_clock)
    {

        cout nl;
        cout << "Chrono =========================" nl;
        cout << ms_double.count() << "ms\n";
        cout << "Chrono =========================";
    }
}