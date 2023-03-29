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

#include <tencentcloud/domain/v20180808/model/CreateIntlTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

CreateIntlTemplateRequest::CreateIntlTemplateRequest() :
    m_registrantContactHasBeenSet(false),
    m_adminContactHasBeenSet(false),
    m_technicalContactHasBeenSet(false),
    m_billingContactHasBeenSet(false),
    m_templateTypeHasBeenSet(false)
{
}

string CreateIntlTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registrantContactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrantContact";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_registrantContact.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_adminContactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminContact";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_adminContact.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_technicalContactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TechnicalContact";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_technicalContact.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_billingContactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingContact";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_billingContact.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_templateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


RegistrantContact CreateIntlTemplateRequest::GetRegistrantContact() const
{
    return m_registrantContact;
}

void CreateIntlTemplateRequest::SetRegistrantContact(const RegistrantContact& _registrantContact)
{
    m_registrantContact = _registrantContact;
    m_registrantContactHasBeenSet = true;
}

bool CreateIntlTemplateRequest::RegistrantContactHasBeenSet() const
{
    return m_registrantContactHasBeenSet;
}

AdminContact CreateIntlTemplateRequest::GetAdminContact() const
{
    return m_adminContact;
}

void CreateIntlTemplateRequest::SetAdminContact(const AdminContact& _adminContact)
{
    m_adminContact = _adminContact;
    m_adminContactHasBeenSet = true;
}

bool CreateIntlTemplateRequest::AdminContactHasBeenSet() const
{
    return m_adminContactHasBeenSet;
}

TechnicalContact CreateIntlTemplateRequest::GetTechnicalContact() const
{
    return m_technicalContact;
}

void CreateIntlTemplateRequest::SetTechnicalContact(const TechnicalContact& _technicalContact)
{
    m_technicalContact = _technicalContact;
    m_technicalContactHasBeenSet = true;
}

bool CreateIntlTemplateRequest::TechnicalContactHasBeenSet() const
{
    return m_technicalContactHasBeenSet;
}

BillingContact CreateIntlTemplateRequest::GetBillingContact() const
{
    return m_billingContact;
}

void CreateIntlTemplateRequest::SetBillingContact(const BillingContact& _billingContact)
{
    m_billingContact = _billingContact;
    m_billingContactHasBeenSet = true;
}

bool CreateIntlTemplateRequest::BillingContactHasBeenSet() const
{
    return m_billingContactHasBeenSet;
}

string CreateIntlTemplateRequest::GetTemplateType() const
{
    return m_templateType;
}

void CreateIntlTemplateRequest::SetTemplateType(const string& _templateType)
{
    m_templateType = _templateType;
    m_templateTypeHasBeenSet = true;
}

bool CreateIntlTemplateRequest::TemplateTypeHasBeenSet() const
{
    return m_templateTypeHasBeenSet;
}


