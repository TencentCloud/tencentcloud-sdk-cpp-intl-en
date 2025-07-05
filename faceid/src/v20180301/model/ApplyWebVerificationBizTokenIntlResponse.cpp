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

#include <tencentcloud/faceid/v20180301/model/ApplyWebVerificationBizTokenIntlResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

ApplyWebVerificationBizTokenIntlResponse::ApplyWebVerificationBizTokenIntlResponse() :
    m_verificationUrlHasBeenSet(false),
    m_bizTokenHasBeenSet(false),
    m_verificationURLHasBeenSet(false)
{
}

CoreInternalOutcome ApplyWebVerificationBizTokenIntlResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("VerificationUrl") && !rsp["VerificationUrl"].IsNull())
    {
        if (!rsp["VerificationUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerificationUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verificationUrl = string(rsp["VerificationUrl"].GetString());
        m_verificationUrlHasBeenSet = true;
    }

    if (rsp.HasMember("BizToken") && !rsp["BizToken"].IsNull())
    {
        if (!rsp["BizToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizToken = string(rsp["BizToken"].GetString());
        m_bizTokenHasBeenSet = true;
    }

    if (rsp.HasMember("VerificationURL") && !rsp["VerificationURL"].IsNull())
    {
        if (!rsp["VerificationURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerificationURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verificationURL = string(rsp["VerificationURL"].GetString());
        m_verificationURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ApplyWebVerificationBizTokenIntlResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_verificationUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerificationUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verificationUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_bizTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizToken.c_str(), allocator).Move(), allocator);
    }

    if (m_verificationURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerificationURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verificationURL.c_str(), allocator).Move(), allocator);
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


string ApplyWebVerificationBizTokenIntlResponse::GetVerificationUrl() const
{
    return m_verificationUrl;
}

bool ApplyWebVerificationBizTokenIntlResponse::VerificationUrlHasBeenSet() const
{
    return m_verificationUrlHasBeenSet;
}

string ApplyWebVerificationBizTokenIntlResponse::GetBizToken() const
{
    return m_bizToken;
}

bool ApplyWebVerificationBizTokenIntlResponse::BizTokenHasBeenSet() const
{
    return m_bizTokenHasBeenSet;
}

string ApplyWebVerificationBizTokenIntlResponse::GetVerificationURL() const
{
    return m_verificationURL;
}

bool ApplyWebVerificationBizTokenIntlResponse::VerificationURLHasBeenSet() const
{
    return m_verificationURLHasBeenSet;
}


