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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_BACKUPEXPIRERULEINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_BACKUPEXPIRERULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * The details of backup retention policy
Policy for cluster: `ClusterId` = cluster ID, TableGroupId·= `-1`, `TableName`= `-1`.
Policy for cluster + table group: `ClusterId` = cluster ID, `TableGroupId` = table group ID, `TableName` = `-1`.
Policy for cluster + table group + table: ClusterId` = cluster ID, `TableGroupId` = table group ID, `TableName` = table name.

For `FileTag`, valid values: `0` (txh engine file), `1` (ulog file). When `FileTag` is set to `1`, `TableGroupId` = `-1` and `TableName` = `-1` remain unchanged.
`ExpireDay` is an integer number falling in the range of 1 (inclusive) to 999 (exclusive).
For `OperType, valid values: `0` (Add), `1` (Delete), `2` (Modify). The values `0` and `2` can be mixed, and the backend implementation is compatible.
                */
                class BackupExpireRuleInfo : public AbstractModel
                {
                public:
                    BackupExpireRuleInfo();
                    ~BackupExpireRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of the table group where the table resides
                     * @return TableGroupId The ID of the table group where the table resides
                     * 
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置The ID of the table group where the table resides
                     * @param _tableGroupId The ID of the table group where the table resides
                     * 
                     */
                    void SetTableGroupId(const std::string& _tableGroupId);

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     * 
                     */
                    bool TableGroupIdHasBeenSet() const;

                    /**
                     * 获取Table name
                     * @return TableName Table name
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name
                     * @param _tableName Table name
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
                     * 获取file tag, which is described above.
                     * @return FileTag file tag, which is described above.
                     * 
                     */
                    uint64_t GetFileTag() const;

                    /**
                     * 设置file tag, which is described above.
                     * @param _fileTag file tag, which is described above.
                     * 
                     */
                    void SetFileTag(const uint64_t& _fileTag);

                    /**
                     * 判断参数 FileTag 是否已赋值
                     * @return FileTag 是否已赋值
                     * 
                     */
                    bool FileTagHasBeenSet() const;

                    /**
                     * 获取Retention days, which is described above.
                     * @return ExpireDay Retention days, which is described above.
                     * 
                     */
                    uint64_t GetExpireDay() const;

                    /**
                     * 设置Retention days, which is described above.
                     * @param _expireDay Retention days, which is described above.
                     * 
                     */
                    void SetExpireDay(const uint64_t& _expireDay);

                    /**
                     * 判断参数 ExpireDay 是否已赋值
                     * @return ExpireDay 是否已赋值
                     * 
                     */
                    bool ExpireDayHasBeenSet() const;

                    /**
                     * 获取Operation type, which is described above.
                     * @return OperType Operation type, which is described above.
                     * 
                     */
                    uint64_t GetOperType() const;

                    /**
                     * 设置Operation type, which is described above.
                     * @param _operType Operation type, which is described above.
                     * 
                     */
                    void SetOperType(const uint64_t& _operType);

                    /**
                     * 判断参数 OperType 是否已赋值
                     * @return OperType 是否已赋值
                     * 
                     */
                    bool OperTypeHasBeenSet() const;

                private:

                    /**
                     * The ID of the table group where the table resides
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * Table name
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * file tag, which is described above.
                     */
                    uint64_t m_fileTag;
                    bool m_fileTagHasBeenSet;

                    /**
                     * Retention days, which is described above.
                     */
                    uint64_t m_expireDay;
                    bool m_expireDayHasBeenSet;

                    /**
                     * Operation type, which is described above.
                     */
                    uint64_t m_operType;
                    bool m_operTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_BACKUPEXPIRERULEINFO_H_
