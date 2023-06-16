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

#include <tencentcloud/vod/v20180717/model/CDNCertInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CDNCertInfo::CDNCertInfo() :
    m_certIdHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome CDNCertInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CDNCertInfo.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("Certificate") && !value["Certificate"].IsNull())
    {
        if (!value["Certificate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CDNCertInfo.Certificate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificate = string(value["Certificate"].GetString());
        m_certificateHasBeenSet = true;
    }

    if (value.HasMember("PrivateKey") && !value["PrivateKey"].IsNull())
    {
        if (!value["PrivateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CDNCertInfo.PrivateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateKey = string(value["PrivateKey"].GetString());
        m_privateKeyHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CDNCertInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CDNCertInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Certificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificate.c_str(), allocator).Move(), allocator);
    }

    if (m_privateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

}


string CDNCertInfo::GetCertId() const
{
    return m_certId;
}

void CDNCertInfo::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool CDNCertInfo::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string CDNCertInfo::GetCertificate() const
{
    return m_certificate;
}

void CDNCertInfo::SetCertificate(const string& _certificate)
{
    m_certificate = _certificate;
    m_certificateHasBeenSet = true;
}

bool CDNCertInfo::CertificateHasBeenSet() const
{
    return m_certificateHasBeenSet;
}

string CDNCertInfo::GetPrivateKey() const
{
    return m_privateKey;
}

void CDNCertInfo::SetPrivateKey(const string& _privateKey)
{
    m_privateKey = _privateKey;
    m_privateKeyHasBeenSet = true;
}

bool CDNCertInfo::PrivateKeyHasBeenSet() const
{
    return m_privateKeyHasBeenSet;
}

string CDNCertInfo::GetExpireTime() const
{
    return m_expireTime;
}

void CDNCertInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool CDNCertInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

