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

#include <tencentcloud/lkeap/v20240522/model/ReconstructDocumentSSERequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

ReconstructDocumentSSERequest::ReconstructDocumentSSERequest() :
    m_fileBase64HasBeenSet(false),
    m_configHasBeenSet(false)
{
}

string ReconstructDocumentSSERequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ReconstructDocumentSSERequest::GetFileBase64() const
{
    return m_fileBase64;
}

void ReconstructDocumentSSERequest::SetFileBase64(const string& _fileBase64)
{
    m_fileBase64 = _fileBase64;
    m_fileBase64HasBeenSet = true;
}

bool ReconstructDocumentSSERequest::FileBase64HasBeenSet() const
{
    return m_fileBase64HasBeenSet;
}

ReconstructDocumentSSEConfig ReconstructDocumentSSERequest::GetConfig() const
{
    return m_config;
}

void ReconstructDocumentSSERequest::SetConfig(const ReconstructDocumentSSEConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool ReconstructDocumentSSERequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}


