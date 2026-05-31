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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_QUERYSIMPLEFILTER_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_QUERYSIMPLEFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Blurry query filter.
                */
                class QuerySimpleFilter : public AbstractModel
                {
                public:
                    QuerySimpleFilter();
                    ~QuerySimpleFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Field name
                     * @return Names Field name
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置Field name
                     * @param _names Field name
                     * 
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     * 
                     */
                    bool NamesHasBeenSet() const;

                    /**
                     * 获取Field value.
                     * @return Values Field value.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Field value.
                     * @param _values Field value.
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
                     * 获取Fuzzy matching. valid values: true (yes), false (no).
                     * @return ExactMatch Fuzzy matching. valid values: true (yes), false (no).
                     * 
                     */
                    bool GetExactMatch() const;

                    /**
                     * 设置Fuzzy matching. valid values: true (yes), false (no).
                     * @param _exactMatch Fuzzy matching. valid values: true (yes), false (no).
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
                     * Field name
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * Field value.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * Fuzzy matching. valid values: true (yes), false (no).
                     */
                    bool m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_QUERYSIMPLEFILTER_H_
