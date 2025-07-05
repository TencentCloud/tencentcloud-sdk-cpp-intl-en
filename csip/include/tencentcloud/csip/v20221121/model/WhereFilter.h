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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_WHEREFILTER_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_WHEREFILTER_H_

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
                * Filter conditions.
                */
                class WhereFilter : public AbstractModel
                {
                public:
                    WhereFilter();
                    ~WhereFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filter item
                     * @return Name Filter item
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Filter item
                     * @param _name Filter item
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
                     * 获取Filter value
                     * @return Values Filter value
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Filter value
                     * @param _values Filter value
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
                     * 获取 
`1`: =; `2`: >; `3`: <; `4`: ≥; `5`: ≤; `6`: ≠;
`7`: Exact match; `9`: Fuzzy match; `13`: Non-fuzzy match; `14`: AND

                     * @return OperatorType  
`1`: =; `2`: >; `3`: <; `4`: ≥; `5`: ≤; `6`: ≠;
`7`: Exact match; `9`: Fuzzy match; `13`: Non-fuzzy match; `14`: AND

                     * 
                     */
                    int64_t GetOperatorType() const;

                    /**
                     * 设置 
`1`: =; `2`: >; `3`: <; `4`: ≥; `5`: ≤; `6`: ≠;
`7`: Exact match; `9`: Fuzzy match; `13`: Non-fuzzy match; `14`: AND

                     * @param _operatorType  
`1`: =; `2`: >; `3`: <; `4`: ≥; `5`: ≤; `6`: ≠;
`7`: Exact match; `9`: Fuzzy match; `13`: Non-fuzzy match; `14`: AND

                     * 
                     */
                    void SetOperatorType(const int64_t& _operatorType);

                    /**
                     * 判断参数 OperatorType 是否已赋值
                     * @return OperatorType 是否已赋值
                     * 
                     */
                    bool OperatorTypeHasBeenSet() const;

                private:

                    /**
                     * Filter item
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Filter value
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     *  
`1`: =; `2`: >; `3`: <; `4`: ≥; `5`: ≤; `6`: ≠;
`7`: Exact match; `9`: Fuzzy match; `13`: Non-fuzzy match; `14`: AND

                     */
                    int64_t m_operatorType;
                    bool m_operatorTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_WHEREFILTER_H_
