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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_TAGSFORM_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_TAGSFORM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Budget management custom fee range, parameter tag
                */
                class TagsForm : public AbstractModel
                {
                public:
                    TagsForm();
                    ~TagsForm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TagKey key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tagKey key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TagValue value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTagValue() const;

                    /**
                     * 设置value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tagValue value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTagValue(const std::vector<std::string>& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     * 
                     */
                    bool TagValueHasBeenSet() const;

                private:

                    /**
                     * key
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * value
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_tagValue;
                    bool m_tagValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_TAGSFORM_H_
