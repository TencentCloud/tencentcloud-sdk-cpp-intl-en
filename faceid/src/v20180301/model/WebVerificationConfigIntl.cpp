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

#include <tencentcloud/faceid/v20180301/model/WebVerificationConfigIntl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

WebVerificationConfigIntl::WebVerificationConfigIntl() :
    m_autoSkipHasBeenSet(false)
{
}

CoreInternalOutcome WebVerificationConfigIntl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoSkip") && !value["AutoSkip"].IsNull())
    {
        if (!value["AutoSkip"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WebVerificationConfigIntl.AutoSkip` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoSkip = value["AutoSkip"].GetBool();
        m_autoSkipHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebVerificationConfigIntl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoSkipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSkip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoSkip, allocator);
    }

}


bool WebVerificationConfigIntl::GetAutoSkip() const
{
    return m_autoSkip;
}

void WebVerificationConfigIntl::SetAutoSkip(const bool& _autoSkip)
{
    m_autoSkip = _autoSkip;
    m_autoSkipHasBeenSet = true;
}

bool WebVerificationConfigIntl::AutoSkipHasBeenSet() const
{
    return m_autoSkipHasBeenSet;
}

