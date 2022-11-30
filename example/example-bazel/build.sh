bazel build //main:hello-world
echo "print result======================="
./bazel-bin/main/hello-world
echo ".print result======================="

# execute unit test result and print the result to the console
bazel test  "//main:hello-greet-test" --test_output=all