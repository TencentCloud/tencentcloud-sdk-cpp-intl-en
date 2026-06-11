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

#include <tencentcloud/tcsas/v20250106/model/DescribeMNGVersionResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeMNGVersionResp::DescribeMNGVersionResp() :
    m_mNPIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_taskMsgHasBeenSet(false),
    m_mNPVersionIdHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_qRCodeHasBeenSet(false),
    m_subPackageInfosHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMNGVersionResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MNPId") && !value["MNPId"].IsNull())
    {
        if (!value["MNPId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionResp.MNPId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPId = string(value["MNPId"].GetString());
        m_mNPIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionResp.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionResp.TaskStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = value["TaskStatus"].GetInt64();
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskMsg") && !value["TaskMsg"].IsNull())
    {
        if (!value["TaskMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionResp.TaskMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskMsg = string(value["TaskMsg"].GetString());
        m_taskMsgHasBeenSet = true;
    }

    if (value.HasMember("MNPVersionId") && !value["MNPVersionId"].IsNull())
    {
        if (!value["MNPVersionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionResp.MNPVersionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersionId = value["MNPVersionId"].GetInt64();
        m_mNPVersionIdHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionResp.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("QRCode") && !value["QRCode"].IsNull())
    {
        if (!value["QRCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionResp.QRCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qRCode = string(value["QRCode"].GetString());
        m_qRCodeHasBeenSet = true;
    }

    if (value.HasMember("SubPackageInfos") && !value["SubPackageInfos"].IsNull())
    {
        if (!value["SubPackageInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionResp.SubPackageInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["SubPackageInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MNPVersionSubPackageInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subPackageInfos.push_back(item);
        }
        m_subPackageInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeMNGVersionResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_mNPVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mNPVersionId, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_qRCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qRCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subPackageInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubPackageInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subPackageInfos.begin(); itr != m_subPackageInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DescribeMNGVersionResp::GetMNPId() const
{
    return m_mNPId;
}

void DescribeMNGVersionResp::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool DescribeMNGVersionResp::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string DescribeMNGVersionResp::GetTaskId() const
{
    return m_taskId;
}

void DescribeMNGVersionResp::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeMNGVersionResp::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t DescribeMNGVersionResp::GetTaskStatus() const
{
    return m_taskStatus;
}

void DescribeMNGVersionResp::SetTaskStatus(const int64_t& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool DescribeMNGVersionResp::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string DescribeMNGVersionResp::GetTaskMsg() const
{
    return m_taskMsg;
}

void DescribeMNGVersionResp::SetTaskMsg(const string& _taskMsg)
{
    m_taskMsg = _taskMsg;
    m_taskMsgHasBeenSet = true;
}

bool DescribeMNGVersionResp::TaskMsgHasBeenSet() const
{
    return m_taskMsgHasBeenSet;
}

int64_t DescribeMNGVersionResp::GetMNPVersionId() const
{
    return m_mNPVersionId;
}

void DescribeMNGVersionResp::SetMNPVersionId(const int64_t& _mNPVersionId)
{
    m_mNPVersionId = _mNPVersionId;
    m_mNPVersionIdHasBeenSet = true;
}

bool DescribeMNGVersionResp::MNPVersionIdHasBeenSet() const
{
    return m_mNPVersionIdHasBeenSet;
}

int64_t DescribeMNGVersionResp::GetExpireTime() const
{
    return m_expireTime;
}

void DescribeMNGVersionResp::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool DescribeMNGVersionResp::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string DescribeMNGVersionResp::GetQRCode() const
{
    return m_qRCode;
}

void DescribeMNGVersionResp::SetQRCode(const string& _qRCode)
{
    m_qRCode = _qRCode;
    m_qRCodeHasBeenSet = true;
}

bool DescribeMNGVersionResp::QRCodeHasBeenSet() const
{
    return m_qRCodeHasBeenSet;
}

vector<MNPVersionSubPackageInfo> DescribeMNGVersionResp::GetSubPackageInfos() const
{
    return m_subPackageInfos;
}

void DescribeMNGVersionResp::SetSubPackageInfos(const vector<MNPVersionSubPackageInfo>& _subPackageInfos)
{
    m_subPackageInfos = _subPackageInfos;
    m_subPackageInfosHasBeenSet = true;
}

bool DescribeMNGVersionResp::SubPackageInfosHasBeenSet() const
{
    return m_subPackageInfosHasBeenSet;
}

