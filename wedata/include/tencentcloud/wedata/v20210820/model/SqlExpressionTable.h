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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SQLEXPRESSIONTABLE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SQLEXPRESSIONTABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Parsing table object for SQL expression when defining Data Quality Custom Rules
                */
                class SqlExpressionTable : public AbstractModel
                {
                public:
                    SqlExpressionTable();
                    ~SqlExpressionTable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SQL expression table name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TableExpression SQL expression table name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTableExpression() const;

                    /**
                     * 设置SQL expression table name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tableExpression SQL expression table name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTableExpression(const std::string& _tableExpression);

                    /**
                     * 判断参数 TableExpression 是否已赋值
                     * @return TableExpression 是否已赋值
                     * 
                     */
                    bool TableExpressionHasBeenSet() const;

                    /**
                     * 获取SQL expression column name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ColumnExpression SQL expression column name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetColumnExpression() const;

                    /**
                     * 设置SQL expression column name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _columnExpression SQL expression column name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetColumnExpression(const std::vector<std::string>& _columnExpression);

                    /**
                     * 判断参数 ColumnExpression 是否已赋值
                     * @return ColumnExpression 是否已赋值
                     * 
                     */
                    bool ColumnExpressionHasBeenSet() const;

                private:

                    /**
                     * SQL expression table name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tableExpression;
                    bool m_tableExpressionHasBeenSet;

                    /**
                     * SQL expression column name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_columnExpression;
                    bool m_columnExpressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SQLEXPRESSIONTABLE_H_
