# bazel-cpp-starter
A starter project for using Bazel and C++ and GTest.

It also includes a VSCode Dev / Docker Container for local development.

### Build Source
```shell
 bazel build //...
```

### Run Tests
```shell
bazel test //... --test_output=errors
```

### Code Coverage
```
bazel coverage -s --instrument_test_targets --experimental_cc_coverage --combined_report=lcov --coverage_report_generator=@bazel_tools//tools/test/CoverageOutputGenerator/java/com/google/devtools/coverageoutputgenerator:Main //...
genhtml --output genhtml "$(bazel info output_path)/_coverage/_coverage_report.dat"
```
