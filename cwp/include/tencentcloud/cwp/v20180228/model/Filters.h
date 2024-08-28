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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_FILTERS_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_FILTERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Description of key-value pair filter, which is used for conditional filtering queries. For example, filter by ID, name, and status.

If there are multiple Filters, the logical relationship between them is AND.
If there are multiple Values in the same Filter, the logical relationship between the Values under the same Filter is OR.
                */
                class Filters : public AbstractModel
                {
                public:
                    Filters();
                    ~Filters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of filter key
                     * @return Name Name of filter key
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of filter key
                     * @param _name Name of filter key
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
                     * 获取One or more filter values
                     * @return Values One or more filter values
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置One or more filter values
                     * @param _values One or more filter values
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
                     * 获取Whether to use fuzzy match. It will be handled by the front-end and can be ignored.
                     * @return ExactMatch Whether to use fuzzy match. It will be handled by the front-end and can be ignored.
                     * 
                     */
                    bool GetExactMatch() const;

                    /**
                     * 设置Whether to use fuzzy match. It will be handled by the front-end and can be ignored.
                     * @param _exactMatch Whether to use fuzzy match. It will be handled by the front-end and can be ignored.
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
                     * Name of filter key
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * One or more filter values
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * Whether to use fuzzy match. It will be handled by the front-end and can be ignored.
                     */
                    bool m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_FILTERS_H_
