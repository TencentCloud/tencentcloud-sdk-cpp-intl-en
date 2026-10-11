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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKTYPEPROPERTY_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKTYPEPROPERTY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Task type attribute key-value pair
                */
                class TaskTypeProperty : public AbstractModel
                {
                public:
                    TaskTypeProperty();
                    ~TaskTypeProperty() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Attribute key name. When used as an input parameter in TaskType, if it is not passed or is empty, this attribute item is silently ignored by the server (no error reported), equivalent to the attribute being unconfigured. For the list of valid PropertyKey, see the description in TaskType.</p>
                     * @return PropertyKey <p>Attribute key name. When used as an input parameter in TaskType, if it is not passed or is empty, this attribute item is silently ignored by the server (no error reported), equivalent to the attribute being unconfigured. For the list of valid PropertyKey, see the description in TaskType.</p>
                     * 
                     */
                    std::string GetPropertyKey() const;

                    /**
                     * 设置<p>Attribute key name. When used as an input parameter in TaskType, if it is not passed or is empty, this attribute item is silently ignored by the server (no error reported), equivalent to the attribute being unconfigured. For the list of valid PropertyKey, see the description in TaskType.</p>
                     * @param _propertyKey <p>Attribute key name. When used as an input parameter in TaskType, if it is not passed or is empty, this attribute item is silently ignored by the server (no error reported), equivalent to the attribute being unconfigured. For the list of valid PropertyKey, see the description in TaskType.</p>
                     * 
                     */
                    void SetPropertyKey(const std::string& _propertyKey);

                    /**
                     * 判断参数 PropertyKey 是否已赋值
                     * @return PropertyKey 是否已赋值
                     * 
                     */
                    bool PropertyKeyHasBeenSet() const;

                    /**
                     * 获取<p>Attribute value.</p>
                     * @return PropertyValue <p>Attribute value.</p>
                     * 
                     */
                    std::string GetPropertyValue() const;

                    /**
                     * 设置<p>Attribute value.</p>
                     * @param _propertyValue <p>Attribute value.</p>
                     * 
                     */
                    void SetPropertyValue(const std::string& _propertyValue);

                    /**
                     * 判断参数 PropertyValue 是否已赋值
                     * @return PropertyValue 是否已赋值
                     * 
                     */
                    bool PropertyValueHasBeenSet() const;

                private:

                    /**
                     * <p>Attribute key name. When used as an input parameter in TaskType, if it is not passed or is empty, this attribute item is silently ignored by the server (no error reported), equivalent to the attribute being unconfigured. For the list of valid PropertyKey, see the description in TaskType.</p>
                     */
                    std::string m_propertyKey;
                    bool m_propertyKeyHasBeenSet;

                    /**
                     * <p>Attribute value.</p>
                     */
                    std::string m_propertyValue;
                    bool m_propertyValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKTYPEPROPERTY_H_
