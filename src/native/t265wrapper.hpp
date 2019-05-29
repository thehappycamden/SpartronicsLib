/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <librealsense2/rs.hpp>
/* Header for class com_spartronics4915_lib_sensors_T265Camera */

#ifndef _Included_com_spartronics4915_lib_sensors_T265Camera
#define _Included_com_spartronics4915_lib_sensors_T265Camera
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_spartronics4915_lib_sensors_T265Camera
 * Method:    newCamera
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_spartronics4915_lib_sensors_T265Camera_newCamera
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_spartronics4915_lib_sensors_T265Camera
 * Method:    free
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_spartronics4915_lib_sensors_T265Camera_free
  (JNIEnv *, jobject);

/*
 * Class:     com_spartronics4915_lib_sensors_T265Camera
 * Method:    exportRelocalizationMap
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_spartronics4915_lib_sensors_T265Camera_exportRelocalizationMap
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_spartronics4915_lib_sensors_T265Camera
 * Method:    setOdometryInfo
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_com_spartronics4915_lib_sensors_T265Camera_setOdometryInfo
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     com_spartronics4915_lib_sensors_T265Camera
 * Method:    sendOdometryRaw
 * Signature: (IIFF)V
 */
JNIEXPORT void JNICALL Java_com_spartronics4915_lib_sensors_T265Camera_sendOdometryRaw
  (JNIEnv *, jobject, jint, jint, jfloat, jfloat);

#ifdef __cplusplus
}
#endif
#endif

class deviceAndSensors
{
  public:
    deviceAndSensors(
      rs2::pipeline *pipe, rs2::wheel_odometer *odom, rs2::pose_sensor *pose, jobject globalThis
    ) : pipeline(pipe), wheelOdometrySensor(odom), poseSensor(pose), globalThis(globalThis)
    {
    }

    ~deviceAndSensors()
    {
        delete pipeline;
        delete wheelOdometrySensor;
        delete poseSensor;
    }

    rs2::pipeline *pipeline;
    rs2::wheel_odometer *wheelOdometrySensor;
    rs2::pose_sensor *poseSensor;
    jobject globalThis;
    bool isRunning = true;
};

void importRelocalizationMap(const char *path, rs2::pose_sensor *pose);
deviceAndSensors *getDeviceFromClass(JNIEnv *env, jobject thisObj);
void ensureCache(JNIEnv *env, jobject thisObj);