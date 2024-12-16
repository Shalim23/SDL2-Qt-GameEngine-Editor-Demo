import subprocess
import argparse


parser = argparse.ArgumentParser()
parser.add_argument("-o", "--open", action="store_true", help="Open solution")
parser.add_argument("--qt_path", required=True, help="Path to Qt libraries")
args = parser.parse_args()

subprocess.check_call(["cmake", f"-DCMAKE_PREFIX_PATH={args.qt_path}", "-S", ".", "-B", "./bin"])

if args.open:
    subprocess.Popen(["start", "bin/SDL2-Qt-GameEngine-Editor-Demo.sln"], shell=True)
