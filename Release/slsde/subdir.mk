################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../slsde/Algorithm_SLSDE.cpp 

OBJS += \
./slsde/Algorithm_SLSDE.o 

CPP_DEPS += \
./slsde/Algorithm_SLSDE.d 


# Each subdirectory must supply rules for building sources it contributes
slsde/%.o: ../slsde/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

