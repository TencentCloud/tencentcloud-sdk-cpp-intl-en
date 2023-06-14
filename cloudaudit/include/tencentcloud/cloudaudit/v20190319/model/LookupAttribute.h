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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LOOKUPATTRIBUTE_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LOOKUPATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * Search criterion
                */
                class LookupAttribute : public AbstractModel
                {
                public:
                    LookupAttribute();
                    ~LookupAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Valid values: RequestId, EventName, ReadOnly, Username, ResourceType, ResourceName, AccessKeyId, and EventId
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return AttributeKey Valid values: RequestId, EventName, ReadOnly, Username, ResourceType, ResourceName, AccessKeyId, and EventId
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAttributeKey() const;

                    /**
                     * 设置Valid values: RequestId, EventName, ReadOnly, Username, ResourceType, ResourceName, AccessKeyId, and EventId
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _attributeKey Valid values: RequestId, EventName, ReadOnly, Username, ResourceType, ResourceName, AccessKeyId, and EventId
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttributeKey(const std::string& _attributeKey);

                    /**
                     * 判断参数 AttributeKey 是否已赋值
                     * @return AttributeKey 是否已赋值
                     * 
                     */
                    bool AttributeKeyHasBeenSet() const;

                    /**
                     * 获取Value of `AttributeValue`
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return AttributeValue Value of `AttributeValue`
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAttributeValue() const;

                    /**
                     * 设置Value of `AttributeValue`
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _attributeValue Value of `AttributeValue`
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttributeValue(const std::string& _attributeValue);

                    /**
                     * 判断参数 AttributeValue 是否已赋值
                     * @return AttributeValue 是否已赋值
                     * 
                     */
                    bool AttributeValueHasBeenSet() const;

                private:

                    /**
                     * Valid values: RequestId, EventName, ReadOnly, Username, ResourceType, ResourceName, AccessKeyId, and EventId
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_attributeKey;
                    bool m_attributeKeyHasBeenSet;

                    /**
                     * Value of `AttributeValue`
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_attributeValue;
                    bool m_attributeValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LOOKUPATTRIBUTE_H_
