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

#include <tencentcloud/mdp/v20200527/model/InputAuthInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdp::V20200527::Model;
using namespace std;

InputAuthInfo::InputAuthInfo() :
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false)
{
}

CoreInternalOutcome InputAuthInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputAuthInfo.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputAuthInfo.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputAuthInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

}


string InputAuthInfo::GetUsername() const
{
    return m_username;
}

void InputAuthInfo::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool InputAuthInfo::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string InputAuthInfo::GetPassword() const
{
    return m_password;
}

void InputAuthInfo::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool InputAuthInfo::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

