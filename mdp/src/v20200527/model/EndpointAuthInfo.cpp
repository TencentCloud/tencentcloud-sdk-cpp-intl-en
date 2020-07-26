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

#include <tencentcloud/mdp/v20200527/model/EndpointAuthInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdp::V20200527::Model;
using namespace rapidjson;
using namespace std;

EndpointAuthInfo::EndpointAuthInfo() :
    m_whiteIpListHasBeenSet(false),
    m_blackIpListHasBeenSet(false),
    m_authKeyHasBeenSet(false)
{
}

CoreInternalOutcome EndpointAuthInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("WhiteIpList") && !value["WhiteIpList"].IsNull())
    {
        if (!value["WhiteIpList"].IsArray())
            return CoreInternalOutcome(Error("response `EndpointAuthInfo.WhiteIpList` is not array type"));

        const Value &tmpValue = value["WhiteIpList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_whiteIpList.push_back((*itr).GetString());
        }
        m_whiteIpListHasBeenSet = true;
    }

    if (value.HasMember("BlackIpList") && !value["BlackIpList"].IsNull())
    {
        if (!value["BlackIpList"].IsArray())
            return CoreInternalOutcome(Error("response `EndpointAuthInfo.BlackIpList` is not array type"));

        const Value &tmpValue = value["BlackIpList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_blackIpList.push_back((*itr).GetString());
        }
        m_blackIpListHasBeenSet = true;
    }

    if (value.HasMember("AuthKey") && !value["AuthKey"].IsNull())
    {
        if (!value["AuthKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `EndpointAuthInfo.AuthKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authKey = string(value["AuthKey"].GetString());
        m_authKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EndpointAuthInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_whiteIpListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WhiteIpList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_whiteIpList.begin(); itr != m_whiteIpList.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_blackIpListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BlackIpList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_blackIpList.begin(); itr != m_blackIpList.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_authKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AuthKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_authKey.c_str(), allocator).Move(), allocator);
    }

}


vector<string> EndpointAuthInfo::GetWhiteIpList() const
{
    return m_whiteIpList;
}

void EndpointAuthInfo::SetWhiteIpList(const vector<string>& _whiteIpList)
{
    m_whiteIpList = _whiteIpList;
    m_whiteIpListHasBeenSet = true;
}

bool EndpointAuthInfo::WhiteIpListHasBeenSet() const
{
    return m_whiteIpListHasBeenSet;
}

vector<string> EndpointAuthInfo::GetBlackIpList() const
{
    return m_blackIpList;
}

void EndpointAuthInfo::SetBlackIpList(const vector<string>& _blackIpList)
{
    m_blackIpList = _blackIpList;
    m_blackIpListHasBeenSet = true;
}

bool EndpointAuthInfo::BlackIpListHasBeenSet() const
{
    return m_blackIpListHasBeenSet;
}

string EndpointAuthInfo::GetAuthKey() const
{
    return m_authKey;
}

void EndpointAuthInfo::SetAuthKey(const string& _authKey)
{
    m_authKey = _authKey;
    m_authKeyHasBeenSet = true;
}

bool EndpointAuthInfo::AuthKeyHasBeenSet() const
{
    return m_authKeyHasBeenSet;
}

