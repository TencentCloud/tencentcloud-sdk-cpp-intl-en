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

#include <tencentcloud/ocr/v20181119/model/SkippedCheck.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

SkippedCheck::SkippedCheck() :
    m_checkHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome SkippedCheck::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Check") && !value["Check"].IsNull())
    {
        if (!value["Check"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkippedCheck.Check` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_check = string(value["Check"].GetString());
        m_checkHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkippedCheck.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkippedCheck::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_checkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Check";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_check.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

}


string SkippedCheck::GetCheck() const
{
    return m_check;
}

void SkippedCheck::SetCheck(const string& _check)
{
    m_check = _check;
    m_checkHasBeenSet = true;
}

bool SkippedCheck::CheckHasBeenSet() const
{
    return m_checkHasBeenSet;
}

string SkippedCheck::GetReason() const
{
    return m_reason;
}

void SkippedCheck::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool SkippedCheck::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

