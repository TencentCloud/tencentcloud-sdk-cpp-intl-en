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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TABLEROLLBACKRESULTNEW_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TABLEROLLBACKRESULTNEW_H_

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
                * Table rollback result information
                */
                class TableRollbackResultNew : public AbstractModel
                {
                public:
                    TableRollbackResultNew();
                    ~TableRollbackResultNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Table instance ID in the format of `tcaplus-3be64cbb`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TableInstanceId Table instance ID in the format of `tcaplus-3be64cbb`
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableInstanceId() const;

                    /**
                     * 设置Table instance ID in the format of `tcaplus-3be64cbb`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tableInstanceId Table instance ID in the format of `tcaplus-3be64cbb`
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableInstanceId(const std::string& _tableInstanceId);

                    /**
                     * 判断参数 TableInstanceId 是否已赋值
                     * @return TableInstanceId 是否已赋值
                     * 
                     */
                    bool TableInstanceIdHasBeenSet() const;

                    /**
                     * 获取Task ID, which is valid for the API that creates one task
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TaskId Task ID, which is valid for the API that creates one task
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID, which is valid for the API that creates one task
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _taskId Task ID, which is valid for the API that creates one task
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Table name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TableName Table name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tableName Table name
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
                     * 获取Table data structure type, such as `GENERIC` or `LIST`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TableType Table data structure type, such as `GENERIC` or `LIST`
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置Table data structure type, such as `GENERIC` or `LIST`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tableType Table data structure type, such as `GENERIC` or `LIST`
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     * 
                     */
                    bool TableTypeHasBeenSet() const;

                    /**
                     * 获取Table data interface description language (IDL) type, such as `PROTO` or `TDR`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TableIdlType Table data interface description language (IDL) type, such as `PROTO` or `TDR`
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableIdlType() const;

                    /**
                     * 设置Table data interface description language (IDL) type, such as `PROTO` or `TDR`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tableIdlType Table data interface description language (IDL) type, such as `PROTO` or `TDR`
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableIdlType(const std::string& _tableIdlType);

                    /**
                     * 判断参数 TableIdlType 是否已赋值
                     * @return TableIdlType 是否已赋值
                     * 
                     */
                    bool TableIdlTypeHasBeenSet() const;

                    /**
                     * 获取ID of the table group where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TableGroupId ID of the table group where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置ID of the table group where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tableGroupId ID of the table group where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Error message
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Error Error message
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ErrorInfo GetError() const;

                    /**
                     * 设置Error message
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _error Error message
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetError(const ErrorInfo& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取Task ID list, which is valid for the API that creates multiple tasks
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TaskIds Task ID list, which is valid for the API that creates multiple tasks
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置Task ID list, which is valid for the API that creates multiple tasks
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _taskIds Task ID list, which is valid for the API that creates multiple tasks
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取ID of uploaded key file
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FileId ID of uploaded key file
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置ID of uploaded key file
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _fileId ID of uploaded key file
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Number of keys successfully verified
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SuccKeyNum Number of keys successfully verified
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSuccKeyNum() const;

                    /**
                     * 设置Number of keys successfully verified
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _succKeyNum Number of keys successfully verified
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSuccKeyNum(const uint64_t& _succKeyNum);

                    /**
                     * 判断参数 SuccKeyNum 是否已赋值
                     * @return SuccKeyNum 是否已赋值
                     * 
                     */
                    bool SuccKeyNumHasBeenSet() const;

                    /**
                     * 获取Total number of keys contained in key file
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TotalKeyNum Total number of keys contained in key file
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTotalKeyNum() const;

                    /**
                     * 设置Total number of keys contained in key file
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _totalKeyNum Total number of keys contained in key file
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalKeyNum(const uint64_t& _totalKeyNum);

                    /**
                     * 判断参数 TotalKeyNum 是否已赋值
                     * @return TotalKeyNum 是否已赋值
                     * 
                     */
                    bool TotalKeyNumHasBeenSet() const;

                private:

                    /**
                     * Table instance ID in the format of `tcaplus-3be64cbb`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableInstanceId;
                    bool m_tableInstanceIdHasBeenSet;

                    /**
                     * Task ID, which is valid for the API that creates one task
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Table name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Table data structure type, such as `GENERIC` or `LIST`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * Table data interface description language (IDL) type, such as `PROTO` or `TDR`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableIdlType;
                    bool m_tableIdlTypeHasBeenSet;

                    /**
                     * ID of the table group where a table resides
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * Error message
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ErrorInfo m_error;
                    bool m_errorHasBeenSet;

                    /**
                     * Task ID list, which is valid for the API that creates multiple tasks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * ID of uploaded key file
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Number of keys successfully verified
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_succKeyNum;
                    bool m_succKeyNumHasBeenSet;

                    /**
                     * Total number of keys contained in key file
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_totalKeyNum;
                    bool m_totalKeyNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_TABLEROLLBACKRESULTNEW_H_
