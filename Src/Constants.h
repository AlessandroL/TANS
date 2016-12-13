#ifndef CONSTANTS_H_
#define CONSTANTS_H_

const double g_mass_gamma = 0.0; // MeV
const double g_mass_electron = 0.511; // MeV
const double g_mass_positron = 0.511; // MeV

const double g_threshold_gamma = 10.; // Soglia in MeV per i gamma per fare produzione di coppia.
const double g_threshold_electron = 88.05; // Soglia in MeV per gli elettroni per fare bremmstrahlung.
const double g_threshold_positron = g_threshold_electron; // Soglia in MeV per gli positroni per fare bremmstrahlung.

const double Na = 6.022e+23;

const double Z_mean = 14.46;

const double g_gamma_bs_min_energy = 1.e-3; // MeV

const double g_absorb_threshold = 2.5; //MeV

const double g_masses[] = {
  g_mass_gamma,
  g_mass_electron,
  g_mass_positron
};

const double g_threshold[] = {
  g_threshold_gamma,
  g_threshold_electron,
  g_threshold_positron
};

const double bs_b = 0.0122;

#endif
