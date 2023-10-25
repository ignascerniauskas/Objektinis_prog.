Testavimų laikas su vector<>:
| Testavimas                          | 1000         | 10000        | 100000       | 1000000       | 10000000       |
|-------------------------------------|--------------|--------------|--------------|---------------|----------------|
| Failo nuskaitymas                   | 0.0161301 s. | 0.0150152 s. | 0.6390286 s. | 5.9425418 s.  | 57.2474174 s.  |
| Rūšiavimas                          | 0.0014783 s. | 0.0403004 s. | 0.5480623 s. | 6.4187955 s.  | 73.5052287 s.  |
| Padalinimas į dvi grupes            | 0.0013910 s. | 0.0178912 s. | 0.0533789 s. | 0.3923582 s   | 4.20718663 s.  |
| Moksliukų studentų įrašymas į failą | 0.0143645 s. | 0.0583679 s. | 0.4431161 s. | 3.9178315 s.  | 35.8384914 s.  |
| Varkšiukų studentų įrašymas į failą | 0.0156269 s. | 0.0503563 s. | 0.4228619 s. | 3.7021182 s.  | 36.0031826 s.  |
| Bendras darbo laikas                | 0.0615098 s. | 0.1819310 s. | 2.1064478 s. | 20.3736452 s. | 206.8016067 s. |

--------------------------------------------------------------------------------------------------------------------

Testavimu laikas su list<>:
| Testavimas                          | 1000         | 10000        | 100000       | 1000000       | 10000000       |
|-------------------------------------|--------------|--------------|--------------|---------------|----------------|
| Failo nuskaitymas                   | 0.0217746 s. | 0.1002813 s. | 0.9181412 s. | 9.4294152 s.  | 93.4659381 s.  |
| Rūšiavimas                          | 0.0012641 s. | 0.0144397 s. | 0.1002418 s. | 1.2525672 s.  | 16.8353772 s.  |
| Padalinimas į dvi grupes            | 0.0019113 s. | 0.0156034 s. | 0.1692366 s. | 1.3499539 s   | 14.6152694 s.  |
| Moksliukų studentų įrašymas į failą | 0.0154889 s. | 0.0377556 s. | 0.3541831 s. | 3.8977149 s.  | 36.7836225 s.  |
| Varkšiukų studentų įrašymas į failą | 0.0142214 s. | 0.0312423 s. | 0.3632089 s. | 3.2374803 s.  | 34.9812793 s.  |
| Bendras darbo laikas                | 0.0546603 s. | 0.1993223 s. | 1.9050116 s. | 19.1671315 s. | 196.6814865 s. |