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

#include <tencentcloud/tcsas/v20250106/model/CreateMNGVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

CreateMNGVersionRequest::CreateMNGVersionRequest() :
    m_mNPIdHasBeenSet(false),
    m_mNPVersionHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_mNPVersionIntroHasBeenSet(false),
    m_versionTypeHasBeenSet(false),
    m_compileConditionHasBeenSet(false),
    m_compileConfigHasBeenSet(false),
    m_pipelineIdHasBeenSet(false),
    m_fileInnerUrlHasBeenSet(false)
{
}

string CreateMNGVersionRequest::ToJsonString() const
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

    if (m_versionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_versionType, allocator);
    }

    if (m_compileConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompileCondition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_compileCondition.c_str(), allocator).Move(), allocator);
    }

    if (m_compileConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompileConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_compileConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_pipelineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PipelineId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pipelineId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileInnerUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileInnerUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileInnerUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMNGVersionRequest::GetMNPId() const
{
    return m_mNPId;
}

void CreateMNGVersionRequest::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool CreateMNGVersionRequest::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string CreateMNGVersionRequest::GetMNPVersion() const
{
    return m_mNPVersion;
}

void CreateMNGVersionRequest::SetMNPVersion(const string& _mNPVersion)
{
    m_mNPVersion = _mNPVersion;
    m_mNPVersionHasBeenSet = true;
}

bool CreateMNGVersionRequest::MNPVersionHasBeenSet() const
{
    return m_mNPVersionHasBeenSet;
}

string CreateMNGVersionRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void CreateMNGVersionRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool CreateMNGVersionRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

string CreateMNGVersionRequest::GetPlatformId() const
{
    return m_platformId;
}

void CreateMNGVersionRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool CreateMNGVersionRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string CreateMNGVersionRequest::GetMNPVersionIntro() const
{
    return m_mNPVersionIntro;
}

void CreateMNGVersionRequest::SetMNPVersionIntro(const string& _mNPVersionIntro)
{
    m_mNPVersionIntro = _mNPVersionIntro;
    m_mNPVersionIntroHasBeenSet = true;
}

bool CreateMNGVersionRequest::MNPVersionIntroHasBeenSet() const
{
    return m_mNPVersionIntroHasBeenSet;
}

int64_t CreateMNGVersionRequest::GetVersionType() const
{
    return m_versionType;
}

void CreateMNGVersionRequest::SetVersionType(const int64_t& _versionType)
{
    m_versionType = _versionType;
    m_versionTypeHasBeenSet = true;
}

bool CreateMNGVersionRequest::VersionTypeHasBeenSet() const
{
    return m_versionTypeHasBeenSet;
}

string CreateMNGVersionRequest::GetCompileCondition() const
{
    return m_compileCondition;
}

void CreateMNGVersionRequest::SetCompileCondition(const string& _compileCondition)
{
    m_compileCondition = _compileCondition;
    m_compileConditionHasBeenSet = true;
}

bool CreateMNGVersionRequest::CompileConditionHasBeenSet() const
{
    return m_compileConditionHasBeenSet;
}

string CreateMNGVersionRequest::GetCompileConfig() const
{
    return m_compileConfig;
}

void CreateMNGVersionRequest::SetCompileConfig(const string& _compileConfig)
{
    m_compileConfig = _compileConfig;
    m_compileConfigHasBeenSet = true;
}

bool CreateMNGVersionRequest::CompileConfigHasBeenSet() const
{
    return m_compileConfigHasBeenSet;
}

string CreateMNGVersionRequest::GetPipelineId() const
{
    return m_pipelineId;
}

void CreateMNGVersionRequest::SetPipelineId(const string& _pipelineId)
{
    m_pipelineId = _pipelineId;
    m_pipelineIdHasBeenSet = true;
}

bool CreateMNGVersionRequest::PipelineIdHasBeenSet() const
{
    return m_pipelineIdHasBeenSet;
}

string CreateMNGVersionRequest::GetFileInnerUrl() const
{
    return m_fileInnerUrl;
}

void CreateMNGVersionRequest::SetFileInnerUrl(const string& _fileInnerUrl)
{
    m_fileInnerUrl = _fileInnerUrl;
    m_fileInnerUrlHasBeenSet = true;
}

bool CreateMNGVersionRequest::FileInnerUrlHasBeenSet() const
{
    return m_fileInnerUrlHasBeenSet;
}


