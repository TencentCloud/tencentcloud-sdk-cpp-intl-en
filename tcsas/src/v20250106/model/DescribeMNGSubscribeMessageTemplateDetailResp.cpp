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

#include <tencentcloud/tcsas/v20250106/model/DescribeMNGSubscribeMessageTemplateDetailResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeMNGSubscribeMessageTemplateDetailResp::DescribeMNGSubscribeMessageTemplateDetailResp() :
    m_createUserHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_scenarioDescriptionHasBeenSet(false),
    m_templateInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMNGSubscribeMessageTemplateDetailResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateUser") && !value["CreateUser"].IsNull())
    {
        if (!value["CreateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGSubscribeMessageTemplateDetailResp.CreateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUser = string(value["CreateUser"].GetString());
        m_createUserHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGSubscribeMessageTemplateDetailResp.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ScenarioDescription") && !value["ScenarioDescription"].IsNull())
    {
        if (!value["ScenarioDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGSubscribeMessageTemplateDetailResp.ScenarioDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scenarioDescription = string(value["ScenarioDescription"].GetString());
        m_scenarioDescriptionHasBeenSet = true;
    }

    if (value.HasMember("TemplateInfo") && !value["TemplateInfo"].IsNull())
    {
        if (!value["TemplateInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGSubscribeMessageTemplateDetailResp.TemplateInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_templateInfo.Deserialize(value["TemplateInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_templateInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeMNGSubscribeMessageTemplateDetailResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUser.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scenarioDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scenarioDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_templateInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_templateInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DescribeMNGSubscribeMessageTemplateDetailResp::GetCreateUser() const
{
    return m_createUser;
}

void DescribeMNGSubscribeMessageTemplateDetailResp::SetCreateUser(const string& _createUser)
{
    m_createUser = _createUser;
    m_createUserHasBeenSet = true;
}

bool DescribeMNGSubscribeMessageTemplateDetailResp::CreateUserHasBeenSet() const
{
    return m_createUserHasBeenSet;
}

string DescribeMNGSubscribeMessageTemplateDetailResp::GetCreateTime() const
{
    return m_createTime;
}

void DescribeMNGSubscribeMessageTemplateDetailResp::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeMNGSubscribeMessageTemplateDetailResp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeMNGSubscribeMessageTemplateDetailResp::GetScenarioDescription() const
{
    return m_scenarioDescription;
}

void DescribeMNGSubscribeMessageTemplateDetailResp::SetScenarioDescription(const string& _scenarioDescription)
{
    m_scenarioDescription = _scenarioDescription;
    m_scenarioDescriptionHasBeenSet = true;
}

bool DescribeMNGSubscribeMessageTemplateDetailResp::ScenarioDescriptionHasBeenSet() const
{
    return m_scenarioDescriptionHasBeenSet;
}

MNGSubscribeMessageTemplateDetailResp DescribeMNGSubscribeMessageTemplateDetailResp::GetTemplateInfo() const
{
    return m_templateInfo;
}

void DescribeMNGSubscribeMessageTemplateDetailResp::SetTemplateInfo(const MNGSubscribeMessageTemplateDetailResp& _templateInfo)
{
    m_templateInfo = _templateInfo;
    m_templateInfoHasBeenSet = true;
}

bool DescribeMNGSubscribeMessageTemplateDetailResp::TemplateInfoHasBeenSet() const
{
    return m_templateInfoHasBeenSet;
}

