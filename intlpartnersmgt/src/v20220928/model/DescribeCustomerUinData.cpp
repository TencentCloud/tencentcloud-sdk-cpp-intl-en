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

#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerUinData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

DescribeCustomerUinData::DescribeCustomerUinData() :
    m_customerUinHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCustomerUinData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomerUin") && !value["CustomerUin"].IsNull())
    {
        if (!value["CustomerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomerUinData.CustomerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerUin = string(value["CustomerUin"].GetString());
        m_customerUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeCustomerUinData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerUin.c_str(), allocator).Move(), allocator);
    }

}


string DescribeCustomerUinData::GetCustomerUin() const
{
    return m_customerUin;
}

void DescribeCustomerUinData::SetCustomerUin(const string& _customerUin)
{
    m_customerUin = _customerUin;
    m_customerUinHasBeenSet = true;
}

bool DescribeCustomerUinData::CustomerUinHasBeenSet() const
{
    return m_customerUinHasBeenSet;
}

