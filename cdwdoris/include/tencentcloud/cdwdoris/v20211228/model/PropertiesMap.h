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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_PROPERTIESMAP_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_PROPERTIESMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Property attribute
                */
                class PropertiesMap : public AbstractModel
                {
                public:
                    PropertiesMap();
                    ~PropertiesMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PropertyKey key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPropertyKey() const;

                    /**
                     * 设置key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _propertyKey key
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PropertyValue value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPropertyValue() const;

                    /**
                     * 设置value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _propertyValue value
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * key
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_propertyKey;
                    bool m_propertyKeyHasBeenSet;

                    /**
                     * value
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_propertyValue;
                    bool m_propertyValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_PROPERTIESMAP_H_
