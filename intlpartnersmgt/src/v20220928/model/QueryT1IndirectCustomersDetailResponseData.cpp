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

#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryT1IndirectCustomersDetailResponseData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

QueryT1IndirectCustomersDetailResponseData::QueryT1IndirectCustomersDetailResponseData() :
    m_clientUinHasBeenSet(false),
    m_clientNameHasBeenSet(false),
    m_clientBindTimeHasBeenSet(false)
{
}

CoreInternalOutcome QueryT1IndirectCustomersDetailResponseData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientUin") && !value["ClientUin"].IsNull())
    {
        if (!value["ClientUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryT1IndirectCustomersDetailResponseData.ClientUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clientUin = value["ClientUin"].GetInt64();
        m_clientUinHasBeenSet = true;
    }

    if (value.HasMember("ClientName") && !value["ClientName"].IsNull())
    {
        if (!value["ClientName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryT1IndirectCustomersDetailResponseData.ClientName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientName = string(value["ClientName"].GetString());
        m_clientNameHasBeenSet = true;
    }

    if (value.HasMember("ClientBindTime") && !value["ClientBindTime"].IsNull())
    {
        if (!value["ClientBindTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryT1IndirectCustomersDetailResponseData.ClientBindTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientBindTime = string(value["ClientBindTime"].GetString());
        m_clientBindTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryT1IndirectCustomersDetailResponseData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientUin, allocator);
    }

    if (m_clientNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientName.c_str(), allocator).Move(), allocator);
    }

    if (m_clientBindTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientBindTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientBindTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t QueryT1IndirectCustomersDetailResponseData::GetClientUin() const
{
    return m_clientUin;
}

void QueryT1IndirectCustomersDetailResponseData::SetClientUin(const int64_t& _clientUin)
{
    m_clientUin = _clientUin;
    m_clientUinHasBeenSet = true;
}

bool QueryT1IndirectCustomersDetailResponseData::ClientUinHasBeenSet() const
{
    return m_clientUinHasBeenSet;
}

string QueryT1IndirectCustomersDetailResponseData::GetClientName() const
{
    return m_clientName;
}

void QueryT1IndirectCustomersDetailResponseData::SetClientName(const string& _clientName)
{
    m_clientName = _clientName;
    m_clientNameHasBeenSet = true;
}

bool QueryT1IndirectCustomersDetailResponseData::ClientNameHasBeenSet() const
{
    return m_clientNameHasBeenSet;
}

string QueryT1IndirectCustomersDetailResponseData::GetClientBindTime() const
{
    return m_clientBindTime;
}

void QueryT1IndirectCustomersDetailResponseData::SetClientBindTime(const string& _clientBindTime)
{
    m_clientBindTime = _clientBindTime;
    m_clientBindTimeHasBeenSet = true;
}

bool QueryT1IndirectCustomersDetailResponseData::ClientBindTimeHasBeenSet() const
{
    return m_clientBindTimeHasBeenSet;
}

