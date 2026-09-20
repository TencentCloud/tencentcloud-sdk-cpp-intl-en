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

#include <tencentcloud/faceid/v20180301/model/UpdateAMLCustomerProfileResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

UpdateAMLCustomerProfileResponse::UpdateAMLCustomerProfileResponse() :
    m_riskLevelHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enableOngoingScreeningHasBeenSet(false)
{
}

CoreInternalOutcome UpdateAMLCustomerProfileResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RiskLevel") && !rsp["RiskLevel"].IsNull())
    {
        if (!rsp["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(rsp["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
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

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string UpdateAMLCustomerProfileResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_enableOngoingScreeningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableOngoingScreening";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableOngoingScreening, allocator);
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


string UpdateAMLCustomerProfileResponse::GetRiskLevel() const
{
    return m_riskLevel;
}

bool UpdateAMLCustomerProfileResponse::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string UpdateAMLCustomerProfileResponse::GetResult() const
{
    return m_result;
}

bool UpdateAMLCustomerProfileResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string UpdateAMLCustomerProfileResponse::GetDescription() const
{
    return m_description;
}

bool UpdateAMLCustomerProfileResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool UpdateAMLCustomerProfileResponse::GetEnableOngoingScreening() const
{
    return m_enableOngoingScreening;
}

bool UpdateAMLCustomerProfileResponse::EnableOngoingScreeningHasBeenSet() const
{
    return m_enableOngoingScreeningHasBeenSet;
}


