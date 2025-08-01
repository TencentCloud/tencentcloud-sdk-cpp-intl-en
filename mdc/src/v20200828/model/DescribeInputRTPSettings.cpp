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

#include <tencentcloud/mdc/v20200828/model/DescribeInputRTPSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdc::V20200828::Model;
using namespace std;

DescribeInputRTPSettings::DescribeInputRTPSettings() :
    m_fECHasBeenSet(false),
    m_idleTimeoutHasBeenSet(false)
{
}

CoreInternalOutcome DescribeInputRTPSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FEC") && !value["FEC"].IsNull())
    {
        if (!value["FEC"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInputRTPSettings.FEC` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fEC = string(value["FEC"].GetString());
        m_fECHasBeenSet = true;
    }

    if (value.HasMember("IdleTimeout") && !value["IdleTimeout"].IsNull())
    {
        if (!value["IdleTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInputRTPSettings.IdleTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_idleTimeout = value["IdleTimeout"].GetInt64();
        m_idleTimeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeInputRTPSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fECHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FEC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fEC.c_str(), allocator).Move(), allocator);
    }

    if (m_idleTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idleTimeout, allocator);
    }

}


string DescribeInputRTPSettings::GetFEC() const
{
    return m_fEC;
}

void DescribeInputRTPSettings::SetFEC(const string& _fEC)
{
    m_fEC = _fEC;
    m_fECHasBeenSet = true;
}

bool DescribeInputRTPSettings::FECHasBeenSet() const
{
    return m_fECHasBeenSet;
}

int64_t DescribeInputRTPSettings::GetIdleTimeout() const
{
    return m_idleTimeout;
}

void DescribeInputRTPSettings::SetIdleTimeout(const int64_t& _idleTimeout)
{
    m_idleTimeout = _idleTimeout;
    m_idleTimeoutHasBeenSet = true;
}

bool DescribeInputRTPSettings::IdleTimeoutHasBeenSet() const
{
    return m_idleTimeoutHasBeenSet;
}

