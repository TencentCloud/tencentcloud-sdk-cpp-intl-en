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

#include <tencentcloud/mdl/v20200326/model/QueryDispatchInputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

QueryDispatchInputInfo::QueryDispatchInputInfo() :
    m_inputIDHasBeenSet(false),
    m_inputNameHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_inputStreamInfoListHasBeenSet(false)
{
}

CoreInternalOutcome QueryDispatchInputInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputID") && !value["InputID"].IsNull())
    {
        if (!value["InputID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDispatchInputInfo.InputID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputID = string(value["InputID"].GetString());
        m_inputIDHasBeenSet = true;
    }

    if (value.HasMember("InputName") && !value["InputName"].IsNull())
    {
        if (!value["InputName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDispatchInputInfo.InputName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputName = string(value["InputName"].GetString());
        m_inputNameHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryDispatchInputInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("InputStreamInfoList") && !value["InputStreamInfoList"].IsNull())
    {
        if (!value["InputStreamInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueryDispatchInputInfo.InputStreamInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["InputStreamInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InputStreamInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inputStreamInfoList.push_back(item);
        }
        m_inputStreamInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryDispatchInputInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputID.c_str(), allocator).Move(), allocator);
    }

    if (m_inputNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputName.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_inputStreamInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputStreamInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputStreamInfoList.begin(); itr != m_inputStreamInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string QueryDispatchInputInfo::GetInputID() const
{
    return m_inputID;
}

void QueryDispatchInputInfo::SetInputID(const string& _inputID)
{
    m_inputID = _inputID;
    m_inputIDHasBeenSet = true;
}

bool QueryDispatchInputInfo::InputIDHasBeenSet() const
{
    return m_inputIDHasBeenSet;
}

string QueryDispatchInputInfo::GetInputName() const
{
    return m_inputName;
}

void QueryDispatchInputInfo::SetInputName(const string& _inputName)
{
    m_inputName = _inputName;
    m_inputNameHasBeenSet = true;
}

bool QueryDispatchInputInfo::InputNameHasBeenSet() const
{
    return m_inputNameHasBeenSet;
}

string QueryDispatchInputInfo::GetProtocol() const
{
    return m_protocol;
}

void QueryDispatchInputInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool QueryDispatchInputInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

vector<InputStreamInfo> QueryDispatchInputInfo::GetInputStreamInfoList() const
{
    return m_inputStreamInfoList;
}

void QueryDispatchInputInfo::SetInputStreamInfoList(const vector<InputStreamInfo>& _inputStreamInfoList)
{
    m_inputStreamInfoList = _inputStreamInfoList;
    m_inputStreamInfoListHasBeenSet = true;
}

bool QueryDispatchInputInfo::InputStreamInfoListHasBeenSet() const
{
    return m_inputStreamInfoListHasBeenSet;
}

