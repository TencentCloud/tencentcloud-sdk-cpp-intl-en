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
                     * 获取Original database table name before rollback
                     * @return TableName Original database table name before rollback
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Original database table name before rollback
                     * @param _tableName Original database table name before rollback
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
                     * 获取Rolled back database table name
                     * @return NewTableName Rolled back database table name
                     * 
                     */
                    std::string GetNewTableName() const;

                    /**
                     * 设置Rolled back database table name
                     * @param _newTableName Rolled back database table name
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
                     * Original database table name before rollback
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Rolled back database table name
                     */
                    std::string m_newTableName;
                    bool m_newTableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ROLLBACKTABLENAME_H_
