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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_FILTERS_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_FILTERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Filters
                */
                class Filters : public AbstractModel
                {
                public:
                    Filters();
                    ~Filters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Instance ID content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Values Instance ID content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Instance ID content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _values Instance ID content.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Fuzzy matching.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExactMatch Fuzzy matching.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExactMatch() const;

                    /**
                     * 设置Fuzzy matching.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _exactMatch Fuzzy matching.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExactMatch(const std::string& _exactMatch);

                    /**
                     * 判断参数 ExactMatch 是否已赋值
                     * @return ExactMatch 是否已赋值
                     * 
                     */
                    bool ExactMatchHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Instance ID content.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * Fuzzy matching.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_FILTERS_H_
