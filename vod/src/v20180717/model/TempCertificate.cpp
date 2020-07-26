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

#include <tencentcloud/vod/v20180717/model/TempCertificate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

TempCertificate::TempCertificate() :
    m_secretIdHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_expiredTimeHasBeenSet(false)
{
}

CoreInternalOutcome TempCertificate::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SecretId") && !value["SecretId"].IsNull())
    {
        if (!value["SecretId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TempCertificate.SecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretId = string(value["SecretId"].GetString());
        m_secretIdHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `TempCertificate.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Error("response `TempCertificate.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TempCertificate.ExpiredTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = value["ExpiredTime"].GetUint64();
        m_expiredTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TempCertificate::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_secretIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecretId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_secretId.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_token.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiredTime, allocator);
    }

}


string TempCertificate::GetSecretId() const
{
    return m_secretId;
}

void TempCertificate::SetSecretId(const string& _secretId)
{
    m_secretId = _secretId;
    m_secretIdHasBeenSet = true;
}

bool TempCertificate::SecretIdHasBeenSet() const
{
    return m_secretIdHasBeenSet;
}

string TempCertificate::GetSecretKey() const
{
    return m_secretKey;
}

void TempCertificate::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool TempCertificate::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string TempCertificate::GetToken() const
{
    return m_token;
}

void TempCertificate::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool TempCertificate::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

uint64_t TempCertificate::GetExpiredTime() const
{
    return m_expiredTime;
}

void TempCertificate::SetExpiredTime(const uint64_t& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool TempCertificate::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

