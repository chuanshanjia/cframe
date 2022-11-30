load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "hello-greet",
    srcs = ["hello-greet.cc"],
    hdrs = ["hello-greet.h"],
)

cc_binary(
    name = "hello-world",
    srcs = ["hello-world.cc"],
    deps = [
        ":hello-greet",
        "//lib:hello-time",
    ],
)

cc_test(
    name = "hello-greet-test",
    srcs = ["hello-greet-test.cc"],
    deps = [
      ":hello-greet",
      "@com_google_googletest//:gtest_main",
    ],
)
