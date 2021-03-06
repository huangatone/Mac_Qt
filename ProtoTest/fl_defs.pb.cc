// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: fl_defs.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "fl_defs.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace protobuf_fl_5fdefs_2eproto {


namespace {

const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[8];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = { ~0u };
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;
namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "fl_defs.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      NULL, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void TableStruct::Shutdown() {
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\rfl_defs.proto*\'\n\014StandardType\022\n\n\006STD_U"
      "L\020\000\022\013\n\007STD_ULC\020\001*\200\004\n\017DeviceBaseModel\022\021\n\r"
      "DEV_UNDEFINED\020\000\022\016\n\nDEV_MIRCOM\020\001\022\016\n\nDEV_C"
      "OOPER\020\002\022\025\n\021DEV_SYSTEM_SENSOR\020\003\022\016\n\nDEV_GE"
      "NTEX\020\004\022\016\n\nDEV_POTTER\020\005\022!\n\035DEV_MPD_65PK_M"
      "IRCOM_SERIES_65\020\006\022 \n\034DEV_MPD_65P_MIRCOM_"
      "SERIES_65\020\007\0220\n,DEV_TD_135_FIXED_TO_135_D"
      "EGREE_F_RESSETTABLE\020\010\0220\n,DEV_TD_200_FIXE"
      "D_TO_200_DEGREE_F_RESSETTABLE\020\t\022#\n\037DEV_M"
      "HD_65_135_MIRCOM_SERIES_65\020\n\022)\n%DEV_MS_4"
      "01U_SINGLE_STAGE_PULL_STATION\020\013\022\031\n\025DEV_G"
      "L_004K_GLASS_ROD\020\014\022*\n&DEV_MS_705U_SINGLE"
      "_ACTION_PULL_STATION\020\r\022(\n$DEV_MS_710U_DU"
      "AL_ACTION_PULL_STATION\020\016\022\031\n\025DEV_BB_700_S"
      "ERIES_700\020\017*o\n\rSignalingType\022\021\n\rSIG_UNDE"
      "FINED\020\000\022\021\n\rSIG_CONTINUES\020\001\022\020\n\014SIG_TEMPOR"
      "AL\020\002\022\022\n\016SIG_MARCH_TIME\020\003\022\022\n\016SIG_CALIFORN"
      "IA\020\004*X\n\nLocalRelay\022\021\n\rLOCAL_RELAY_0\020\000\022\021\n"
      "\rLOCAL_RELAY_1\020\001\022\021\n\rLOCAL_RELAY_2\020\002\022\021\n\rL"
      "OCAL_RELAY_3\020\003*\?\n\tInputType\022\013\n\007INPUT_0\020\000"
      "\022\013\n\007INPUT_1\020\001\022\013\n\007INPUT_2\020\002\022\013\n\007INPUT_3\020\003*"
      "\343\002\n\020SystemStatusType\022\025\n\021SYS_STAT_INITDON"
      "E\020\000\022\027\n\023SYS_STAT_COMMON_ALM\020\001\022\030\n\024SYS_STAT"
      "_COMMON_SUPV\020\002\022\027\n\023SYS_STAT_COMMON_TRB\020\003\022"
      "\033\n\027SYS_STAT_AUTO_SS_TIMING\020\004\022\030\n\024SYS_STAT"
      "_EVAC_ACTIVE\020\005\022\026\n\022SYS_STAT_ALARM_ACK\020\006\022\027"
      "\n\023SYS_STAT_FIRE_DRILL\020\007\022\024\n\020SYS_STAT_SIG_"
      "SIL\020\010\022\027\n\023SYS_STAT_BUZZER_SIL\020\t\022\030\n\024SYS_ST"
      "AT_CONFIG_MODE\020\n\022\025\n\021SYS_STAT_SYSRESET\020\013\022"
      "\025\n\021SYS_STAT_WALKTEST\020\014\022\r\n\tSYS_AC_ON\020\r*\212\003"
      "\n\020LocalTroubleType\022\014\n\010TRB_NONE\020\000\022\017\n\013TRB_"
      "POWERUP\020\001\022\021\n\rTRB_SYSUPDATE\020\002\022\020\n\014TRB_SYSR"
      "ESET\020\003\022\020\n\014TRB_UNIT_TRB\020\005\022\024\n\020TRB_BAD_LOGE"
      "NTRY\020\006\022\022\n\016TRB_EVLOG_INIT\020\007\022\033\n\027TRB_BATTER"
      "Y_NOT_PRESENT\020\010\022\025\n\021TRB_BATTERY_FAULT\020\t\022\023"
      "\n\017TRB_CHRGR_FAULT\020\013\022\025\n\021TRB_BOOSTER_FAULT"
      "\020\014\022\021\n\rTRB_AC_SUPPLY\020\016\022\017\n\013TRB_GND_FLT\020\017\022\017"
      "\n\013TRB_SIG_SIL\020\020\022\023\n\017TRB_CFG_NOTPROG\020\021\022\024\n\020"
      "TRB_TRBCKT_ALARM\020\022\022\024\n\020TRB_SERVICE_TOOL\020\024"
      "\022\017\n\013TRB_IPT_CKT\020\025\022\017\n\013TRB_OPT_CKT\020\026*\327\002\n\021R"
      "emoteTroubleType\022\014\n\010REM_NONE\020\000\022\025\n\021REM_TR"
      "B_SYSUPDATE\020\002\022\026\n\022REM_TRB_EVLOG_INIT\020\006\022\030\n"
      "\024REM_TRB_BAD_LOGENTRY\020\007\022\025\n\021REM_TRB_STUCK"
      "_SWI\020\010\022\037\n\033REM_TRB_BATTERY_NOT_PRESENT\020\013\022"
      "\031\n\025REM_TRB_BATTERY_FAULT\020\014\022\027\n\023REM_TRB_CH"
      "RGR_FAULT\020\016\022\031\n\025REM_TRB_BOOSTER_FAULT\020\017\022\025"
      "\n\021REM_TRB_AC_SUPPLY\020\021\022\030\n\024REM_TRB_IPT_CKT"
      "_OPEN\020\027\022\030\n\024REM_TRB_OPT_CKT_OPEN\020\031\022\031\n\025REM"
      "_TRB_OPT_CKT_SHORT\020\033b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 1948);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "fl_defs.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_fl_5fdefs_2eproto

const ::google::protobuf::EnumDescriptor* StandardType_descriptor() {
  protobuf_fl_5fdefs_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_fl_5fdefs_2eproto::file_level_enum_descriptors[0];
}
bool StandardType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* DeviceBaseModel_descriptor() {
  protobuf_fl_5fdefs_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_fl_5fdefs_2eproto::file_level_enum_descriptors[1];
}
bool DeviceBaseModel_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* SignalingType_descriptor() {
  protobuf_fl_5fdefs_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_fl_5fdefs_2eproto::file_level_enum_descriptors[2];
}
bool SignalingType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* LocalRelay_descriptor() {
  protobuf_fl_5fdefs_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_fl_5fdefs_2eproto::file_level_enum_descriptors[3];
}
bool LocalRelay_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* InputType_descriptor() {
  protobuf_fl_5fdefs_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_fl_5fdefs_2eproto::file_level_enum_descriptors[4];
}
bool InputType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* SystemStatusType_descriptor() {
  protobuf_fl_5fdefs_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_fl_5fdefs_2eproto::file_level_enum_descriptors[5];
}
bool SystemStatusType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* LocalTroubleType_descriptor() {
  protobuf_fl_5fdefs_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_fl_5fdefs_2eproto::file_level_enum_descriptors[6];
}
bool LocalTroubleType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 11:
    case 12:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 20:
    case 21:
    case 22:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* RemoteTroubleType_descriptor() {
  protobuf_fl_5fdefs_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_fl_5fdefs_2eproto::file_level_enum_descriptors[7];
}
bool RemoteTroubleType_IsValid(int value) {
  switch (value) {
    case 0:
    case 2:
    case 6:
    case 7:
    case 8:
    case 11:
    case 12:
    case 14:
    case 15:
    case 17:
    case 23:
    case 25:
    case 27:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
