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

#include <tencentcloud/ses/v20201002/model/AddressUnsubscribeConfigData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

AddressUnsubscribeConfigData::AddressUnsubscribeConfigData() :
    m_addressHasBeenSet(false),
    m_unsubscribeConfigHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome AddressUnsubscribeConfigData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressUnsubscribeConfigData.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("UnsubscribeConfig") && !value["UnsubscribeConfig"].IsNull())
    {
        if (!value["UnsubscribeConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressUnsubscribeConfigData.UnsubscribeConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unsubscribeConfig = string(value["UnsubscribeConfig"].GetString());
        m_unsubscribeConfigHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AddressUnsubscribeConfigData.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddressUnsubscribeConfigData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_unsubscribeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnsubscribeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unsubscribeConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string AddressUnsubscribeConfigData::GetAddress() const
{
    return m_address;
}

void AddressUnsubscribeConfigData::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool AddressUnsubscribeConfigData::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string AddressUnsubscribeConfigData::GetUnsubscribeConfig() const
{
    return m_unsubscribeConfig;
}

void AddressUnsubscribeConfigData::SetUnsubscribeConfig(const string& _unsubscribeConfig)
{
    m_unsubscribeConfig = _unsubscribeConfig;
    m_unsubscribeConfigHasBeenSet = true;
}

bool AddressUnsubscribeConfigData::UnsubscribeConfigHasBeenSet() const
{
    return m_unsubscribeConfigHasBeenSet;
}

uint64_t AddressUnsubscribeConfigData::GetStatus() const
{
    return m_status;
}

void AddressUnsubscribeConfigData::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AddressUnsubscribeConfigData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

