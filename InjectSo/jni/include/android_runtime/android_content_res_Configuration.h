/*
 * Copyright (C) 2010 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _ANDROID_CONTENT_RES_CONFIGURATION_H
#define _ANDROID_CONTENT_RES_CONFIGURATION_H

#include <utils/ResourceTypes.h>
#include <android/configuration.h>

#include "jni.h"

struct AConfiguration : android::ResTable_config {
};

namespace android {

extern void android_Configuration_getFromJava(
        JNIEnv* env, jobject clazz, struct AConfiguration* out);

} // namespace android


#endif // _ANDROID_CONTENT_RES_CONFIGURATION_H
