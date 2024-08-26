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

#include <tencentcloud/cdwdoris/v20211228/model/Property.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

Property::Property() :
    m_propertyKeyHasBeenSet(false),
    m_propertyValueHasBeenSet(false)
{
}

CoreInternalOutcome Property::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PropertyKey") && !value["PropertyKey"].IsNull())
    {
        if (!value["PropertyKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Property.PropertyKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_propertyKey = string(value["PropertyKey"].GetString());
        m_propertyKeyHasBeenSet = true;
    }

    if (value.HasMember("PropertyValue") && !value["PropertyValue"].IsNull())
    {
        if (!value["PropertyValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Property.PropertyValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_propertyValue = string(value["PropertyValue"].GetString());
        m_propertyValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Property::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_propertyKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropertyKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_propertyKey.c_str(), allocator).Move(), allocator);
    }

    if (m_propertyValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropertyValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_propertyValue.c_str(), allocator).Move(), allocator);
    }

}


string Property::GetPropertyKey() const
{
    return m_propertyKey;
}

void Property::SetPropertyKey(const string& _propertyKey)
{
    m_propertyKey = _propertyKey;
    m_propertyKeyHasBeenSet = true;
}

bool Property::PropertyKeyHasBeenSet() const
{
    return m_propertyKeyHasBeenSet;
}

string Property::GetPropertyValue() const
{
    return m_propertyValue;
}

void Property::SetPropertyValue(const string& _propertyValue)
{
    m_propertyValue = _propertyValue;
    m_propertyValueHasBeenSet = true;
}

bool Property::PropertyValueHasBeenSet() const
{
    return m_propertyValueHasBeenSet;
}

