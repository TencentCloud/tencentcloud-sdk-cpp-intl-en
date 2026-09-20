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

#include <tencentcloud/faceid/v20180301/model/RunAMLNameScreeningRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

RunAMLNameScreeningRequest::RunAMLNameScreeningRequest() :
    m_uniqueCustomerIDHasBeenSet(false),
    m_entityTypeHasBeenSet(false),
    m_personHasBeenSet(false),
    m_companyHasBeenSet(false),
    m_enableOngoingScreeningHasBeenSet(false)
{
}

string RunAMLNameScreeningRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_uniqueCustomerIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueCustomerID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqueCustomerID.c_str(), allocator).Move(), allocator);
    }

    if (m_entityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entityType.c_str(), allocator).Move(), allocator);
    }

    if (m_personHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Person";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_person.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_companyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Company";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_company.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_enableOngoingScreeningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableOngoingScreening";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableOngoingScreening, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RunAMLNameScreeningRequest::GetUniqueCustomerID() const
{
    return m_uniqueCustomerID;
}

void RunAMLNameScreeningRequest::SetUniqueCustomerID(const string& _uniqueCustomerID)
{
    m_uniqueCustomerID = _uniqueCustomerID;
    m_uniqueCustomerIDHasBeenSet = true;
}

bool RunAMLNameScreeningRequest::UniqueCustomerIDHasBeenSet() const
{
    return m_uniqueCustomerIDHasBeenSet;
}

string RunAMLNameScreeningRequest::GetEntityType() const
{
    return m_entityType;
}

void RunAMLNameScreeningRequest::SetEntityType(const string& _entityType)
{
    m_entityType = _entityType;
    m_entityTypeHasBeenSet = true;
}

bool RunAMLNameScreeningRequest::EntityTypeHasBeenSet() const
{
    return m_entityTypeHasBeenSet;
}

Person RunAMLNameScreeningRequest::GetPerson() const
{
    return m_person;
}

void RunAMLNameScreeningRequest::SetPerson(const Person& _person)
{
    m_person = _person;
    m_personHasBeenSet = true;
}

bool RunAMLNameScreeningRequest::PersonHasBeenSet() const
{
    return m_personHasBeenSet;
}

Company RunAMLNameScreeningRequest::GetCompany() const
{
    return m_company;
}

void RunAMLNameScreeningRequest::SetCompany(const Company& _company)
{
    m_company = _company;
    m_companyHasBeenSet = true;
}

bool RunAMLNameScreeningRequest::CompanyHasBeenSet() const
{
    return m_companyHasBeenSet;
}

bool RunAMLNameScreeningRequest::GetEnableOngoingScreening() const
{
    return m_enableOngoingScreening;
}

void RunAMLNameScreeningRequest::SetEnableOngoingScreening(const bool& _enableOngoingScreening)
{
    m_enableOngoingScreening = _enableOngoingScreening;
    m_enableOngoingScreeningHasBeenSet = true;
}

bool RunAMLNameScreeningRequest::EnableOngoingScreeningHasBeenSet() const
{
    return m_enableOngoingScreeningHasBeenSet;
}


