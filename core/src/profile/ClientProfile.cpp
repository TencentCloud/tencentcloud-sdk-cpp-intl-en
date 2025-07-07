/*
 * Copyright (c) 2017-2019 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/core/profile/ClientProfile.h>

using namespace TencentCloud;
using namespace std;

void ClientProfile::SetSignMethod(const SignMethod &signMethod)
{
    m_signMethod = signMethod;
}

void ClientProfile::SetHttpProfile(const HttpProfile &httpProfile)
{
    m_httpProfile = httpProfile;
}

HttpProfile ClientProfile::GetHttpProfile() const
{
    return m_httpProfile;
}

void ClientProfile::SetUnsignedPayload(bool flag)
{
    m_unsignedPayload = flag;
}

bool ClientProfile::IsUnsignedPayload()
{
    return m_unsignedPayload;
}
