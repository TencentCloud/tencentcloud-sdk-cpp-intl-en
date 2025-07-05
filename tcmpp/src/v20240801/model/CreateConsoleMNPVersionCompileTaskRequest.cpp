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

#include <tencentcloud/tcmpp/v20240801/model/CreateConsoleMNPVersionCompileTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

CreateConsoleMNPVersionCompileTaskRequest::CreateConsoleMNPVersionCompileTaskRequest() :
    m_mNPIdHasBeenSet(false),
    m_mNPVersionHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_fileInnerUrlHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_mNPVersionIntroHasBeenSet(false),
    m_mNPVersionDescHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_releaseChannelHasBeenSet(false)
{
}

string CreateConsoleMNPVersionCompileTaskRequest::ToJsonString() const
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

    if (m_fileInnerUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileInnerUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileInnerUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_mNPVersionIntroHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersionIntro";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mNPVersionIntro.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPVersionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersionDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mNPVersionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_releaseChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_releaseChannel, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateConsoleMNPVersionCompileTaskRequest::GetMNPId() const
{
    return m_mNPId;
}

void CreateConsoleMNPVersionCompileTaskRequest::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool CreateConsoleMNPVersionCompileTaskRequest::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string CreateConsoleMNPVersionCompileTaskRequest::GetMNPVersion() const
{
    return m_mNPVersion;
}

void CreateConsoleMNPVersionCompileTaskRequest::SetMNPVersion(const string& _mNPVersion)
{
    m_mNPVersion = _mNPVersion;
    m_mNPVersionHasBeenSet = true;
}

bool CreateConsoleMNPVersionCompileTaskRequest::MNPVersionHasBeenSet() const
{
    return m_mNPVersionHasBeenSet;
}

string CreateConsoleMNPVersionCompileTaskRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void CreateConsoleMNPVersionCompileTaskRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool CreateConsoleMNPVersionCompileTaskRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

string CreateConsoleMNPVersionCompileTaskRequest::GetFileInnerUrl() const
{
    return m_fileInnerUrl;
}

void CreateConsoleMNPVersionCompileTaskRequest::SetFileInnerUrl(const string& _fileInnerUrl)
{
    m_fileInnerUrl = _fileInnerUrl;
    m_fileInnerUrlHasBeenSet = true;
}

bool CreateConsoleMNPVersionCompileTaskRequest::FileInnerUrlHasBeenSet() const
{
    return m_fileInnerUrlHasBeenSet;
}

string CreateConsoleMNPVersionCompileTaskRequest::GetPlatformId() const
{
    return m_platformId;
}

void CreateConsoleMNPVersionCompileTaskRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool CreateConsoleMNPVersionCompileTaskRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

int64_t CreateConsoleMNPVersionCompileTaskRequest::GetTaskType() const
{
    return m_taskType;
}

void CreateConsoleMNPVersionCompileTaskRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CreateConsoleMNPVersionCompileTaskRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string CreateConsoleMNPVersionCompileTaskRequest::GetMNPVersionIntro() const
{
    return m_mNPVersionIntro;
}

void CreateConsoleMNPVersionCompileTaskRequest::SetMNPVersionIntro(const string& _mNPVersionIntro)
{
    m_mNPVersionIntro = _mNPVersionIntro;
    m_mNPVersionIntroHasBeenSet = true;
}

bool CreateConsoleMNPVersionCompileTaskRequest::MNPVersionIntroHasBeenSet() const
{
    return m_mNPVersionIntroHasBeenSet;
}

string CreateConsoleMNPVersionCompileTaskRequest::GetMNPVersionDesc() const
{
    return m_mNPVersionDesc;
}

void CreateConsoleMNPVersionCompileTaskRequest::SetMNPVersionDesc(const string& _mNPVersionDesc)
{
    m_mNPVersionDesc = _mNPVersionDesc;
    m_mNPVersionDescHasBeenSet = true;
}

bool CreateConsoleMNPVersionCompileTaskRequest::MNPVersionDescHasBeenSet() const
{
    return m_mNPVersionDescHasBeenSet;
}

int64_t CreateConsoleMNPVersionCompileTaskRequest::GetSourceType() const
{
    return m_sourceType;
}

void CreateConsoleMNPVersionCompileTaskRequest::SetSourceType(const int64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool CreateConsoleMNPVersionCompileTaskRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

int64_t CreateConsoleMNPVersionCompileTaskRequest::GetReleaseChannel() const
{
    return m_releaseChannel;
}

void CreateConsoleMNPVersionCompileTaskRequest::SetReleaseChannel(const int64_t& _releaseChannel)
{
    m_releaseChannel = _releaseChannel;
    m_releaseChannelHasBeenSet = true;
}

bool CreateConsoleMNPVersionCompileTaskRequest::ReleaseChannelHasBeenSet() const
{
    return m_releaseChannelHasBeenSet;
}


