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
    m_mNPVersionIntroHasBeenSet(false),
    m_versionTypeHasBeenSet(false),
    m_compileConditionHasBeenSet(false),
    m_compileConfigHasBeenSet(false),
    m_pipelineIdHasBeenSet(false),
    m_fileInnerUrlHasBeenSet(false)
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

int64_t CreateMNPVersionRequest::GetVersionType() const
{
    return m_versionType;
}

void CreateMNPVersionRequest::SetVersionType(const int64_t& _versionType)
{
    m_versionType = _versionType;
    m_versionTypeHasBeenSet = true;
}

bool CreateMNPVersionRequest::VersionTypeHasBeenSet() const
{
    return m_versionTypeHasBeenSet;
}

string CreateMNPVersionRequest::GetCompileCondition() const
{
    return m_compileCondition;
}

void CreateMNPVersionRequest::SetCompileCondition(const string& _compileCondition)
{
    m_compileCondition = _compileCondition;
    m_compileConditionHasBeenSet = true;
}

bool CreateMNPVersionRequest::CompileConditionHasBeenSet() const
{
    return m_compileConditionHasBeenSet;
}

string CreateMNPVersionRequest::GetCompileConfig() const
{
    return m_compileConfig;
}

void CreateMNPVersionRequest::SetCompileConfig(const string& _compileConfig)
{
    m_compileConfig = _compileConfig;
    m_compileConfigHasBeenSet = true;
}

bool CreateMNPVersionRequest::CompileConfigHasBeenSet() const
{
    return m_compileConfigHasBeenSet;
}

string CreateMNPVersionRequest::GetPipelineId() const
{
    return m_pipelineId;
}

void CreateMNPVersionRequest::SetPipelineId(const string& _pipelineId)
{
    m_pipelineId = _pipelineId;
    m_pipelineIdHasBeenSet = true;
}

bool CreateMNPVersionRequest::PipelineIdHasBeenSet() const
{
    return m_pipelineIdHasBeenSet;
}

string CreateMNPVersionRequest::GetFileInnerUrl() const
{
    return m_fileInnerUrl;
}

void CreateMNPVersionRequest::SetFileInnerUrl(const string& _fileInnerUrl)
{
    m_fileInnerUrl = _fileInnerUrl;
    m_fileInnerUrlHasBeenSet = true;
}

bool CreateMNPVersionRequest::FileInnerUrlHasBeenSet() const
{
    return m_fileInnerUrlHasBeenSet;
}


