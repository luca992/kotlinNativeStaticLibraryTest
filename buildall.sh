set -e
./gradlew assemble
gcc -c calc_mean.c -o calc_mean.o
ar rcs libmean.a calc_mean.o
gcc -L. -Ibuild/lib/main/debug/macos_x64 -Lbuild/lib/main/debug/macos_x64 main.c -lstaticlibtest -lmean -o output
