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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_TABLESDDL_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_TABLESDDL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DDL information of the table
                */
                class TablesDDL : public AbstractModel
                {
                public:
                    TablesDDL();
                    ~TablesDDL() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Table name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableName Table name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableName Table name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取DDL statement for creating a table

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DDLInfo DDL statement for creating a table

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDDLInfo() const;

                    /**
                     * 设置DDL statement for creating a table

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dDLInfo DDL statement for creating a table

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDDLInfo(const std::string& _dDLInfo);

                    /**
                     * 判断参数 DDLInfo 是否已赋值
                     * @return DDLInfo 是否已赋值
                     * 
                     */
                    bool DDLInfoHasBeenSet() const;

                private:

                    /**
                     * Table name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * DDL statement for creating a table

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dDLInfo;
                    bool m_dDLInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_TABLESDDL_H_
