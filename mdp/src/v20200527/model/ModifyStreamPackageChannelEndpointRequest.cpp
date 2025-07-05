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

#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelEndpointRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdp::V20200527::Model;
using namespace std;

ModifyStreamPackageChannelEndpointRequest::ModifyStreamPackageChannelEndpointRequest() :
    m_idHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_authInfoHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_timeShiftEnableHasBeenSet(false),
    m_timeShiftDurationHasBeenSet(false),
    m_sSAIEnableHasBeenSet(false),
    m_sSAIInfoHasBeenSet(false),
    m_customUrlParamIndexHasBeenSet(false),
    m_customUrlParamHasBeenSet(false)
{
}

string ModifyStreamPackageChannelEndpointRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_authInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_authInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_timeShiftEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeShiftEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeShiftEnable, allocator);
    }

    if (m_timeShiftDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeShiftDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeShiftDuration, allocator);
    }

    if (m_sSAIEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSAIEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sSAIEnable, allocator);
    }

    if (m_sSAIInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSAIInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sSAIInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_customUrlParamIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomUrlParamIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_customUrlParamIndex, allocator);
    }

    if (m_customUrlParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomUrlParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customUrlParam.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyStreamPackageChannelEndpointRequest::GetId() const
{
    return m_id;
}

void ModifyStreamPackageChannelEndpointRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyStreamPackageChannelEndpointRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyStreamPackageChannelEndpointRequest::GetUrl() const
{
    return m_url;
}

void ModifyStreamPackageChannelEndpointRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ModifyStreamPackageChannelEndpointRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string ModifyStreamPackageChannelEndpointRequest::GetName() const
{
    return m_name;
}

void ModifyStreamPackageChannelEndpointRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyStreamPackageChannelEndpointRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

EndpointAuthInfo ModifyStreamPackageChannelEndpointRequest::GetAuthInfo() const
{
    return m_authInfo;
}

void ModifyStreamPackageChannelEndpointRequest::SetAuthInfo(const EndpointAuthInfo& _authInfo)
{
    m_authInfo = _authInfo;
    m_authInfoHasBeenSet = true;
}

bool ModifyStreamPackageChannelEndpointRequest::AuthInfoHasBeenSet() const
{
    return m_authInfoHasBeenSet;
}

string ModifyStreamPackageChannelEndpointRequest::GetProtocol() const
{
    return m_protocol;
}

void ModifyStreamPackageChannelEndpointRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ModifyStreamPackageChannelEndpointRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

bool ModifyStreamPackageChannelEndpointRequest::GetTimeShiftEnable() const
{
    return m_timeShiftEnable;
}

void ModifyStreamPackageChannelEndpointRequest::SetTimeShiftEnable(const bool& _timeShiftEnable)
{
    m_timeShiftEnable = _timeShiftEnable;
    m_timeShiftEnableHasBeenSet = true;
}

bool ModifyStreamPackageChannelEndpointRequest::TimeShiftEnableHasBeenSet() const
{
    return m_timeShiftEnableHasBeenSet;
}

uint64_t ModifyStreamPackageChannelEndpointRequest::GetTimeShiftDuration() const
{
    return m_timeShiftDuration;
}

void ModifyStreamPackageChannelEndpointRequest::SetTimeShiftDuration(const uint64_t& _timeShiftDuration)
{
    m_timeShiftDuration = _timeShiftDuration;
    m_timeShiftDurationHasBeenSet = true;
}

bool ModifyStreamPackageChannelEndpointRequest::TimeShiftDurationHasBeenSet() const
{
    return m_timeShiftDurationHasBeenSet;
}

bool ModifyStreamPackageChannelEndpointRequest::GetSSAIEnable() const
{
    return m_sSAIEnable;
}

void ModifyStreamPackageChannelEndpointRequest::SetSSAIEnable(const bool& _sSAIEnable)
{
    m_sSAIEnable = _sSAIEnable;
    m_sSAIEnableHasBeenSet = true;
}

bool ModifyStreamPackageChannelEndpointRequest::SSAIEnableHasBeenSet() const
{
    return m_sSAIEnableHasBeenSet;
}

SSAIConf ModifyStreamPackageChannelEndpointRequest::GetSSAIInfo() const
{
    return m_sSAIInfo;
}

void ModifyStreamPackageChannelEndpointRequest::SetSSAIInfo(const SSAIConf& _sSAIInfo)
{
    m_sSAIInfo = _sSAIInfo;
    m_sSAIInfoHasBeenSet = true;
}

bool ModifyStreamPackageChannelEndpointRequest::SSAIInfoHasBeenSet() const
{
    return m_sSAIInfoHasBeenSet;
}

uint64_t ModifyStreamPackageChannelEndpointRequest::GetCustomUrlParamIndex() const
{
    return m_customUrlParamIndex;
}

void ModifyStreamPackageChannelEndpointRequest::SetCustomUrlParamIndex(const uint64_t& _customUrlParamIndex)
{
    m_customUrlParamIndex = _customUrlParamIndex;
    m_customUrlParamIndexHasBeenSet = true;
}

bool ModifyStreamPackageChannelEndpointRequest::CustomUrlParamIndexHasBeenSet() const
{
    return m_customUrlParamIndexHasBeenSet;
}

string ModifyStreamPackageChannelEndpointRequest::GetCustomUrlParam() const
{
    return m_customUrlParam;
}

void ModifyStreamPackageChannelEndpointRequest::SetCustomUrlParam(const string& _customUrlParam)
{
    m_customUrlParam = _customUrlParam;
    m_customUrlParamHasBeenSet = true;
}

bool ModifyStreamPackageChannelEndpointRequest::CustomUrlParamHasBeenSet() const
{
    return m_customUrlParamHasBeenSet;
}


