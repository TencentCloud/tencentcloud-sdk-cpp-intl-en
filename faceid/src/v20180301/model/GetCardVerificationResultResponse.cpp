/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/faceid/v20180301/model/GetCardVerificationResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GetCardVerificationResultResponse::GetCardVerificationResultResponse() :
    m_statusHasBeenSet(false),
    m_warnInfoHasBeenSet(false),
    m_nationalityHasBeenSet(false),
    m_cardTypeHasBeenSet(false),
    m_cardSubTypeHasBeenSet(false),
    m_cardInfoHasBeenSet(false),
    m_iDVerificationTokenHasBeenSet(false)
{
}

CoreInternalOutcome GetCardVerificationResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("WarnInfo") && !rsp["WarnInfo"].IsNull())
    {
        if (!rsp["WarnInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WarnInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["WarnInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_warnInfo.push_back((*itr).GetString());
        }
        m_warnInfoHasBeenSet = true;
    }

    if (rsp.HasMember("Nationality") && !rsp["Nationality"].IsNull())
    {
        if (!rsp["Nationality"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Nationality` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationality = string(rsp["Nationality"].GetString());
        m_nationalityHasBeenSet = true;
    }

    if (rsp.HasMember("CardType") && !rsp["CardType"].IsNull())
    {
        if (!rsp["CardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardType = string(rsp["CardType"].GetString());
        m_cardTypeHasBeenSet = true;
    }

    if (rsp.HasMember("CardSubType") && !rsp["CardSubType"].IsNull())
    {
        if (!rsp["CardSubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardSubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardSubType = string(rsp["CardSubType"].GetString());
        m_cardSubTypeHasBeenSet = true;
    }

    if (rsp.HasMember("CardInfo") && !rsp["CardInfo"].IsNull())
    {
        if (!rsp["CardInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CardInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cardInfo.Deserialize(rsp["CardInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cardInfoHasBeenSet = true;
    }

    if (rsp.HasMember("IDVerificationToken") && !rsp["IDVerificationToken"].IsNull())
    {
        if (!rsp["IDVerificationToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IDVerificationToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iDVerificationToken = string(rsp["IDVerificationToken"].GetString());
        m_iDVerificationTokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetCardVerificationResultResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_warnInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_warnInfo.begin(); itr != m_warnInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nationalityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nationality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationality.c_str(), allocator).Move(), allocator);
    }

    if (m_cardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cardType.c_str(), allocator).Move(), allocator);
    }

    if (m_cardSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardSubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cardSubType.c_str(), allocator).Move(), allocator);
    }

    if (m_cardInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cardInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_iDVerificationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDVerificationToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iDVerificationToken.c_str(), allocator).Move(), allocator);
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


string GetCardVerificationResultResponse::GetStatus() const
{
    return m_status;
}

bool GetCardVerificationResultResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> GetCardVerificationResultResponse::GetWarnInfo() const
{
    return m_warnInfo;
}

bool GetCardVerificationResultResponse::WarnInfoHasBeenSet() const
{
    return m_warnInfoHasBeenSet;
}

string GetCardVerificationResultResponse::GetNationality() const
{
    return m_nationality;
}

bool GetCardVerificationResultResponse::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

string GetCardVerificationResultResponse::GetCardType() const
{
    return m_cardType;
}

bool GetCardVerificationResultResponse::CardTypeHasBeenSet() const
{
    return m_cardTypeHasBeenSet;
}

string GetCardVerificationResultResponse::GetCardSubType() const
{
    return m_cardSubType;
}

bool GetCardVerificationResultResponse::CardSubTypeHasBeenSet() const
{
    return m_cardSubTypeHasBeenSet;
}

CardInfo GetCardVerificationResultResponse::GetCardInfo() const
{
    return m_cardInfo;
}

bool GetCardVerificationResultResponse::CardInfoHasBeenSet() const
{
    return m_cardInfoHasBeenSet;
}

string GetCardVerificationResultResponse::GetIDVerificationToken() const
{
    return m_iDVerificationToken;
}

bool GetCardVerificationResultResponse::IDVerificationTokenHasBeenSet() const
{
    return m_iDVerificationTokenHasBeenSet;
}


