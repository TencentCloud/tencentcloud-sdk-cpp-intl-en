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

#include <tencentcloud/tcsas/v20250106/model/DescribeMNGMAULineChartRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeMNGMAULineChartRequest::DescribeMNGMAULineChartRequest() :
    m_dataTypeHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_mNPTeamIdHasBeenSet(false),
    m_mNPIdHasBeenSet(false)
{
}

string DescribeMNGMAULineChartRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataType, allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPTeamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPTeamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mNPTeamId, allocator);
    }

    if (m_mNPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mNPId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeMNGMAULineChartRequest::GetDataType() const
{
    return m_dataType;
}

void DescribeMNGMAULineChartRequest::SetDataType(const int64_t& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool DescribeMNGMAULineChartRequest::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

string DescribeMNGMAULineChartRequest::GetPlatformId() const
{
    return m_platformId;
}

void DescribeMNGMAULineChartRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool DescribeMNGMAULineChartRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string DescribeMNGMAULineChartRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeMNGMAULineChartRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeMNGMAULineChartRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

int64_t DescribeMNGMAULineChartRequest::GetMNPTeamId() const
{
    return m_mNPTeamId;
}

void DescribeMNGMAULineChartRequest::SetMNPTeamId(const int64_t& _mNPTeamId)
{
    m_mNPTeamId = _mNPTeamId;
    m_mNPTeamIdHasBeenSet = true;
}

bool DescribeMNGMAULineChartRequest::MNPTeamIdHasBeenSet() const
{
    return m_mNPTeamIdHasBeenSet;
}

string DescribeMNGMAULineChartRequest::GetMNPId() const
{
    return m_mNPId;
}

void DescribeMNGMAULineChartRequest::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool DescribeMNGMAULineChartRequest::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}


