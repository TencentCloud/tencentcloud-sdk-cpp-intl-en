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
                * Query filter. Filter criteria for the DescribeClusterAndInstances API.
                */
                class QueryFilter : public AbstractModel
                {
                public:
                    QueryFilter();
                    ~QueryFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Field value list, one-to-one with Names. InstanceId/ClusterId use exact match, and InstanceName uses fuzzy match by default.
                     * @return Values Field value list, one-to-one with Names. InstanceId/ClusterId use exact match, and InstanceName uses fuzzy match by default.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Field value list, one-to-one with Names. InstanceId/ClusterId use exact match, and InstanceName uses fuzzy match by default.
                     * @param _values Field value list, one-to-one with Names. InstanceId/ClusterId use exact match, and InstanceName uses fuzzy match by default.
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
                     * 获取List of search field names. Only the following 3 fields are supported (case-insensitive, multiple values use OR relationship): ClusterId (filter by cluster ID, exact match), InstanceId (reverse-check the cluster by instance ID), InstanceName (reverse-check the cluster by instance name, default LIKE fuzzy matching, exact match when ExactMatch=true). When InstanceId and InstanceName are both imported, take the intersection (AND semantics).
                     * @return Names List of search field names. Only the following 3 fields are supported (case-insensitive, multiple values use OR relationship): ClusterId (filter by cluster ID, exact match), InstanceId (reverse-check the cluster by instance ID), InstanceName (reverse-check the cluster by instance name, default LIKE fuzzy matching, exact match when ExactMatch=true). When InstanceId and InstanceName are both imported, take the intersection (AND semantics).
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置List of search field names. Only the following 3 fields are supported (case-insensitive, multiple values use OR relationship): ClusterId (filter by cluster ID, exact match), InstanceId (reverse-check the cluster by instance ID), InstanceName (reverse-check the cluster by instance name, default LIKE fuzzy matching, exact match when ExactMatch=true). When InstanceId and InstanceName are both imported, take the intersection (AND semantics).
                     * @param _names List of search field names. Only the following 3 fields are supported (case-insensitive, multiple values use OR relationship): ClusterId (filter by cluster ID, exact match), InstanceId (reverse-check the cluster by instance ID), InstanceName (reverse-check the cluster by instance name, default LIKE fuzzy matching, exact match when ExactMatch=true). When InstanceId and InstanceName are both imported, take the intersection (AND semantics).
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
                     * 获取Exact match. Only applicable to InstanceName: true for exact match, false (default) for LIKE fuzzy matching.
                     * @return ExactMatch Exact match. Only applicable to InstanceName: true for exact match, false (default) for LIKE fuzzy matching.
                     * 
                     */
                    bool GetExactMatch() const;

                    /**
                     * 设置Exact match. Only applicable to InstanceName: true for exact match, false (default) for LIKE fuzzy matching.
                     * @param _exactMatch Exact match. Only applicable to InstanceName: true for exact match, false (default) for LIKE fuzzy matching.
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
                     * 获取Search field name (single field mode; either this parameter or Names). Supported: ClusterId, InstanceId, InstanceName.
                     * @return Name Search field name (single field mode; either this parameter or Names). Supported: ClusterId, InstanceId, InstanceName.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Search field name (single field mode; either this parameter or Names). Supported: ClusterId, InstanceId, InstanceName.
                     * @param _name Search field name (single field mode; either this parameter or Names). Supported: ClusterId, InstanceId, InstanceName.
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
                     * 获取Operator (reserved field, currently disabled). Available values: >, >=, !=, =, <, <=
                     * @return Operator Operator (reserved field, currently disabled). Available values: >, >=, !=, =, <, <=
                     * @deprecated
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator (reserved field, currently disabled). Available values: >, >=, !=, =, <, <=
                     * @param _operator Operator (reserved field, currently disabled). Available values: >, >=, !=, =, <, <=
                     * @deprecated
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * @deprecated
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * Field value list, one-to-one with Names. InstanceId/ClusterId use exact match, and InstanceName uses fuzzy match by default.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * List of search field names. Only the following 3 fields are supported (case-insensitive, multiple values use OR relationship): ClusterId (filter by cluster ID, exact match), InstanceId (reverse-check the cluster by instance ID), InstanceName (reverse-check the cluster by instance name, default LIKE fuzzy matching, exact match when ExactMatch=true). When InstanceId and InstanceName are both imported, take the intersection (AND semantics).
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * Exact match. Only applicable to InstanceName: true for exact match, false (default) for LIKE fuzzy matching.
                     */
                    bool m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                    /**
                     * Search field name (single field mode; either this parameter or Names). Supported: ClusterId, InstanceId, InstanceName.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Operator (reserved field, currently disabled). Available values: >, >=, !=, =, <, <=
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_QUERYFILTER_H_
