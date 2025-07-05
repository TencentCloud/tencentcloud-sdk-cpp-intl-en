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

#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPVersionCompileTaskResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

DescribeMNPVersionCompileTaskResp::DescribeMNPVersionCompileTaskResp() :
    m_mNPIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_taskMsgHasBeenSet(false),
    m_qrCodeUrlHasBeenSet(false),
    m_pkgSizeHasBeenSet(false),
    m_subPkgInfosHasBeenSet(false),
    m_qrCodeContentHasBeenSet(false),
    m_extInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMNPVersionCompileTaskResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MNPId") && !value["MNPId"].IsNull())
    {
        if (!value["MNPId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionCompileTaskResp.MNPId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPId = string(value["MNPId"].GetString());
        m_mNPIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionCompileTaskResp.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionCompileTaskResp.TaskStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = value["TaskStatus"].GetInt64();
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskMsg") && !value["TaskMsg"].IsNull())
    {
        if (!value["TaskMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionCompileTaskResp.TaskMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskMsg = string(value["TaskMsg"].GetString());
        m_taskMsgHasBeenSet = true;
    }

    if (value.HasMember("QrCodeUrl") && !value["QrCodeUrl"].IsNull())
    {
        if (!value["QrCodeUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionCompileTaskResp.QrCodeUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qrCodeUrl = string(value["QrCodeUrl"].GetString());
        m_qrCodeUrlHasBeenSet = true;
    }

    if (value.HasMember("PkgSize") && !value["PkgSize"].IsNull())
    {
        if (!value["PkgSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionCompileTaskResp.PkgSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pkgSize = value["PkgSize"].GetInt64();
        m_pkgSizeHasBeenSet = true;
    }

    if (value.HasMember("SubPkgInfos") && !value["SubPkgInfos"].IsNull())
    {
        if (!value["SubPkgInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionCompileTaskResp.SubPkgInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["SubPkgInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeMNPVersionCompileTaskSubSimpleInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subPkgInfos.push_back(item);
        }
        m_subPkgInfosHasBeenSet = true;
    }

    if (value.HasMember("QrCodeContent") && !value["QrCodeContent"].IsNull())
    {
        if (!value["QrCodeContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionCompileTaskResp.QrCodeContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qrCodeContent = string(value["QrCodeContent"].GetString());
        m_qrCodeContentHasBeenSet = true;
    }

    if (value.HasMember("ExtInfo") && !value["ExtInfo"].IsNull())
    {
        if (!value["ExtInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionCompileTaskResp.ExtInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extInfo.Deserialize(value["ExtInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeMNPVersionCompileTaskResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mNPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskStatus, allocator);
    }

    if (m_taskMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_qrCodeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QrCodeUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qrCodeUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pkgSize, allocator);
    }

    if (m_subPkgInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubPkgInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subPkgInfos.begin(); itr != m_subPkgInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_qrCodeContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QrCodeContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qrCodeContent.c_str(), allocator).Move(), allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DescribeMNPVersionCompileTaskResp::GetMNPId() const
{
    return m_mNPId;
}

void DescribeMNPVersionCompileTaskResp::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool DescribeMNPVersionCompileTaskResp::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string DescribeMNPVersionCompileTaskResp::GetTaskId() const
{
    return m_taskId;
}

void DescribeMNPVersionCompileTaskResp::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeMNPVersionCompileTaskResp::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t DescribeMNPVersionCompileTaskResp::GetTaskStatus() const
{
    return m_taskStatus;
}

void DescribeMNPVersionCompileTaskResp::SetTaskStatus(const int64_t& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool DescribeMNPVersionCompileTaskResp::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string DescribeMNPVersionCompileTaskResp::GetTaskMsg() const
{
    return m_taskMsg;
}

void DescribeMNPVersionCompileTaskResp::SetTaskMsg(const string& _taskMsg)
{
    m_taskMsg = _taskMsg;
    m_taskMsgHasBeenSet = true;
}

bool DescribeMNPVersionCompileTaskResp::TaskMsgHasBeenSet() const
{
    return m_taskMsgHasBeenSet;
}

string DescribeMNPVersionCompileTaskResp::GetQrCodeUrl() const
{
    return m_qrCodeUrl;
}

void DescribeMNPVersionCompileTaskResp::SetQrCodeUrl(const string& _qrCodeUrl)
{
    m_qrCodeUrl = _qrCodeUrl;
    m_qrCodeUrlHasBeenSet = true;
}

bool DescribeMNPVersionCompileTaskResp::QrCodeUrlHasBeenSet() const
{
    return m_qrCodeUrlHasBeenSet;
}

int64_t DescribeMNPVersionCompileTaskResp::GetPkgSize() const
{
    return m_pkgSize;
}

void DescribeMNPVersionCompileTaskResp::SetPkgSize(const int64_t& _pkgSize)
{
    m_pkgSize = _pkgSize;
    m_pkgSizeHasBeenSet = true;
}

bool DescribeMNPVersionCompileTaskResp::PkgSizeHasBeenSet() const
{
    return m_pkgSizeHasBeenSet;
}

vector<DescribeMNPVersionCompileTaskSubSimpleInfo> DescribeMNPVersionCompileTaskResp::GetSubPkgInfos() const
{
    return m_subPkgInfos;
}

void DescribeMNPVersionCompileTaskResp::SetSubPkgInfos(const vector<DescribeMNPVersionCompileTaskSubSimpleInfo>& _subPkgInfos)
{
    m_subPkgInfos = _subPkgInfos;
    m_subPkgInfosHasBeenSet = true;
}

bool DescribeMNPVersionCompileTaskResp::SubPkgInfosHasBeenSet() const
{
    return m_subPkgInfosHasBeenSet;
}

string DescribeMNPVersionCompileTaskResp::GetQrCodeContent() const
{
    return m_qrCodeContent;
}

void DescribeMNPVersionCompileTaskResp::SetQrCodeContent(const string& _qrCodeContent)
{
    m_qrCodeContent = _qrCodeContent;
    m_qrCodeContentHasBeenSet = true;
}

bool DescribeMNPVersionCompileTaskResp::QrCodeContentHasBeenSet() const
{
    return m_qrCodeContentHasBeenSet;
}

DescribeMNPVersionCompileTaskExtInfo DescribeMNPVersionCompileTaskResp::GetExtInfo() const
{
    return m_extInfo;
}

void DescribeMNPVersionCompileTaskResp::SetExtInfo(const DescribeMNPVersionCompileTaskExtInfo& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool DescribeMNPVersionCompileTaskResp::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}

