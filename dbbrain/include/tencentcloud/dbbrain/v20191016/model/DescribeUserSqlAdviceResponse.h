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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBEUSERSQLADVICERESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBEUSERSQLADVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * DescribeUserSqlAdvice response structure.
                */
                class DescribeUserSqlAdviceResponse : public AbstractModel
                {
                public:
                    DescribeUserSqlAdviceResponse();
                    ~DescribeUserSqlAdviceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取SQL statement optimization suggestions, which can be parsed into JSON arrays.
                     * @return Advices SQL statement optimization suggestions, which can be parsed into JSON arrays.
                     * 
                     */
                    std::string GetAdvices() const;

                    /**
                     * 判断参数 Advices 是否已赋值
                     * @return Advices 是否已赋值
                     * 
                     */
                    bool AdvicesHasBeenSet() const;

                    /**
                     * 获取Notes of SQL statement optimization suggestions, which can be parsed into String arrays.
                     * @return Comments Notes of SQL statement optimization suggestions, which can be parsed into String arrays.
                     * 
                     */
                    std::string GetComments() const;

                    /**
                     * 判断参数 Comments 是否已赋值
                     * @return Comments 是否已赋值
                     * 
                     */
                    bool CommentsHasBeenSet() const;

                    /**
                     * 获取SQL statement.
                     * @return SqlText SQL statement.
                     * 
                     */
                    std::string GetSqlText() const;

                    /**
                     * 判断参数 SqlText 是否已赋值
                     * @return SqlText 是否已赋值
                     * 
                     */
                    bool SqlTextHasBeenSet() const;

                    /**
                     * 获取Database name.
                     * @return Schema Database name.
                     * 
                     */
                    std::string GetSchema() const;

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     * 
                     */
                    bool SchemaHasBeenSet() const;

                    /**
                     * 获取DDL information of related tables, which can be parsed into JSON arrays.
                     * @return Tables DDL information of related tables, which can be parsed into JSON arrays.
                     * 
                     */
                    std::string GetTables() const;

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                    /**
                     * 获取SQL execution plan, which can be parsed into JSON.
                     * @return SqlPlan SQL execution plan, which can be parsed into JSON.
                     * 
                     */
                    std::string GetSqlPlan() const;

                    /**
                     * 判断参数 SqlPlan 是否已赋值
                     * @return SqlPlan 是否已赋值
                     * 
                     */
                    bool SqlPlanHasBeenSet() const;

                    /**
                     * 获取Cost saving details after SQL statement optimization, which can be parsed into JSON.
                     * @return Cost Cost saving details after SQL statement optimization, which can be parsed into JSON.
                     * 
                     */
                    std::string GetCost() const;

                    /**
                     * 判断参数 Cost 是否已赋值
                     * @return Cost 是否已赋值
                     * 
                     */
                    bool CostHasBeenSet() const;

                private:

                    /**
                     * SQL statement optimization suggestions, which can be parsed into JSON arrays.
                     */
                    std::string m_advices;
                    bool m_advicesHasBeenSet;

                    /**
                     * Notes of SQL statement optimization suggestions, which can be parsed into String arrays.
                     */
                    std::string m_comments;
                    bool m_commentsHasBeenSet;

                    /**
                     * SQL statement.
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                    /**
                     * Database name.
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * DDL information of related tables, which can be parsed into JSON arrays.
                     */
                    std::string m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * SQL execution plan, which can be parsed into JSON.
                     */
                    std::string m_sqlPlan;
                    bool m_sqlPlanHasBeenSet;

                    /**
                     * Cost saving details after SQL statement optimization, which can be parsed into JSON.
                     */
                    std::string m_cost;
                    bool m_costHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBEUSERSQLADVICERESPONSE_H_
