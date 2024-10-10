import subprocess
import argparse


parser = argparse.ArgumentParser()
parser.add_argument("-o", "--open", action="store_true", help="Open solution")
args = parser.parse_args()

subprocess.check_call(["cmake", "-S", ".", "-B", "./bin"])

if args.open:
    subprocess.Popen(["start", "bin/SDL2-Qt-GameEngine-Editor-Demo.sln"], shell=True)
