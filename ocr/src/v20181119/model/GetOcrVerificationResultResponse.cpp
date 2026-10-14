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

#include <tencentcloud/ocr/v20181119/model/GetOcrVerificationResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

GetOcrVerificationResultResponse::GetOcrVerificationResultResponse() :
    m_statusHasBeenSet(false),
    m_cardImageHasBeenSet(false),
    m_cardImageBackHasBeenSet(false),
    m_headImageHasBeenSet(false),
    m_resultCodeHasBeenSet(false),
    m_deviceInfoLevelHasBeenSet(false),
    m_cardInfoHasBeenSet(false),
    m_backCardInfoHasBeenSet(false),
    m_fakeDetectResultHasBeenSet(false),
    m_warnCardInfosHasBeenSet(false)
{
}

CoreInternalOutcome GetOcrVerificationResultResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("CardImage") && !rsp["CardImage"].IsNull())
    {
        if (!rsp["CardImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardImage = string(rsp["CardImage"].GetString());
        m_cardImageHasBeenSet = true;
    }

    if (rsp.HasMember("CardImageBack") && !rsp["CardImageBack"].IsNull())
    {
        if (!rsp["CardImageBack"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardImageBack` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardImageBack = string(rsp["CardImageBack"].GetString());
        m_cardImageBackHasBeenSet = true;
    }

    if (rsp.HasMember("HeadImage") && !rsp["HeadImage"].IsNull())
    {
        if (!rsp["HeadImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HeadImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headImage = string(rsp["HeadImage"].GetString());
        m_headImageHasBeenSet = true;
    }

    if (rsp.HasMember("ResultCode") && !rsp["ResultCode"].IsNull())
    {
        if (!rsp["ResultCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultCode = string(rsp["ResultCode"].GetString());
        m_resultCodeHasBeenSet = true;
    }

    if (rsp.HasMember("DeviceInfoLevel") && !rsp["DeviceInfoLevel"].IsNull())
    {
        if (!rsp["DeviceInfoLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfoLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceInfoLevel = string(rsp["DeviceInfoLevel"].GetString());
        m_deviceInfoLevelHasBeenSet = true;
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

    if (rsp.HasMember("FakeDetectResult") && !rsp["FakeDetectResult"].IsNull())
    {
        if (!rsp["FakeDetectResult"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FakeDetectResult` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fakeDetectResult = rsp["FakeDetectResult"].GetInt64();
        m_fakeDetectResultHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string GetOcrVerificationResultResponse::ToJsonString() const
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

    if (m_cardImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cardImage.c_str(), allocator).Move(), allocator);
    }

    if (m_cardImageBackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardImageBack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cardImageBack.c_str(), allocator).Move(), allocator);
    }

    if (m_headImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_headImage.c_str(), allocator).Move(), allocator);
    }

    if (m_resultCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultCode.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceInfoLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceInfoLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceInfoLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_cardInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cardInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backCardInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackCardInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backCardInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fakeDetectResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeDetectResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fakeDetectResult, allocator);
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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string GetOcrVerificationResultResponse::GetStatus() const
{
    return m_status;
}

bool GetOcrVerificationResultResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string GetOcrVerificationResultResponse::GetCardImage() const
{
    return m_cardImage;
}

bool GetOcrVerificationResultResponse::CardImageHasBeenSet() const
{
    return m_cardImageHasBeenSet;
}

string GetOcrVerificationResultResponse::GetCardImageBack() const
{
    return m_cardImageBack;
}

bool GetOcrVerificationResultResponse::CardImageBackHasBeenSet() const
{
    return m_cardImageBackHasBeenSet;
}

string GetOcrVerificationResultResponse::GetHeadImage() const
{
    return m_headImage;
}

bool GetOcrVerificationResultResponse::HeadImageHasBeenSet() const
{
    return m_headImageHasBeenSet;
}

string GetOcrVerificationResultResponse::GetResultCode() const
{
    return m_resultCode;
}

bool GetOcrVerificationResultResponse::ResultCodeHasBeenSet() const
{
    return m_resultCodeHasBeenSet;
}

string GetOcrVerificationResultResponse::GetDeviceInfoLevel() const
{
    return m_deviceInfoLevel;
}

bool GetOcrVerificationResultResponse::DeviceInfoLevelHasBeenSet() const
{
    return m_deviceInfoLevelHasBeenSet;
}

GeneralCard GetOcrVerificationResultResponse::GetCardInfo() const
{
    return m_cardInfo;
}

bool GetOcrVerificationResultResponse::CardInfoHasBeenSet() const
{
    return m_cardInfoHasBeenSet;
}

GeneralCard GetOcrVerificationResultResponse::GetBackCardInfo() const
{
    return m_backCardInfo;
}

bool GetOcrVerificationResultResponse::BackCardInfoHasBeenSet() const
{
    return m_backCardInfoHasBeenSet;
}

int64_t GetOcrVerificationResultResponse::GetFakeDetectResult() const
{
    return m_fakeDetectResult;
}

bool GetOcrVerificationResultResponse::FakeDetectResultHasBeenSet() const
{
    return m_fakeDetectResultHasBeenSet;
}

vector<int64_t> GetOcrVerificationResultResponse::GetWarnCardInfos() const
{
    return m_warnCardInfos;
}

bool GetOcrVerificationResultResponse::WarnCardInfosHasBeenSet() const
{
    return m_warnCardInfosHasBeenSet;
}


