
/*
 * Copyright (C) 2018 The Android Open Source Project
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

#ifndef BASENAME_H
#define BASENAME_H

extern "C" inline const char* __gnu_basename(const char* path) {
  const char* last_slash = strrchr(path, '/');
  return (last_slash != NULL) ? last_slash + 1 : path;
}
#define basename __gnu_basename

#endif  // BASENAME_H