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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_SERVICEVERSIONBRIEF_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_SERVICEVERSIONBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/LogOutputConf.h>
#include <tencentcloud/tem/v20210701/model/NodeInfo.h>
#include <tencentcloud/tem/v20210701/model/DescribeRunPodPage.h>
#include <tencentcloud/tem/v20210701/model/WorkloadInfo.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * List of application versions
                */
                class ServiceVersionBrief : public AbstractModel
                {
                public:
                    ServiceVersionBrief();
                    ~ServiceVersionBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Version name
                     * @return VersionName Version name
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置Version name
                     * @param VersionName Version name
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取Status of version
                     * @return Status Status of version
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status of version
                     * @param Status Status of version
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取(Disused) Whether to enable elastic scaling
                     * @return EnableEs (Disused) Whether to enable elastic scaling
                     */
                    int64_t GetEnableEs() const;

                    /**
                     * 设置(Disused) Whether to enable elastic scaling
                     * @param EnableEs (Disused) Whether to enable elastic scaling
                     */
                    void SetEnableEs(const int64_t& _enableEs);

                    /**
                     * 判断参数 EnableEs 是否已赋值
                     * @return EnableEs 是否已赋值
                     */
                    bool EnableEsHasBeenSet() const;

                    /**
                     * 获取Number of current instances
                     * @return CurrentInstances Number of current instances
                     */
                    int64_t GetCurrentInstances() const;

                    /**
                     * 设置Number of current instances
                     * @param CurrentInstances Number of current instances
                     */
                    void SetCurrentInstances(const int64_t& _currentInstances);

                    /**
                     * 判断参数 CurrentInstances 是否已赋值
                     * @return CurrentInstances 是否已赋值
                     */
                    bool CurrentInstancesHasBeenSet() const;

                    /**
                     * 获取Version ID
                     * @return VersionId Version ID
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置Version ID
                     * @param VersionId Version ID
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取(Disused) Log output configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogOutputConf (Disused) Log output configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    LogOutputConf GetLogOutputConf() const;

                    /**
                     * 设置(Disused) Log output configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param LogOutputConf (Disused) Log output configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLogOutputConf(const LogOutputConf& _logOutputConf);

                    /**
                     * 判断参数 LogOutputConf 是否已赋值
                     * @return LogOutputConf 是否已赋值
                     */
                    bool LogOutputConfHasBeenSet() const;

                    /**
                     * 获取Expected number of instances
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpectedInstances Expected number of instances
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetExpectedInstances() const;

                    /**
                     * 设置Expected number of instances
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ExpectedInstances Expected number of instances
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetExpectedInstances(const int64_t& _expectedInstances);

                    /**
                     * 判断参数 ExpectedInstances 是否已赋值
                     * @return ExpectedInstances 是否已赋值
                     */
                    bool ExpectedInstancesHasBeenSet() const;

                    /**
                     * 获取Deployment mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DeployMode Deployment mode
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDeployMode() const;

                    /**
                     * 设置Deployment mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DeployMode Deployment mode
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDeployMode(const std::string& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BuildTaskId Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetBuildTaskId() const;

                    /**
                     * 设置Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param BuildTaskId Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBuildTaskId(const std::string& _buildTaskId);

                    /**
                     * 判断参数 BuildTaskId 是否已赋值
                     * @return BuildTaskId 是否已赋值
                     */
                    bool BuildTaskIdHasBeenSet() const;

                    /**
                     * 获取Environment ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnvironmentId Environment ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EnvironmentId Environment ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Environment name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnvironmentName Environment name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置Environment name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EnvironmentName Environment name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取Application ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationId Application ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ApplicationId Application ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationName Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ApplicationName Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取Whether the application is being deployed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnderDeploying Whether the application is being deployed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetUnderDeploying() const;

                    /**
                     * 设置Whether the application is being deployed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UnderDeploying Whether the application is being deployed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUnderDeploying(const bool& _underDeploying);

                    /**
                     * 判断参数 UnderDeploying 是否已赋值
                     * @return UnderDeploying 是否已赋值
                     */
                    bool UnderDeployingHasBeenSet() const;

                    /**
                     * 获取Status of batch deployment
Note: This field may return `null`, indicating that no valid value was found.
                     * @return BatchDeployStatus Status of batch deployment
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetBatchDeployStatus() const;

                    /**
                     * 设置Status of batch deployment
Note: This field may return `null`, indicating that no valid value was found.
                     * @param BatchDeployStatus Status of batch deployment
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetBatchDeployStatus(const std::string& _batchDeployStatus);

                    /**
                     * 判断参数 BatchDeployStatus 是否已赋值
                     * @return BatchDeployStatus 是否已赋值
                     */
                    bool BatchDeployStatusHasBeenSet() const;

                    /**
                     * 获取Availability zones
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Zones Availability zones
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置Availability zones
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Zones Availability zones
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取Node information
Note: This field may return `null`, indicating that no valid value was found.
                     * @return NodeInfos Node information
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<NodeInfo> GetNodeInfos() const;

                    /**
                     * 设置Node information
Note: This field may return `null`, indicating that no valid value was found.
                     * @param NodeInfos Node information
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetNodeInfos(const std::vector<NodeInfo>& _nodeInfos);

                    /**
                     * 判断参数 NodeInfos 是否已赋值
                     * @return NodeInfos 是否已赋值
                     */
                    bool NodeInfosHasBeenSet() const;

                    /**
                     * 获取Pod information
Note: This field may return `null`, indicating that no valid value was found.
                     * @return PodList Pod information
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    DescribeRunPodPage GetPodList() const;

                    /**
                     * 设置Pod information
Note: This field may return `null`, indicating that no valid value was found.
                     * @param PodList Pod information
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetPodList(const DescribeRunPodPage& _podList);

                    /**
                     * 判断参数 PodList 是否已赋值
                     * @return PodList 是否已赋值
                     */
                    bool PodListHasBeenSet() const;

                    /**
                     * 获取Workload information
Note: This field may return `null`, indicating that no valid value was found.
                     * @return WorkloadInfo Workload information
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    WorkloadInfo GetWorkloadInfo() const;

                    /**
                     * 设置Workload information
Note: This field may return `null`, indicating that no valid value was found.
                     * @param WorkloadInfo Workload information
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetWorkloadInfo(const WorkloadInfo& _workloadInfo);

                    /**
                     * 判断参数 WorkloadInfo 是否已赋值
                     * @return WorkloadInfo 是否已赋值
                     */
                    bool WorkloadInfoHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: This field may return `null`, indicating that no valid value was found.
                     * @return CreateDate Creation time
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetCreateDate() const;

                    /**
                     * 设置Creation time
Note: This field may return `null`, indicating that no valid value was found.
                     * @param CreateDate Creation time
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetCreateDate(const std::string& _createDate);

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     */
                    bool CreateDateHasBeenSet() const;

                    /**
                     * 获取Region ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionId Region ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Region ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RegionId Region ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * Version name
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * Status of version
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * (Disused) Whether to enable elastic scaling
                     */
                    int64_t m_enableEs;
                    bool m_enableEsHasBeenSet;

                    /**
                     * Number of current instances
                     */
                    int64_t m_currentInstances;
                    bool m_currentInstancesHasBeenSet;

                    /**
                     * Version ID
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * (Disused) Log output configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    LogOutputConf m_logOutputConf;
                    bool m_logOutputConfHasBeenSet;

                    /**
                     * Expected number of instances
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_expectedInstances;
                    bool m_expectedInstancesHasBeenSet;

                    /**
                     * Deployment mode
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_buildTaskId;
                    bool m_buildTaskIdHasBeenSet;

                    /**
                     * Environment ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Environment name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * Application ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Whether the application is being deployed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_underDeploying;
                    bool m_underDeployingHasBeenSet;

                    /**
                     * Status of batch deployment
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_batchDeployStatus;
                    bool m_batchDeployStatusHasBeenSet;

                    /**
                     * Availability zones
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Node information
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<NodeInfo> m_nodeInfos;
                    bool m_nodeInfosHasBeenSet;

                    /**
                     * Pod information
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    DescribeRunPodPage m_podList;
                    bool m_podListHasBeenSet;

                    /**
                     * Workload information
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    WorkloadInfo m_workloadInfo;
                    bool m_workloadInfoHasBeenSet;

                    /**
                     * Creation time
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_createDate;
                    bool m_createDateHasBeenSet;

                    /**
                     * Region ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_SERVICEVERSIONBRIEF_H_
