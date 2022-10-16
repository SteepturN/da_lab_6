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

    std::stringstream sstr;
    int64_t cur = m;
    unsigned count = 0;
    while( cur < n ) {
        if( std::to_string( cur ) < num ) {
            // std::cout << cur << std::endl;
            ++count;
        }
        cur += m;
    }
    std::cout << count << std::endl;

    return 0;
}
