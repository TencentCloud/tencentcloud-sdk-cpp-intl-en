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

#include <tencentcloud/tcsas/v20250106/model/DescribeGlobalOverviewReportDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeGlobalOverviewReportDetailRequest::DescribeGlobalOverviewReportDetailRequest() :
    m_platformIdHasBeenSet(false),
    m_reportIdHasBeenSet(false),
    m_indexIdHasBeenSet(false),
    m_queryDataHasBeenSet(false)
{
}

string DescribeGlobalOverviewReportDetailRequest::ToJsonString() const
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

    if (m_reportIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reportId.c_str(), allocator).Move(), allocator);
    }

    if (m_indexIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_indexId.c_str(), allocator).Move(), allocator);
    }

    if (m_queryDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryData.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeGlobalOverviewReportDetailRequest::GetPlatformId() const
{
    return m_platformId;
}

void DescribeGlobalOverviewReportDetailRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool DescribeGlobalOverviewReportDetailRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string DescribeGlobalOverviewReportDetailRequest::GetReportId() const
{
    return m_reportId;
}

void DescribeGlobalOverviewReportDetailRequest::SetReportId(const string& _reportId)
{
    m_reportId = _reportId;
    m_reportIdHasBeenSet = true;
}

bool DescribeGlobalOverviewReportDetailRequest::ReportIdHasBeenSet() const
{
    return m_reportIdHasBeenSet;
}

string DescribeGlobalOverviewReportDetailRequest::GetIndexId() const
{
    return m_indexId;
}

void DescribeGlobalOverviewReportDetailRequest::SetIndexId(const string& _indexId)
{
    m_indexId = _indexId;
    m_indexIdHasBeenSet = true;
}

bool DescribeGlobalOverviewReportDetailRequest::IndexIdHasBeenSet() const
{
    return m_indexIdHasBeenSet;
}

string DescribeGlobalOverviewReportDetailRequest::GetQueryData() const
{
    return m_queryData;
}

void DescribeGlobalOverviewReportDetailRequest::SetQueryData(const string& _queryData)
{
    m_queryData = _queryData;
    m_queryDataHasBeenSet = true;
}

bool DescribeGlobalOverviewReportDetailRequest::QueryDataHasBeenSet() const
{
    return m_queryDataHasBeenSet;
}


