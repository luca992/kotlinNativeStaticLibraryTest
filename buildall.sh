set -e
./gradlew assemble
gcc -Ibuild/lib/main/debug/macos_x64 -Lbuild/lib/main/debug/macos_x64 main.cpp -lstaticlibtest -o output
