# TODO: fix include prefixes

cc_library(
    name="logger", 
    hdrs=["src/logger/logger.hpp"],
    deps=[
        "//external/spdlog:spdlog",
    ],
    visibility = ["//visibility:public"],
    strip_include_prefix = "src",
)

cc_library(
    name="timer", 
    hdrs=["src/timer/timer.hpp"],
    visibility = ["//visibility:public"],
    strip_include_prefix = "src",
)

cc_library(
    name="utilities", 
    hdrs=["src/utilities/utils.hpp"],
    visibility = ["//visibility:public"],
    strip_include_prefix = "src",
)