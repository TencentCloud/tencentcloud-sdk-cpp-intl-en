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

#include <tencentcloud/tcsas/v20250106/model/DescribeMNPAppSecretResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeMNPAppSecretResp::DescribeMNPAppSecretResp() :
    m_secretStatusHasBeenSet(false),
    m_openServerURLHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMNPAppSecretResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecretStatus") && !value["SecretStatus"].IsNull())
    {
        if (!value["SecretStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPAppSecretResp.SecretStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_secretStatus = value["SecretStatus"].GetInt64();
        m_secretStatusHasBeenSet = true;
    }

    if (value.HasMember("OpenServerURL") && !value["OpenServerURL"].IsNull())
    {
        if (!value["OpenServerURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPAppSecretResp.OpenServerURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openServerURL = string(value["OpenServerURL"].GetString());
        m_openServerURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeMNPAppSecretResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_secretStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secretStatus, allocator);
    }

    if (m_openServerURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenServerURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openServerURL.c_str(), allocator).Move(), allocator);
    }

}


int64_t DescribeMNPAppSecretResp::GetSecretStatus() const
{
    return m_secretStatus;
}

void DescribeMNPAppSecretResp::SetSecretStatus(const int64_t& _secretStatus)
{
    m_secretStatus = _secretStatus;
    m_secretStatusHasBeenSet = true;
}

bool DescribeMNPAppSecretResp::SecretStatusHasBeenSet() const
{
    return m_secretStatusHasBeenSet;
}

string DescribeMNPAppSecretResp::GetOpenServerURL() const
{
    return m_openServerURL;
}

void DescribeMNPAppSecretResp::SetOpenServerURL(const string& _openServerURL)
{
    m_openServerURL = _openServerURL;
    m_openServerURLHasBeenSet = true;
}

bool DescribeMNPAppSecretResp::OpenServerURLHasBeenSet() const
{
    return m_openServerURLHasBeenSet;
}

