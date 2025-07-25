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

#include <tencentcloud/ses/v20201002/model/GetEmailIdentityResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

GetEmailIdentityResponse::GetEmailIdentityResponse() :
    m_identityTypeHasBeenSet(false),
    m_verifiedForSendingStatusHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

CoreInternalOutcome GetEmailIdentityResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IdentityType") && !rsp["IdentityType"].IsNull())
    {
        if (!rsp["IdentityType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdentityType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityType = string(rsp["IdentityType"].GetString());
        m_identityTypeHasBeenSet = true;
    }

    if (rsp.HasMember("VerifiedForSendingStatus") && !rsp["VerifiedForSendingStatus"].IsNull())
    {
        if (!rsp["VerifiedForSendingStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VerifiedForSendingStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_verifiedForSendingStatus = rsp["VerifiedForSendingStatus"].GetBool();
        m_verifiedForSendingStatusHasBeenSet = true;
    }

    if (rsp.HasMember("Attributes") && !rsp["Attributes"].IsNull())
    {
        if (!rsp["Attributes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Attributes` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Attributes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DNSAttributes item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attributes.push_back(item);
        }
        m_attributesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetEmailIdentityResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_identityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identityType.c_str(), allocator).Move(), allocator);
    }

    if (m_verifiedForSendingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifiedForSendingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifiedForSendingStatus, allocator);
    }

    if (m_attributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attributes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attributes.begin(); itr != m_attributes.end(); ++itr, ++i)
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


string GetEmailIdentityResponse::GetIdentityType() const
{
    return m_identityType;
}

bool GetEmailIdentityResponse::IdentityTypeHasBeenSet() const
{
    return m_identityTypeHasBeenSet;
}

bool GetEmailIdentityResponse::GetVerifiedForSendingStatus() const
{
    return m_verifiedForSendingStatus;
}

bool GetEmailIdentityResponse::VerifiedForSendingStatusHasBeenSet() const
{
    return m_verifiedForSendingStatusHasBeenSet;
}

vector<DNSAttributes> GetEmailIdentityResponse::GetAttributes() const
{
    return m_attributes;
}

bool GetEmailIdentityResponse::AttributesHasBeenSet() const
{
    return m_attributesHasBeenSet;
}


