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

#include <tencentcloud/tcsas/v20250106/model/DescribeGlobalOverviewDataSummaryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeGlobalOverviewDataSummaryRequest::DescribeGlobalOverviewDataSummaryRequest() :
    m_dataTypeHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_dataTimeHasBeenSet(false)
{
}

string DescribeGlobalOverviewDataSummaryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataType.c_str(), allocator).Move(), allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeGlobalOverviewDataSummaryRequest::GetDataType() const
{
    return m_dataType;
}

void DescribeGlobalOverviewDataSummaryRequest::SetDataType(const string& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool DescribeGlobalOverviewDataSummaryRequest::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

string DescribeGlobalOverviewDataSummaryRequest::GetPlatformId() const
{
    return m_platformId;
}

void DescribeGlobalOverviewDataSummaryRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool DescribeGlobalOverviewDataSummaryRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

int64_t DescribeGlobalOverviewDataSummaryRequest::GetDataTime() const
{
    return m_dataTime;
}

void DescribeGlobalOverviewDataSummaryRequest::SetDataTime(const int64_t& _dataTime)
{
    m_dataTime = _dataTime;
    m_dataTimeHasBeenSet = true;
}

bool DescribeGlobalOverviewDataSummaryRequest::DataTimeHasBeenSet() const
{
    return m_dataTimeHasBeenSet;
}


