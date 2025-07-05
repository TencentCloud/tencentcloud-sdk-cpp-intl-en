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

#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPVersionCompileTaskExtInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

DescribeMNPVersionCompileTaskExtInfo::DescribeMNPVersionCompileTaskExtInfo() :
    m_tCMPPErrMsgHasBeenSet(false),
    m_wXErrMsgHasBeenSet(false),
    m_wXQrCodeHasBeenSet(false),
    m_sizeInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMNPVersionCompileTaskExtInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TCMPPErrMsg") && !value["TCMPPErrMsg"].IsNull())
    {
        if (!value["TCMPPErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionCompileTaskExtInfo.TCMPPErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tCMPPErrMsg = string(value["TCMPPErrMsg"].GetString());
        m_tCMPPErrMsgHasBeenSet = true;
    }

    if (value.HasMember("WXErrMsg") && !value["WXErrMsg"].IsNull())
    {
        if (!value["WXErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionCompileTaskExtInfo.WXErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wXErrMsg = string(value["WXErrMsg"].GetString());
        m_wXErrMsgHasBeenSet = true;
    }

    if (value.HasMember("WXQrCode") && !value["WXQrCode"].IsNull())
    {
        if (!value["WXQrCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionCompileTaskExtInfo.WXQrCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wXQrCode = string(value["WXQrCode"].GetString());
        m_wXQrCodeHasBeenSet = true;
    }

    if (value.HasMember("SizeInfo") && !value["SizeInfo"].IsNull())
    {
        if (!value["SizeInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionCompileTaskExtInfo.SizeInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sizeInfo = string(value["SizeInfo"].GetString());
        m_sizeInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeMNPVersionCompileTaskExtInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tCMPPErrMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCMPPErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tCMPPErrMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_wXErrMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WXErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wXErrMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_wXQrCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WXQrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wXQrCode.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SizeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sizeInfo.c_str(), allocator).Move(), allocator);
    }

}


string DescribeMNPVersionCompileTaskExtInfo::GetTCMPPErrMsg() const
{
    return m_tCMPPErrMsg;
}

void DescribeMNPVersionCompileTaskExtInfo::SetTCMPPErrMsg(const string& _tCMPPErrMsg)
{
    m_tCMPPErrMsg = _tCMPPErrMsg;
    m_tCMPPErrMsgHasBeenSet = true;
}

bool DescribeMNPVersionCompileTaskExtInfo::TCMPPErrMsgHasBeenSet() const
{
    return m_tCMPPErrMsgHasBeenSet;
}

string DescribeMNPVersionCompileTaskExtInfo::GetWXErrMsg() const
{
    return m_wXErrMsg;
}

void DescribeMNPVersionCompileTaskExtInfo::SetWXErrMsg(const string& _wXErrMsg)
{
    m_wXErrMsg = _wXErrMsg;
    m_wXErrMsgHasBeenSet = true;
}

bool DescribeMNPVersionCompileTaskExtInfo::WXErrMsgHasBeenSet() const
{
    return m_wXErrMsgHasBeenSet;
}

string DescribeMNPVersionCompileTaskExtInfo::GetWXQrCode() const
{
    return m_wXQrCode;
}

void DescribeMNPVersionCompileTaskExtInfo::SetWXQrCode(const string& _wXQrCode)
{
    m_wXQrCode = _wXQrCode;
    m_wXQrCodeHasBeenSet = true;
}

bool DescribeMNPVersionCompileTaskExtInfo::WXQrCodeHasBeenSet() const
{
    return m_wXQrCodeHasBeenSet;
}

string DescribeMNPVersionCompileTaskExtInfo::GetSizeInfo() const
{
    return m_sizeInfo;
}

void DescribeMNPVersionCompileTaskExtInfo::SetSizeInfo(const string& _sizeInfo)
{
    m_sizeInfo = _sizeInfo;
    m_sizeInfoHasBeenSet = true;
}

bool DescribeMNPVersionCompileTaskExtInfo::SizeInfoHasBeenSet() const
{
    return m_sizeInfoHasBeenSet;
}

