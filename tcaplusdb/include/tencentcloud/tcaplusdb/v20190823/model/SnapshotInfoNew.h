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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SNAPSHOTINFONEW_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SNAPSHOTINFONEW_H_

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
                * New expiration time of a snapshot
                */
                class SnapshotInfoNew : public AbstractModel
                {
                public:
                    SnapshotInfoNew();
                    ~SnapshotInfoNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of the table group where the table resides
                     * @return TableGroupId The ID of the table group where the table resides
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置The ID of the table group where the table resides
                     * @param TableGroupId The ID of the table group where the table resides
                     */
                    void SetTableGroupId(const std::string& _tableGroupId);

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     */
                    bool TableGroupIdHasBeenSet() const;

                    /**
                     * 获取Table name
                     * @return TableName Table name
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name
                     * @param TableName Table name
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取Snapshot name
                     * @return SnapshotName Snapshot name
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置Snapshot name
                     * @param SnapshotName Snapshot name
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取Snapshot expiration time
                     * @return SnapshotDeadTime Snapshot expiration time
                     */
                    std::string GetSnapshotDeadTime() const;

                    /**
                     * 设置Snapshot expiration time
                     * @param SnapshotDeadTime Snapshot expiration time
                     */
                    void SetSnapshotDeadTime(const std::string& _snapshotDeadTime);

                    /**
                     * 判断参数 SnapshotDeadTime 是否已赋值
                     * @return SnapshotDeadTime 是否已赋值
                     */
                    bool SnapshotDeadTimeHasBeenSet() const;

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
                     * Snapshot name
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * Snapshot expiration time
                     */
                    std::string m_snapshotDeadTime;
                    bool m_snapshotDeadTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SNAPSHOTINFONEW_H_
