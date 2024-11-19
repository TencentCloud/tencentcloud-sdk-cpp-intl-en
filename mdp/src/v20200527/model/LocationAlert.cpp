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

#include <tencentcloud/mdp/v20200527/model/LocationAlert.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdp::V20200527::Model;
using namespace std;

LocationAlert::LocationAlert() :
    m_locationIdHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_locationNameHasBeenSet(false)
{
}

CoreInternalOutcome LocationAlert::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LocationId") && !value["LocationId"].IsNull())
    {
        if (!value["LocationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocationAlert.LocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locationId = string(value["LocationId"].GetString());
        m_locationIdHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LocationAlert.Code` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetUint64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocationAlert.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocationAlert.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("LastModifiedTime") && !value["LastModifiedTime"].IsNull())
    {
        if (!value["LastModifiedTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LocationAlert.LastModifiedTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedTime = value["LastModifiedTime"].GetUint64();
        m_lastModifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("LocationName") && !value["LocationName"].IsNull())
    {
        if (!value["LocationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocationAlert.LocationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locationName = string(value["LocationName"].GetString());
        m_locationNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LocationAlert::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_locationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_locationId.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastModifiedTime, allocator);
    }

    if (m_locationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_locationName.c_str(), allocator).Move(), allocator);
    }

}


string LocationAlert::GetLocationId() const
{
    return m_locationId;
}

void LocationAlert::SetLocationId(const string& _locationId)
{
    m_locationId = _locationId;
    m_locationIdHasBeenSet = true;
}

bool LocationAlert::LocationIdHasBeenSet() const
{
    return m_locationIdHasBeenSet;
}

uint64_t LocationAlert::GetCode() const
{
    return m_code;
}

void LocationAlert::SetCode(const uint64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool LocationAlert::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string LocationAlert::GetCategory() const
{
    return m_category;
}

void LocationAlert::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool LocationAlert::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string LocationAlert::GetMessage() const
{
    return m_message;
}

void LocationAlert::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool LocationAlert::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

uint64_t LocationAlert::GetLastModifiedTime() const
{
    return m_lastModifiedTime;
}

void LocationAlert::SetLastModifiedTime(const uint64_t& _lastModifiedTime)
{
    m_lastModifiedTime = _lastModifiedTime;
    m_lastModifiedTimeHasBeenSet = true;
}

bool LocationAlert::LastModifiedTimeHasBeenSet() const
{
    return m_lastModifiedTimeHasBeenSet;
}

string LocationAlert::GetLocationName() const
{
    return m_locationName;
}

void LocationAlert::SetLocationName(const string& _locationName)
{
    m_locationName = _locationName;
    m_locationNameHasBeenSet = true;
}

bool LocationAlert::LocationNameHasBeenSet() const
{
    return m_locationNameHasBeenSet;
}

