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

#include <tencentcloud/tcsas/v20250106/model/DescribeMNGMAUMonthlyComparisonMetricCardRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeMNGMAUMonthlyComparisonMetricCardRequest::DescribeMNGMAUMonthlyComparisonMetricCardRequest() :
    m_sourceMonthHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_targetMonthHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_mNPIdHasBeenSet(false),
    m_mNPTeamIdHasBeenSet(false)
{
}

string DescribeMNGMAUMonthlyComparisonMetricCardRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceMonth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceMonth, allocator);
    }

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

    if (m_targetMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetMonth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_targetMonth, allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mNPId.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPTeamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPTeamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mNPTeamId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeMNGMAUMonthlyComparisonMetricCardRequest::GetSourceMonth() const
{
    return m_sourceMonth;
}

void DescribeMNGMAUMonthlyComparisonMetricCardRequest::SetSourceMonth(const int64_t& _sourceMonth)
{
    m_sourceMonth = _sourceMonth;
    m_sourceMonthHasBeenSet = true;
}

bool DescribeMNGMAUMonthlyComparisonMetricCardRequest::SourceMonthHasBeenSet() const
{
    return m_sourceMonthHasBeenSet;
}

int64_t DescribeMNGMAUMonthlyComparisonMetricCardRequest::GetDataType() const
{
    return m_dataType;
}

void DescribeMNGMAUMonthlyComparisonMetricCardRequest::SetDataType(const int64_t& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool DescribeMNGMAUMonthlyComparisonMetricCardRequest::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

string DescribeMNGMAUMonthlyComparisonMetricCardRequest::GetPlatformId() const
{
    return m_platformId;
}

void DescribeMNGMAUMonthlyComparisonMetricCardRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool DescribeMNGMAUMonthlyComparisonMetricCardRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

int64_t DescribeMNGMAUMonthlyComparisonMetricCardRequest::GetTargetMonth() const
{
    return m_targetMonth;
}

void DescribeMNGMAUMonthlyComparisonMetricCardRequest::SetTargetMonth(const int64_t& _targetMonth)
{
    m_targetMonth = _targetMonth;
    m_targetMonthHasBeenSet = true;
}

bool DescribeMNGMAUMonthlyComparisonMetricCardRequest::TargetMonthHasBeenSet() const
{
    return m_targetMonthHasBeenSet;
}

string DescribeMNGMAUMonthlyComparisonMetricCardRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeMNGMAUMonthlyComparisonMetricCardRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeMNGMAUMonthlyComparisonMetricCardRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string DescribeMNGMAUMonthlyComparisonMetricCardRequest::GetMNPId() const
{
    return m_mNPId;
}

void DescribeMNGMAUMonthlyComparisonMetricCardRequest::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool DescribeMNGMAUMonthlyComparisonMetricCardRequest::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

int64_t DescribeMNGMAUMonthlyComparisonMetricCardRequest::GetMNPTeamId() const
{
    return m_mNPTeamId;
}

void DescribeMNGMAUMonthlyComparisonMetricCardRequest::SetMNPTeamId(const int64_t& _mNPTeamId)
{
    m_mNPTeamId = _mNPTeamId;
    m_mNPTeamIdHasBeenSet = true;
}

bool DescribeMNGMAUMonthlyComparisonMetricCardRequest::MNPTeamIdHasBeenSet() const
{
    return m_mNPTeamIdHasBeenSet;
}


