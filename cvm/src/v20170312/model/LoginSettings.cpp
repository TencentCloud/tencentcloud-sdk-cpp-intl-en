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

#include <tencentcloud/cvm/v20170312/model/LoginSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

LoginSettings::LoginSettings() :
    m_passwordHasBeenSet(false),
    m_keyIdsHasBeenSet(false),
    m_keepImageLoginHasBeenSet(false)
{
}

CoreInternalOutcome LoginSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginSettings.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("KeyIds") && !value["KeyIds"].IsNull())
    {
        if (!value["KeyIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoginSettings.KeyIds` is not array type"));

        const rapidjson::Value &tmpValue = value["KeyIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keyIds.push_back((*itr).GetString());
        }
        m_keyIdsHasBeenSet = true;
    }

    if (value.HasMember("KeepImageLogin") && !value["KeepImageLogin"].IsNull())
    {
        if (!value["KeepImageLogin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginSettings.KeepImageLogin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keepImageLogin = string(value["KeepImageLogin"].GetString());
        m_keepImageLoginHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoginSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keyIds.begin(); itr != m_keyIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_keepImageLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepImageLogin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keepImageLogin.c_str(), allocator).Move(), allocator);
    }

}


string LoginSettings::GetPassword() const
{
    return m_password;
}

void LoginSettings::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool LoginSettings::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

vector<string> LoginSettings::GetKeyIds() const
{
    return m_keyIds;
}

void LoginSettings::SetKeyIds(const vector<string>& _keyIds)
{
    m_keyIds = _keyIds;
    m_keyIdsHasBeenSet = true;
}

bool LoginSettings::KeyIdsHasBeenSet() const
{
    return m_keyIdsHasBeenSet;
}

string LoginSettings::GetKeepImageLogin() const
{
    return m_keepImageLogin;
}

void LoginSettings::SetKeepImageLogin(const string& _keepImageLogin)
{
    m_keepImageLogin = _keepImageLogin;
    m_keepImageLoginHasBeenSet = true;
}

bool LoginSettings::KeepImageLoginHasBeenSet() const
{
    return m_keepImageLoginHasBeenSet;
}

