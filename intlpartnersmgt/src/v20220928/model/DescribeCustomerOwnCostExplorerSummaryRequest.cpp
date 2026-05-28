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

#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerOwnCostExplorerSummaryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

DescribeCustomerOwnCostExplorerSummaryRequest::DescribeCustomerOwnCostExplorerSummaryRequest() :
    m_dimensionHasBeenSet(false),
    m_feeTypeHasBeenSet(false),
    m_billTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_periodTypeHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

string DescribeCustomerOwnCostExplorerSummaryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimension";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dimension.c_str(), allocator).Move(), allocator);
    }

    if (m_feeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_feeType.c_str(), allocator).Move(), allocator);
    }

    if (m_billTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_billType, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_periodTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_periodType.c_str(), allocator).Move(), allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_tagKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tagKey.c_str(), allocator).Move(), allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCustomerOwnCostExplorerSummaryRequest::GetDimension() const
{
    return m_dimension;
}

void DescribeCustomerOwnCostExplorerSummaryRequest::SetDimension(const string& _dimension)
{
    m_dimension = _dimension;
    m_dimensionHasBeenSet = true;
}

bool DescribeCustomerOwnCostExplorerSummaryRequest::DimensionHasBeenSet() const
{
    return m_dimensionHasBeenSet;
}

string DescribeCustomerOwnCostExplorerSummaryRequest::GetFeeType() const
{
    return m_feeType;
}

void DescribeCustomerOwnCostExplorerSummaryRequest::SetFeeType(const string& _feeType)
{
    m_feeType = _feeType;
    m_feeTypeHasBeenSet = true;
}

bool DescribeCustomerOwnCostExplorerSummaryRequest::FeeTypeHasBeenSet() const
{
    return m_feeTypeHasBeenSet;
}

int64_t DescribeCustomerOwnCostExplorerSummaryRequest::GetBillType() const
{
    return m_billType;
}

void DescribeCustomerOwnCostExplorerSummaryRequest::SetBillType(const int64_t& _billType)
{
    m_billType = _billType;
    m_billTypeHasBeenSet = true;
}

bool DescribeCustomerOwnCostExplorerSummaryRequest::BillTypeHasBeenSet() const
{
    return m_billTypeHasBeenSet;
}

string DescribeCustomerOwnCostExplorerSummaryRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeCustomerOwnCostExplorerSummaryRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeCustomerOwnCostExplorerSummaryRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeCustomerOwnCostExplorerSummaryRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeCustomerOwnCostExplorerSummaryRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeCustomerOwnCostExplorerSummaryRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeCustomerOwnCostExplorerSummaryRequest::GetPeriodType() const
{
    return m_periodType;
}

void DescribeCustomerOwnCostExplorerSummaryRequest::SetPeriodType(const string& _periodType)
{
    m_periodType = _periodType;
    m_periodTypeHasBeenSet = true;
}

bool DescribeCustomerOwnCostExplorerSummaryRequest::PeriodTypeHasBeenSet() const
{
    return m_periodTypeHasBeenSet;
}

int64_t DescribeCustomerOwnCostExplorerSummaryRequest::GetPage() const
{
    return m_page;
}

void DescribeCustomerOwnCostExplorerSummaryRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeCustomerOwnCostExplorerSummaryRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeCustomerOwnCostExplorerSummaryRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeCustomerOwnCostExplorerSummaryRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeCustomerOwnCostExplorerSummaryRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeCustomerOwnCostExplorerSummaryRequest::GetTagKey() const
{
    return m_tagKey;
}

void DescribeCustomerOwnCostExplorerSummaryRequest::SetTagKey(const string& _tagKey)
{
    m_tagKey = _tagKey;
    m_tagKeyHasBeenSet = true;
}

bool DescribeCustomerOwnCostExplorerSummaryRequest::TagKeyHasBeenSet() const
{
    return m_tagKeyHasBeenSet;
}

CostAnalyzeFilter DescribeCustomerOwnCostExplorerSummaryRequest::GetFilter() const
{
    return m_filter;
}

void DescribeCustomerOwnCostExplorerSummaryRequest::SetFilter(const CostAnalyzeFilter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeCustomerOwnCostExplorerSummaryRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}


