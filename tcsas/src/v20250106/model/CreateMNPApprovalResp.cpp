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

#include <tencentcloud/tcsas/v20250106/model/CreateMNPApprovalResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

CreateMNPApprovalResp::CreateMNPApprovalResp() :
    m_resultHasBeenSet(false),
    m_approvalNoHasBeenSet(false)
{
}

CoreInternalOutcome CreateMNPApprovalResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateMNPApprovalResp.Result` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_result = value["Result"].GetBool();
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("ApprovalNo") && !value["ApprovalNo"].IsNull())
    {
        if (!value["ApprovalNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateMNPApprovalResp.ApprovalNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalNo = string(value["ApprovalNo"].GetString());
        m_approvalNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateMNPApprovalResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

    if (m_approvalNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approvalNo.c_str(), allocator).Move(), allocator);
    }

}


bool CreateMNPApprovalResp::GetResult() const
{
    return m_result;
}

void CreateMNPApprovalResp::SetResult(const bool& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool CreateMNPApprovalResp::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string CreateMNPApprovalResp::GetApprovalNo() const
{
    return m_approvalNo;
}

void CreateMNPApprovalResp::SetApprovalNo(const string& _approvalNo)
{
    m_approvalNo = _approvalNo;
    m_approvalNoHasBeenSet = true;
}

bool CreateMNPApprovalResp::ApprovalNoHasBeenSet() const
{
    return m_approvalNoHasBeenSet;
}

