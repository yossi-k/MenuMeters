//
//  MenuMeterCPU.h
//
// 	Constants and other definitions for the CPU Meter
//
//	Copyright (c) 2002-2014 Alex Harper
//
// 	This file is part of MenuMeters.
//
// 	MenuMeters is free software; you can redistribute it and/or modify
// 	it under the terms of the GNU General Public License version 2 as
//  published by the Free Software Foundation.
//
// 	MenuMeters is distributed in the hope that it will be useful,
// 	but WITHOUT ANY WARRANTY; without even the implied warranty of
// 	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// 	GNU General Public License for more details.
//
// 	You should have received a copy of the GNU General Public License
// 	along with MenuMeters; if not, write to the Free Software
// 	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//

///////////////////////////////////////////////////////////////
//
//	Constants
//
///////////////////////////////////////////////////////////////

// Widths of the various displays
#define kCPUPercentDisplayBorderWidth		2
#define kCPUThermometerDisplayWidth			11.0f
#define kCPUDisplayMultiProcGapWidth		5
#define kCPULabelOnlyWidth         25

// Menu item indexes
#define kCPUUptimeInfoMenuIndex				4
#define kCPUTaskInfoMenuIndex				6
#define kCPULoadInfoMenuIndex				8
#define kCPUPowerLimitInfoMenuIndex                10
#define kCPUProcessLabelMenuIndex           11
#define kCPUProcessMenuIndex                (kCPUProcessLabelMenuIndex + 1)
#define kCPUTemperatureMenuIndex            (kCPUProcessMenuIndex + 1)

///////////////////////////////////////////////////////////////
//
//	Preference information
//
///////////////////////////////////////////////////////////////

// Pref dictionary keys
#define kCPUIntervalPref					@"CPUInterval"
#define kCPUDisplayModePref					@"CPUDisplayMode"
#define kCPUPercentDisplayPref				@"CPUPercentDisplayMode"
#define kCPUMaxProcessCountPref             @"CPUMaxProcessCount"
#define kCPUGraphLengthPref					@"CPUGraphLength"
#define kCPUHorizontalRowsPref              @"CPUHorizontalRows"
#define kCPUMenuWidthPref                   @"CPUMenuWidth"
#define kCPUAvgAllProcsPref					@"CPUAverageMultiProcs"
#define kCPUSumAllProcsPercentPref			@"CPUSumAllProcsPercent"
// Note that "Lower Half" is now reused to show only physical cores
#define kCPUAvgLowerHalfProcsPref			@"CPUAverageLowerHalfProcs"
#define kCPUSortByUsagePref				    @"CPUSortByUsage"
#define kCPUSystemColorPref					@"CPUSystemColor"
#define kCPUUserColorPref					@"CPUUserColor"
#define kCPUPowerMatePref					@"CPUPowerMate"
#define kCPUPowerMateMode					@"CPUPowerMateMode"
#define kCPUShowTemperature                 @"CPUTemperature"
#define kCPUTemperatureColor                @"CPUTemperatureColor"
#define kCPUTemperatureSensor                @"CPUTemperatureSensor"
#define kCPUTemperatureSensorDefault                @"CPUTemperatureSensorDefault"
#define kCPUTemperatureUnit                @"CPUTemperatureUnit"
#define kCPUTemperatureUnitCelsius 0
#define kCPUTemperatureUnitFahrenheit 1
// Display modes
enum {
	kCPUDisplayPercent						= 1,
	kCPUDisplayGraph						= 2,
	kCPUDisplayThermometer					= 4,
    kCPUDisplayHorizontalThermometer        = 8
};
#define kCPUDisplayDefault					kCPUDisplayPercent

// Percent display modes
enum {
	kCPUPercentDisplayLarge					= 0,
	kCPUPercentDisplaySmall,
	kCPUPercentDisplaySplit
};
#define kCPUPercentDisplayDefault			kCPUPercentDisplaySmall

// Process info
#define kCPUProcessCountMin                 0
#define kCPUrocessCountMax                  25
#define kCPUProcessCountDefault             5

// PowerMate modes
enum {
	kCPUPowerMateGlow						= 0,
	kCPUPowerMatePulse,
	kCPUPowerMateInverseGlow,
	kCPUPowerMateInversePulse
};
#define kCPUPowerMateModeDefault			kCPUPowerMateGlow

// Timer
#define kCPUUpdateIntervalMin				0.5f
#define kCPUUpdateIntervalMax				10.0f
#define kCPUUpdateIntervalDefault			1.0f

// Graph display
#define kCPUGraphWidthMin					11
#define kCPUGraphWidthMax					88
#define kCPUGraphWidthDefault				33

// Thermometer display
#define kCPUHorizontalRowsMin               1
#define kCPUHorizontalRowsMax               8
#define kCPUHorizontalRowsDefault           2

// Menu width
#define kCPUMenuWidthMin                    60
#define kCPUMenuWidthMax                    400
#define kCPUMenuWidthDefault                120

// Multiproc averaging
#define kCPUAvgAllProcsDefault				NO

// Multiproc sum percentage
#define kCPUSumAllProcsPercentDefault		NO

// Least-utilized half of procs averaging
#define kCPUAvgLowerHalfProcsDefault		NO

// Sorting by usage
#define kCPUSortByUsageDefault				NO

// PowerMate
#define kCPUPowerMateDefault				NO

// Show CPU temperature
#define kCPUShowTemperatureDefault          YES

// Colors
											// Maraschino
#define kCPUSystemColorDefault				[NSColor colorWithDeviceRed:1.0f green:0.0f blue:0.0f alpha:1.0f]
											// Midnight blue
#define kCPUUserColorDefault				[NSColor colorWithDeviceRed:0.0f green:0.0f blue:0.5f alpha:1.0f]
                                            // Orange
#define kCPUTemperatureColorDefault         [NSColor colorWithDeviceRed:1.0f green:0.647f blue:0.0f alpha:1.0f]





