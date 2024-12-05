cmake_minimum_required(VERSION 3.21...3.31)

project(NES_EMULATOR VERSION 0.1
					 DESCRIPTION "Emulating an NES"
					 LANGUAGES C)

add_executable(NES src/main.c
                   src/cpu.c
                   src/ppu.c
                   src/ram.c
                   src/console.c
                   src/emulator.c)

target_include_directories(NES PUBLIC include/console
                                      include/cartridge)
target_compile_features(NES PUBLIC c_std_23)
