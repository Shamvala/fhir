/*
 * Copyright 2018 Google LLC
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

#ifndef GOOGLE_FHIR_STU3_PROFILES_H_
#define GOOGLE_FHIR_STU3_PROFILES_H_

#include "google/protobuf/message.h"
#include "google/fhir/status/status.h"

namespace google {
namespace fhir {
namespace stu3 {

using std::string;

Status ConvertToProfile(const google::protobuf::Message& base_message,
                        google::protobuf::Message* profiled_message);

Status ConvertToProfileLenient(const google::protobuf::Message& base_message,
                               google::protobuf::Message* profiled_message);

// TODO: add ConvertToUnprofiled

}  // namespace stu3
}  // namespace fhir
}  // namespace google

#endif  // GOOGLE_FHIR_STU3_PROFILES_H_
