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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_ANNOTATION_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_ANNOTATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * Compliance details
                */
                class Annotation : public AbstractModel
                {
                public:
                    Annotation();
                    ~Annotation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Current actual configuration of the resource. It can contain 0 to 256 characters, which is the non-compliant configuration of the resource.
Note: This field may return null, indicating that no valid value is found.
                     * @return Configuration Current actual configuration of the resource. It can contain 0 to 256 characters, which is the non-compliant configuration of the resource.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetConfiguration() const;

                    /**
                     * 设置Current actual configuration of the resource. It can contain 0 to 256 characters, which is the non-compliant configuration of the resource.
Note: This field may return null, indicating that no valid value is found.
                     * @param _configuration Current actual configuration of the resource. It can contain 0 to 256 characters, which is the non-compliant configuration of the resource.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetConfiguration(const std::string& _configuration);

                    /**
                     * 判断参数 Configuration 是否已赋值
                     * @return Configuration 是否已赋值
                     * 
                     */
                    bool ConfigurationHasBeenSet() const;

                    /**
                     * 获取Desired configuration of the resource. It can contain 0 to 256 characters, which is the compliant configuration of the resource.
Note: This field may return null, indicating that no valid value is found.
                     * @return DesiredValue Desired configuration of the resource. It can contain 0 to 256 characters, which is the compliant configuration of the resource.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetDesiredValue() const;

                    /**
                     * 设置Desired configuration of the resource. It can contain 0 to 256 characters, which is the compliant configuration of the resource.
Note: This field may return null, indicating that no valid value is found.
                     * @param _desiredValue Desired configuration of the resource. It can contain 0 to 256 characters, which is the compliant configuration of the resource.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetDesiredValue(const std::string& _desiredValue);

                    /**
                     * 判断参数 DesiredValue 是否已赋值
                     * @return DesiredValue 是否已赋值
                     * 
                     */
                    bool DesiredValueHasBeenSet() const;

                    /**
                     * 获取Comparison operator between current and desired configuration of the resource. Length is 0-16 characters. This field may be empty when custom rule reporting evaluation result.
                     * @return Operator Comparison operator between current and desired configuration of the resource. Length is 0-16 characters. This field may be empty when custom rule reporting evaluation result.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Comparison operator between current and desired configuration of the resource. Length is 0-16 characters. This field may be empty when custom rule reporting evaluation result.
                     * @param _operator Comparison operator between current and desired configuration of the resource. Length is 0-16 characters. This field may be empty when custom rule reporting evaluation result.
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取JSON path of current configuration in resource attribute structure. Length is 0-256 characters. This field may be empty when custom rule reporting evaluation result.
                     * @return Property JSON path of current configuration in resource attribute structure. Length is 0-256 characters. This field may be empty when custom rule reporting evaluation result.
                     * 
                     */
                    std::string GetProperty() const;

                    /**
                     * 设置JSON path of current configuration in resource attribute structure. Length is 0-256 characters. This field may be empty when custom rule reporting evaluation result.
                     * @param _property JSON path of current configuration in resource attribute structure. Length is 0-256 characters. This field may be empty when custom rule reporting evaluation result.
                     * 
                     */
                    void SetProperty(const std::string& _property);

                    /**
                     * 判断参数 Property 是否已赋值
                     * @return Property 是否已赋值
                     * 
                     */
                    bool PropertyHasBeenSet() const;

                private:

                    /**
                     * Current actual configuration of the resource. It can contain 0 to 256 characters, which is the non-compliant configuration of the resource.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_configuration;
                    bool m_configurationHasBeenSet;

                    /**
                     * Desired configuration of the resource. It can contain 0 to 256 characters, which is the compliant configuration of the resource.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_desiredValue;
                    bool m_desiredValueHasBeenSet;

                    /**
                     * Comparison operator between current and desired configuration of the resource. Length is 0-16 characters. This field may be empty when custom rule reporting evaluation result.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * JSON path of current configuration in resource attribute structure. Length is 0-256 characters. This field may be empty when custom rule reporting evaluation result.
                     */
                    std::string m_property;
                    bool m_propertyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_ANNOTATION_H_
