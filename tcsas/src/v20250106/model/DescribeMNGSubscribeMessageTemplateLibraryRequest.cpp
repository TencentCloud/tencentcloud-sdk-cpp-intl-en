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

#include <tencentcloud/tcsas/v20250106/model/DescribeMNGSubscribeMessageTemplateLibraryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeMNGSubscribeMessageTemplateLibraryRequest::DescribeMNGSubscribeMessageTemplateLibraryRequest() :
    m_platformIdHasBeenSet(false),
    m_mNPIdHasBeenSet(false),
    m_templateLibraryIdHasBeenSet(false)
{
}

string DescribeMNGSubscribeMessageTemplateLibraryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mNPId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateLibraryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateLibraryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateLibraryId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeMNGSubscribeMessageTemplateLibraryRequest::GetPlatformId() const
{
    return m_platformId;
}

void DescribeMNGSubscribeMessageTemplateLibraryRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool DescribeMNGSubscribeMessageTemplateLibraryRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string DescribeMNGSubscribeMessageTemplateLibraryRequest::GetMNPId() const
{
    return m_mNPId;
}

void DescribeMNGSubscribeMessageTemplateLibraryRequest::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool DescribeMNGSubscribeMessageTemplateLibraryRequest::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string DescribeMNGSubscribeMessageTemplateLibraryRequest::GetTemplateLibraryId() const
{
    return m_templateLibraryId;
}

void DescribeMNGSubscribeMessageTemplateLibraryRequest::SetTemplateLibraryId(const string& _templateLibraryId)
{
    m_templateLibraryId = _templateLibraryId;
    m_templateLibraryIdHasBeenSet = true;
}

bool DescribeMNGSubscribeMessageTemplateLibraryRequest::TemplateLibraryIdHasBeenSet() const
{
    return m_templateLibraryIdHasBeenSet;
}


