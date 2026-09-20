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

#include <tencentcloud/faceid/v20180301/model/GetAMLScreeningResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GetAMLScreeningResultResponse::GetAMLScreeningResultResponse() :
    m_screeningResultHasBeenSet(false),
    m_enableOngoingScreeningHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_screeningIdHasBeenSet(false),
    m_resultTimeHasBeenSet(false),
    m_aMLTypesHasBeenSet(false),
    m_hitDetailHasBeenSet(false)
{
}

CoreInternalOutcome GetAMLScreeningResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ScreeningResult") && !rsp["ScreeningResult"].IsNull())
    {
        if (!rsp["ScreeningResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreeningResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_screeningResult = string(rsp["ScreeningResult"].GetString());
        m_screeningResultHasBeenSet = true;
    }

    if (rsp.HasMember("EnableOngoingScreening") && !rsp["EnableOngoingScreening"].IsNull())
    {
        if (!rsp["EnableOngoingScreening"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnableOngoingScreening` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableOngoingScreening = rsp["EnableOngoingScreening"].GetBool();
        m_enableOngoingScreeningHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(rsp["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("ScreeningId") && !rsp["ScreeningId"].IsNull())
    {
        if (!rsp["ScreeningId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreeningId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_screeningId = string(rsp["ScreeningId"].GetString());
        m_screeningIdHasBeenSet = true;
    }

    if (rsp.HasMember("ResultTime") && !rsp["ResultTime"].IsNull())
    {
        if (!rsp["ResultTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultTime = string(rsp["ResultTime"].GetString());
        m_resultTimeHasBeenSet = true;
    }

    if (rsp.HasMember("AMLTypes") && !rsp["AMLTypes"].IsNull())
    {
        if (!rsp["AMLTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AMLTypes` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AMLTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_aMLTypes.push_back((*itr).GetString());
        }
        m_aMLTypesHasBeenSet = true;
    }

    if (rsp.HasMember("HitDetail") && !rsp["HitDetail"].IsNull())
    {
        if (!rsp["HitDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HitDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hitDetail = string(rsp["HitDetail"].GetString());
        m_hitDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetAMLScreeningResultResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_screeningResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScreeningResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_screeningResult.c_str(), allocator).Move(), allocator);
    }

    if (m_enableOngoingScreeningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableOngoingScreening";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableOngoingScreening, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_screeningIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScreeningId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_screeningId.c_str(), allocator).Move(), allocator);
    }

    if (m_resultTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultTime.c_str(), allocator).Move(), allocator);
    }

    if (m_aMLTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AMLTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aMLTypes.begin(); itr != m_aMLTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hitDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hitDetail.c_str(), allocator).Move(), allocator);
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


string GetAMLScreeningResultResponse::GetScreeningResult() const
{
    return m_screeningResult;
}

bool GetAMLScreeningResultResponse::ScreeningResultHasBeenSet() const
{
    return m_screeningResultHasBeenSet;
}

bool GetAMLScreeningResultResponse::GetEnableOngoingScreening() const
{
    return m_enableOngoingScreening;
}

bool GetAMLScreeningResultResponse::EnableOngoingScreeningHasBeenSet() const
{
    return m_enableOngoingScreeningHasBeenSet;
}

string GetAMLScreeningResultResponse::GetDescription() const
{
    return m_description;
}

bool GetAMLScreeningResultResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string GetAMLScreeningResultResponse::GetResult() const
{
    return m_result;
}

bool GetAMLScreeningResultResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string GetAMLScreeningResultResponse::GetScreeningId() const
{
    return m_screeningId;
}

bool GetAMLScreeningResultResponse::ScreeningIdHasBeenSet() const
{
    return m_screeningIdHasBeenSet;
}

string GetAMLScreeningResultResponse::GetResultTime() const
{
    return m_resultTime;
}

bool GetAMLScreeningResultResponse::ResultTimeHasBeenSet() const
{
    return m_resultTimeHasBeenSet;
}

vector<string> GetAMLScreeningResultResponse::GetAMLTypes() const
{
    return m_aMLTypes;
}

bool GetAMLScreeningResultResponse::AMLTypesHasBeenSet() const
{
    return m_aMLTypesHasBeenSet;
}

string GetAMLScreeningResultResponse::GetHitDetail() const
{
    return m_hitDetail;
}

bool GetAMLScreeningResultResponse::HitDetailHasBeenSet() const
{
    return m_hitDetailHasBeenSet;
}


