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

#include <tencentcloud/faceid/v20180301/model/GetWebVerificationResultIntlResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GetWebVerificationResultIntlResponse::GetWebVerificationResultIntlResponse() :
    m_errorCodeHasBeenSet(false),
    m_errorMsgHasBeenSet(false),
    m_verificationDetailListHasBeenSet(false),
    m_videoBase64HasBeenSet(false),
    m_bestFrameBase64HasBeenSet(false),
    m_oCRResultHasBeenSet(false),
    m_extraHasBeenSet(false)
{
}

CoreInternalOutcome GetWebVerificationResultIntlResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ErrorCode") && !rsp["ErrorCode"].IsNull())
    {
        if (!rsp["ErrorCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = rsp["ErrorCode"].GetInt64();
        m_errorCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMsg") && !rsp["ErrorMsg"].IsNull())
    {
        if (!rsp["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(rsp["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }

    if (rsp.HasMember("VerificationDetailList") && !rsp["VerificationDetailList"].IsNull())
    {
        if (!rsp["VerificationDetailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VerificationDetailList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VerificationDetailList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VerificationDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_verificationDetailList.push_back(item);
        }
        m_verificationDetailListHasBeenSet = true;
    }

    if (rsp.HasMember("VideoBase64") && !rsp["VideoBase64"].IsNull())
    {
        if (!rsp["VideoBase64"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoBase64` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoBase64 = string(rsp["VideoBase64"].GetString());
        m_videoBase64HasBeenSet = true;
    }

    if (rsp.HasMember("BestFrameBase64") && !rsp["BestFrameBase64"].IsNull())
    {
        if (!rsp["BestFrameBase64"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BestFrameBase64` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bestFrameBase64 = string(rsp["BestFrameBase64"].GetString());
        m_bestFrameBase64HasBeenSet = true;
    }

    if (rsp.HasMember("OCRResult") && !rsp["OCRResult"].IsNull())
    {
        if (!rsp["OCRResult"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OCRResult` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OCRResult"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OCRResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_oCRResult.push_back(item);
        }
        m_oCRResultHasBeenSet = true;
    }

    if (rsp.HasMember("Extra") && !rsp["Extra"].IsNull())
    {
        if (!rsp["Extra"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Extra` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extra = string(rsp["Extra"].GetString());
        m_extraHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetWebVerificationResultIntlResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorCode, allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_verificationDetailListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerificationDetailList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_verificationDetailList.begin(); itr != m_verificationDetailList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_videoBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoBase64";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_bestFrameBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BestFrameBase64";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bestFrameBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_oCRResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OCRResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_oCRResult.begin(); itr != m_oCRResult.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
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


int64_t GetWebVerificationResultIntlResponse::GetErrorCode() const
{
    return m_errorCode;
}

bool GetWebVerificationResultIntlResponse::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string GetWebVerificationResultIntlResponse::GetErrorMsg() const
{
    return m_errorMsg;
}

bool GetWebVerificationResultIntlResponse::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

vector<VerificationDetail> GetWebVerificationResultIntlResponse::GetVerificationDetailList() const
{
    return m_verificationDetailList;
}

bool GetWebVerificationResultIntlResponse::VerificationDetailListHasBeenSet() const
{
    return m_verificationDetailListHasBeenSet;
}

string GetWebVerificationResultIntlResponse::GetVideoBase64() const
{
    return m_videoBase64;
}

bool GetWebVerificationResultIntlResponse::VideoBase64HasBeenSet() const
{
    return m_videoBase64HasBeenSet;
}

string GetWebVerificationResultIntlResponse::GetBestFrameBase64() const
{
    return m_bestFrameBase64;
}

bool GetWebVerificationResultIntlResponse::BestFrameBase64HasBeenSet() const
{
    return m_bestFrameBase64HasBeenSet;
}

vector<OCRResult> GetWebVerificationResultIntlResponse::GetOCRResult() const
{
    return m_oCRResult;
}

bool GetWebVerificationResultIntlResponse::OCRResultHasBeenSet() const
{
    return m_oCRResultHasBeenSet;
}

string GetWebVerificationResultIntlResponse::GetExtra() const
{
    return m_extra;
}

bool GetWebVerificationResultIntlResponse::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}


