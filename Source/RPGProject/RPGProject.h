// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(RPGProject, Log, All);
#define RLOG_CALLINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__)+TEXT(")"))
#define RLOG_S(Verbosity) UE_LOG(RPGProject, Verbosity, TEXT("%s"), *RLOG_CALLINFO)
#define RLOG(Verbosity, Format, ...) UE_LOG(RPGProject, Verbosity, TEXT("%s %s"), *RLOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))