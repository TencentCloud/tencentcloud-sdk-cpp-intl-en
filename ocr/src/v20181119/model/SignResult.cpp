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

#include <tencentcloud/ocr/v20181119/model/SignResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

SignResult::SignResult() :
    m_verifyStatusHasBeenSet(false),
    m_signerNameHasBeenSet(false),
    m_signAlgorithmHasBeenSet(false),
    m_signTimeHasBeenSet(false),
    m_certSnHasBeenSet(false)
{
}

CoreInternalOutcome SignResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VerifyStatus") && !value["VerifyStatus"].IsNull())
    {
        if (!value["VerifyStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SignResult.VerifyStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_verifyStatus = value["VerifyStatus"].GetInt64();
        m_verifyStatusHasBeenSet = true;
    }

    if (value.HasMember("SignerName") && !value["SignerName"].IsNull())
    {
        if (!value["SignerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignResult.SignerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signerName = string(value["SignerName"].GetString());
        m_signerNameHasBeenSet = true;
    }

    if (value.HasMember("SignAlgorithm") && !value["SignAlgorithm"].IsNull())
    {
        if (!value["SignAlgorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignResult.SignAlgorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signAlgorithm = string(value["SignAlgorithm"].GetString());
        m_signAlgorithmHasBeenSet = true;
    }

    if (value.HasMember("SignTime") && !value["SignTime"].IsNull())
    {
        if (!value["SignTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SignResult.SignTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_signTime = value["SignTime"].GetInt64();
        m_signTimeHasBeenSet = true;
    }

    if (value.HasMember("CertSn") && !value["CertSn"].IsNull())
    {
        if (!value["CertSn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignResult.CertSn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certSn = string(value["CertSn"].GetString());
        m_certSnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SignResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_verifyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifyStatus, allocator);
    }

    if (m_signerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signerName.c_str(), allocator).Move(), allocator);
    }

    if (m_signAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_signTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_signTime, allocator);
    }

    if (m_certSnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertSn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certSn.c_str(), allocator).Move(), allocator);
    }

}


int64_t SignResult::GetVerifyStatus() const
{
    return m_verifyStatus;
}

void SignResult::SetVerifyStatus(const int64_t& _verifyStatus)
{
    m_verifyStatus = _verifyStatus;
    m_verifyStatusHasBeenSet = true;
}

bool SignResult::VerifyStatusHasBeenSet() const
{
    return m_verifyStatusHasBeenSet;
}

string SignResult::GetSignerName() const
{
    return m_signerName;
}

void SignResult::SetSignerName(const string& _signerName)
{
    m_signerName = _signerName;
    m_signerNameHasBeenSet = true;
}

bool SignResult::SignerNameHasBeenSet() const
{
    return m_signerNameHasBeenSet;
}

string SignResult::GetSignAlgorithm() const
{
    return m_signAlgorithm;
}

void SignResult::SetSignAlgorithm(const string& _signAlgorithm)
{
    m_signAlgorithm = _signAlgorithm;
    m_signAlgorithmHasBeenSet = true;
}

bool SignResult::SignAlgorithmHasBeenSet() const
{
    return m_signAlgorithmHasBeenSet;
}

int64_t SignResult::GetSignTime() const
{
    return m_signTime;
}

void SignResult::SetSignTime(const int64_t& _signTime)
{
    m_signTime = _signTime;
    m_signTimeHasBeenSet = true;
}

bool SignResult::SignTimeHasBeenSet() const
{
    return m_signTimeHasBeenSet;
}

string SignResult::GetCertSn() const
{
    return m_certSn;
}

void SignResult::SetCertSn(const string& _certSn)
{
    m_certSn = _certSn;
    m_certSnHasBeenSet = true;
}

bool SignResult::CertSnHasBeenSet() const
{
    return m_certSnHasBeenSet;
}

