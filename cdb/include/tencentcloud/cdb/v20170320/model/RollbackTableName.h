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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKTABLENAME_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKTABLENAME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Name of the table for rollback
                */
                class RollbackTableName : public AbstractModel
                {
                public:
                    RollbackTableName();
                    ~RollbackTableName() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Original table name before rollback
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TableName Original table name before rollback
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Original table name before rollback
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tableName Original table name before rollback
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取New table name after rollback
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NewTableName New table name after rollback
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNewTableName() const;

                    /**
                     * 设置New table name after rollback
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _newTableName New table name after rollback
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNewTableName(const std::string& _newTableName);

                    /**
                     * 判断参数 NewTableName 是否已赋值
                     * @return NewTableName 是否已赋值
                     * 
                     */
                    bool NewTableNameHasBeenSet() const;

                private:

                    /**
                     * Original table name before rollback
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * New table name after rollback
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_newTableName;
                    bool m_newTableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKTABLENAME_H_
