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
                * Filter criteria. Multiple Values under the same Name are OR-related, while different Names are AND-related. Supported Name: Status (execution result, Values: SUCCESS/FAILED/USER_CANCELED/CHECKING)
                */
                class Filters : public AbstractModel
                {
                public:
                    Filters();
                    ~Filters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filter criterion name. Parameter value: Status (Execution result. Values: SUCCESS/FAILED/USER_CANCELED/CHECKING)
                     * @return Name Filter criterion name. Parameter value: Status (Execution result. Values: SUCCESS/FAILED/USER_CANCELED/CHECKING)
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Filter criterion name. Parameter value: Status (Execution result. Values: SUCCESS/FAILED/USER_CANCELED/CHECKING)
                     * @param _name Filter criterion name. Parameter value: Status (Execution result. Values: SUCCESS/FAILED/USER_CANCELED/CHECKING)
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
                     * 获取List of filter condition values
                     * @return Values List of filter condition values
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置List of filter condition values
                     * @param _values List of filter condition values
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
                     * 获取Exact match: 1 for exact match; fuzzy match by default
                     * @return ExactMatch Exact match: 1 for exact match; fuzzy match by default
                     * 
                     */
                    std::string GetExactMatch() const;

                    /**
                     * 设置Exact match: 1 for exact match; fuzzy match by default
                     * @param _exactMatch Exact match: 1 for exact match; fuzzy match by default
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
                     * Filter criterion name. Parameter value: Status (Execution result. Values: SUCCESS/FAILED/USER_CANCELED/CHECKING)
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * List of filter condition values
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * Exact match: 1 for exact match; fuzzy match by default
                     */
                    std::string m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_FILTERS_H_
