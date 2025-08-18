# StepScanEPR

StepscanEPR is a methodology for acquiring EPR spectra with high time resolution by exploiting the concept 
of modulation-excitation spectroscopy and borrowing ideas from stepscan FTIR.

The setup consisted of an Arduino Uno board connected to the SWA (Sweep Advance) output for trigger counting. 
A trigger is sent by the console for each measured point, either in the field or the time dimension. 
Upon counting a certain number of trigger events, e.g., switching the valves every ten scans with 1024 data points, 
results in 10240 trigger events, the Arduino sent a command to a computer running a LabView interface. 
This interface controlled a National Instruments relay box (NI 9472, 8-Channel 24 VDC Sourcing Digital Output Module) 
connected to a 24 V power supply, which in turn addressed the Parker Series 9 solenoid valves. 
This synchronization method offers broad applicability, as it can be readily transferred to other Bruker EPR spectrometers, 
including both ElexSys systems and EMX systems running different software versions across Linux and Windows systems. 

This allows for an effective time resolution of 10 ms since the filter constant of the built-in lock-in amplifier determines 
the time resolution rather than the sweep speed of the magnetic field. In general, this method can be applied to any spectroscopy 
method where the scanning along the “energy axis” is the time-limited acquisition step e.g., in synchrotron-based techniques.

The LabVIEW code, the Arduino program, and the electronic schematics are provided.

The project was has been developn during a PhD project at ETH in the group of Gunnar Jeschke. 

 When you use StepScanEPR in your work, please cite the following publication:
