from sys import argv
from api import getAPI

def main():
    try:
        print(argv[1])
    except IndexError:
        print("Program Missing Arg. Twitter Handle")
    except Exception as e:
        print("Program Failure.  Error: {}".format(e))

if __name__ == '__main__':
    main()
