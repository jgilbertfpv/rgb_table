#ifndef FFT_H
#define FFT_H

#include <fftw3.h>

#define FIFO_FILE        "/tmp/mpd.fifo"

extern double *fft_input;
extern fftw_complex *fft_out;
extern fftw_plan fft_plan;

int init_fft(void);
void get_samples_do_fft(void);
void copy_bins_to_old(void);
void compute_magnitude(void);
void compute_delta_from_last(void);
void add_bins_to_history(void);
void compute_bin_hist(void);
void compute_std_dev(void);

#endif
