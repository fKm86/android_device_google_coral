/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __FACEAUTH_SHARED_H__
#define __FACEAUTH_SHARED_H__
#define DISABLE_GAZE (1ULL << 0)
#define DISABLE_MULTI_ANGLE_ENROLLMENT (1ULL << 1)
#define SECURE_CAMERA_DATA (1ULL << 2)
#define ENABLE_RECTIFY_FLOOD (1ULL << 61)
#define ENABLE_DEPTH_PIPELINE (1ULL << 62)
#define DISABLE_SKIN_CLASSIFIER (1ULL << 63)
#define ERROR_NO_ERROR 0
#define ERROR_GENERAL_ERROR - 1
#define ERROR_INTERNAL_CITADEL_INVALID_ARGS - 32
#define ERROR_INTERNAL_CITADEL_TIMEOUT - 33
#define ERROR_INTERNAL_CITADEL_SFS_FULL - 34
#define ERROR_INTERNAL_CITADEL_SFS_INTERNAL - 35
#define ERROR_INTERNAL_CITADEL_ERR_THROTTLE - 36
#define ERROR_INTERNAL_CITADEL_SESSION_ID - 37
#define ERROR_INTERNAL_CITADEL_CRC - 38
#define ERROR_INTERNAL_CITADEL_NONSECURE_MODE - 39
#define ERROR_INTERNAL_CITADEL_INVALID_TOKEN - 40
#define ERROR_INTERNAL_CITADEL_RECALIBRATE - 41
#define ERROR_INTERNAL_CITADEL_VERSION - 42
#define ERROR_INTERNAL_CITADEL_ERR_UNKNOWN - 43
#define ERROR_CITADEL_INVALID_ARGS - 48
#define ERROR_CITADEL_TIMEOUT - 49
#define ERROR_CITADEL_CACHE_FULL - 50
#define ERROR_CITADEL_CACHE_INVALID_INDEX - 51
#define ERROR_CITADEL_CACHE_INVALID_PROFILE - 52
#define ERROR_CITADEL_EARLY_FAIL - 53
#define ERROR_CITADEL_SESSION_ID - 54
#define ERROR_CITADEL_CRC - 55
#define ERROR_CITADEL_UNSUPPORTED - 56
#define ERROR_DEPTH_IPU_TIMEOUT - 64
#define ERROR_SKIN_INVALID_LAYER_SIZE - 65
#define ERROR_FSSD_BUFFER_SIZE_MISMATCH - 66
#define ERROR_SKIN_INVALID_PATCH_SIZE - 67
#define ERROR_SKIN_INVALID_FACE_SIZE - 68
#define ERROR_DOWNSCALE_IPU_TIMEOUT - 69
#define ERROR_AFFINE_COMBINED_IPU_TIMEOUT - 70
#define ERROR_FACENET_BUFFER_SIZE_MISMATCH - 71
#define ERROR_DEPTHID_BUFFER_SIZE_MISMATCH - 72
#define ERROR_GAZENET_BUFFER_SIZE_MISMATCH - 73
#define ERROR_SKIN_BUFFER_SIZE_MISMATCH - 74
#define ERROR_MAX_THRESHOLD_FACES - 75
#define ERROR_INSUFFICIENT_ALLOCATOR_MEMORY - 76
#define ERROR_IPU_TIMEOUT - 77
#define ERROR_FW_DRIVER_SYNC_ERROR - 84
typedef enum _workload_status {
  WORKLOAD_STATUS_NO_STATUS = 0,
  WORKLOAD_STATUS_PASS,
  WORKLOAD_STATUS_REJECT_NO_FACE,
  WORKLOAD_STATUS_REJECT_MAX_FACE_CAPACITY,
  WORKLOAD_STATUS_REJECT_NO_ATTENTION,
  WORKLOAD_STATUS_REJECT_TOO_SMALL,
  WORKLOAD_STATUS_REJECT_CLIPPED_LEFT,
  WORKLOAD_STATUS_REJECT_CLIPPED_RIGHT,
  WORKLOAD_STATUS_REJECT_CLIPPED_TOP,
  WORKLOAD_STATUS_REJECT_CLIPPED_BOTTOM,
  WORKLOAD_STATUS_REJECT_TOO_DARK,
  WORKLOAD_STATUS_REJECT_TOO_BRIGHT,
  WORKLOAD_STATUS_REJECT_TILT_ANGLE,
  WORKLOAD_STATUS_REJECT_PAN_ANGLE,
  WORKLOAD_STATUS_REJECT_TOO_CLOSE,
  WORKLOAD_STATUS_REJECT_TOO_FAR,
  WORKLOAD_STATUS_REJECT_SKIN,
  WORKLOAD_STATUS_REJECT_INVALID_DEPTH,
  WORKLOAD_STATUS_HARD_REJECT,
  WORKLOAD_STATUS_ERROR,
  WORKLOAD_STATUS_COUNT,
  WORKLOAD_STATUS_INTMAX = 0xffffffff
} WorkloadStatus;
typedef enum _faceauth_input_commands {
  COMMAND_NONE = 0,
  COMMAND_ENROLL,
  COMMAND_ENROLL_COMPLETE,
  COMMAND_ERASE,
  COMMAND_VALIDATE,
  COMMAND_EXIT,
  COMMAND_GET_CHALLENGE,
  COMMAND_REVOKE_CHALLENGE,
  COMMAND_GET_USER_INFO,
  COMMAND_SET_FEATURE,
  COMMAND_CLR_FEATURE,
  COMMAND_RESET_LOCKOUT,
  COMMAND_INTMAX = 0xffffffff
} FaceAuthInputCommands;
typedef enum _faceauth_ack_messages {
  STATUS_NONE = 0,
  STATUS_READY,
  STATUS_BUSY,
  STATUS_CLEAN,
  STATUS_INTMAX = 0xffffffff
} FaceAckMessages;
struct Coordinate {
  int32_t x;
  int32_t y;
} __attribute__((packed));
enum FaceLandmarks {
  LEFT_EYE = 0,
  RIGHT_EYE,
  NOSE_TIP,
  MOUTH_CENTER,
  LEFT_EAR_TRAGION,
  RIGHT_EAR_TRAGION,
  NUM_FACE_LANDMARKS,
  FACE_LANDMARK_INTMAX = 0xffffffff
};
struct Face {
  int32_t x1;
  int32_t y1;
  int32_t x2;
  int32_t y2;
  struct Coordinate landmark[NUM_FACE_LANDMARKS];
  uint32_t confidence;
  int32_t pan_angle;
  int32_t tilt_angle;
  int32_t roll_angle;
} __attribute__((packed));
#endif
