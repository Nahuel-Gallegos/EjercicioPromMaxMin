################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Ordenamiento(burbujeo).c 

OBJS += \
./src/Ordenamiento(burbujeo).o 

C_DEPS += \
./src/Ordenamiento(burbujeo).d 


# Each subdirectory must supply rules for building sources it contributes
src/Ordenamiento(burbujeo).o: ../src/Ordenamiento(burbujeo).c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Ordenamiento(burbujeo).d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


