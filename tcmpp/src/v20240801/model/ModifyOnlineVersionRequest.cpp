/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tcmpp/v20240801/model/ModifyOnlineVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

ModifyOnlineVersionRequest::ModifyOnlineVersionRequest() :
    m_mNPIdHasBeenSet(false),
    m_mNPVersionIdHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_mNPVersionHasBeenSet(false)
{
}

string ModifyOnlineVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mNPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mNPId.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mNPVersionId, allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mNPVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyOnlineVersionRequest::GetMNPId() const
{
    return m_mNPId;
}

void ModifyOnlineVersionRequest::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool ModifyOnlineVersionRequest::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

int64_t ModifyOnlineVersionRequest::GetMNPVersionId() const
{
    return m_mNPVersionId;
}

void ModifyOnlineVersionRequest::SetMNPVersionId(const int64_t& _mNPVersionId)
{
    m_mNPVersionId = _mNPVersionId;
    m_mNPVersionIdHasBeenSet = true;
}

bool ModifyOnlineVersionRequest::MNPVersionIdHasBeenSet() const
{
    return m_mNPVersionIdHasBeenSet;
}

string ModifyOnlineVersionRequest::GetPlatformId() const
{
    return m_platformId;
}

void ModifyOnlineVersionRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool ModifyOnlineVersionRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string ModifyOnlineVersionRequest::GetMNPVersion() const
{
    return m_mNPVersion;
}

void ModifyOnlineVersionRequest::SetMNPVersion(const string& _mNPVersion)
{
    m_mNPVersion = _mNPVersion;
    m_mNPVersionHasBeenSet = true;
}

bool ModifyOnlineVersionRequest::MNPVersionHasBeenSet() const
{
    return m_mNPVersionHasBeenSet;
}


