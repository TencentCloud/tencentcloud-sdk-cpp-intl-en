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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BIZTASKINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BIZTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyParamsData.h>
#include <tencentcloud/cynosdb/v20190107/model/CreateClustersData.h>
#include <tencentcloud/cynosdb/v20190107/model/RollbackData.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyInstanceData.h>
#include <tencentcloud/cynosdb/v20190107/model/ManualBackupData.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyDbVersionData.h>
#include <tencentcloud/cynosdb/v20190107/model/ClusterSlaveData.h>
#include <tencentcloud/cynosdb/v20190107/model/SwitchClusterLogBin.h>
#include <tencentcloud/cynosdb/v20190107/model/BizTaskModifyParamsData.h>
#include <tencentcloud/cynosdb/v20190107/model/TaskMaintainInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/InstanceCLSDeliveryInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/TaskProgressInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Task information
                */
                class BizTaskInfo : public AbstractModel
                {
                public:
                    BizTaskInfo();
                    ~BizTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task id
                     * @return ID Task id
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Task id
                     * @param _iD Task id
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取User appid
                     * @return AppId User appid
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User appid
                     * @param _appId User appid
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取cluster id
                     * @return ClusterId cluster id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置cluster id
                     * @param _clusterId cluster id
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Region
                     * @return Region Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param _region Region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Task Creation Time
                     * @return CreateTime Task Creation Time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Task Creation Time
                     * @param _createTime Task Creation Time
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
                     * 获取Specifies the delayed execution time.
                     * @return DelayTime Specifies the delayed execution time.
                     * 
                     */
                    std::string GetDelayTime() const;

                    /**
                     * 设置Specifies the delayed execution time.
                     * @param _delayTime Specifies the delayed execution time.
                     * 
                     */
                    void SetDelayTime(const std::string& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取Task failure information.
                     * @return ErrMsg Task failure information.
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置Task failure information.
                     * @param _errMsg Task failure information.
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取asynchronous task flow id
                     * @return FlowId asynchronous task flow id
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置asynchronous task flow id
                     * @param _flowId asynchronous task flow id
                     * 
                     */
                    void SetFlowId(const int64_t& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取task input information
                     * @return Input task input information
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置task input information
                     * @param _input task input information
                     * 
                     */
                    void SetInput(const std::string& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取instance group id
                     * @return InstanceGrpId instance group id
                     * @deprecated
                     */
                    std::string GetInstanceGrpId() const;

                    /**
                     * 设置instance group id
                     * @param _instanceGrpId instance group id
                     * @deprecated
                     */
                    void SetInstanceGrpId(const std::string& _instanceGrpId);

                    /**
                     * 判断参数 InstanceGrpId 是否已赋值
                     * @return InstanceGrpId 是否已赋值
                     * @deprecated
                     */
                    bool InstanceGrpIdHasBeenSet() const;

                    /**
                     * 获取instance group id
                     * @return InstanceGroupId instance group id
                     * 
                     */
                    std::string GetInstanceGroupId() const;

                    /**
                     * 设置instance group id
                     * @param _instanceGroupId instance group id
                     * 
                     */
                    void SetInstanceGroupId(const std::string& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     * 
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取Instance id
                     * @return InstanceId Instance id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance id
                     * @param _instanceId Instance id
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
                     * 获取Task Operation Target id
                     * @return ObjectId Task Operation Target id
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置Task Operation Target id
                     * @param _objectId Task Operation Target id
                     * 
                     */
                    void SetObjectId(const std::string& _objectId);

                    /**
                     * 判断参数 ObjectId 是否已赋值
                     * @return ObjectId 是否已赋值
                     * 
                     */
                    bool ObjectIdHasBeenSet() const;

                    /**
                     * 获取Task Operation Target Type
                     * @return ObjectType Task Operation Target Type
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置Task Operation Target Type
                     * @param _objectType Task Operation Target Type
                     * 
                     */
                    void SetObjectType(const std::string& _objectType);

                    /**
                     * 判断参数 ObjectType 是否已赋值
                     * @return ObjectType 是否已赋值
                     * 
                     */
                    bool ObjectTypeHasBeenSet() const;

                    /**
                     * 获取Operator uin
                     * @return Operator Operator uin
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator uin
                     * @param _operator Operator uin
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取task output information
                     * @return Output task output information
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置task output information
                     * @param _output task output information
                     * 
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Task Status
                     * @return Status Task Status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task Status
                     * @param _status Task Status
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
                     * 获取task type
                     * @return TaskType task type
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置task type
                     * @param _taskType task type
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Parent Task ID that Triggered This Task
                     * @return TriggerTaskId Parent Task ID that Triggered This Task
                     * 
                     */
                    int64_t GetTriggerTaskId() const;

                    /**
                     * 设置Parent Task ID that Triggered This Task
                     * @param _triggerTaskId Parent Task ID that Triggered This Task
                     * 
                     */
                    void SetTriggerTaskId(const int64_t& _triggerTaskId);

                    /**
                     * 判断参数 TriggerTaskId 是否已赋值
                     * @return TriggerTaskId 是否已赋值
                     * 
                     */
                    bool TriggerTaskIdHasBeenSet() const;

                    /**
                     * 获取Update Time
                     * @return UpdateTime Update Time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update Time
                     * @param _updateTime Update Time
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
                     * 获取Task Start Time
                     * @return StartTime Task Start Time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Task Start Time
                     * @param _startTime Task Start Time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Task End Time
                     * @return EndTime Task End Time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Task End Time
                     * @param _endTime Task End Time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Cluster Name
                     * @return ClusterName Cluster Name
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster Name
                     * @param _clusterName Cluster Name
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Instance Name
                     * @return InstanceName Instance Name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance Name
                     * @param _instanceName Instance Name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Task Progress
                     * @return Process Task Progress
                     * 
                     */
                    int64_t GetProcess() const;

                    /**
                     * 设置Task Progress
                     * @param _process Task Progress
                     * 
                     */
                    void SetProcess(const int64_t& _process);

                    /**
                     * 判断参数 Process 是否已赋值
                     * @return Process 是否已赋值
                     * 
                     */
                    bool ProcessHasBeenSet() const;

                    /**
                     * 获取Parameter Modification Task Information
                     * @return ModifyParamsData Parameter Modification Task Information
                     * @deprecated
                     */
                    std::vector<ModifyParamsData> GetModifyParamsData() const;

                    /**
                     * 设置Parameter Modification Task Information
                     * @param _modifyParamsData Parameter Modification Task Information
                     * @deprecated
                     */
                    void SetModifyParamsData(const std::vector<ModifyParamsData>& _modifyParamsData);

                    /**
                     * 判断参数 ModifyParamsData 是否已赋值
                     * @return ModifyParamsData 是否已赋值
                     * @deprecated
                     */
                    bool ModifyParamsDataHasBeenSet() const;

                    /**
                     * 获取Create cluster task information.
                     * @return CreateClustersData Create cluster task information.
                     * 
                     */
                    CreateClustersData GetCreateClustersData() const;

                    /**
                     * 设置Create cluster task information.
                     * @param _createClustersData Create cluster task information.
                     * 
                     */
                    void SetCreateClustersData(const CreateClustersData& _createClustersData);

                    /**
                     * 判断参数 CreateClustersData 是否已赋值
                     * @return CreateClustersData 是否已赋值
                     * 
                     */
                    bool CreateClustersDataHasBeenSet() const;

                    /**
                     * 获取Cluster rollback task information.
                     * @return RollbackData Cluster rollback task information.
                     * 
                     */
                    RollbackData GetRollbackData() const;

                    /**
                     * 设置Cluster rollback task information.
                     * @param _rollbackData Cluster rollback task information.
                     * 
                     */
                    void SetRollbackData(const RollbackData& _rollbackData);

                    /**
                     * 判断参数 RollbackData 是否已赋值
                     * @return RollbackData 是否已赋值
                     * 
                     */
                    bool RollbackDataHasBeenSet() const;

                    /**
                     * 获取Instance configuration change task information.
                     * @return ModifyInstanceData Instance configuration change task information.
                     * 
                     */
                    ModifyInstanceData GetModifyInstanceData() const;

                    /**
                     * 设置Instance configuration change task information.
                     * @param _modifyInstanceData Instance configuration change task information.
                     * 
                     */
                    void SetModifyInstanceData(const ModifyInstanceData& _modifyInstanceData);

                    /**
                     * 判断参数 ModifyInstanceData 是否已赋值
                     * @return ModifyInstanceData 是否已赋值
                     * 
                     */
                    bool ModifyInstanceDataHasBeenSet() const;

                    /**
                     * 获取Manual Backup Task Information
                     * @return ManualBackupData Manual Backup Task Information
                     * 
                     */
                    ManualBackupData GetManualBackupData() const;

                    /**
                     * 设置Manual Backup Task Information
                     * @param _manualBackupData Manual Backup Task Information
                     * 
                     */
                    void SetManualBackupData(const ManualBackupData& _manualBackupData);

                    /**
                     * 判断参数 ManualBackupData 是否已赋值
                     * @return ManualBackupData 是否已赋值
                     * 
                     */
                    bool ManualBackupDataHasBeenSet() const;

                    /**
                     * 获取Modify kernel version task information.
                     * @return ModifyDbVersionData Modify kernel version task information.
                     * 
                     */
                    ModifyDbVersionData GetModifyDbVersionData() const;

                    /**
                     * 设置Modify kernel version task information.
                     * @param _modifyDbVersionData Modify kernel version task information.
                     * 
                     */
                    void SetModifyDbVersionData(const ModifyDbVersionData& _modifyDbVersionData);

                    /**
                     * 判断参数 ModifyDbVersionData 是否已赋值
                     * @return ModifyDbVersionData 是否已赋值
                     * 
                     */
                    bool ModifyDbVersionDataHasBeenSet() const;

                    /**
                     * 获取Cluster availability zone information.
                     * @return ClusterSlaveData Cluster availability zone information.
                     * 
                     */
                    ClusterSlaveData GetClusterSlaveData() const;

                    /**
                     * 设置Cluster availability zone information.
                     * @param _clusterSlaveData Cluster availability zone information.
                     * 
                     */
                    void SetClusterSlaveData(const ClusterSlaveData& _clusterSlaveData);

                    /**
                     * 判断参数 ClusterSlaveData 是否已赋值
                     * @return ClusterSlaveData 是否已赋值
                     * 
                     */
                    bool ClusterSlaveDataHasBeenSet() const;

                    /**
                     * 获取Cluster Log Conversion
                     * @return SwitchClusterLogBin Cluster Log Conversion
                     * 
                     */
                    SwitchClusterLogBin GetSwitchClusterLogBin() const;

                    /**
                     * 设置Cluster Log Conversion
                     * @param _switchClusterLogBin Cluster Log Conversion
                     * 
                     */
                    void SetSwitchClusterLogBin(const SwitchClusterLogBin& _switchClusterLogBin);

                    /**
                     * 判断参数 SwitchClusterLogBin 是否已赋值
                     * @return SwitchClusterLogBin 是否已赋值
                     * 
                     */
                    bool SwitchClusterLogBinHasBeenSet() const;

                    /**
                     * 获取Instance Parameter Modification
                     * @return ModifyInstanceParamsData Instance Parameter Modification
                     * 
                     */
                    BizTaskModifyParamsData GetModifyInstanceParamsData() const;

                    /**
                     * 设置Instance Parameter Modification
                     * @param _modifyInstanceParamsData Instance Parameter Modification
                     * 
                     */
                    void SetModifyInstanceParamsData(const BizTaskModifyParamsData& _modifyInstanceParamsData);

                    /**
                     * 判断参数 ModifyInstanceParamsData 是否已赋值
                     * @return ModifyInstanceParamsData 是否已赋值
                     * 
                     */
                    bool ModifyInstanceParamsDataHasBeenSet() const;

                    /**
                     * 获取Maintenance time.
                     * @return TaskMaintainInfo Maintenance time.
                     * 
                     */
                    TaskMaintainInfo GetTaskMaintainInfo() const;

                    /**
                     * 设置Maintenance time.
                     * @param _taskMaintainInfo Maintenance time.
                     * 
                     */
                    void SetTaskMaintainInfo(const TaskMaintainInfo& _taskMaintainInfo);

                    /**
                     * 判断参数 TaskMaintainInfo 是否已赋值
                     * @return TaskMaintainInfo 是否已赋值
                     * 
                     */
                    bool TaskMaintainInfoHasBeenSet() const;

                    /**
                     * 获取Instance log delivery information.

                     * @return InstanceCLSDeliveryInfos Instance log delivery information.

                     * 
                     */
                    std::vector<InstanceCLSDeliveryInfo> GetInstanceCLSDeliveryInfos() const;

                    /**
                     * 设置Instance log delivery information.

                     * @param _instanceCLSDeliveryInfos Instance log delivery information.

                     * 
                     */
                    void SetInstanceCLSDeliveryInfos(const std::vector<InstanceCLSDeliveryInfo>& _instanceCLSDeliveryInfos);

                    /**
                     * 判断参数 InstanceCLSDeliveryInfos 是否已赋值
                     * @return InstanceCLSDeliveryInfos 是否已赋值
                     * 
                     */
                    bool InstanceCLSDeliveryInfosHasBeenSet() const;

                    /**
                     * 获取Task progress information.
                     * @return TaskProgressInfo Task progress information.
                     * 
                     */
                    TaskProgressInfo GetTaskProgressInfo() const;

                    /**
                     * 设置Task progress information.
                     * @param _taskProgressInfo Task progress information.
                     * 
                     */
                    void SetTaskProgressInfo(const TaskProgressInfo& _taskProgressInfo);

                    /**
                     * 判断参数 TaskProgressInfo 是否已赋值
                     * @return TaskProgressInfo 是否已赋值
                     * 
                     */
                    bool TaskProgressInfoHasBeenSet() const;

                private:

                    /**
                     * Task id
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * User appid
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * cluster id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Task Creation Time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Specifies the delayed execution time.
                     */
                    std::string m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * Task failure information.
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * asynchronous task flow id
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * task input information
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * instance group id
                     */
                    std::string m_instanceGrpId;
                    bool m_instanceGrpIdHasBeenSet;

                    /**
                     * instance group id
                     */
                    std::string m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * Instance id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Task Operation Target id
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * Task Operation Target Type
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                    /**
                     * Operator uin
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * task output information
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Task Status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * task type
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Parent Task ID that Triggered This Task
                     */
                    int64_t m_triggerTaskId;
                    bool m_triggerTaskIdHasBeenSet;

                    /**
                     * Update Time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Task Start Time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task End Time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Cluster Name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Instance Name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Task Progress
                     */
                    int64_t m_process;
                    bool m_processHasBeenSet;

                    /**
                     * Parameter Modification Task Information
                     */
                    std::vector<ModifyParamsData> m_modifyParamsData;
                    bool m_modifyParamsDataHasBeenSet;

                    /**
                     * Create cluster task information.
                     */
                    CreateClustersData m_createClustersData;
                    bool m_createClustersDataHasBeenSet;

                    /**
                     * Cluster rollback task information.
                     */
                    RollbackData m_rollbackData;
                    bool m_rollbackDataHasBeenSet;

                    /**
                     * Instance configuration change task information.
                     */
                    ModifyInstanceData m_modifyInstanceData;
                    bool m_modifyInstanceDataHasBeenSet;

                    /**
                     * Manual Backup Task Information
                     */
                    ManualBackupData m_manualBackupData;
                    bool m_manualBackupDataHasBeenSet;

                    /**
                     * Modify kernel version task information.
                     */
                    ModifyDbVersionData m_modifyDbVersionData;
                    bool m_modifyDbVersionDataHasBeenSet;

                    /**
                     * Cluster availability zone information.
                     */
                    ClusterSlaveData m_clusterSlaveData;
                    bool m_clusterSlaveDataHasBeenSet;

                    /**
                     * Cluster Log Conversion
                     */
                    SwitchClusterLogBin m_switchClusterLogBin;
                    bool m_switchClusterLogBinHasBeenSet;

                    /**
                     * Instance Parameter Modification
                     */
                    BizTaskModifyParamsData m_modifyInstanceParamsData;
                    bool m_modifyInstanceParamsDataHasBeenSet;

                    /**
                     * Maintenance time.
                     */
                    TaskMaintainInfo m_taskMaintainInfo;
                    bool m_taskMaintainInfoHasBeenSet;

                    /**
                     * Instance log delivery information.

                     */
                    std::vector<InstanceCLSDeliveryInfo> m_instanceCLSDeliveryInfos;
                    bool m_instanceCLSDeliveryInfosHasBeenSet;

                    /**
                     * Task progress information.
                     */
                    TaskProgressInfo m_taskProgressInfo;
                    bool m_taskProgressInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BIZTASKINFO_H_
