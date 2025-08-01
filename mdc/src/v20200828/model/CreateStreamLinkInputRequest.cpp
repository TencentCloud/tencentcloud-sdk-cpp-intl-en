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

#include <tencentcloud/mdc/v20200828/model/CreateStreamLinkInputRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdc::V20200828::Model;
using namespace std;

CreateStreamLinkInputRequest::CreateStreamLinkInputRequest() :
    m_flowIdHasBeenSet(false),
    m_inputGroupHasBeenSet(false)
{
}

string CreateStreamLinkInputRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_inputGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputGroup.begin(); itr != m_inputGroup.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateStreamLinkInputRequest::GetFlowId() const
{
    return m_flowId;
}

void CreateStreamLinkInputRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool CreateStreamLinkInputRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

vector<CreateInput> CreateStreamLinkInputRequest::GetInputGroup() const
{
    return m_inputGroup;
}

void CreateStreamLinkInputRequest::SetInputGroup(const vector<CreateInput>& _inputGroup)
{
    m_inputGroup = _inputGroup;
    m_inputGroupHasBeenSet = true;
}

bool CreateStreamLinkInputRequest::InputGroupHasBeenSet() const
{
    return m_inputGroupHasBeenSet;
}


