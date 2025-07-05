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

#include <tencentcloud/tcmpp/v20240801/model/CreateMNPVersionCompileTaskResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

CreateMNPVersionCompileTaskResp::CreateMNPVersionCompileTaskResp() :
    m_taskIdHasBeenSet(false),
    m_wSUrlHasBeenSet(false),
    m_roomIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateMNPVersionCompileTaskResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateMNPVersionCompileTaskResp.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("WSUrl") && !value["WSUrl"].IsNull())
    {
        if (!value["WSUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateMNPVersionCompileTaskResp.WSUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wSUrl = string(value["WSUrl"].GetString());
        m_wSUrlHasBeenSet = true;
    }

    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateMNPVersionCompileTaskResp.RoomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = string(value["RoomId"].GetString());
        m_roomIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateMNPVersionCompileTaskResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_wSUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WSUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wSUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

}


string CreateMNPVersionCompileTaskResp::GetTaskId() const
{
    return m_taskId;
}

void CreateMNPVersionCompileTaskResp::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CreateMNPVersionCompileTaskResp::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CreateMNPVersionCompileTaskResp::GetWSUrl() const
{
    return m_wSUrl;
}

void CreateMNPVersionCompileTaskResp::SetWSUrl(const string& _wSUrl)
{
    m_wSUrl = _wSUrl;
    m_wSUrlHasBeenSet = true;
}

bool CreateMNPVersionCompileTaskResp::WSUrlHasBeenSet() const
{
    return m_wSUrlHasBeenSet;
}

string CreateMNPVersionCompileTaskResp::GetRoomId() const
{
    return m_roomId;
}

void CreateMNPVersionCompileTaskResp::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool CreateMNPVersionCompileTaskResp::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

