################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ArabicMessage.cpp \
../src/EnglishMessage.cpp \
../src/ImperialOffice.cpp \
../src/ImperialReport.cpp \
../src/ImperialStation.cpp \
../src/MainRun.cpp \
../src/MetricOffice.cpp \
../src/MetricReport.cpp \
../src/MetricStation.cpp \
../src/WeatherOffice.cpp \
../src/WeatherReport.cpp \
../src/WeatherStation.cpp 

OBJS += \
./src/ArabicMessage.o \
./src/EnglishMessage.o \
./src/ImperialOffice.o \
./src/ImperialReport.o \
./src/ImperialStation.o \
./src/MainRun.o \
./src/MetricOffice.o \
./src/MetricReport.o \
./src/MetricStation.o \
./src/WeatherOffice.o \
./src/WeatherReport.o \
./src/WeatherStation.o 

CPP_DEPS += \
./src/ArabicMessage.d \
./src/EnglishMessage.d \
./src/ImperialOffice.d \
./src/ImperialReport.d \
./src/ImperialStation.d \
./src/MainRun.d \
./src/MetricOffice.d \
./src/MetricReport.d \
./src/MetricStation.d \
./src/WeatherOffice.d \
./src/WeatherReport.d \
./src/WeatherStation.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


