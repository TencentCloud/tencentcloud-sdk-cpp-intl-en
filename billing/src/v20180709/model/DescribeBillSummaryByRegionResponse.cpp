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

#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByRegionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeBillSummaryByRegionResponse::DescribeBillSummaryByRegionResponse() :
    m_readyHasBeenSet(false),
    m_summaryOverviewHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBillSummaryByRegionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Ready") && !rsp["Ready"].IsNull())
    {
        if (!rsp["Ready"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Ready` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ready = rsp["Ready"].GetUint64();
        m_readyHasBeenSet = true;
    }

    if (rsp.HasMember("SummaryOverview") && !rsp["SummaryOverview"].IsNull())
    {
        if (!rsp["SummaryOverview"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SummaryOverview` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SummaryOverview"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegionSummaryOverviewItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_summaryOverview.push_back(item);
        }
        m_summaryOverviewHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBillSummaryByRegionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_readyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ready";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ready, allocator);
    }

    if (m_summaryOverviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SummaryOverview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_summaryOverview.begin(); itr != m_summaryOverview.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


uint64_t DescribeBillSummaryByRegionResponse::GetReady() const
{
    return m_ready;
}

bool DescribeBillSummaryByRegionResponse::ReadyHasBeenSet() const
{
    return m_readyHasBeenSet;
}

vector<RegionSummaryOverviewItem> DescribeBillSummaryByRegionResponse::GetSummaryOverview() const
{
    return m_summaryOverview;
}

bool DescribeBillSummaryByRegionResponse::SummaryOverviewHasBeenSet() const
{
    return m_summaryOverviewHasBeenSet;
}


