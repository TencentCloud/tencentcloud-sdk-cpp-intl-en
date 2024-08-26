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

#include <tencentcloud/cdwdoris/v20211228/model/AccountDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

AccountDetailInfo::AccountDetailInfo() :
    m_userNameHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_userDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome AccountDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountDetailInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountDetailInfo.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("UserDescription") && !value["UserDescription"].IsNull())
    {
        if (!value["UserDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountDetailInfo.UserDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userDescription = string(value["UserDescription"].GetString());
        m_userDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_userDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userDescription.c_str(), allocator).Move(), allocator);
    }

}


string AccountDetailInfo::GetUserName() const
{
    return m_userName;
}

void AccountDetailInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool AccountDetailInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string AccountDetailInfo::GetHost() const
{
    return m_host;
}

void AccountDetailInfo::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool AccountDetailInfo::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string AccountDetailInfo::GetUserDescription() const
{
    return m_userDescription;
}

void AccountDetailInfo::SetUserDescription(const string& _userDescription)
{
    m_userDescription = _userDescription;
    m_userDescriptionHasBeenSet = true;
}

bool AccountDetailInfo::UserDescriptionHasBeenSet() const
{
    return m_userDescriptionHasBeenSet;
}

