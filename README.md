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
bazel coverage -s --instrumentation_filter "^//.*[/:]" --instrument_test_targets --experimental_cc_coverage --combined_report=lcov --coverage_report_generator=@bazel_tools//tools/test/CoverageOutputGenerator/java/com/google/devtools/coverageoutputgenerator:Main //...
genhtml --output genhtml "$(bazel info output_path)/_coverage/_coverage_report.dat"
```
### Author

[Keenan Johnson](https://www.keenanjohnson.com/) is an electrical and software engineer with experience building IoT fleets of all shapes and sizes.

[Reach out](https://www.keenanjohnson.com/consulting) if you need help or are interested in hiring me as a consultant for your project.
