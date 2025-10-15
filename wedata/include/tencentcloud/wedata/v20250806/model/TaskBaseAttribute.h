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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKBASEATTRIBUTE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKBASEATTRIBUTE_H_

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
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Describes the basic attribute information of the task.
                */
                class TaskBaseAttribute : public AbstractModel
                {
                public:
                    TaskBaseAttribute();
                    ~TaskBaseAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID

                     * @return TaskId Task ID

                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID

                     * @param _taskId Task ID

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
                     * 获取Specifies the task type ID.

* 21:JDBC SQL
* 23:TDSQL-PostgreSQL
* 26:OfflineSynchronization
* 30:Python
* 31:PySpark
* 33:Impala
* 34:Hive SQL
* 35:Shell
* 36:Spark SQL
* 38:Shell Form Mode
* 39:Spark
* 40:TCHouse-P
* 41:Kettle
* 42:Tchouse-X
* 43:TCHouse-X SQL
* 46:DLC Spark
* 47:TiOne
* 48:Trino
* 50:DLC PySpark
* 92:MapReduce
* 130:Branch Node
* 131:Merged Node
* 132:Notebook
* 133:SSH
* 134:StarRocks
* 137:For-each
* 138:Setats SQL
                     * @return TaskTypeId Specifies the task type ID.

* 21:JDBC SQL
* 23:TDSQL-PostgreSQL
* 26:OfflineSynchronization
* 30:Python
* 31:PySpark
* 33:Impala
* 34:Hive SQL
* 35:Shell
* 36:Spark SQL
* 38:Shell Form Mode
* 39:Spark
* 40:TCHouse-P
* 41:Kettle
* 42:Tchouse-X
* 43:TCHouse-X SQL
* 46:DLC Spark
* 47:TiOne
* 48:Trino
* 50:DLC PySpark
* 92:MapReduce
* 130:Branch Node
* 131:Merged Node
* 132:Notebook
* 133:SSH
* 134:StarRocks
* 137:For-each
* 138:Setats SQL
                     * 
                     */
                    uint64_t GetTaskTypeId() const;

                    /**
                     * 设置Specifies the task type ID.

* 21:JDBC SQL
* 23:TDSQL-PostgreSQL
* 26:OfflineSynchronization
* 30:Python
* 31:PySpark
* 33:Impala
* 34:Hive SQL
* 35:Shell
* 36:Spark SQL
* 38:Shell Form Mode
* 39:Spark
* 40:TCHouse-P
* 41:Kettle
* 42:Tchouse-X
* 43:TCHouse-X SQL
* 46:DLC Spark
* 47:TiOne
* 48:Trino
* 50:DLC PySpark
* 92:MapReduce
* 130:Branch Node
* 131:Merged Node
* 132:Notebook
* 133:SSH
* 134:StarRocks
* 137:For-each
* 138:Setats SQL
                     * @param _taskTypeId Specifies the task type ID.

* 21:JDBC SQL
* 23:TDSQL-PostgreSQL
* 26:OfflineSynchronization
* 30:Python
* 31:PySpark
* 33:Impala
* 34:Hive SQL
* 35:Shell
* 36:Spark SQL
* 38:Shell Form Mode
* 39:Spark
* 40:TCHouse-P
* 41:Kettle
* 42:Tchouse-X
* 43:TCHouse-X SQL
* 46:DLC Spark
* 47:TiOne
* 48:Trino
* 50:DLC PySpark
* 92:MapReduce
* 130:Branch Node
* 131:Merged Node
* 132:Notebook
* 133:SSH
* 134:StarRocks
* 137:For-each
* 138:Setats SQL
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
                     * 获取Workflow ID.

                     * @return WorkflowId Workflow ID.

                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow ID.

                     * @param _workflowId Workflow ID.

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
                     * 获取Task name.

                     * @return TaskName Task name.

                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name.

                     * @param _taskName Task name.

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
                     * 获取Last save version number.

                     * @return TaskLatestVersionNo Last save version number.

                     * 
                     */
                    std::string GetTaskLatestVersionNo() const;

                    /**
                     * 设置Last save version number.

                     * @param _taskLatestVersionNo Last save version number.

                     * 
                     */
                    void SetTaskLatestVersionNo(const std::string& _taskLatestVersionNo);

                    /**
                     * 判断参数 TaskLatestVersionNo 是否已赋值
                     * @return TaskLatestVersionNo 是否已赋值
                     * 
                     */
                    bool TaskLatestVersionNoHasBeenSet() const;

                    /**
                     * 获取Last submit version number.

                     * @return TaskLatestSubmitVersionNo Last submit version number.

                     * 
                     */
                    std::string GetTaskLatestSubmitVersionNo() const;

                    /**
                     * 设置Last submit version number.

                     * @param _taskLatestSubmitVersionNo Last submit version number.

                     * 
                     */
                    void SetTaskLatestSubmitVersionNo(const std::string& _taskLatestSubmitVersionNo);

                    /**
                     * 判断参数 TaskLatestSubmitVersionNo 是否已赋值
                     * @return TaskLatestSubmitVersionNo 是否已赋值
                     * 
                     */
                    bool TaskLatestSubmitVersionNoHasBeenSet() const;

                    /**
                     * 获取Workflow name.


                     * @return WorkflowName Workflow name.


                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置Workflow name.


                     * @param _workflowName Workflow name.


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
                     * 获取Task Status:

* N: New
* Y: Scheduling
* F: Offline
* O: Paused
* T: Offlining (in the process of being taken offline)
* INVALID: Invalid

                     * @return Status Task Status:

* N: New
* Y: Scheduling
* F: Offline
* O: Paused
* T: Offlining (in the process of being taken offline)
* INVALID: Invalid

                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task Status:

* N: New
* Y: Scheduling
* F: Offline
* O: Paused
* T: Offlining (in the process of being taken offline)
* INVALID: Invalid

                     * @param _status Task Status:

* N: New
* Y: Scheduling
* F: Offline
* O: Paused
* T: Offlining (in the process of being taken offline)
* INVALID: Invalid

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
                     * 获取Latest submission status of the task. Specifies whether it has been submitted: true/false.
                     * @return Submit Latest submission status of the task. Specifies whether it has been submitted: true/false.
                     * 
                     */
                    bool GetSubmit() const;

                    /**
                     * 设置Latest submission status of the task. Specifies whether it has been submitted: true/false.
                     * @param _submit Latest submission status of the task. Specifies whether it has been submitted: true/false.
                     * 
                     */
                    void SetSubmit(const bool& _submit);

                    /**
                     * 判断参数 Submit 是否已赋值
                     * @return Submit 是否已赋值
                     * 
                     */
                    bool SubmitHasBeenSet() const;

                    /**
                     * 获取Task creation time. example: 2022-02-12 11:13:41.

                     * @return CreateTime Task creation time. example: 2022-02-12 11:13:41.

                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Task creation time. example: 2022-02-12 11:13:41.

                     * @param _createTime Task creation time. example: 2022-02-12 11:13:41.

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
                     * 获取Last update time. example: 2025-08-13 16:34:06.
                     * @return LastUpdateTime Last update time. example: 2025-08-13 16:34:06.
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置Last update time. example: 2025-08-13 16:34:06.
                     * @param _lastUpdateTime Last update time. example: 2025-08-13 16:34:06.
                     * 
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取Last Updated By (Name).
                     * @return LastUpdateUserName Last Updated By (Name).
                     * 
                     */
                    std::string GetLastUpdateUserName() const;

                    /**
                     * 设置Last Updated By (Name).
                     * @param _lastUpdateUserName Last Updated By (Name).
                     * 
                     */
                    void SetLastUpdateUserName(const std::string& _lastUpdateUserName);

                    /**
                     * 判断参数 LastUpdateUserName 是否已赋值
                     * @return LastUpdateUserName 是否已赋值
                     * 
                     */
                    bool LastUpdateUserNameHasBeenSet() const;

                    /**
                     * 获取Last operation time.

                     * @return LastOpsTime Last operation time.

                     * 
                     */
                    std::string GetLastOpsTime() const;

                    /**
                     * 设置Last operation time.

                     * @param _lastOpsTime Last operation time.

                     * 
                     */
                    void SetLastOpsTime(const std::string& _lastOpsTime);

                    /**
                     * 判断参数 LastOpsTime 是否已赋值
                     * @return LastOpsTime 是否已赋值
                     * 
                     */
                    bool LastOpsTimeHasBeenSet() const;

                    /**
                     * 获取Last operator name.
                     * @return LastOpsUserName Last operator name.
                     * 
                     */
                    std::string GetLastOpsUserName() const;

                    /**
                     * 设置Last operator name.
                     * @param _lastOpsUserName Last operator name.
                     * 
                     */
                    void SetLastOpsUserName(const std::string& _lastOpsUserName);

                    /**
                     * 判断参数 LastOpsUserName 是否已赋值
                     * @return LastOpsUserName 是否已赋值
                     * 
                     */
                    bool LastOpsUserNameHasBeenSet() const;

                    /**
                     * 获取Task owner ID.
                     * @return OwnerUin Task owner ID.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Task owner ID.
                     * @param _ownerUin Task owner ID.
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Task description

                     * @return TaskDescription Task description

                     * 
                     */
                    std::string GetTaskDescription() const;

                    /**
                     * 设置Task description

                     * @param _taskDescription Task description

                     * 
                     */
                    void SetTaskDescription(const std::string& _taskDescription);

                    /**
                     * 判断参数 TaskDescription 是否已赋值
                     * @return TaskDescription 是否已赋值
                     * 
                     */
                    bool TaskDescriptionHasBeenSet() const;

                    /**
                     * 获取Last Updated User ID

                     * @return UpdateUserUin Last Updated User ID

                     * 
                     */
                    std::string GetUpdateUserUin() const;

                    /**
                     * 设置Last Updated User ID

                     * @param _updateUserUin Last Updated User ID

                     * 
                     */
                    void SetUpdateUserUin(const std::string& _updateUserUin);

                    /**
                     * 判断参数 UpdateUserUin 是否已赋值
                     * @return UpdateUserUin 是否已赋值
                     * 
                     */
                    bool UpdateUserUinHasBeenSet() const;

                    /**
                     * 获取Created By User ID

                     * @return CreateUserUin Created By User ID

                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置Created By User ID

                     * @param _createUserUin Created By User ID

                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                private:

                    /**
                     * Task ID

                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Specifies the task type ID.

* 21:JDBC SQL
* 23:TDSQL-PostgreSQL
* 26:OfflineSynchronization
* 30:Python
* 31:PySpark
* 33:Impala
* 34:Hive SQL
* 35:Shell
* 36:Spark SQL
* 38:Shell Form Mode
* 39:Spark
* 40:TCHouse-P
* 41:Kettle
* 42:Tchouse-X
* 43:TCHouse-X SQL
* 46:DLC Spark
* 47:TiOne
* 48:Trino
* 50:DLC PySpark
* 92:MapReduce
* 130:Branch Node
* 131:Merged Node
* 132:Notebook
* 133:SSH
* 134:StarRocks
* 137:For-each
* 138:Setats SQL
                     */
                    uint64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * Workflow ID.

                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Task name.

                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Last save version number.

                     */
                    std::string m_taskLatestVersionNo;
                    bool m_taskLatestVersionNoHasBeenSet;

                    /**
                     * Last submit version number.

                     */
                    std::string m_taskLatestSubmitVersionNo;
                    bool m_taskLatestSubmitVersionNoHasBeenSet;

                    /**
                     * Workflow name.


                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Task Status:

* N: New
* Y: Scheduling
* F: Offline
* O: Paused
* T: Offlining (in the process of being taken offline)
* INVALID: Invalid

                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Latest submission status of the task. Specifies whether it has been submitted: true/false.
                     */
                    bool m_submit;
                    bool m_submitHasBeenSet;

                    /**
                     * Task creation time. example: 2022-02-12 11:13:41.

                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last update time. example: 2025-08-13 16:34:06.
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * Last Updated By (Name).
                     */
                    std::string m_lastUpdateUserName;
                    bool m_lastUpdateUserNameHasBeenSet;

                    /**
                     * Last operation time.

                     */
                    std::string m_lastOpsTime;
                    bool m_lastOpsTimeHasBeenSet;

                    /**
                     * Last operator name.
                     */
                    std::string m_lastOpsUserName;
                    bool m_lastOpsUserNameHasBeenSet;

                    /**
                     * Task owner ID.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Task description

                     */
                    std::string m_taskDescription;
                    bool m_taskDescriptionHasBeenSet;

                    /**
                     * Last Updated User ID

                     */
                    std::string m_updateUserUin;
                    bool m_updateUserUinHasBeenSet;

                    /**
                     * Created By User ID

                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKBASEATTRIBUTE_H_
