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

#include <tencentcloud/mdl/v20200326/model/DeliveryRestrictionsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

DeliveryRestrictionsInfo::DeliveryRestrictionsInfo() :
    m_webDeliveryAllowedHasBeenSet(false),
    m_noRegionalBlackoutHasBeenSet(false),
    m_archiveAllowedHasBeenSet(false),
    m_deviceRestrictionsHasBeenSet(false)
{
}

CoreInternalOutcome DeliveryRestrictionsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WebDeliveryAllowed") && !value["WebDeliveryAllowed"].IsNull())
    {
        if (!value["WebDeliveryAllowed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryRestrictionsInfo.WebDeliveryAllowed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webDeliveryAllowed = string(value["WebDeliveryAllowed"].GetString());
        m_webDeliveryAllowedHasBeenSet = true;
    }

    if (value.HasMember("NoRegionalBlackout") && !value["NoRegionalBlackout"].IsNull())
    {
        if (!value["NoRegionalBlackout"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryRestrictionsInfo.NoRegionalBlackout` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_noRegionalBlackout = string(value["NoRegionalBlackout"].GetString());
        m_noRegionalBlackoutHasBeenSet = true;
    }

    if (value.HasMember("ArchiveAllowed") && !value["ArchiveAllowed"].IsNull())
    {
        if (!value["ArchiveAllowed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryRestrictionsInfo.ArchiveAllowed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_archiveAllowed = string(value["ArchiveAllowed"].GetString());
        m_archiveAllowedHasBeenSet = true;
    }

    if (value.HasMember("DeviceRestrictions") && !value["DeviceRestrictions"].IsNull())
    {
        if (!value["DeviceRestrictions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryRestrictionsInfo.DeviceRestrictions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceRestrictions = string(value["DeviceRestrictions"].GetString());
        m_deviceRestrictionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeliveryRestrictionsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_webDeliveryAllowedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebDeliveryAllowed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webDeliveryAllowed.c_str(), allocator).Move(), allocator);
    }

    if (m_noRegionalBlackoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoRegionalBlackout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_noRegionalBlackout.c_str(), allocator).Move(), allocator);
    }

    if (m_archiveAllowedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchiveAllowed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_archiveAllowed.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceRestrictionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceRestrictions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceRestrictions.c_str(), allocator).Move(), allocator);
    }

}


string DeliveryRestrictionsInfo::GetWebDeliveryAllowed() const
{
    return m_webDeliveryAllowed;
}

void DeliveryRestrictionsInfo::SetWebDeliveryAllowed(const string& _webDeliveryAllowed)
{
    m_webDeliveryAllowed = _webDeliveryAllowed;
    m_webDeliveryAllowedHasBeenSet = true;
}

bool DeliveryRestrictionsInfo::WebDeliveryAllowedHasBeenSet() const
{
    return m_webDeliveryAllowedHasBeenSet;
}

string DeliveryRestrictionsInfo::GetNoRegionalBlackout() const
{
    return m_noRegionalBlackout;
}

void DeliveryRestrictionsInfo::SetNoRegionalBlackout(const string& _noRegionalBlackout)
{
    m_noRegionalBlackout = _noRegionalBlackout;
    m_noRegionalBlackoutHasBeenSet = true;
}

bool DeliveryRestrictionsInfo::NoRegionalBlackoutHasBeenSet() const
{
    return m_noRegionalBlackoutHasBeenSet;
}

string DeliveryRestrictionsInfo::GetArchiveAllowed() const
{
    return m_archiveAllowed;
}

void DeliveryRestrictionsInfo::SetArchiveAllowed(const string& _archiveAllowed)
{
    m_archiveAllowed = _archiveAllowed;
    m_archiveAllowedHasBeenSet = true;
}

bool DeliveryRestrictionsInfo::ArchiveAllowedHasBeenSet() const
{
    return m_archiveAllowedHasBeenSet;
}

string DeliveryRestrictionsInfo::GetDeviceRestrictions() const
{
    return m_deviceRestrictions;
}

void DeliveryRestrictionsInfo::SetDeviceRestrictions(const string& _deviceRestrictions)
{
    m_deviceRestrictions = _deviceRestrictions;
    m_deviceRestrictionsHasBeenSet = true;
}

bool DeliveryRestrictionsInfo::DeviceRestrictionsHasBeenSet() const
{
    return m_deviceRestrictionsHasBeenSet;
}

