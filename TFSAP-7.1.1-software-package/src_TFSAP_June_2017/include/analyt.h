/*************************************************
*
* Copyright 2016 Boualem Boashash
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* Authors:                 Boualem Boashash         (boualem.boashash@gmail.com)
*						   RA: B.H.
* Maintainer since 2015:  Samir Ouelha  			(samir_ouelha@hotmail.fr)
*
* The following references 2 should be cited whenever this script is used:
* [1] B. Boashash, Samir Ouelha, Designing time-frequency  and time-scale
* features for efficient classification of non stationary signals: a tutorial
* review with performance comparison, Digital Signal Processing, In Press.
* [2] B. Boashash, Samir Ouelha, Efficient Software Matlab Package for the calculation 
* of Time-Frequency Distributions related Time-Scale methods and the extraction of 
* signal characteristics, SoftwareX, In Press.
* In addition, the following 3rd reference is relevant for use of the executable
* [3] B. Boashash (ed.), Time-Frequency Signal Analysis and Processing, 2nd Edition 
* (London: Elsevier / Academic Press, December 2015); ISBN 978-0-12-398499-9. Book website:
* http://booksite.elsevier.com/9780123984999/
* 

* Description:
/* analyt
*
* Functions for the generation of analytic signals from non-analytic signals
*
**/

#ifndef ARITHM_H
#include "arithm.h"
#endif

/********************
 *
 * void default_sigana( complex *X, unsigned signal_length);
 *
 * A simple analytic signal generation program.
 *
 * Data is fft'd, doubled for positive frequencies, zeroed for
 * negative frequencies, and inverse transformed.  
 *
 * If signal_length is not a power of two, it is zero-padded here,
 * made analytic and zero-truncated.  This truncation may cause
 * undesirable effect - but maybe not.  To be sure, use a signal
 * length which is a power of two.
 *
 **/
void default_sigana( complex *X, unsigned signal_length);
