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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINFOVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINFOVO_H_

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
                * Task information.
                */
                class TaskInfoVo : public AbstractModel
                {
                public:
                    TaskInfoVo();
                    ~TaskInfoVo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tenant id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppID Tenant id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppID() const;

                    /**
                     * 设置Tenant id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appID Tenant id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppID(const std::string& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取Project ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectId Project ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Task ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskId Task ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskId Task ID

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskName Task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskName Task name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Task type id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskTypeId Task type id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTaskTypeId() const;

                    /**
                     * 设置Task type id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskTypeId Task type id.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Main account id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OnwerUid Main account id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOnwerUid() const;

                    /**
                     * 设置Main account id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _onwerUid Main account id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOnwerUid(const std::string& _onwerUid);

                    /**
                     * 判断参数 OnwerUid 是否已赋值
                     * @return OnwerUid 是否已赋值
                     * 
                     */
                    bool OnwerUidHasBeenSet() const;

                    /**
                     * 获取Person in charge.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InChargeId Person in charge.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInChargeId() const;

                    /**
                     * 设置Person in charge.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _inChargeId Person in charge.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInChargeId(const std::string& _inChargeId);

                    /**
                     * 判断参数 InChargeId 是否已赋值
                     * @return InChargeId 是否已赋值
                     * 
                     */
                    bool InChargeIdHasBeenSet() const;

                    /**
                     * 获取Instance ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Instance ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Instance ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取jobId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobId jobId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置jobId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jobId jobId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Engine type, DLC, EMR.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineType Engine type, DLC, EMR.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置Engine type, DLC, EMR.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engineType Engine type, DLC, EMR.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取Engine name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineName Engine name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEngineName() const;

                    /**
                     * 设置Engine name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engineName Engine name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngineName(const std::string& _engineName);

                    /**
                     * 判断参数 EngineName 是否已赋值
                     * @return EngineName 是否已赋值
                     * 
                     */
                    bool EngineNameHasBeenSet() const;

                    /**
                     * 获取Engine sub-type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineSubType Engine sub-type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEngineSubType() const;

                    /**
                     * 设置Engine sub-type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engineSubType Engine sub-type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngineSubType(const std::string& _engineSubType);

                    /**
                     * 判断参数 EngineSubType 是否已赋值
                     * @return EngineSubType 是否已赋值
                     * 
                     */
                    bool EngineSubTypeHasBeenSet() const;

                    /**
                     * 获取Engine taskId.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineTaskId Engine taskId.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEngineTaskId() const;

                    /**
                     * 设置Engine taskId.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engineTaskId Engine taskId.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngineTaskId(const std::string& _engineTaskId);

                    /**
                     * 判断参数 EngineTaskId 是否已赋值
                     * @return EngineTaskId 是否已赋值
                     * 
                     */
                    bool EngineTaskIdHasBeenSet() const;

                    /**
                     * 获取Engine execution status, enumerate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineExeStatus Engine execution status, enumerate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEngineExeStatus() const;

                    /**
                     * 设置Engine execution status, enumerate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engineExeStatus Engine execution status, enumerate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngineExeStatus(const std::string& _engineExeStatus);

                    /**
                     * 判断参数 EngineExeStatus 是否已赋值
                     * @return EngineExeStatus 是否已赋值
                     * 
                     */
                    bool EngineExeStatusHasBeenSet() const;

                    /**
                     * 获取Engine execution user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineExeUser Engine execution user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEngineExeUser() const;

                    /**
                     * 设置Engine execution user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engineExeUser Engine execution user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngineExeUser(const std::string& _engineExeUser);

                    /**
                     * 判断参数 EngineExeUser 是否已赋值
                     * @return EngineExeUser 是否已赋值
                     * 
                     */
                    bool EngineExeUserHasBeenSet() const;

                    /**
                     * 获取Engine execution start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineExeStartTime Engine execution start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEngineExeStartTime() const;

                    /**
                     * 设置Engine execution start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engineExeStartTime Engine execution start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngineExeStartTime(const std::string& _engineExeStartTime);

                    /**
                     * 判断参数 EngineExeStartTime 是否已赋值
                     * @return EngineExeStartTime 是否已赋值
                     * 
                     */
                    bool EngineExeStartTimeHasBeenSet() const;

                    /**
                     * 获取Engine execution end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineExeEndTime Engine execution end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEngineExeEndTime() const;

                    /**
                     * 设置Engine execution end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engineExeEndTime Engine execution end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngineExeEndTime(const std::string& _engineExeEndTime);

                    /**
                     * 判断参数 EngineExeEndTime 是否已赋值
                     * @return EngineExeEndTime 是否已赋值
                     * 
                     */
                    bool EngineExeEndTimeHasBeenSet() const;

                    /**
                     * 获取DATA source, such as DATA_INTEGRATION, DATA_EXPLORATION, DATA_QUALITY, OM_CENTER.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProductSource DATA source, such as DATA_INTEGRATION, DATA_EXPLORATION, DATA_QUALITY, OM_CENTER.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProductSource() const;

                    /**
                     * 设置DATA source, such as DATA_INTEGRATION, DATA_EXPLORATION, DATA_QUALITY, OM_CENTER.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _productSource DATA source, such as DATA_INTEGRATION, DATA_EXPLORATION, DATA_QUALITY, OM_CENTER.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProductSource(const std::string& _productSource);

                    /**
                     * 判断参数 ProductSource 是否已赋值
                     * @return ProductSource 是否已赋值
                     * 
                     */
                    bool ProductSourceHasBeenSet() const;

                private:

                    /**
                     * Tenant id.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * Project ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Task ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Task type id.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * Main account id.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_onwerUid;
                    bool m_onwerUidHasBeenSet;

                    /**
                     * Person in charge.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_inChargeId;
                    bool m_inChargeIdHasBeenSet;

                    /**
                     * Instance ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * jobId
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Engine type, DLC, EMR.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * Engine name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_engineName;
                    bool m_engineNameHasBeenSet;

                    /**
                     * Engine sub-type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_engineSubType;
                    bool m_engineSubTypeHasBeenSet;

                    /**
                     * Engine taskId.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_engineTaskId;
                    bool m_engineTaskIdHasBeenSet;

                    /**
                     * Engine execution status, enumerate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_engineExeStatus;
                    bool m_engineExeStatusHasBeenSet;

                    /**
                     * Engine execution user.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_engineExeUser;
                    bool m_engineExeUserHasBeenSet;

                    /**
                     * Engine execution start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_engineExeStartTime;
                    bool m_engineExeStartTimeHasBeenSet;

                    /**
                     * Engine execution end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_engineExeEndTime;
                    bool m_engineExeEndTimeHasBeenSet;

                    /**
                     * DATA source, such as DATA_INTEGRATION, DATA_EXPLORATION, DATA_QUALITY, OM_CENTER.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_productSource;
                    bool m_productSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINFOVO_H_
