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

#include <tencentcloud/faceid/v20180301/model/ApplyCardVerificationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

ApplyCardVerificationResponse::ApplyCardVerificationResponse() :
    m_cardVerificationTokenHasBeenSet(false),
    m_asyncCardVerificationMaxPollingTimesHasBeenSet(false),
    m_asyncCardVerificationPollingWaitTimeHasBeenSet(false)
{
}

CoreInternalOutcome ApplyCardVerificationResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CardVerificationToken") && !rsp["CardVerificationToken"].IsNull())
    {
        if (!rsp["CardVerificationToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardVerificationToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardVerificationToken = string(rsp["CardVerificationToken"].GetString());
        m_cardVerificationTokenHasBeenSet = true;
    }

    if (rsp.HasMember("AsyncCardVerificationMaxPollingTimes") && !rsp["AsyncCardVerificationMaxPollingTimes"].IsNull())
    {
        if (!rsp["AsyncCardVerificationMaxPollingTimes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncCardVerificationMaxPollingTimes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_asyncCardVerificationMaxPollingTimes = rsp["AsyncCardVerificationMaxPollingTimes"].GetUint64();
        m_asyncCardVerificationMaxPollingTimesHasBeenSet = true;
    }

    if (rsp.HasMember("AsyncCardVerificationPollingWaitTime") && !rsp["AsyncCardVerificationPollingWaitTime"].IsNull())
    {
        if (!rsp["AsyncCardVerificationPollingWaitTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncCardVerificationPollingWaitTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_asyncCardVerificationPollingWaitTime = rsp["AsyncCardVerificationPollingWaitTime"].GetUint64();
        m_asyncCardVerificationPollingWaitTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ApplyCardVerificationResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_cardVerificationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardVerificationToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cardVerificationToken.c_str(), allocator).Move(), allocator);
    }

    if (m_asyncCardVerificationMaxPollingTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncCardVerificationMaxPollingTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asyncCardVerificationMaxPollingTimes, allocator);
    }

    if (m_asyncCardVerificationPollingWaitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncCardVerificationPollingWaitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asyncCardVerificationPollingWaitTime, allocator);
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


string ApplyCardVerificationResponse::GetCardVerificationToken() const
{
    return m_cardVerificationToken;
}

bool ApplyCardVerificationResponse::CardVerificationTokenHasBeenSet() const
{
    return m_cardVerificationTokenHasBeenSet;
}

uint64_t ApplyCardVerificationResponse::GetAsyncCardVerificationMaxPollingTimes() const
{
    return m_asyncCardVerificationMaxPollingTimes;
}

bool ApplyCardVerificationResponse::AsyncCardVerificationMaxPollingTimesHasBeenSet() const
{
    return m_asyncCardVerificationMaxPollingTimesHasBeenSet;
}

uint64_t ApplyCardVerificationResponse::GetAsyncCardVerificationPollingWaitTime() const
{
    return m_asyncCardVerificationPollingWaitTime;
}

bool ApplyCardVerificationResponse::AsyncCardVerificationPollingWaitTimeHasBeenSet() const
{
    return m_asyncCardVerificationPollingWaitTimeHasBeenSet;
}


