#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

// a1 a2 a3 ... an -> a1 a2 a3 ... a(n-1) -> ... -> a1 a2 a3 -> a1 a2 -> a1


int main() {
    std::cin.tie( 0 );
    std::ios_base::sync_with_stdio( false );
    std::cout.tie( 0 );
    int64_t n = 0;
    int64_t m;
    std::string num;
    char c;
    while( ( c = std::cin.get() ) == '0' ) {}
    std::cin.unget();
    // if( c == ' ' ) {
    //     std::cout << "0\n";
    //     return 0;
    // }
    std::cin >> num >> m;
    int64_t cur = m;
    int64_t count = 0;
    int64_t ten_pow = 10;
    int64_t perc;
    for( unsigned i = 0; i < num.size() /* exactly */; ++i ) {
        n = num[ i ] - '0' + n * 10;
        // unsigned prev_count = count;//

        if( cur < n ) {
            if( i == num.size() - 1 ) {
                count += ( n - cur - 1 ) / m + 1;
            } else {
                count += ( n - cur ) / m + 1;
            }
        }

        if( ten_pow > cur ) {
            perc = ( ten_pow % m );
            if( perc == 0 ) {
                cur = ten_pow;
            } else {
                cur = ten_pow - perc + m;
            }
        }
        ten_pow *= 10;

        // std::cout << i + 1 << ' ' << count - prev_count << "\t" << cur << std::endl; //
    }


    // unsigned cur_size = num.size(); //- 1 ?
    // unsigned cur_n = n;
    // unsigned cur_count = ( n - pow( 10, cur_size ) * ( num[ 0 ] - '0' ) ) / m;
    // cur_n -= ( cur_count + 1 ) * m;

    std::cout << count << std::endl;

    return 0;
}
