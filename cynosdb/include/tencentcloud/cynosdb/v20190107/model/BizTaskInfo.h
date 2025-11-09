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
                * 
                */
                class BizTaskInfo : public AbstractModel
                {
                public:
                    BizTaskInfo();
                    ~BizTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return ID 
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置
                     * @param _iD 
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
                     * 获取
                     * @return AppId 
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置
                     * @param _appId 
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
                     * 获取
                     * @return ClusterId 
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置
                     * @param _clusterId 
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
                     * 获取
                     * @return CreateTime 
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置
                     * @param _createTime 
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
                     * 获取
                     * @return FlowId 
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置
                     * @param _flowId 
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
                     * 获取
                     * @return Input 
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置
                     * @param _input 
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
                     * 获取
                     * @return InstanceGrpId 
                     * @deprecated
                     */
                    std::string GetInstanceGrpId() const;

                    /**
                     * 设置
                     * @param _instanceGrpId 
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
                     * 获取
                     * @return InstanceGroupId 
                     * 
                     */
                    std::string GetInstanceGroupId() const;

                    /**
                     * 设置
                     * @param _instanceGroupId 
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
                     * 获取
                     * @return InstanceId 
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置
                     * @param _instanceId 
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
                     * 获取
                     * @return ObjectId 
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置
                     * @param _objectId 
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
                     * 获取
                     * @return ObjectType 
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置
                     * @param _objectType 
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
                     * 获取
                     * @return Operator 
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置
                     * @param _operator 
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
                     * 获取
                     * @return Output 
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置
                     * @param _output 
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
                     * 获取
                     * @return Status 
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置
                     * @param _status 
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
                     * 获取
                     * @return TaskType 
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置
                     * @param _taskType 
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
                     * 获取
                     * @return TriggerTaskId 
                     * 
                     */
                    int64_t GetTriggerTaskId() const;

                    /**
                     * 设置
                     * @param _triggerTaskId 
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
                     * 获取
                     * @return UpdateTime 
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置
                     * @param _updateTime 
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
                     * 获取
                     * @return StartTime 
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置
                     * @param _startTime 
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
                     * 获取
                     * @return EndTime 
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置
                     * @param _endTime 
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
                     * 获取
                     * @return ClusterName 
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置
                     * @param _clusterName 
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
                     * 获取
                     * @return InstanceName 
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置
                     * @param _instanceName 
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
                     * 获取
                     * @return Process 
                     * 
                     */
                    int64_t GetProcess() const;

                    /**
                     * 设置
                     * @param _process 
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
                     * 获取
                     * @return ModifyParamsData 
                     * @deprecated
                     */
                    std::vector<ModifyParamsData> GetModifyParamsData() const;

                    /**
                     * 设置
                     * @param _modifyParamsData 
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
                     * 获取
                     * @return ManualBackupData 
                     * 
                     */
                    ManualBackupData GetManualBackupData() const;

                    /**
                     * 设置
                     * @param _manualBackupData 
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
                     * 获取
                     * @return SwitchClusterLogBin 
                     * 
                     */
                    SwitchClusterLogBin GetSwitchClusterLogBin() const;

                    /**
                     * 设置
                     * @param _switchClusterLogBin 
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
                     * 获取
                     * @return ModifyInstanceParamsData 
                     * 
                     */
                    BizTaskModifyParamsData GetModifyInstanceParamsData() const;

                    /**
                     * 设置
                     * @param _modifyInstanceParamsData 
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
                     * 
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 
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
                     * 
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_instanceGrpId;
                    bool m_instanceGrpIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_triggerTaskId;
                    bool m_triggerTaskIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_process;
                    bool m_processHasBeenSet;

                    /**
                     * 
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
                     * 
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
                     * 
                     */
                    SwitchClusterLogBin m_switchClusterLogBin;
                    bool m_switchClusterLogBinHasBeenSet;

                    /**
                     * 
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
