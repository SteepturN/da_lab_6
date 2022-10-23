#! /usr/bin/env python3

# -*- coding: utf-8 -*-

import sys
import random
import string

if __name__ == "__main__":
    # Проверяем, что передали 1 аргумент.
    if len(sys.argv) != 2:
        print( "Usage: {0} <test file name>".format( sys.argv[0] ) )
        sys.exit(1)
    test_file_name = "0"
    with open( "{0}".format( sys.argv[ 1 ] ), 'w' ) as output_file:
        output_file.write("{0} {1}\n".format( random.randint(1, 10 ** 11), random.randint(1, 10 ** 5) ) )
