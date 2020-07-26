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

#include <tencentcloud/mdp/v20200527/model/EndpointInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdp::V20200527::Model;
using namespace rapidjson;
using namespace std;

EndpointInfo::EndpointInfo() :
    m_nameHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_authInfoHasBeenSet(false)
{
}

CoreInternalOutcome EndpointInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `EndpointInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Error("response `EndpointInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("AuthInfo") && !value["AuthInfo"].IsNull())
    {
        if (!value["AuthInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EndpointInfo.AuthInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_authInfo.Deserialize(value["AuthInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_authInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EndpointInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_authInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AuthInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_authInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string EndpointInfo::GetName() const
{
    return m_name;
}

void EndpointInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EndpointInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string EndpointInfo::GetUrl() const
{
    return m_url;
}

void EndpointInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool EndpointInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

EndpointAuthInfo EndpointInfo::GetAuthInfo() const
{
    return m_authInfo;
}

void EndpointInfo::SetAuthInfo(const EndpointAuthInfo& _authInfo)
{
    m_authInfo = _authInfo;
    m_authInfoHasBeenSet = true;
}

bool EndpointInfo::AuthInfoHasBeenSet() const
{
    return m_authInfoHasBeenSet;
}

