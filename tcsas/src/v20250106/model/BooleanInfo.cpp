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

#include <tencentcloud/tcsas/v20250106/model/BooleanInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

BooleanInfo::BooleanInfo() :
    m_resultHasBeenSet(false)
{
}

CoreInternalOutcome BooleanInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BooleanInfo.Result` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_result = value["Result"].GetBool();
        m_resultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BooleanInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

}


bool BooleanInfo::GetResult() const
{
    return m_result;
}

void BooleanInfo::SetResult(const bool& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool BooleanInfo::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

