################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CommandLine.cpp \
../src/FileService.cpp \
../src/GarbageCollector.cpp \
../src/GianoParser.cpp \
../src/JITCompiler.cpp \
../src/VMInstance.cpp \
../src/tinyvm.cpp 

OBJS += \
./src/CommandLine.o \
./src/FileService.o \
./src/GarbageCollector.o \
./src/GianoParser.o \
./src/JITCompiler.o \
./src/VMInstance.o \
./src/tinyvm.o 

CPP_DEPS += \
./src/CommandLine.d \
./src/FileService.d \
./src/GarbageCollector.d \
./src/GianoParser.d \
./src/JITCompiler.d \
./src/VMInstance.d \
./src/tinyvm.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	clang++ -O3 -Wall -c -fmessage-length=0   -DBOOST_LOG_DYN_LINK -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


