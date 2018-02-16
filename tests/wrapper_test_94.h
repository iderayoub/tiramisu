#ifndef TIRAMISU_test_h
#define TIRAMISU_test_h


// Define these values for each new test
#define TEST_NAME_STR       "PLDI_TEST"
#define TEST_NUMBER_STR     "94"
// Data size
#define SIZE 96


// --------------------------------------------------------
// No need to modify anything in the following ------------
// --------------------------------------------------------

#include <tiramisu/utils.h>

#ifdef __cplusplus
extern "C" {
#endif
int tiramisu_generated_code(halide_buffer_t *_p0_buffer);
int tiramisu_generated_code_argv(void **args);

extern const struct halide_filter_metadata_t halide_pipeline_aot_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
