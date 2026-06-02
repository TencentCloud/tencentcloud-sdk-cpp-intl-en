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
#include <tencentcloud/cynosdb/v20190107/model/GdnTaskInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/AIOptimizerTaskData.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Task Information
                */
                class BizTaskInfo : public AbstractModel
                {
                public:
                    BizTaskInfo();
                    ~BizTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task ID.</p>
                     * @return ID <p>Task ID.</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _iD <p>Task ID.</p>
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
                     * 获取<p>User appid</p>
                     * @return AppId <p>User appid</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>User appid</p>
                     * @param _appId <p>User appid</p>
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
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterId <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterId <p>Cluster ID.</p>
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
                     * 获取<p>Region</p>
                     * @return Region <p>Region</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region</p>
                     * @param _region <p>Region</p>
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
                     * 获取<p>Task creation time</p>
                     * @return CreateTime <p>Task creation time</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Task creation time</p>
                     * @param _createTime <p>Task creation time</p>
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
                     * 获取<p>Delayed execution time</p>
                     * @return DelayTime <p>Delayed execution time</p>
                     * 
                     */
                    std::string GetDelayTime() const;

                    /**
                     * 设置<p>Delayed execution time</p>
                     * @param _delayTime <p>Delayed execution time</p>
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
                     * 获取<p>Task failure information</p>
                     * @return ErrMsg <p>Task failure information</p>
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置<p>Task failure information</p>
                     * @param _errMsg <p>Task failure information</p>
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
                     * 获取<p>Asynchronous task flow id</p>
                     * @return FlowId <p>Asynchronous task flow id</p>
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置<p>Asynchronous task flow id</p>
                     * @param _flowId <p>Asynchronous task flow id</p>
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
                     * 获取<p>Task input information</p>
                     * @return Input <p>Task input information</p>
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置<p>Task input information</p>
                     * @param _input <p>Task input information</p>
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
                     * 获取<p>Instance group id.</p>
                     * @return InstanceGrpId <p>Instance group id.</p>
                     * @deprecated
                     */
                    std::string GetInstanceGrpId() const;

                    /**
                     * 设置<p>Instance group id.</p>
                     * @param _instanceGrpId <p>Instance group id.</p>
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
                     * 获取<p>Instance group id.</p>
                     * @return InstanceGroupId <p>Instance group id.</p>
                     * 
                     */
                    std::string GetInstanceGroupId() const;

                    /**
                     * 设置<p>Instance group id.</p>
                     * @param _instanceGroupId <p>Instance group id.</p>
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
                     * 获取<p>Instance id</p>
                     * @return InstanceId <p>Instance id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance id</p>
                     * @param _instanceId <p>Instance id</p>
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
                     * 获取<p>Task operation object id</p>
                     * @return ObjectId <p>Task operation object id</p>
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置<p>Task operation object id</p>
                     * @param _objectId <p>Task operation object id</p>
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
                     * 获取<p>Task operation object type.</p>
                     * @return ObjectType <p>Task operation object type.</p>
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置<p>Task operation object type.</p>
                     * @param _objectType <p>Task operation object type.</p>
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
                     * 获取<p>Operator uin</p>
                     * @return Operator <p>Operator uin</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>Operator uin</p>
                     * @param _operator <p>Operator uin</p>
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
                     * 获取<p>Task output information</p>
                     * @return Output <p>Task output information</p>
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置<p>Task output information</p>
                     * @param _output <p>Task output information</p>
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
                     * 获取<p>Task status</p>
                     * @return Status <p>Task status</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Task status</p>
                     * @param _status <p>Task status</p>
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
                     * 获取<p>Task type</p>
                     * @return TaskType <p>Task type</p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>Task type</p>
                     * @param _taskType <p>Task type</p>
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
                     * 获取<p>Parent task ID that triggers this task</p>
                     * @return TriggerTaskId <p>Parent task ID that triggers this task</p>
                     * 
                     */
                    int64_t GetTriggerTaskId() const;

                    /**
                     * 设置<p>Parent task ID that triggers this task</p>
                     * @param _triggerTaskId <p>Parent task ID that triggers this task</p>
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
                     * 获取<p>Update time.</p>
                     * @return UpdateTime <p>Update time.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time.</p>
                     * @param _updateTime <p>Update time.</p>
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
                     * 获取<p>Task start time</p>
                     * @return StartTime <p>Task start time</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Task start time</p>
                     * @param _startTime <p>Task start time</p>
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
                     * 获取<p>Task end time</p>
                     * @return EndTime <p>Task end time</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>Task end time</p>
                     * @param _endTime <p>Task end time</p>
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
                     * 获取<p>Cluster name.</p>
                     * @return ClusterName <p>Cluster name.</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>Cluster name.</p>
                     * @param _clusterName <p>Cluster name.</p>
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
                     * 获取<p>Instance name</p>
                     * @return InstanceName <p>Instance name</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name</p>
                     * @param _instanceName <p>Instance name</p>
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
                     * 获取<p>Task progress</p>
                     * @return Process <p>Task progress</p>
                     * 
                     */
                    int64_t GetProcess() const;

                    /**
                     * 设置<p>Task progress</p>
                     * @param _process <p>Task progress</p>
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
                     * 获取<p>Modify parameter task information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifyParamsData <p>Modify parameter task information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::vector<ModifyParamsData> GetModifyParamsData() const;

                    /**
                     * 设置<p>Modify parameter task information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modifyParamsData <p>Modify parameter task information</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Create cluster task information</p>
                     * @return CreateClustersData <p>Create cluster task information</p>
                     * 
                     */
                    CreateClustersData GetCreateClustersData() const;

                    /**
                     * 设置<p>Create cluster task information</p>
                     * @param _createClustersData <p>Create cluster task information</p>
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
                     * 获取<p>Cluster rollback task information</p>
                     * @return RollbackData <p>Cluster rollback task information</p>
                     * 
                     */
                    RollbackData GetRollbackData() const;

                    /**
                     * 设置<p>Cluster rollback task information</p>
                     * @param _rollbackData <p>Cluster rollback task information</p>
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
                     * 获取<p>Instance configuration change task information</p>
                     * @return ModifyInstanceData <p>Instance configuration change task information</p>
                     * 
                     */
                    ModifyInstanceData GetModifyInstanceData() const;

                    /**
                     * 设置<p>Instance configuration change task information</p>
                     * @param _modifyInstanceData <p>Instance configuration change task information</p>
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
                     * 获取<p>Manual backup task information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ManualBackupData <p>Manual backup task information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ManualBackupData GetManualBackupData() const;

                    /**
                     * 设置<p>Manual backup task information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _manualBackupData <p>Manual backup task information</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Modify kernel version task information</p>
                     * @return ModifyDbVersionData <p>Modify kernel version task information</p>
                     * 
                     */
                    ModifyDbVersionData GetModifyDbVersionData() const;

                    /**
                     * 设置<p>Modify kernel version task information</p>
                     * @param _modifyDbVersionData <p>Modify kernel version task information</p>
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
                     * 获取<p>Cluster Availability Zone Information</p>
                     * @return ClusterSlaveData <p>Cluster Availability Zone Information</p>
                     * 
                     */
                    ClusterSlaveData GetClusterSlaveData() const;

                    /**
                     * 设置<p>Cluster Availability Zone Information</p>
                     * @param _clusterSlaveData <p>Cluster Availability Zone Information</p>
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
                     * 获取<p>Convert cluster logs</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SwitchClusterLogBin <p>Convert cluster logs</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SwitchClusterLogBin GetSwitchClusterLogBin() const;

                    /**
                     * 设置<p>Convert cluster logs</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _switchClusterLogBin <p>Convert cluster logs</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Modify instance parameter data</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifyInstanceParamsData <p>Modify instance parameter data</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BizTaskModifyParamsData GetModifyInstanceParamsData() const;

                    /**
                     * 设置<p>Modify instance parameter data</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modifyInstanceParamsData <p>Modify instance parameter data</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Maintenance time</p>
                     * @return TaskMaintainInfo <p>Maintenance time</p>
                     * 
                     */
                    TaskMaintainInfo GetTaskMaintainInfo() const;

                    /**
                     * 设置<p>Maintenance time</p>
                     * @param _taskMaintainInfo <p>Maintenance time</p>
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
                     * 获取<p>Instance Log Delivery Information</p>
                     * @return InstanceCLSDeliveryInfos <p>Instance Log Delivery Information</p>
                     * 
                     */
                    std::vector<InstanceCLSDeliveryInfo> GetInstanceCLSDeliveryInfos() const;

                    /**
                     * 设置<p>Instance Log Delivery Information</p>
                     * @param _instanceCLSDeliveryInfos <p>Instance Log Delivery Information</p>
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
                     * 获取<p>Task progress information</p>
                     * @return TaskProgressInfo <p>Task progress information</p>
                     * 
                     */
                    TaskProgressInfo GetTaskProgressInfo() const;

                    /**
                     * 设置<p>Task progress information</p>
                     * @param _taskProgressInfo <p>Task progress information</p>
                     * 
                     */
                    void SetTaskProgressInfo(const TaskProgressInfo& _taskProgressInfo);

                    /**
                     * 判断参数 TaskProgressInfo 是否已赋值
                     * @return TaskProgressInfo 是否已赋值
                     * 
                     */
                    bool TaskProgressInfoHasBeenSet() const;

                    /**
                     * 获取<p>Global database network task</p>
                     * @return GdnTaskInfo <p>Global database network task</p>
                     * 
                     */
                    GdnTaskInfo GetGdnTaskInfo() const;

                    /**
                     * 设置<p>Global database network task</p>
                     * @param _gdnTaskInfo <p>Global database network task</p>
                     * 
                     */
                    void SetGdnTaskInfo(const GdnTaskInfo& _gdnTaskInfo);

                    /**
                     * 判断参数 GdnTaskInfo 是否已赋值
                     * @return GdnTaskInfo 是否已赋值
                     * 
                     */
                    bool GdnTaskInfoHasBeenSet() const;

                    /**
                     * 获取<p>Safe id</p>
                     * @return VaultId <p>Safe id</p>
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置<p>Safe id</p>
                     * @param _vaultId <p>Safe id</p>
                     * 
                     */
                    void SetVaultId(const std::string& _vaultId);

                    /**
                     * 判断参数 VaultId 是否已赋值
                     * @return VaultId 是否已赋值
                     * 
                     */
                    bool VaultIdHasBeenSet() const;

                    /**
                     * 获取<p>Safe name</p>
                     * @return VaultName <p>Safe name</p>
                     * 
                     */
                    std::string GetVaultName() const;

                    /**
                     * 设置<p>Safe name</p>
                     * @param _vaultName <p>Safe name</p>
                     * 
                     */
                    void SetVaultName(const std::string& _vaultName);

                    /**
                     * 判断参数 VaultName 是否已赋值
                     * @return VaultName 是否已赋值
                     * 
                     */
                    bool VaultNameHasBeenSet() const;

                    /**
                     * 获取<p>AI optimizer task information</p>
                     * @return AIOptimizerTaskData <p>AI optimizer task information</p>
                     * 
                     */
                    AIOptimizerTaskData GetAIOptimizerTaskData() const;

                    /**
                     * 设置<p>AI optimizer task information</p>
                     * @param _aIOptimizerTaskData <p>AI optimizer task information</p>
                     * 
                     */
                    void SetAIOptimizerTaskData(const AIOptimizerTaskData& _aIOptimizerTaskData);

                    /**
                     * 判断参数 AIOptimizerTaskData 是否已赋值
                     * @return AIOptimizerTaskData 是否已赋值
                     * 
                     */
                    bool AIOptimizerTaskDataHasBeenSet() const;

                private:

                    /**
                     * <p>Task ID.</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>User appid</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Region</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Task creation time</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Delayed execution time</p>
                     */
                    std::string m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * <p>Task failure information</p>
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * <p>Asynchronous task flow id</p>
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>Task input information</p>
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * <p>Instance group id.</p>
                     */
                    std::string m_instanceGrpId;
                    bool m_instanceGrpIdHasBeenSet;

                    /**
                     * <p>Instance group id.</p>
                     */
                    std::string m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * <p>Instance id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Task operation object id</p>
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * <p>Task operation object type.</p>
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                    /**
                     * <p>Operator uin</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>Task output information</p>
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>Task status</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Task type</p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>Parent task ID that triggers this task</p>
                     */
                    int64_t m_triggerTaskId;
                    bool m_triggerTaskIdHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Task start time</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Task end time</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Cluster name.</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>Instance name</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Task progress</p>
                     */
                    int64_t m_process;
                    bool m_processHasBeenSet;

                    /**
                     * <p>Modify parameter task information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ModifyParamsData> m_modifyParamsData;
                    bool m_modifyParamsDataHasBeenSet;

                    /**
                     * <p>Create cluster task information</p>
                     */
                    CreateClustersData m_createClustersData;
                    bool m_createClustersDataHasBeenSet;

                    /**
                     * <p>Cluster rollback task information</p>
                     */
                    RollbackData m_rollbackData;
                    bool m_rollbackDataHasBeenSet;

                    /**
                     * <p>Instance configuration change task information</p>
                     */
                    ModifyInstanceData m_modifyInstanceData;
                    bool m_modifyInstanceDataHasBeenSet;

                    /**
                     * <p>Manual backup task information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ManualBackupData m_manualBackupData;
                    bool m_manualBackupDataHasBeenSet;

                    /**
                     * <p>Modify kernel version task information</p>
                     */
                    ModifyDbVersionData m_modifyDbVersionData;
                    bool m_modifyDbVersionDataHasBeenSet;

                    /**
                     * <p>Cluster Availability Zone Information</p>
                     */
                    ClusterSlaveData m_clusterSlaveData;
                    bool m_clusterSlaveDataHasBeenSet;

                    /**
                     * <p>Convert cluster logs</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SwitchClusterLogBin m_switchClusterLogBin;
                    bool m_switchClusterLogBinHasBeenSet;

                    /**
                     * <p>Modify instance parameter data</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BizTaskModifyParamsData m_modifyInstanceParamsData;
                    bool m_modifyInstanceParamsDataHasBeenSet;

                    /**
                     * <p>Maintenance time</p>
                     */
                    TaskMaintainInfo m_taskMaintainInfo;
                    bool m_taskMaintainInfoHasBeenSet;

                    /**
                     * <p>Instance Log Delivery Information</p>
                     */
                    std::vector<InstanceCLSDeliveryInfo> m_instanceCLSDeliveryInfos;
                    bool m_instanceCLSDeliveryInfosHasBeenSet;

                    /**
                     * <p>Task progress information</p>
                     */
                    TaskProgressInfo m_taskProgressInfo;
                    bool m_taskProgressInfoHasBeenSet;

                    /**
                     * <p>Global database network task</p>
                     */
                    GdnTaskInfo m_gdnTaskInfo;
                    bool m_gdnTaskInfoHasBeenSet;

                    /**
                     * <p>Safe id</p>
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * <p>Safe name</p>
                     */
                    std::string m_vaultName;
                    bool m_vaultNameHasBeenSet;

                    /**
                     * <p>AI optimizer task information</p>
                     */
                    AIOptimizerTaskData m_aIOptimizerTaskData;
                    bool m_aIOptimizerTaskDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BIZTASKINFO_H_
