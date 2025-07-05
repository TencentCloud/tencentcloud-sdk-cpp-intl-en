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

#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationConfigFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeApplicationConfigFileRequest::DescribeApplicationConfigFileRequest() :
    m_applicationIdHasBeenSet(false),
    m_appTypeHasBeenSet(false),
    m_platformIdHasBeenSet(false)
{
}

string DescribeApplicationConfigFileRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_appTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_appType, allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeApplicationConfigFileRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeApplicationConfigFileRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeApplicationConfigFileRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

int64_t DescribeApplicationConfigFileRequest::GetAppType() const
{
    return m_appType;
}

void DescribeApplicationConfigFileRequest::SetAppType(const int64_t& _appType)
{
    m_appType = _appType;
    m_appTypeHasBeenSet = true;
}

bool DescribeApplicationConfigFileRequest::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}

string DescribeApplicationConfigFileRequest::GetPlatformId() const
{
    return m_platformId;
}

void DescribeApplicationConfigFileRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool DescribeApplicationConfigFileRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}


