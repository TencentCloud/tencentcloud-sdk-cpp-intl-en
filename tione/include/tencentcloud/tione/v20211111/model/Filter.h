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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_FILTER_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Filter.
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filter field name.
                     * @return Name Filter field name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Filter field name.
                     * @param _name Filter field name.
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
                     * 获取Filter field values.
                     * @return Values Filter field values.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Filter field values.
                     * @param _values Filter field values.
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
                     * 获取Whether to enable reverse query.
                     * @return Negative Whether to enable reverse query.
                     * 
                     */
                    bool GetNegative() const;

                    /**
                     * 设置Whether to enable reverse query.
                     * @param _negative Whether to enable reverse query.
                     * 
                     */
                    void SetNegative(const bool& _negative);

                    /**
                     * 判断参数 Negative 是否已赋值
                     * @return Negative 是否已赋值
                     * 
                     */
                    bool NegativeHasBeenSet() const;

                    /**
                     * 获取Whether to enable fuzzy matching.
                     * @return Fuzzy Whether to enable fuzzy matching.
                     * 
                     */
                    bool GetFuzzy() const;

                    /**
                     * 设置Whether to enable fuzzy matching.
                     * @param _fuzzy Whether to enable fuzzy matching.
                     * 
                     */
                    void SetFuzzy(const bool& _fuzzy);

                    /**
                     * 判断参数 Fuzzy 是否已赋值
                     * @return Fuzzy 是否已赋值
                     * 
                     */
                    bool FuzzyHasBeenSet() const;

                private:

                    /**
                     * Filter field name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Filter field values.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * Whether to enable reverse query.
                     */
                    bool m_negative;
                    bool m_negativeHasBeenSet;

                    /**
                     * Whether to enable fuzzy matching.
                     */
                    bool m_fuzzy;
                    bool m_fuzzyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_FILTER_H_
