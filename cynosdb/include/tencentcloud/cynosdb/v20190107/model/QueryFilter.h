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
                     * 获取Field value list, in one-to-one correspondence with Names. InstanceId/ClusterId uses exact matching, and InstanceName uses fuzzy matching by default.
                     * @return Values Field value list, in one-to-one correspondence with Names. InstanceId/ClusterId uses exact matching, and InstanceName uses fuzzy matching by default.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Field value list, in one-to-one correspondence with Names. InstanceId/ClusterId uses exact matching, and InstanceName uses fuzzy matching by default.
                     * @param _values Field value list, in one-to-one correspondence with Names. InstanceId/ClusterId uses exact matching, and InstanceName uses fuzzy matching by default.
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
                     * 获取Search field name list, support the following 3 fields (case-insensitive, multiple values are OR relationship): ClusterId (filter by cluster ID, exact match), InstanceId (reverse-check cluster by instance ID), InstanceName (reverse-check cluster by instance name, default LIKE fuzzy matching, exact match when ExactMatch=true). Take the intersection when InstanceId and InstanceName are input at the same time (AND semantics).
                     * @return Names Search field name list, support the following 3 fields (case-insensitive, multiple values are OR relationship): ClusterId (filter by cluster ID, exact match), InstanceId (reverse-check cluster by instance ID), InstanceName (reverse-check cluster by instance name, default LIKE fuzzy matching, exact match when ExactMatch=true). Take the intersection when InstanceId and InstanceName are input at the same time (AND semantics).
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置Search field name list, support the following 3 fields (case-insensitive, multiple values are OR relationship): ClusterId (filter by cluster ID, exact match), InstanceId (reverse-check cluster by instance ID), InstanceName (reverse-check cluster by instance name, default LIKE fuzzy matching, exact match when ExactMatch=true). Take the intersection when InstanceId and InstanceName are input at the same time (AND semantics).
                     * @param _names Search field name list, support the following 3 fields (case-insensitive, multiple values are OR relationship): ClusterId (filter by cluster ID, exact match), InstanceId (reverse-check cluster by instance ID), InstanceName (reverse-check cluster by instance name, default LIKE fuzzy matching, exact match when ExactMatch=true). Take the intersection when InstanceId and InstanceName are input at the same time (AND semantics).
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
                     * 获取Exact match. Only applicable to InstanceName: true for exact matching, false (default) for LIKE fuzzy matching.
                     * @return ExactMatch Exact match. Only applicable to InstanceName: true for exact matching, false (default) for LIKE fuzzy matching.
                     * 
                     */
                    bool GetExactMatch() const;

                    /**
                     * 设置Exact match. Only applicable to InstanceName: true for exact matching, false (default) for LIKE fuzzy matching.
                     * @param _exactMatch Exact match. Only applicable to InstanceName: true for exact matching, false (default) for LIKE fuzzy matching.
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
                     * 获取Search field name (single field mode, choose between this and Names). ClusterId, InstanceId, and InstanceName are supported.
                     * @return Name Search field name (single field mode, choose between this and Names). ClusterId, InstanceId, and InstanceName are supported.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Search field name (single field mode, choose between this and Names). ClusterId, InstanceId, and InstanceName are supported.
                     * @param _name Search field name (single field mode, choose between this and Names). ClusterId, InstanceId, and InstanceName are supported.
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
                     * Field value list, in one-to-one correspondence with Names. InstanceId/ClusterId uses exact matching, and InstanceName uses fuzzy matching by default.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * Search field name list, support the following 3 fields (case-insensitive, multiple values are OR relationship): ClusterId (filter by cluster ID, exact match), InstanceId (reverse-check cluster by instance ID), InstanceName (reverse-check cluster by instance name, default LIKE fuzzy matching, exact match when ExactMatch=true). Take the intersection when InstanceId and InstanceName are input at the same time (AND semantics).
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * Exact match. Only applicable to InstanceName: true for exact matching, false (default) for LIKE fuzzy matching.
                     */
                    bool m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                    /**
                     * Search field name (single field mode, choose between this and Names). ClusterId, InstanceId, and InstanceName are supported.
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
