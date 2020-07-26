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

#include <tencentcloud/mdp/v20200527/model/InputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdp::V20200527::Model;
using namespace rapidjson;
using namespace std;

InputInfo::InputInfo() :
    m_urlHasBeenSet(false),
    m_authInfoHasBeenSet(false)
{
}

CoreInternalOutcome InputInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("AuthInfo") && !value["AuthInfo"].IsNull())
    {
        if (!value["AuthInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `InputInfo.AuthInfo` is not object type").SetRequestId(requestId));
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

void InputInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

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


string InputInfo::GetUrl() const
{
    return m_url;
}

void InputInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool InputInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

InputAuthInfo InputInfo::GetAuthInfo() const
{
    return m_authInfo;
}

void InputInfo::SetAuthInfo(const InputAuthInfo& _authInfo)
{
    m_authInfo = _authInfo;
    m_authInfoHasBeenSet = true;
}

bool InputInfo::AuthInfoHasBeenSet() const
{
    return m_authInfoHasBeenSet;
}

