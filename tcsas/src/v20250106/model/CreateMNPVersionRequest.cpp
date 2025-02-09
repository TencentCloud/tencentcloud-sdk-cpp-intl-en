/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/tcsas/v20250106/model/CreateMNPVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

CreateMNPVersionRequest::CreateMNPVersionRequest() :
    m_mNPIdHasBeenSet(false),
    m_mNPVersionHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_mNPVersionIntroHasBeenSet(false)
{
}

string CreateMNPVersionRequest::ToJsonString() const
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

    if (m_mNPVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mNPVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPVersionIntroHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersionIntro";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mNPVersionIntro.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMNPVersionRequest::GetMNPId() const
{
    return m_mNPId;
}

void CreateMNPVersionRequest::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool CreateMNPVersionRequest::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string CreateMNPVersionRequest::GetMNPVersion() const
{
    return m_mNPVersion;
}

void CreateMNPVersionRequest::SetMNPVersion(const string& _mNPVersion)
{
    m_mNPVersion = _mNPVersion;
    m_mNPVersionHasBeenSet = true;
}

bool CreateMNPVersionRequest::MNPVersionHasBeenSet() const
{
    return m_mNPVersionHasBeenSet;
}

string CreateMNPVersionRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void CreateMNPVersionRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool CreateMNPVersionRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

string CreateMNPVersionRequest::GetPlatformId() const
{
    return m_platformId;
}

void CreateMNPVersionRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool CreateMNPVersionRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string CreateMNPVersionRequest::GetMNPVersionIntro() const
{
    return m_mNPVersionIntro;
}

void CreateMNPVersionRequest::SetMNPVersionIntro(const string& _mNPVersionIntro)
{
    m_mNPVersionIntro = _mNPVersionIntro;
    m_mNPVersionIntroHasBeenSet = true;
}

bool CreateMNPVersionRequest::MNPVersionIntroHasBeenSet() const
{
    return m_mNPVersionIntroHasBeenSet;
}


