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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_QUERYFILTER_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_QUERYFILTER_H_

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
                * Query filter
                */
                class QueryFilter : public AbstractModel
                {
                public:
                    QueryFilter();
                    ~QueryFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Search field. Valid values: "InstanceId", "ProjectId", "InstanceName", "Vip"
                     * @return Names Search field. Valid values: "InstanceId", "ProjectId", "InstanceName", "Vip"
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置Search field. Valid values: "InstanceId", "ProjectId", "InstanceName", "Vip"
                     * @param _names Search field. Valid values: "InstanceId", "ProjectId", "InstanceName", "Vip"
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
                     * 获取Search string
                     * @return Values Search string
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Search string
                     * @param _values Search string
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
                     * 获取Whether to use exact match
                     * @return ExactMatch Whether to use exact match
                     * 
                     */
                    bool GetExactMatch() const;

                    /**
                     * 设置Whether to use exact match
                     * @param _exactMatch Whether to use exact match
                     * 
                     */
                    void SetExactMatch(const bool& _exactMatch);

                    /**
                     * 判断参数 ExactMatch 是否已赋值
                     * @return ExactMatch 是否已赋值
                     * 
                     */
                    bool ExactMatchHasBeenSet() const;

                    /**
                     * 获取Search field
                     * @return Name Search field
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Search field
                     * @param _name Search field
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
                     * 获取Operator
                     * @return Operator Operator
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator
                     * @param _operator Operator
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * Search field. Valid values: "InstanceId", "ProjectId", "InstanceName", "Vip"
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * Search string
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * Whether to use exact match
                     */
                    bool m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                    /**
                     * Search field
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Operator
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_QUERYFILTER_H_
