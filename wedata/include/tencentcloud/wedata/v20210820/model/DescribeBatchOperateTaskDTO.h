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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBATCHOPERATETASKDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBATCHOPERATETASKDTO_H_

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
                * Batch Operation Task List
                */
                class DescribeBatchOperateTaskDTO : public AbstractModel
                {
                public:
                    DescribeBatchOperateTaskDTO();
                    ~DescribeBatchOperateTaskDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskId Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskId Task IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskName Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskName Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Workflow Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WorkflowId Workflow Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _workflowId Workflow Id
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取Workflow name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WorkflowName Workflow name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置Workflow name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _workflowName Workflow name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Status StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _status StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskTypeId Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTaskTypeId() const;

                    /**
                     * 设置Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskTypeId Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskTypeId(const uint64_t& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取Task TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskTypeDesc Task TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskTypeDesc() const;

                    /**
                     * 设置Task TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskTypeDesc Task TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskTypeDesc(const std::string& _taskTypeDesc);

                    /**
                     * 判断参数 TaskTypeDesc 是否已赋值
                     * @return TaskTypeDesc 是否已赋值
                     * 
                     */
                    bool TaskTypeDescHasBeenSet() const;

                    /**
                     * 获取Folder name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FolderName Folder name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置Folder name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _folderName Folder name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFolderName(const std::string& _folderName);

                    /**
                     * 判断参数 FolderName 是否已赋值
                     * @return FolderName 是否已赋值
                     * 
                     */
                    bool FolderNameHasBeenSet() const;

                    /**
                     * 获取Folder IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return FolderId Folder IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置Folder IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _folderId Folder IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InCharge Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _inCharge Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInCharge(const std::string& _inCharge);

                    /**
                     * 判断参数 InCharge 是否已赋值
                     * @return InCharge 是否已赋值
                     * 
                     */
                    bool InChargeHasBeenSet() const;

                    /**
                     * 获取Submitted?
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Submit Submitted?
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetSubmit() const;

                    /**
                     * 设置Submitted?
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _submit Submitted?
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSubmit(const uint64_t& _submit);

                    /**
                     * 判断参数 Submit 是否已赋值
                     * @return Submit 是否已赋值
                     * 
                     */
                    bool SubmitHasBeenSet() const;

                    /**
                     * 获取Engine:
presto\SparkJob\SparkSql
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DataEngine Engine:
presto\SparkJob\SparkSql
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDataEngine() const;

                    /**
                     * 设置Engine:
presto\SparkJob\SparkSql
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dataEngine Engine:
presto\SparkJob\SparkSql
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDataEngine(const std::string& _dataEngine);

                    /**
                     * 判断参数 DataEngine 是否已赋值
                     * @return DataEngine 是否已赋值
                     * 
                     */
                    bool DataEngineHasBeenSet() const;

                    /**
                     * 获取Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return UpdateTime Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _updateTime Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Creation time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _createTime Creation time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Cycle type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CycleUnit Cycle type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCycleUnit() const;

                    /**
                     * 设置Cycle type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cycleUnit Cycle type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCycleUnit(const std::string& _cycleUnit);

                    /**
                     * 判断参数 CycleUnit 是否已赋值
                     * @return CycleUnit 是否已赋值
                     * 
                     */
                    bool CycleUnitHasBeenSet() const;

                    /**
                     * 获取Scheduling plan
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ScheduleDesc Scheduling plan
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetScheduleDesc() const;

                    /**
                     * 设置Scheduling plan
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _scheduleDesc Scheduling plan
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetScheduleDesc(const std::string& _scheduleDesc);

                    /**
                     * 判断参数 ScheduleDesc 是否已赋值
                     * @return ScheduleDesc 是否已赋值
                     * 
                     */
                    bool ScheduleDescHasBeenSet() const;

                    /**
                     * 获取Data source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceId Data source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置Data source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceId Data source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取Data source typeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return DatasourceType Data source typeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDatasourceType() const;

                    /**
                     * 设置Data source typeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _datasourceType Data source typeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDatasourceType(const std::string& _datasourceType);

                    /**
                     * 判断参数 DatasourceType 是否已赋值
                     * @return DatasourceType 是否已赋值
                     * 
                     */
                    bool DatasourceTypeHasBeenSet() const;

                private:

                    /**
                     * Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Workflow Id
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Workflow name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * StatusNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * Task TypeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskTypeDesc;
                    bool m_taskTypeDescHasBeenSet;

                    /**
                     * Folder name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * Folder IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * Owner
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * Submitted?
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_submit;
                    bool m_submitHasBeenSet;

                    /**
                     * Engine:
presto\SparkJob\SparkSql
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_dataEngine;
                    bool m_dataEngineHasBeenSet;

                    /**
                     * Update timeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Creation time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Cycle type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_cycleUnit;
                    bool m_cycleUnitHasBeenSet;

                    /**
                     * Scheduling plan
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_scheduleDesc;
                    bool m_scheduleDescHasBeenSet;

                    /**
                     * Data source ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Data source typeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_datasourceType;
                    bool m_datasourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBATCHOPERATETASKDTO_H_
