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

#include <tencentcloud/lke/v20231130/model/ConversationResourceArtifact.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ConversationResourceArtifact::ConversationResourceArtifact() :
    m_appHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_workflowHasBeenSet(false)
{
}

CoreInternalOutcome ConversationResourceArtifact::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("App") && !value["App"].IsNull())
    {
        if (!value["App"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationResourceArtifact.App` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_app.Deserialize(value["App"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_appHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationResourceArtifact.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Workflow") && !value["Workflow"].IsNull())
    {
        if (!value["Workflow"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationResourceArtifact.Workflow` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workflow.Deserialize(value["Workflow"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workflowHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConversationResourceArtifact::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "App";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_app.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_workflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Workflow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workflow.ToJsonObject(value[key.c_str()], allocator);
    }

}


ConversationAppArtifact ConversationResourceArtifact::GetApp() const
{
    return m_app;
}

void ConversationResourceArtifact::SetApp(const ConversationAppArtifact& _app)
{
    m_app = _app;
    m_appHasBeenSet = true;
}

bool ConversationResourceArtifact::AppHasBeenSet() const
{
    return m_appHasBeenSet;
}

int64_t ConversationResourceArtifact::GetType() const
{
    return m_type;
}

void ConversationResourceArtifact::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ConversationResourceArtifact::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

ConversationWorkflowArtifact ConversationResourceArtifact::GetWorkflow() const
{
    return m_workflow;
}

void ConversationResourceArtifact::SetWorkflow(const ConversationWorkflowArtifact& _workflow)
{
    m_workflow = _workflow;
    m_workflowHasBeenSet = true;
}

bool ConversationResourceArtifact::WorkflowHasBeenSet() const
{
    return m_workflowHasBeenSet;
}

