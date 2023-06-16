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

#include <tencentcloud/vod/v20180717/model/Https.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

Https::Https() :
    m_switchHasBeenSet(false),
    m_http2HasBeenSet(false),
    m_certInfoHasBeenSet(false)
{
}

CoreInternalOutcome Https::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Https.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Http2") && !value["Http2"].IsNull())
    {
        if (!value["Http2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Https.Http2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_http2 = string(value["Http2"].GetString());
        m_http2HasBeenSet = true;
    }

    if (value.HasMember("CertInfo") && !value["CertInfo"].IsNull())
    {
        if (!value["CertInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Https.CertInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_certInfo.Deserialize(value["CertInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_certInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Https::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_http2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Http2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_http2.c_str(), allocator).Move(), allocator);
    }

    if (m_certInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_certInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Https::GetSwitch() const
{
    return m_switch;
}

void Https::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool Https::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string Https::GetHttp2() const
{
    return m_http2;
}

void Https::SetHttp2(const string& _http2)
{
    m_http2 = _http2;
    m_http2HasBeenSet = true;
}

bool Https::Http2HasBeenSet() const
{
    return m_http2HasBeenSet;
}

CDNCertInfo Https::GetCertInfo() const
{
    return m_certInfo;
}

void Https::SetCertInfo(const CDNCertInfo& _certInfo)
{
    m_certInfo = _certInfo;
    m_certInfoHasBeenSet = true;
}

bool Https::CertInfoHasBeenSet() const
{
    return m_certInfoHasBeenSet;
}

