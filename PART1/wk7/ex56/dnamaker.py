import random
import argparse

if __name__=='__main__':
    parser = argparse.ArgumentParser(description="DNA letter generator.")
    parser.add_argument("filepath")
    parser.add_argument("amount", type=int)
    args = parser.parse_args()

    letters = ['A','C','G','T']
    with open(args.filepath, 'w') as outfile:
        for _ in range(args.amount):
            outfile.write(random.choice(letters))

