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

#include <tencentcloud/mdp/v20200527/model/PointInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdp::V20200527::Model;
using namespace std;

PointInfo::PointInfo() :
    m_inputsHasBeenSet(false),
    m_endpointsHasBeenSet(false)
{
}

CoreInternalOutcome PointInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Inputs") && !value["Inputs"].IsNull())
    {
        if (!value["Inputs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PointInfo.Inputs` is not array type"));

        const rapidjson::Value &tmpValue = value["Inputs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InputInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inputs.push_back(item);
        }
        m_inputsHasBeenSet = true;
    }

    if (value.HasMember("Endpoints") && !value["Endpoints"].IsNull())
    {
        if (!value["Endpoints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PointInfo.Endpoints` is not array type"));

        const rapidjson::Value &tmpValue = value["Endpoints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EndpointInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_endpoints.push_back(item);
        }
        m_endpointsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PointInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Inputs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputs.begin(); itr != m_inputs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_endpointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_endpoints.begin(); itr != m_endpoints.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<InputInfo> PointInfo::GetInputs() const
{
    return m_inputs;
}

void PointInfo::SetInputs(const vector<InputInfo>& _inputs)
{
    m_inputs = _inputs;
    m_inputsHasBeenSet = true;
}

bool PointInfo::InputsHasBeenSet() const
{
    return m_inputsHasBeenSet;
}

vector<EndpointInfo> PointInfo::GetEndpoints() const
{
    return m_endpoints;
}

void PointInfo::SetEndpoints(const vector<EndpointInfo>& _endpoints)
{
    m_endpoints = _endpoints;
    m_endpointsHasBeenSet = true;
}

bool PointInfo::EndpointsHasBeenSet() const
{
    return m_endpointsHasBeenSet;
}

