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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDRFILTER_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDRFILTER_H_

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
                * Description key-value pair filter, which is used for conditional filtering queries. For example, filter by ID, name, and status.

If there are multiple Filters, the logical relationship between them is AND.
If there are multiple Values in the same Filter, the logical relationship between the Values under the same Filter is OR.

* A maximum of 5 Filters are allowed.
* If multiple Values exist for the same Filter, the number of Values cannot exceed 5.

                */
                class EDRFilter : public AbstractModel
                {
                public:
                    EDRFilter();
                    ~EDRFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Name of filter key</p>
                     * @return Name <p>Name of filter key</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Name of filter key</p>
                     * @param _name <p>Name of filter key</p>
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
                     * 获取<p>One or more filter values.</p>
                     * @return Values <p>One or more filter values.</p>
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置<p>One or more filter values.</p>
                     * @param _values <p>One or more filter values.</p>
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
                     * 获取<p>Fuzzy search</p>
                     * @return ExactMatch <p>Fuzzy search</p>
                     * 
                     */
                    bool GetExactMatch() const;

                    /**
                     * 设置<p>Fuzzy search</p>
                     * @param _exactMatch <p>Fuzzy search</p>
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
                     * <p>Name of filter key</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>One or more filter values.</p>
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * <p>Fuzzy search</p>
                     */
                    bool m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDRFILTER_H_
