# StepScanEPR

StepscanEPR is a methodology for acquiring EPR spectra with high time resolution by exploiting the concept of modulation-excitation spectroscopy and borrowing ideas from stepscan FTIR.

The setup consisted of an Arduino Uno board connected to the SWA (Sweep Advance) output for trigger counting. A trigger is sent by the console for each measured point, either in the field or the time dimension. After counting a defined number of trigger events (e.g., switching the valves every ten scans with 1024 data points, resulting in 10,240 trigger events), the Arduino sent a command to a computer running a LabVIEW interface. This interface controlled a National Instruments relay box (NI 9472, 8-Channel 24 VDC Sourcing Digital Output Module) connected to a 24 V power supply, which in turn operated the Parker Series 9 solenoid valves. This synchronization method offers broad applicability, as it can be readily transferred to other Bruker EPR spectrometers, including both ElexSys systems and EMX systems running different software versions on Linux and Windows.

This allows for an effective time resolution of 10 ms, since the filter constant of the built-in lock-in amplifier determines the time resolution rather than the sweep speed of the magnetic field. In general, this method can be applied to any spectroscopy technique where scanning along the “energy axis” is the time-limiting acquisition step (e.g., in synchrotron-based techniques).

The LabVIEW code, Arduino program, and electronic schematics are provided.

The project was developed during a PhD project at ETH in the group of Gunnar Jeschke.

When you use StepscanEPR in your work, please cite the following publication:
10.26434/chemrxiv-2025-kn67f
