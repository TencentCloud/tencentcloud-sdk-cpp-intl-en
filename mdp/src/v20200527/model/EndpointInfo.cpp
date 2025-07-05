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

#include <tencentcloud/mdp/v20200527/model/EndpointInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdp::V20200527::Model;
using namespace std;

EndpointInfo::EndpointInfo() :
    m_nameHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_authInfoHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_manifestHasBeenSet(false),
    m_timeShiftEnableHasBeenSet(false),
    m_timeShiftDurationHasBeenSet(false),
    m_sSAIEnableHasBeenSet(false),
    m_sSAIInfoHasBeenSet(false),
    m_customUrlParamIndexHasBeenSet(false),
    m_customUrlParamHasBeenSet(false),
    m_dRMEnabledHasBeenSet(false),
    m_dRMInfoHasBeenSet(false)
{
}

CoreInternalOutcome EndpointInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("AuthInfo") && !value["AuthInfo"].IsNull())
    {
        if (!value["AuthInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointInfo.AuthInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_authInfo.Deserialize(value["AuthInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_authInfoHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Manifest") && !value["Manifest"].IsNull())
    {
        if (!value["Manifest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointInfo.Manifest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manifest = string(value["Manifest"].GetString());
        m_manifestHasBeenSet = true;
    }

    if (value.HasMember("TimeShiftEnable") && !value["TimeShiftEnable"].IsNull())
    {
        if (!value["TimeShiftEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointInfo.TimeShiftEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_timeShiftEnable = value["TimeShiftEnable"].GetBool();
        m_timeShiftEnableHasBeenSet = true;
    }

    if (value.HasMember("TimeShiftDuration") && !value["TimeShiftDuration"].IsNull())
    {
        if (!value["TimeShiftDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointInfo.TimeShiftDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeShiftDuration = value["TimeShiftDuration"].GetUint64();
        m_timeShiftDurationHasBeenSet = true;
    }

    if (value.HasMember("SSAIEnable") && !value["SSAIEnable"].IsNull())
    {
        if (!value["SSAIEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointInfo.SSAIEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sSAIEnable = value["SSAIEnable"].GetBool();
        m_sSAIEnableHasBeenSet = true;
    }

    if (value.HasMember("SSAIInfo") && !value["SSAIInfo"].IsNull())
    {
        if (!value["SSAIInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointInfo.SSAIInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sSAIInfo.Deserialize(value["SSAIInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sSAIInfoHasBeenSet = true;
    }

    if (value.HasMember("CustomUrlParamIndex") && !value["CustomUrlParamIndex"].IsNull())
    {
        if (!value["CustomUrlParamIndex"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointInfo.CustomUrlParamIndex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_customUrlParamIndex = value["CustomUrlParamIndex"].GetUint64();
        m_customUrlParamIndexHasBeenSet = true;
    }

    if (value.HasMember("CustomUrlParam") && !value["CustomUrlParam"].IsNull())
    {
        if (!value["CustomUrlParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointInfo.CustomUrlParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customUrlParam = string(value["CustomUrlParam"].GetString());
        m_customUrlParamHasBeenSet = true;
    }

    if (value.HasMember("DRMEnabled") && !value["DRMEnabled"].IsNull())
    {
        if (!value["DRMEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointInfo.DRMEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dRMEnabled = value["DRMEnabled"].GetBool();
        m_dRMEnabledHasBeenSet = true;
    }

    if (value.HasMember("DRMInfo") && !value["DRMInfo"].IsNull())
    {
        if (!value["DRMInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointInfo.DRMInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dRMInfo.Deserialize(value["DRMInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dRMInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EndpointInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_authInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_authInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_manifestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manifest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manifest.c_str(), allocator).Move(), allocator);
    }

    if (m_timeShiftEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeShiftEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeShiftEnable, allocator);
    }

    if (m_timeShiftDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeShiftDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeShiftDuration, allocator);
    }

    if (m_sSAIEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSAIEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sSAIEnable, allocator);
    }

    if (m_sSAIInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSAIInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sSAIInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_customUrlParamIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomUrlParamIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customUrlParamIndex, allocator);
    }

    if (m_customUrlParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomUrlParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customUrlParam.c_str(), allocator).Move(), allocator);
    }

    if (m_dRMEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DRMEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dRMEnabled, allocator);
    }

    if (m_dRMInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DRMInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dRMInfo.ToJsonObject(value[key.c_str()], allocator);
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

string EndpointInfo::GetProtocol() const
{
    return m_protocol;
}

void EndpointInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool EndpointInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string EndpointInfo::GetManifest() const
{
    return m_manifest;
}

void EndpointInfo::SetManifest(const string& _manifest)
{
    m_manifest = _manifest;
    m_manifestHasBeenSet = true;
}

bool EndpointInfo::ManifestHasBeenSet() const
{
    return m_manifestHasBeenSet;
}

bool EndpointInfo::GetTimeShiftEnable() const
{
    return m_timeShiftEnable;
}

void EndpointInfo::SetTimeShiftEnable(const bool& _timeShiftEnable)
{
    m_timeShiftEnable = _timeShiftEnable;
    m_timeShiftEnableHasBeenSet = true;
}

bool EndpointInfo::TimeShiftEnableHasBeenSet() const
{
    return m_timeShiftEnableHasBeenSet;
}

uint64_t EndpointInfo::GetTimeShiftDuration() const
{
    return m_timeShiftDuration;
}

void EndpointInfo::SetTimeShiftDuration(const uint64_t& _timeShiftDuration)
{
    m_timeShiftDuration = _timeShiftDuration;
    m_timeShiftDurationHasBeenSet = true;
}

bool EndpointInfo::TimeShiftDurationHasBeenSet() const
{
    return m_timeShiftDurationHasBeenSet;
}

bool EndpointInfo::GetSSAIEnable() const
{
    return m_sSAIEnable;
}

void EndpointInfo::SetSSAIEnable(const bool& _sSAIEnable)
{
    m_sSAIEnable = _sSAIEnable;
    m_sSAIEnableHasBeenSet = true;
}

bool EndpointInfo::SSAIEnableHasBeenSet() const
{
    return m_sSAIEnableHasBeenSet;
}

SSAIConf EndpointInfo::GetSSAIInfo() const
{
    return m_sSAIInfo;
}

void EndpointInfo::SetSSAIInfo(const SSAIConf& _sSAIInfo)
{
    m_sSAIInfo = _sSAIInfo;
    m_sSAIInfoHasBeenSet = true;
}

bool EndpointInfo::SSAIInfoHasBeenSet() const
{
    return m_sSAIInfoHasBeenSet;
}

uint64_t EndpointInfo::GetCustomUrlParamIndex() const
{
    return m_customUrlParamIndex;
}

void EndpointInfo::SetCustomUrlParamIndex(const uint64_t& _customUrlParamIndex)
{
    m_customUrlParamIndex = _customUrlParamIndex;
    m_customUrlParamIndexHasBeenSet = true;
}

bool EndpointInfo::CustomUrlParamIndexHasBeenSet() const
{
    return m_customUrlParamIndexHasBeenSet;
}

string EndpointInfo::GetCustomUrlParam() const
{
    return m_customUrlParam;
}

void EndpointInfo::SetCustomUrlParam(const string& _customUrlParam)
{
    m_customUrlParam = _customUrlParam;
    m_customUrlParamHasBeenSet = true;
}

bool EndpointInfo::CustomUrlParamHasBeenSet() const
{
    return m_customUrlParamHasBeenSet;
}

bool EndpointInfo::GetDRMEnabled() const
{
    return m_dRMEnabled;
}

void EndpointInfo::SetDRMEnabled(const bool& _dRMEnabled)
{
    m_dRMEnabled = _dRMEnabled;
    m_dRMEnabledHasBeenSet = true;
}

bool EndpointInfo::DRMEnabledHasBeenSet() const
{
    return m_dRMEnabledHasBeenSet;
}

DRMInfo EndpointInfo::GetDRMInfo() const
{
    return m_dRMInfo;
}

void EndpointInfo::SetDRMInfo(const DRMInfo& _dRMInfo)
{
    m_dRMInfo = _dRMInfo;
    m_dRMInfoHasBeenSet = true;
}

bool EndpointInfo::DRMInfoHasBeenSet() const
{
    return m_dRMInfoHasBeenSet;
}

