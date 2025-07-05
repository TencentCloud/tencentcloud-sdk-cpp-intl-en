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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ACCOUNTATTRIBUTE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ACCOUNTATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Account attribute object
                */
                class AccountAttribute : public AbstractModel
                {
                public:
                    AccountAttribute();
                    ~AccountAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Attribute name
                     * @return AttributeName Attribute name
                     * 
                     */
                    std::string GetAttributeName() const;

                    /**
                     * 设置Attribute name
                     * @param _attributeName Attribute name
                     * 
                     */
                    void SetAttributeName(const std::string& _attributeName);

                    /**
                     * 判断参数 AttributeName 是否已赋值
                     * @return AttributeName 是否已赋值
                     * 
                     */
                    bool AttributeNameHasBeenSet() const;

                    /**
                     * 获取Attribute values
                     * @return AttributeValues Attribute values
                     * 
                     */
                    std::vector<std::string> GetAttributeValues() const;

                    /**
                     * 设置Attribute values
                     * @param _attributeValues Attribute values
                     * 
                     */
                    void SetAttributeValues(const std::vector<std::string>& _attributeValues);

                    /**
                     * 判断参数 AttributeValues 是否已赋值
                     * @return AttributeValues 是否已赋值
                     * 
                     */
                    bool AttributeValuesHasBeenSet() const;

                private:

                    /**
                     * Attribute name
                     */
                    std::string m_attributeName;
                    bool m_attributeNameHasBeenSet;

                    /**
                     * Attribute values
                     */
                    std::vector<std::string> m_attributeValues;
                    bool m_attributeValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ACCOUNTATTRIBUTE_H_
