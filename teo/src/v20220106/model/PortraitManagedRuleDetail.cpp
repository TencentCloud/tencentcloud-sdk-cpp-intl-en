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

#include <tencentcloud/teo/v20220106/model/PortraitManagedRuleDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

PortraitManagedRuleDetail::PortraitManagedRuleDetail() :
    m_ruleIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ruleTypeNameHasBeenSet(false),
    m_classificationIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome PortraitManagedRuleDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitManagedRuleDetail.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitManagedRuleDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RuleTypeName") && !value["RuleTypeName"].IsNull())
    {
        if (!value["RuleTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitManagedRuleDetail.RuleTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTypeName = string(value["RuleTypeName"].GetString());
        m_ruleTypeNameHasBeenSet = true;
    }

    if (value.HasMember("ClassificationId") && !value["ClassificationId"].IsNull())
    {
        if (!value["ClassificationId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitManagedRuleDetail.ClassificationId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_classificationId = value["ClassificationId"].GetInt64();
        m_classificationIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitManagedRuleDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PortraitManagedRuleDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_classificationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassificationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_classificationId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


int64_t PortraitManagedRuleDetail::GetRuleId() const
{
    return m_ruleId;
}

void PortraitManagedRuleDetail::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool PortraitManagedRuleDetail::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string PortraitManagedRuleDetail::GetDescription() const
{
    return m_description;
}

void PortraitManagedRuleDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool PortraitManagedRuleDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string PortraitManagedRuleDetail::GetRuleTypeName() const
{
    return m_ruleTypeName;
}

void PortraitManagedRuleDetail::SetRuleTypeName(const string& _ruleTypeName)
{
    m_ruleTypeName = _ruleTypeName;
    m_ruleTypeNameHasBeenSet = true;
}

bool PortraitManagedRuleDetail::RuleTypeNameHasBeenSet() const
{
    return m_ruleTypeNameHasBeenSet;
}

int64_t PortraitManagedRuleDetail::GetClassificationId() const
{
    return m_classificationId;
}

void PortraitManagedRuleDetail::SetClassificationId(const int64_t& _classificationId)
{
    m_classificationId = _classificationId;
    m_classificationIdHasBeenSet = true;
}

bool PortraitManagedRuleDetail::ClassificationIdHasBeenSet() const
{
    return m_classificationIdHasBeenSet;
}

string PortraitManagedRuleDetail::GetStatus() const
{
    return m_status;
}

void PortraitManagedRuleDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PortraitManagedRuleDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

