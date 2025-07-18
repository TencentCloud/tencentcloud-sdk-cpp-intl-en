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

#include <tencentcloud/vpc/v20170312/model/AddressTemplateItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

AddressTemplateItem::AddressTemplateItem() :
    m_addressTemplateIdHasBeenSet(false),
    m_addressTemplateNameHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false)
{
}

CoreInternalOutcome AddressTemplateItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AddressTemplateId") && !value["AddressTemplateId"].IsNull())
    {
        if (!value["AddressTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressTemplateItem.AddressTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressTemplateId = string(value["AddressTemplateId"].GetString());
        m_addressTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("AddressTemplateName") && !value["AddressTemplateName"].IsNull())
    {
        if (!value["AddressTemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressTemplateItem.AddressTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressTemplateName = string(value["AddressTemplateName"].GetString());
        m_addressTemplateNameHasBeenSet = true;
    }

    if (value.HasMember("From") && !value["From"].IsNull())
    {
        if (!value["From"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressTemplateItem.From` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_from = string(value["From"].GetString());
        m_fromHasBeenSet = true;
    }

    if (value.HasMember("To") && !value["To"].IsNull())
    {
        if (!value["To"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressTemplateItem.To` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_to = string(value["To"].GetString());
        m_toHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddressTemplateItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addressTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_addressTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressTemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }

    if (m_toHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "To";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_to.c_str(), allocator).Move(), allocator);
    }

}


string AddressTemplateItem::GetAddressTemplateId() const
{
    return m_addressTemplateId;
}

void AddressTemplateItem::SetAddressTemplateId(const string& _addressTemplateId)
{
    m_addressTemplateId = _addressTemplateId;
    m_addressTemplateIdHasBeenSet = true;
}

bool AddressTemplateItem::AddressTemplateIdHasBeenSet() const
{
    return m_addressTemplateIdHasBeenSet;
}

string AddressTemplateItem::GetAddressTemplateName() const
{
    return m_addressTemplateName;
}

void AddressTemplateItem::SetAddressTemplateName(const string& _addressTemplateName)
{
    m_addressTemplateName = _addressTemplateName;
    m_addressTemplateNameHasBeenSet = true;
}

bool AddressTemplateItem::AddressTemplateNameHasBeenSet() const
{
    return m_addressTemplateNameHasBeenSet;
}

string AddressTemplateItem::GetFrom() const
{
    return m_from;
}

void AddressTemplateItem::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool AddressTemplateItem::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string AddressTemplateItem::GetTo() const
{
    return m_to;
}

void AddressTemplateItem::SetTo(const string& _to)
{
    m_to = _to;
    m_toHasBeenSet = true;
}

bool AddressTemplateItem::ToHasBeenSet() const
{
    return m_toHasBeenSet;
}

