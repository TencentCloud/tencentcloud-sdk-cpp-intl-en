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

#include <tencentcloud/ocr/v20181119/model/RecognizeGeneralCardVerificationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeGeneralCardVerificationResponse::RecognizeGeneralCardVerificationResponse() :
    m_frontCardInfoHasBeenSet(false),
    m_backCardInfoHasBeenSet(false),
    m_headImageBase64HasBeenSet(false),
    m_warnCardInfosHasBeenSet(false),
    m_executedChecksHasBeenSet(false),
    m_skippedChecksHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeGeneralCardVerificationResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FrontCardInfo") && !rsp["FrontCardInfo"].IsNull())
    {
        if (!rsp["FrontCardInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FrontCardInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_frontCardInfo.Deserialize(rsp["FrontCardInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_frontCardInfoHasBeenSet = true;
    }

    if (rsp.HasMember("BackCardInfo") && !rsp["BackCardInfo"].IsNull())
    {
        if (!rsp["BackCardInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackCardInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backCardInfo.Deserialize(rsp["BackCardInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backCardInfoHasBeenSet = true;
    }

    if (rsp.HasMember("HeadImageBase64") && !rsp["HeadImageBase64"].IsNull())
    {
        if (!rsp["HeadImageBase64"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HeadImageBase64` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headImageBase64 = string(rsp["HeadImageBase64"].GetString());
        m_headImageBase64HasBeenSet = true;
    }

    if (rsp.HasMember("WarnCardInfos") && !rsp["WarnCardInfos"].IsNull())
    {
        if (!rsp["WarnCardInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WarnCardInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["WarnCardInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_warnCardInfos.push_back((*itr).GetInt64());
        }
        m_warnCardInfosHasBeenSet = true;
    }

    if (rsp.HasMember("ExecutedChecks") && !rsp["ExecutedChecks"].IsNull())
    {
        if (!rsp["ExecutedChecks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExecutedChecks` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ExecutedChecks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_executedChecks.push_back((*itr).GetString());
        }
        m_executedChecksHasBeenSet = true;
    }

    if (rsp.HasMember("SkippedChecks") && !rsp["SkippedChecks"].IsNull())
    {
        if (!rsp["SkippedChecks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SkippedChecks` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SkippedChecks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SkippedCheck item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_skippedChecks.push_back(item);
        }
        m_skippedChecksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RecognizeGeneralCardVerificationResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_frontCardInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrontCardInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_frontCardInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backCardInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackCardInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backCardInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_headImageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadImageBase64";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_headImageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_warnCardInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnCardInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_warnCardInfos.begin(); itr != m_warnCardInfos.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_executedChecksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutedChecks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_executedChecks.begin(); itr != m_executedChecks.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_skippedChecksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkippedChecks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_skippedChecks.begin(); itr != m_skippedChecks.end(); ++itr, ++i)
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


GeneralCard RecognizeGeneralCardVerificationResponse::GetFrontCardInfo() const
{
    return m_frontCardInfo;
}

bool RecognizeGeneralCardVerificationResponse::FrontCardInfoHasBeenSet() const
{
    return m_frontCardInfoHasBeenSet;
}

GeneralCard RecognizeGeneralCardVerificationResponse::GetBackCardInfo() const
{
    return m_backCardInfo;
}

bool RecognizeGeneralCardVerificationResponse::BackCardInfoHasBeenSet() const
{
    return m_backCardInfoHasBeenSet;
}

string RecognizeGeneralCardVerificationResponse::GetHeadImageBase64() const
{
    return m_headImageBase64;
}

bool RecognizeGeneralCardVerificationResponse::HeadImageBase64HasBeenSet() const
{
    return m_headImageBase64HasBeenSet;
}

vector<int64_t> RecognizeGeneralCardVerificationResponse::GetWarnCardInfos() const
{
    return m_warnCardInfos;
}

bool RecognizeGeneralCardVerificationResponse::WarnCardInfosHasBeenSet() const
{
    return m_warnCardInfosHasBeenSet;
}

vector<string> RecognizeGeneralCardVerificationResponse::GetExecutedChecks() const
{
    return m_executedChecks;
}

bool RecognizeGeneralCardVerificationResponse::ExecutedChecksHasBeenSet() const
{
    return m_executedChecksHasBeenSet;
}

vector<SkippedCheck> RecognizeGeneralCardVerificationResponse::GetSkippedChecks() const
{
    return m_skippedChecks;
}

bool RecognizeGeneralCardVerificationResponse::SkippedChecksHasBeenSet() const
{
    return m_skippedChecksHasBeenSet;
}


