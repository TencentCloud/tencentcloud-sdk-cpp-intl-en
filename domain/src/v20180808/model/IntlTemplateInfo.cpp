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

#include <tencentcloud/domain/v20180808/model/IntlTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

IntlTemplateInfo::IntlTemplateInfo() :
    m_registrantContactHasBeenSet(false),
    m_adminContactHasBeenSet(false),
    m_technicalContactHasBeenSet(false),
    m_billingContactHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_templateTypeHasBeenSet(false),
    m_updatedOnHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_isDefaultHasBeenSet(false)
{
}

CoreInternalOutcome IntlTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegistrantContact") && !value["RegistrantContact"].IsNull())
    {
        if (!value["RegistrantContact"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IntlTemplateInfo.RegistrantContact` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_registrantContact.Deserialize(value["RegistrantContact"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_registrantContactHasBeenSet = true;
    }

    if (value.HasMember("AdminContact") && !value["AdminContact"].IsNull())
    {
        if (!value["AdminContact"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IntlTemplateInfo.AdminContact` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_adminContact.Deserialize(value["AdminContact"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_adminContactHasBeenSet = true;
    }

    if (value.HasMember("TechnicalContact") && !value["TechnicalContact"].IsNull())
    {
        if (!value["TechnicalContact"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IntlTemplateInfo.TechnicalContact` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_technicalContact.Deserialize(value["TechnicalContact"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_technicalContactHasBeenSet = true;
    }

    if (value.HasMember("BillingContact") && !value["BillingContact"].IsNull())
    {
        if (!value["BillingContact"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IntlTemplateInfo.BillingContact` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_billingContact.Deserialize(value["BillingContact"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_billingContactHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlTemplateInfo.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlTemplateInfo.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateType") && !value["TemplateType"].IsNull())
    {
        if (!value["TemplateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlTemplateInfo.TemplateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateType = string(value["TemplateType"].GetString());
        m_templateTypeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedOn") && !value["UpdatedOn"].IsNull())
    {
        if (!value["UpdatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlTemplateInfo.UpdatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedOn = string(value["UpdatedOn"].GetString());
        m_updatedOnHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlTemplateInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntlTemplateInfo.IsDefault` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetInt64();
        m_isDefaultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntlTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_registrantContactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrantContact";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_registrantContact.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_adminContactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminContact";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_adminContact.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_technicalContactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TechnicalContact";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_technicalContact.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_billingContactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingContact";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_billingContact.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateType.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedOn.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

}


RegistrantContact IntlTemplateInfo::GetRegistrantContact() const
{
    return m_registrantContact;
}

void IntlTemplateInfo::SetRegistrantContact(const RegistrantContact& _registrantContact)
{
    m_registrantContact = _registrantContact;
    m_registrantContactHasBeenSet = true;
}

bool IntlTemplateInfo::RegistrantContactHasBeenSet() const
{
    return m_registrantContactHasBeenSet;
}

AdminContact IntlTemplateInfo::GetAdminContact() const
{
    return m_adminContact;
}

void IntlTemplateInfo::SetAdminContact(const AdminContact& _adminContact)
{
    m_adminContact = _adminContact;
    m_adminContactHasBeenSet = true;
}

bool IntlTemplateInfo::AdminContactHasBeenSet() const
{
    return m_adminContactHasBeenSet;
}

TechnicalContact IntlTemplateInfo::GetTechnicalContact() const
{
    return m_technicalContact;
}

void IntlTemplateInfo::SetTechnicalContact(const TechnicalContact& _technicalContact)
{
    m_technicalContact = _technicalContact;
    m_technicalContactHasBeenSet = true;
}

bool IntlTemplateInfo::TechnicalContactHasBeenSet() const
{
    return m_technicalContactHasBeenSet;
}

BillingContact IntlTemplateInfo::GetBillingContact() const
{
    return m_billingContact;
}

void IntlTemplateInfo::SetBillingContact(const BillingContact& _billingContact)
{
    m_billingContact = _billingContact;
    m_billingContactHasBeenSet = true;
}

bool IntlTemplateInfo::BillingContactHasBeenSet() const
{
    return m_billingContactHasBeenSet;
}

string IntlTemplateInfo::GetCreatedOn() const
{
    return m_createdOn;
}

void IntlTemplateInfo::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool IntlTemplateInfo::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string IntlTemplateInfo::GetTemplateId() const
{
    return m_templateId;
}

void IntlTemplateInfo::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool IntlTemplateInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string IntlTemplateInfo::GetTemplateType() const
{
    return m_templateType;
}

void IntlTemplateInfo::SetTemplateType(const string& _templateType)
{
    m_templateType = _templateType;
    m_templateTypeHasBeenSet = true;
}

bool IntlTemplateInfo::TemplateTypeHasBeenSet() const
{
    return m_templateTypeHasBeenSet;
}

string IntlTemplateInfo::GetUpdatedOn() const
{
    return m_updatedOn;
}

void IntlTemplateInfo::SetUpdatedOn(const string& _updatedOn)
{
    m_updatedOn = _updatedOn;
    m_updatedOnHasBeenSet = true;
}

bool IntlTemplateInfo::UpdatedOnHasBeenSet() const
{
    return m_updatedOnHasBeenSet;
}

string IntlTemplateInfo::GetUin() const
{
    return m_uin;
}

void IntlTemplateInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool IntlTemplateInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t IntlTemplateInfo::GetIsDefault() const
{
    return m_isDefault;
}

void IntlTemplateInfo::SetIsDefault(const int64_t& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool IntlTemplateInfo::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

