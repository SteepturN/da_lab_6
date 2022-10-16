#include <iostream>
#include <sstream>
#include <string>


int main() {
    std::cin.tie( 0 );
    std::ios_base::sync_with_stdio( false );
    std::cout.tie( 0 );
    int64_t n = 0;
    unsigned m;
    std::string num, m_num;
    std::cin >> num >> m;
    for( char i : num ) {
        n = i - '0' + n * 10;
    }
    int64_t cur = m;
    unsigned count = 0;
    while( cur < n ) {
        std::cout << '\t' << cur << ' ' << ( num < std::to_string( cur ) );
        cur += m;
        ++count;
        if( count == 5 ) {
            std::cout << std::endl;
            count = 0;
        }
    }
    std::cout << std::endl;

    return 0;
}
