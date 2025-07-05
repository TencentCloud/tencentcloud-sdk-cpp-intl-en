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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_TAG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_TAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Tag configuration
                */
                class Tag : public AbstractModel
                {
                public:
                    Tag();
                    ~Tag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The tag key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TagKey The tag key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置The tag key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tagKey The tag key.
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
                     * 获取The tag value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TagValue The tag value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置The tag value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tagValue The tag value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     * 
                     */
                    bool TagValueHasBeenSet() const;

                private:

                    /**
                     * The tag key.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * The tag value.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_TAG_H_
