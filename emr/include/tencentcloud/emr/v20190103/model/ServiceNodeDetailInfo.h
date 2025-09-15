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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SERVICENODEDETAILINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SERVICENODEDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ServiceProcessFunctionInfo.h>
#include <tencentcloud/emr/v20190103/model/HealthStatus.h>
#include <tencentcloud/emr/v20190103/model/RestartPolicy.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Service process information.
                */
                class ServiceNodeDetailInfo : public AbstractModel
                {
                public:
                    ServiceNodeDetailInfo();
                    ~ServiceNodeDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Process node IP
                     * @return Ip Process node IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Process node IP
                     * @param _ip Process node IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Process type.
                     * @return NodeType Process type.
                     * 
                     */
                    int64_t GetNodeType() const;

                    /**
                     * 设置Process type.
                     * @param _nodeType Process type.
                     * 
                     */
                    void SetNodeType(const int64_t& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Process name
                     * @return NodeName Process name
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Process name
                     * @param _nodeName Process name
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Service component status
                     * @return ServiceStatus Service component status
                     * 
                     */
                    int64_t GetServiceStatus() const;

                    /**
                     * 设置Service component status
                     * @param _serviceStatus Service component status
                     * 
                     */
                    void SetServiceStatus(const int64_t& _serviceStatus);

                    /**
                     * 判断参数 ServiceStatus 是否已赋值
                     * @return ServiceStatus 是否已赋值
                     * 
                     */
                    bool ServiceStatusHasBeenSet() const;

                    /**
                     * 获取Process monitoring status
                     * @return MonitorStatus Process monitoring status
                     * 
                     */
                    int64_t GetMonitorStatus() const;

                    /**
                     * 设置Process monitoring status
                     * @param _monitorStatus Process monitoring status
                     * 
                     */
                    void SetMonitorStatus(const int64_t& _monitorStatus);

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     * 
                     */
                    bool MonitorStatusHasBeenSet() const;

                    /**
                     * 获取Service component status
                     * @return Status Service component status
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Service component status
                     * @param _status Service component status
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Process port information
                     * @return PortsInfo Process port information
                     * 
                     */
                    std::string GetPortsInfo() const;

                    /**
                     * 设置Process port information
                     * @param _portsInfo Process port information
                     * 
                     */
                    void SetPortsInfo(const std::string& _portsInfo);

                    /**
                     * 判断参数 PortsInfo 是否已赋值
                     * @return PortsInfo 是否已赋值
                     * 
                     */
                    bool PortsInfoHasBeenSet() const;

                    /**
                     * 获取Last restart time.
                     * @return LastRestartTime Last restart time.
                     * 
                     */
                    std::string GetLastRestartTime() const;

                    /**
                     * 设置Last restart time.
                     * @param _lastRestartTime Last restart time.
                     * 
                     */
                    void SetLastRestartTime(const std::string& _lastRestartTime);

                    /**
                     * 判断参数 LastRestartTime 是否已赋值
                     * @return LastRestartTime 是否已赋值
                     * 
                     */
                    bool LastRestartTimeHasBeenSet() const;

                    /**
                     * 获取Node type.
                     * @return Flag Node type.
                     * 
                     */
                    int64_t GetFlag() const;

                    /**
                     * 设置Node type.
                     * @param _flag Node type.
                     * 
                     */
                    void SetFlag(const int64_t& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取Configuration group ID.
                     * @return ConfGroupId Configuration group ID.
                     * 
                     */
                    int64_t GetConfGroupId() const;

                    /**
                     * 设置Configuration group ID.
                     * @param _confGroupId Configuration group ID.
                     * 
                     */
                    void SetConfGroupId(const int64_t& _confGroupId);

                    /**
                     * 判断参数 ConfGroupId 是否已赋值
                     * @return ConfGroupId 是否已赋值
                     * 
                     */
                    bool ConfGroupIdHasBeenSet() const;

                    /**
                     * 获取Configuration group name.
                     * @return ConfGroupName Configuration group name.
                     * 
                     */
                    std::string GetConfGroupName() const;

                    /**
                     * 设置Configuration group name.
                     * @param _confGroupName Configuration group name.
                     * 
                     */
                    void SetConfGroupName(const std::string& _confGroupName);

                    /**
                     * 判断参数 ConfGroupName 是否已赋值
                     * @return ConfGroupName 是否已赋值
                     * 
                     */
                    bool ConfGroupNameHasBeenSet() const;

                    /**
                     * 获取Whether the node needs to be restarted
                     * @return ConfStatus Whether the node needs to be restarted
                     * 
                     */
                    int64_t GetConfStatus() const;

                    /**
                     * 设置Whether the node needs to be restarted
                     * @param _confStatus Whether the node needs to be restarted
                     * 
                     */
                    void SetConfStatus(const int64_t& _confStatus);

                    /**
                     * 判断参数 ConfStatus 是否已赋值
                     * @return ConfStatus 是否已赋值
                     * 
                     */
                    bool ConfStatusHasBeenSet() const;

                    /**
                     * 获取Process detection information

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceDetectionInfo Process detection information

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ServiceProcessFunctionInfo> GetServiceDetectionInfo() const;

                    /**
                     * 设置Process detection information

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceDetectionInfo Process detection information

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceDetectionInfo(const std::vector<ServiceProcessFunctionInfo>& _serviceDetectionInfo);

                    /**
                     * 判断参数 ServiceDetectionInfo 是否已赋值
                     * @return ServiceDetectionInfo 是否已赋值
                     * 
                     */
                    bool ServiceDetectionInfoHasBeenSet() const;

                    /**
                     * 获取Node type.
                     * @return NodeFlagFilter Node type.
                     * 
                     */
                    std::string GetNodeFlagFilter() const;

                    /**
                     * 设置Node type.
                     * @param _nodeFlagFilter Node type.
                     * 
                     */
                    void SetNodeFlagFilter(const std::string& _nodeFlagFilter);

                    /**
                     * 判断参数 NodeFlagFilter 是否已赋值
                     * @return NodeFlagFilter 是否已赋值
                     * 
                     */
                    bool NodeFlagFilterHasBeenSet() const;

                    /**
                     * 获取Process health status

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HealthStatus Process health status

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    HealthStatus GetHealthStatus() const;

                    /**
                     * 设置Process health status

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _healthStatus Process health status

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHealthStatus(const HealthStatus& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                    /**
                     * 获取Whether the role supports monitoring.
                     * @return IsSupportRoleMonitor Whether the role supports monitoring.
                     * 
                     */
                    bool GetIsSupportRoleMonitor() const;

                    /**
                     * 设置Whether the role supports monitoring.
                     * @param _isSupportRoleMonitor Whether the role supports monitoring.
                     * 
                     */
                    void SetIsSupportRoleMonitor(const bool& _isSupportRoleMonitor);

                    /**
                     * 判断参数 IsSupportRoleMonitor 是否已赋值
                     * @return IsSupportRoleMonitor 是否已赋值
                     * 
                     */
                    bool IsSupportRoleMonitorHasBeenSet() const;

                    /**
                     * 获取Suspension policy

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StopPolicies Suspension policy

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RestartPolicy> GetStopPolicies() const;

                    /**
                     * 设置Suspension policy

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stopPolicies Suspension policy

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStopPolicies(const std::vector<RestartPolicy>& _stopPolicies);

                    /**
                     * 判断参数 StopPolicies 是否已赋值
                     * @return StopPolicies 是否已赋值
                     * 
                     */
                    bool StopPoliciesHasBeenSet() const;

                    /**
                     * 获取Strong validation of the API in a test environment. This strong validation doesn't exist on the current network, but it does exist in the data returned by the emrcc interface. If it’s not applied, an error will be reported. Omitting it will result in an error.
                     * @return HAState Strong validation of the API in a test environment. This strong validation doesn't exist on the current network, but it does exist in the data returned by the emrcc interface. If it’s not applied, an error will be reported. Omitting it will result in an error.
                     * 
                     */
                    std::string GetHAState() const;

                    /**
                     * 设置Strong validation of the API in a test environment. This strong validation doesn't exist on the current network, but it does exist in the data returned by the emrcc interface. If it’s not applied, an error will be reported. Omitting it will result in an error.
                     * @param _hAState Strong validation of the API in a test environment. This strong validation doesn't exist on the current network, but it does exist in the data returned by the emrcc interface. If it’s not applied, an error will be reported. Omitting it will result in an error.
                     * 
                     */
                    void SetHAState(const std::string& _hAState);

                    /**
                     * 判断参数 HAState 是否已赋值
                     * @return HAState 是否已赋值
                     * 
                     */
                    bool HAStateHasBeenSet() const;

                    /**
                     * 获取NameService name.
                     * @return NameService NameService name.
                     * 
                     */
                    std::string GetNameService() const;

                    /**
                     * 设置NameService name.
                     * @param _nameService NameService name.
                     * 
                     */
                    void SetNameService(const std::string& _nameService);

                    /**
                     * 判断参数 NameService 是否已赋值
                     * @return NameService 是否已赋值
                     * 
                     */
                    bool NameServiceHasBeenSet() const;

                    /**
                     * 获取Whether the federation is supported.
                     * @return IsFederation Whether the federation is supported.
                     * 
                     */
                    bool GetIsFederation() const;

                    /**
                     * 设置Whether the federation is supported.
                     * @param _isFederation Whether the federation is supported.
                     * 
                     */
                    void SetIsFederation(const bool& _isFederation);

                    /**
                     * 判断参数 IsFederation 是否已赋值
                     * @return IsFederation 是否已赋值
                     * 
                     */
                    bool IsFederationHasBeenSet() const;

                    /**
                     * 获取Whether the DataNode is in maintenance status.
                     * @return DataNodeMaintenanceState Whether the DataNode is in maintenance status.
                     * 
                     */
                    int64_t GetDataNodeMaintenanceState() const;

                    /**
                     * 设置Whether the DataNode is in maintenance status.
                     * @param _dataNodeMaintenanceState Whether the DataNode is in maintenance status.
                     * 
                     */
                    void SetDataNodeMaintenanceState(const int64_t& _dataNodeMaintenanceState);

                    /**
                     * 判断参数 DataNodeMaintenanceState 是否已赋值
                     * @return DataNodeMaintenanceState 是否已赋值
                     * 
                     */
                    bool DataNodeMaintenanceStateHasBeenSet() const;

                private:

                    /**
                     * Process node IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Process type.
                     */
                    int64_t m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Process name
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Service component status
                     */
                    int64_t m_serviceStatus;
                    bool m_serviceStatusHasBeenSet;

                    /**
                     * Process monitoring status
                     */
                    int64_t m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * Service component status
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Process port information
                     */
                    std::string m_portsInfo;
                    bool m_portsInfoHasBeenSet;

                    /**
                     * Last restart time.
                     */
                    std::string m_lastRestartTime;
                    bool m_lastRestartTimeHasBeenSet;

                    /**
                     * Node type.
                     */
                    int64_t m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * Configuration group ID.
                     */
                    int64_t m_confGroupId;
                    bool m_confGroupIdHasBeenSet;

                    /**
                     * Configuration group name.
                     */
                    std::string m_confGroupName;
                    bool m_confGroupNameHasBeenSet;

                    /**
                     * Whether the node needs to be restarted
                     */
                    int64_t m_confStatus;
                    bool m_confStatusHasBeenSet;

                    /**
                     * Process detection information

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ServiceProcessFunctionInfo> m_serviceDetectionInfo;
                    bool m_serviceDetectionInfoHasBeenSet;

                    /**
                     * Node type.
                     */
                    std::string m_nodeFlagFilter;
                    bool m_nodeFlagFilterHasBeenSet;

                    /**
                     * Process health status

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    HealthStatus m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * Whether the role supports monitoring.
                     */
                    bool m_isSupportRoleMonitor;
                    bool m_isSupportRoleMonitorHasBeenSet;

                    /**
                     * Suspension policy

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RestartPolicy> m_stopPolicies;
                    bool m_stopPoliciesHasBeenSet;

                    /**
                     * Strong validation of the API in a test environment. This strong validation doesn't exist on the current network, but it does exist in the data returned by the emrcc interface. If it’s not applied, an error will be reported. Omitting it will result in an error.
                     */
                    std::string m_hAState;
                    bool m_hAStateHasBeenSet;

                    /**
                     * NameService name.
                     */
                    std::string m_nameService;
                    bool m_nameServiceHasBeenSet;

                    /**
                     * Whether the federation is supported.
                     */
                    bool m_isFederation;
                    bool m_isFederationHasBeenSet;

                    /**
                     * Whether the DataNode is in maintenance status.
                     */
                    int64_t m_dataNodeMaintenanceState;
                    bool m_dataNodeMaintenanceStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SERVICENODEDETAILINFO_H_
