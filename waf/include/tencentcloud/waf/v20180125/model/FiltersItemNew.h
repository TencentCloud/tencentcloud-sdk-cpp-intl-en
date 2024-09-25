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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_FILTERSITEMNEW_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_FILTERSITEMNEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Filter array
                */
                class FiltersItemNew : public AbstractModel
                {
                public:
                    FiltersItemNew();
                    ~FiltersItemNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Field name, used for filtering
Filter the sub-order number (value) by DealName.
                     * @return Name Field name, used for filtering
Filter the sub-order number (value) by DealName.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Field name, used for filtering
Filter the sub-order number (value) by DealName.
                     * @param _name Field name, used for filtering
Filter the sub-order number (value) by DealName.
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
                     * 获取Values after filtering
                     * @return Values Values after filtering
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Values after filtering
                     * @param _values Values after filtering
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
                     * 获取Exact search or not
                     * @return ExactMatch Exact search or not
                     * 
                     */
                    bool GetExactMatch() const;

                    /**
                     * 设置Exact search or not
                     * @param _exactMatch Exact search or not
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
                     * Field name, used for filtering
Filter the sub-order number (value) by DealName.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Values after filtering
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * Exact search or not
                     */
                    bool m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_FILTERSITEMNEW_H_
