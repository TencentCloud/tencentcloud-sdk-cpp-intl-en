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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_FILTER_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Instance filter parameters on the business side
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Filter field.</p><p>Enumeration value:</p><ul><li>InstanceId: Instance ID.</li><li>InstanceName: Instance name.</li><li>TagKey: Tag key.</li><li>InstanceTags: Instance tag key-value, tag key & tag value.</li></ul>
                     * @return Name <p>Filter field.</p><p>Enumeration value:</p><ul><li>InstanceId: Instance ID.</li><li>InstanceName: Instance name.</li><li>TagKey: Tag key.</li><li>InstanceTags: Instance tag key-value, tag key & tag value.</li></ul>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Filter field.</p><p>Enumeration value:</p><ul><li>InstanceId: Instance ID.</li><li>InstanceName: Instance name.</li><li>TagKey: Tag key.</li><li>InstanceTags: Instance tag key-value, tag key & tag value.</li></ul>
                     * @param _name <p>Filter field.</p><p>Enumeration value:</p><ul><li>InstanceId: Instance ID.</li><li>InstanceName: Instance name.</li><li>TagKey: Tag key.</li><li>InstanceTags: Instance tag key-value, tag key & tag value.</li></ul>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Value of the filter field.</p>
                     * @return Values <p>Value of the filter field.</p>
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置<p>Value of the filter field.</p>
                     * @param _values <p>Value of the filter field.</p>
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取<p>Exact match switch.</p><ul><li>false: Turn off.</li><li>true: Turn on.</li></ul>
                     * @return ExactMatch <p>Exact match switch.</p><ul><li>false: Turn off.</li><li>true: Turn on.</li></ul>
                     * 
                     */
                    bool GetExactMatch() const;

                    /**
                     * 设置<p>Exact match switch.</p><ul><li>false: Turn off.</li><li>true: Turn on.</li></ul>
                     * @param _exactMatch <p>Exact match switch.</p><ul><li>false: Turn off.</li><li>true: Turn on.</li></ul>
                     * 
                     */
                    void SetExactMatch(const bool& _exactMatch);

                    /**
                     * 判断参数 ExactMatch 是否已赋值
                     * @return ExactMatch 是否已赋值
                     * 
                     */
                    bool ExactMatchHasBeenSet() const;

                private:

                    /**
                     * <p>Filter field.</p><p>Enumeration value:</p><ul><li>InstanceId: Instance ID.</li><li>InstanceName: Instance name.</li><li>TagKey: Tag key.</li><li>InstanceTags: Instance tag key-value, tag key & tag value.</li></ul>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Value of the filter field.</p>
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * <p>Exact match switch.</p><ul><li>false: Turn off.</li><li>true: Turn on.</li></ul>
                     */
                    bool m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_FILTER_H_
