#include <array>
#include <iostream>
#include <algorithm>

const int maxn = 1005;

std::array<int, maxn> a, b, c, d;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::freopen("./3.in", "r", stdin);

    int T, n;
    for (std::cin >> T; T; --T)
    {
        std::cin >> n;
        a.fill(0);
        b.fill(0);
        for (int i = 1; i <= n; ++i)
            std::cin >> a[i];
        for (int i = 1; i <= n; ++i)
            std::cin >> b[i];
        c = a;
        d = b;
        std::sort(c.begin(), c.end());
        std::sort(d.begin(), d.end());
        if (c != d)
        {
            std::cout << "NO\n";
        }
        else
        {
            std::cout << "YES\n";
            for (int i = 1; i <= n; ++i)
                if (a[i] != b[i])
                {
                    for (int j = i; j <= n; ++j)
                        if (a[j] == b[i])
                        {
                            for (int k = j; k > i; --k)
                            {
                                std::swap(a[k], a[k - 1]);
                                std::cout << k << ' ' << k - 1 << '\n';
                            }
                            break;
                        }
                }
            std::cout << "0 0\n";
        }
    }
}