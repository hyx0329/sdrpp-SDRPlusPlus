#pragma once
#include <vector>
#include <stdint.h>
#include <android_backend.h>


const std::vector<backend::DevVIDPID> MIRISDR_VIDPIDS {
    { 0x1df7, 0x2500 }, // "Mirics MSi2500 default (e.g. VTX3D card)", "Mirics", "MSi2500"
    { 0x1df7, 0x3000 }, // "SDRplay RSP1A", "SDRPlay", "RSP1A"
    { 0x1df7, 0x3010 }, // "SDRplay RSP1A", "SDRPlay", "RSP2"
    { 0x2040, 0xd300 }, // "Hauppauge WinTV 133559 LF", "Hauppauge", "WinTV 133559 LF"
    { 0x07ca, 0x8591 }, // "AverMedia A859 Pure DVBT", "AverTV", "A859 Pure DVBT"},
    { 0x04bb, 0x0537 }, // "IO-DATA GV-TV100 stick", "IO-DATA", "GV-TV100"},
    { 0x0511, 0x0037 }, // "Logitec LDT-1S310U/J", "Logitec", "LDT-1S310U/J"}
};
