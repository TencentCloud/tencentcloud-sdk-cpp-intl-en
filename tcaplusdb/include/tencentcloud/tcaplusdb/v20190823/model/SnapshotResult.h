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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SNAPSHOTRESULT_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SNAPSHOTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ErrorInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * The result of snapshot creation
                */
                class SnapshotResult : public AbstractModel
                {
                public:
                    SnapshotResult();
                    ~SnapshotResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of the table group where the table resides
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return TableGroupId The ID of the table group where the table resides
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置The ID of the table group where the table resides
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param TableGroupId The ID of the table group where the table resides
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetTableGroupId(const std::string& _tableGroupId);

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     */
                    bool TableGroupIdHasBeenSet() const;

                    /**
                     * 获取Table name
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return TableName Table name
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param TableName Table name
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取Task ID, which is valid for the API that creates one task at a time
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return TaskId Task ID, which is valid for the API that creates one task at a time
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID, which is valid for the API that creates one task at a time
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param TaskId Task ID, which is valid for the API that creates one task at a time
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Error information
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return Error Error information
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    ErrorInfo GetError() const;

                    /**
                     * 设置Error information
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param Error Error information
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetError(const ErrorInfo& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取Snapshot name
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return SnapshotName Snapshot name
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置Snapshot name
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param SnapshotName Snapshot name
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取The time of the data from which the snapshot was created
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return SnapshotTime The time of the data from which the snapshot was created
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetSnapshotTime() const;

                    /**
                     * 设置The time of the data from which the snapshot was created
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param SnapshotTime The time of the data from which the snapshot was created
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetSnapshotTime(const std::string& _snapshotTime);

                    /**
                     * 判断参数 SnapshotTime 是否已赋值
                     * @return SnapshotTime 是否已赋值
                     */
                    bool SnapshotTimeHasBeenSet() const;

                    /**
                     * 获取When the snapshot expires
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return SnapshotDeadTime When the snapshot expires
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetSnapshotDeadTime() const;

                    /**
                     * 设置When the snapshot expires
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param SnapshotDeadTime When the snapshot expires
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetSnapshotDeadTime(const std::string& _snapshotDeadTime);

                    /**
                     * 判断参数 SnapshotDeadTime 是否已赋值
                     * @return SnapshotDeadTime 是否已赋值
                     */
                    bool SnapshotDeadTimeHasBeenSet() const;

                    /**
                     * 获取When the snapshot was created
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return SnapshotCreateTime When the snapshot was created
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetSnapshotCreateTime() const;

                    /**
                     * 设置When the snapshot was created
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param SnapshotCreateTime When the snapshot was created
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetSnapshotCreateTime(const std::string& _snapshotCreateTime);

                    /**
                     * 判断参数 SnapshotCreateTime 是否已赋值
                     * @return SnapshotCreateTime 是否已赋值
                     */
                    bool SnapshotCreateTimeHasBeenSet() const;

                    /**
                     * 获取Snapshot size
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return SnapshotSize Snapshot size
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    uint64_t GetSnapshotSize() const;

                    /**
                     * 设置Snapshot size
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param SnapshotSize Snapshot size
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetSnapshotSize(const uint64_t& _snapshotSize);

                    /**
                     * 判断参数 SnapshotSize 是否已赋值
                     * @return SnapshotSize 是否已赋值
                     */
                    bool SnapshotSizeHasBeenSet() const;

                    /**
                     * 获取Snapshot status. Valid values: `0` (creating), `1` (normal), `2` (deleting), `3` (expired), `4` (rolling back).
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return SnapshotStatus Snapshot status. Valid values: `0` (creating), `1` (normal), `2` (deleting), `3` (expired), `4` (rolling back).
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    uint64_t GetSnapshotStatus() const;

                    /**
                     * 设置Snapshot status. Valid values: `0` (creating), `1` (normal), `2` (deleting), `3` (expired), `4` (rolling back).
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param SnapshotStatus Snapshot status. Valid values: `0` (creating), `1` (normal), `2` (deleting), `3` (expired), `4` (rolling back).
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetSnapshotStatus(const uint64_t& _snapshotStatus);

                    /**
                     * 判断参数 SnapshotStatus 是否已赋值
                     * @return SnapshotStatus 是否已赋值
                     */
                    bool SnapshotStatusHasBeenSet() const;

                private:

                    /**
                     * The ID of the table group where the table resides
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * Table name
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Task ID, which is valid for the API that creates one task at a time
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Error information
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    ErrorInfo m_error;
                    bool m_errorHasBeenSet;

                    /**
                     * Snapshot name
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * The time of the data from which the snapshot was created
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_snapshotTime;
                    bool m_snapshotTimeHasBeenSet;

                    /**
                     * When the snapshot expires
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_snapshotDeadTime;
                    bool m_snapshotDeadTimeHasBeenSet;

                    /**
                     * When the snapshot was created
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_snapshotCreateTime;
                    bool m_snapshotCreateTimeHasBeenSet;

                    /**
                     * Snapshot size
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    uint64_t m_snapshotSize;
                    bool m_snapshotSizeHasBeenSet;

                    /**
                     * Snapshot status. Valid values: `0` (creating), `1` (normal), `2` (deleting), `3` (expired), `4` (rolling back).
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    uint64_t m_snapshotStatus;
                    bool m_snapshotStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SNAPSHOTRESULT_H_
