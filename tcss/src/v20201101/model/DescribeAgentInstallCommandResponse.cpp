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

#include <tencentcloud/tcss/v20201101/model/DescribeAgentInstallCommandResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeAgentInstallCommandResponse::DescribeAgentInstallCommandResponse() :
    m_linuxCommandHasBeenSet(false),
    m_windowsCommandHasBeenSet(false),
    m_windowsStepOneHasBeenSet(false),
    m_windowsStepTwoHasBeenSet(false),
    m_windowsDownloadUrlHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAgentInstallCommandResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("LinuxCommand") && !rsp["LinuxCommand"].IsNull())
    {
        if (!rsp["LinuxCommand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinuxCommand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linuxCommand = string(rsp["LinuxCommand"].GetString());
        m_linuxCommandHasBeenSet = true;
    }

    if (rsp.HasMember("WindowsCommand") && !rsp["WindowsCommand"].IsNull())
    {
        if (!rsp["WindowsCommand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WindowsCommand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_windowsCommand = string(rsp["WindowsCommand"].GetString());
        m_windowsCommandHasBeenSet = true;
    }

    if (rsp.HasMember("WindowsStepOne") && !rsp["WindowsStepOne"].IsNull())
    {
        if (!rsp["WindowsStepOne"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WindowsStepOne` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_windowsStepOne = string(rsp["WindowsStepOne"].GetString());
        m_windowsStepOneHasBeenSet = true;
    }

    if (rsp.HasMember("WindowsStepTwo") && !rsp["WindowsStepTwo"].IsNull())
    {
        if (!rsp["WindowsStepTwo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WindowsStepTwo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_windowsStepTwo = string(rsp["WindowsStepTwo"].GetString());
        m_windowsStepTwoHasBeenSet = true;
    }

    if (rsp.HasMember("WindowsDownloadUrl") && !rsp["WindowsDownloadUrl"].IsNull())
    {
        if (!rsp["WindowsDownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WindowsDownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_windowsDownloadUrl = string(rsp["WindowsDownloadUrl"].GetString());
        m_windowsDownloadUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAgentInstallCommandResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_linuxCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinuxCommand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linuxCommand.c_str(), allocator).Move(), allocator);
    }

    if (m_windowsCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WindowsCommand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_windowsCommand.c_str(), allocator).Move(), allocator);
    }

    if (m_windowsStepOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WindowsStepOne";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_windowsStepOne.c_str(), allocator).Move(), allocator);
    }

    if (m_windowsStepTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WindowsStepTwo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_windowsStepTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_windowsDownloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WindowsDownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_windowsDownloadUrl.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeAgentInstallCommandResponse::GetLinuxCommand() const
{
    return m_linuxCommand;
}

bool DescribeAgentInstallCommandResponse::LinuxCommandHasBeenSet() const
{
    return m_linuxCommandHasBeenSet;
}

string DescribeAgentInstallCommandResponse::GetWindowsCommand() const
{
    return m_windowsCommand;
}

bool DescribeAgentInstallCommandResponse::WindowsCommandHasBeenSet() const
{
    return m_windowsCommandHasBeenSet;
}

string DescribeAgentInstallCommandResponse::GetWindowsStepOne() const
{
    return m_windowsStepOne;
}

bool DescribeAgentInstallCommandResponse::WindowsStepOneHasBeenSet() const
{
    return m_windowsStepOneHasBeenSet;
}

string DescribeAgentInstallCommandResponse::GetWindowsStepTwo() const
{
    return m_windowsStepTwo;
}

bool DescribeAgentInstallCommandResponse::WindowsStepTwoHasBeenSet() const
{
    return m_windowsStepTwoHasBeenSet;
}

string DescribeAgentInstallCommandResponse::GetWindowsDownloadUrl() const
{
    return m_windowsDownloadUrl;
}

bool DescribeAgentInstallCommandResponse::WindowsDownloadUrlHasBeenSet() const
{
    return m_windowsDownloadUrlHasBeenSet;
}


