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

#include <tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdc::V20200828::Model;
using namespace std;

DescribeStreamLinkFlowsResponse::DescribeStreamLinkFlowsResponse() :
    m_infosHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_totalNumHasBeenSet(false),
    m_totalPageHasBeenSet(false)
{
}

CoreInternalOutcome DescribeStreamLinkFlowsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Infos") && !rsp["Infos"].IsNull())
    {
        if (!rsp["Infos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Infos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Infos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeFlow item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_infos.push_back(item);
        }
        m_infosHasBeenSet = true;
    }

    if (rsp.HasMember("PageNum") && !rsp["PageNum"].IsNull())
    {
        if (!rsp["PageNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PageNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNum = rsp["PageNum"].GetInt64();
        m_pageNumHasBeenSet = true;
    }

    if (rsp.HasMember("PageSize") && !rsp["PageSize"].IsNull())
    {
        if (!rsp["PageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = rsp["PageSize"].GetInt64();
        m_pageSizeHasBeenSet = true;
    }

    if (rsp.HasMember("TotalNum") && !rsp["TotalNum"].IsNull())
    {
        if (!rsp["TotalNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = rsp["TotalNum"].GetInt64();
        m_totalNumHasBeenSet = true;
    }

    if (rsp.HasMember("TotalPage") && !rsp["TotalPage"].IsNull())
    {
        if (!rsp["TotalPage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalPage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPage = rsp["TotalPage"].GetInt64();
        m_totalPageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeStreamLinkFlowsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_infosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Infos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_infos.begin(); itr != m_infos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageNum, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_totalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNum, allocator);
    }

    if (m_totalPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPage, allocator);
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


vector<DescribeFlow> DescribeStreamLinkFlowsResponse::GetInfos() const
{
    return m_infos;
}

bool DescribeStreamLinkFlowsResponse::InfosHasBeenSet() const
{
    return m_infosHasBeenSet;
}

int64_t DescribeStreamLinkFlowsResponse::GetPageNum() const
{
    return m_pageNum;
}

bool DescribeStreamLinkFlowsResponse::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

int64_t DescribeStreamLinkFlowsResponse::GetPageSize() const
{
    return m_pageSize;
}

bool DescribeStreamLinkFlowsResponse::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeStreamLinkFlowsResponse::GetTotalNum() const
{
    return m_totalNum;
}

bool DescribeStreamLinkFlowsResponse::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

int64_t DescribeStreamLinkFlowsResponse::GetTotalPage() const
{
    return m_totalPage;
}

bool DescribeStreamLinkFlowsResponse::TotalPageHasBeenSet() const
{
    return m_totalPageHasBeenSet;
}


