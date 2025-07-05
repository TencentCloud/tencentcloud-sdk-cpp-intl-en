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

#include <tencentcloud/domain/v20180808/model/IntlTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

IntlTemplate::IntlTemplate() :
    m_registrantContactHasBeenSet(false),
    m_adminContactHasBeenSet(false),
    m_technicalContactHasBeenSet(false),
    m_billingContactHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_updatedOnHasBeenSet(false)
{
}

CoreInternalOutcome IntlTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegistrantContact") && !value["RegistrantContact"].IsNull())
    {
        if (!value["RegistrantContact"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IntlTemplate.RegistrantContact` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `IntlTemplate.AdminContact` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `IntlTemplate.TechnicalContact` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `IntlTemplate.BillingContact` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `IntlTemplate.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlTemplate.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntlTemplate.IsDefault` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetInt64();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("UpdatedOn") && !value["UpdatedOn"].IsNull())
    {
        if (!value["UpdatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntlTemplate.UpdatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedOn = string(value["UpdatedOn"].GetString());
        m_updatedOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntlTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_updatedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedOn.c_str(), allocator).Move(), allocator);
    }

}


RegistrantContact IntlTemplate::GetRegistrantContact() const
{
    return m_registrantContact;
}

void IntlTemplate::SetRegistrantContact(const RegistrantContact& _registrantContact)
{
    m_registrantContact = _registrantContact;
    m_registrantContactHasBeenSet = true;
}

bool IntlTemplate::RegistrantContactHasBeenSet() const
{
    return m_registrantContactHasBeenSet;
}

AdminContact IntlTemplate::GetAdminContact() const
{
    return m_adminContact;
}

void IntlTemplate::SetAdminContact(const AdminContact& _adminContact)
{
    m_adminContact = _adminContact;
    m_adminContactHasBeenSet = true;
}

bool IntlTemplate::AdminContactHasBeenSet() const
{
    return m_adminContactHasBeenSet;
}

TechnicalContact IntlTemplate::GetTechnicalContact() const
{
    return m_technicalContact;
}

void IntlTemplate::SetTechnicalContact(const TechnicalContact& _technicalContact)
{
    m_technicalContact = _technicalContact;
    m_technicalContactHasBeenSet = true;
}

bool IntlTemplate::TechnicalContactHasBeenSet() const
{
    return m_technicalContactHasBeenSet;
}

BillingContact IntlTemplate::GetBillingContact() const
{
    return m_billingContact;
}

void IntlTemplate::SetBillingContact(const BillingContact& _billingContact)
{
    m_billingContact = _billingContact;
    m_billingContactHasBeenSet = true;
}

bool IntlTemplate::BillingContactHasBeenSet() const
{
    return m_billingContactHasBeenSet;
}

string IntlTemplate::GetCreatedOn() const
{
    return m_createdOn;
}

void IntlTemplate::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool IntlTemplate::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string IntlTemplate::GetTemplateId() const
{
    return m_templateId;
}

void IntlTemplate::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool IntlTemplate::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

int64_t IntlTemplate::GetIsDefault() const
{
    return m_isDefault;
}

void IntlTemplate::SetIsDefault(const int64_t& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool IntlTemplate::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

string IntlTemplate::GetUpdatedOn() const
{
    return m_updatedOn;
}

void IntlTemplate::SetUpdatedOn(const string& _updatedOn)
{
    m_updatedOn = _updatedOn;
    m_updatedOnHasBeenSet = true;
}

bool IntlTemplate::UpdatedOnHasBeenSet() const
{
    return m_updatedOnHasBeenSet;
}

