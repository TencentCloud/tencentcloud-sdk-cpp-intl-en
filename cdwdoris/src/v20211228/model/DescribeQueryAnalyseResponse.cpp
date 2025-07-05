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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeQueryAnalyseResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeQueryAnalyseResponse::DescribeQueryAnalyseResponse() :
    m_queryDetailsHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_currentPageHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_totalPagesHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome DescribeQueryAnalyseResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("QueryDetails") && !rsp["QueryDetails"].IsNull())
    {
        if (!rsp["QueryDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueryDetails` is not array type"));

        const rapidjson::Value &tmpValue = rsp["QueryDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QueryDetails item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_queryDetails.push_back(item);
        }
        m_queryDetailsHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentPage") && !rsp["CurrentPage"].IsNull())
    {
        if (!rsp["CurrentPage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentPage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_currentPage = rsp["CurrentPage"].GetUint64();
        m_currentPageHasBeenSet = true;
    }

    if (rsp.HasMember("PageSize") && !rsp["PageSize"].IsNull())
    {
        if (!rsp["PageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = rsp["PageSize"].GetUint64();
        m_pageSizeHasBeenSet = true;
    }

    if (rsp.HasMember("TotalPages") && !rsp["TotalPages"].IsNull())
    {
        if (!rsp["TotalPages"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalPages` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPages = rsp["TotalPages"].GetUint64();
        m_totalPagesHasBeenSet = true;
    }

    if (rsp.HasMember("Message") && !rsp["Message"].IsNull())
    {
        if (!rsp["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(rsp["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeQueryAnalyseResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_queryDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_queryDetails.begin(); itr != m_queryDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_currentPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentPage, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_totalPagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPages, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


vector<QueryDetails> DescribeQueryAnalyseResponse::GetQueryDetails() const
{
    return m_queryDetails;
}

bool DescribeQueryAnalyseResponse::QueryDetailsHasBeenSet() const
{
    return m_queryDetailsHasBeenSet;
}

uint64_t DescribeQueryAnalyseResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeQueryAnalyseResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

uint64_t DescribeQueryAnalyseResponse::GetCurrentPage() const
{
    return m_currentPage;
}

bool DescribeQueryAnalyseResponse::CurrentPageHasBeenSet() const
{
    return m_currentPageHasBeenSet;
}

uint64_t DescribeQueryAnalyseResponse::GetPageSize() const
{
    return m_pageSize;
}

bool DescribeQueryAnalyseResponse::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

uint64_t DescribeQueryAnalyseResponse::GetTotalPages() const
{
    return m_totalPages;
}

bool DescribeQueryAnalyseResponse::TotalPagesHasBeenSet() const
{
    return m_totalPagesHasBeenSet;
}

string DescribeQueryAnalyseResponse::GetMessage() const
{
    return m_message;
}

bool DescribeQueryAnalyseResponse::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}


