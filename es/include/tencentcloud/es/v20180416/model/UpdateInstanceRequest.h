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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_UPDATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_UPDATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/EsAcl.h>
#include <tencentcloud/es/v20180416/model/CosBackup.h>
#include <tencentcloud/es/v20180416/model/NodeInfo.h>
#include <tencentcloud/es/v20180416/model/EsPublicAcl.h>
#include <tencentcloud/es/v20180416/model/ZoneDetail.h>
#include <tencentcloud/es/v20180416/model/WebNodeTypeInfo.h>
#include <tencentcloud/es/v20180416/model/EsConfigSetInfo.h>
#include <tencentcloud/es/v20180416/model/OperationDurationUpdated.h>
#include <tencentcloud/es/v20180416/model/OutboundPublicAcl.h>
#include <tencentcloud/es/v20180416/model/EnableScheduleOperationDuration.h>
#include <tencentcloud/es/v20180416/model/AutoScaleDiskInfo.h>
#include <tencentcloud/es/v20180416/model/OtherConfig.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpdateInstance request structure.
                */
                class UpdateInstanceRequest : public AbstractModel
                {
                public:
                    UpdateInstanceRequest();
                    ~UpdateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Instance name (1-50 English letters, Chinese characters, digits, hyphens -, or underscores _)
                     * @return InstanceName Instance name (1-50 English letters, Chinese characters, digits, hyphens -, or underscores _)
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name (1-50 English letters, Chinese characters, digits, hyphens -, or underscores _)
                     * @param _instanceName Instance name (1-50 English letters, Chinese characters, digits, hyphens -, or underscores _)
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
                     * 获取Abandoned. Please use NodeInfoList.
Number of nodes (2-50).
                     * @return NodeNum Abandoned. Please use NodeInfoList.
Number of nodes (2-50).
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置Abandoned. Please use NodeInfoList.
Number of nodes (2-50).
                     * @param _nodeNum Abandoned. Please use NodeInfoList.
Number of nodes (2-50).
                     * 
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取ES configuration item (JSON format string)
                     * @return EsConfig ES configuration item (JSON format string)
                     * 
                     */
                    std::string GetEsConfig() const;

                    /**
                     * 设置ES configuration item (JSON format string)
                     * @param _esConfig ES configuration item (JSON format string)
                     * 
                     */
                    void SetEsConfig(const std::string& _esConfig);

                    /**
                     * 判断参数 EsConfig 是否已赋值
                     * @return EsConfig 是否已赋值
                     * 
                     */
                    bool EsConfigHasBeenSet() const;

                    /**
                     * 获取Password of the default user elastic (8–16 characters, including at least two of the following: [a-z,A-Z], [0-9], and special characters [-!@#$%&^*+=_:;,.?])
                     * @return Password Password of the default user elastic (8–16 characters, including at least two of the following: [a-z,A-Z], [0-9], and special characters [-!@#$%&^*+=_:;,.?])
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password of the default user elastic (8–16 characters, including at least two of the following: [a-z,A-Z], [0-9], and special characters [-!@#$%&^*+=_:;,.?])
                     * @param _password Password of the default user elastic (8–16 characters, including at least two of the following: [a-z,A-Z], [0-9], and special characters [-!@#$%&^*+=_:;,.?])
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Public access policy for visualization components (Kibana and Cerebro)
                     * @return EsAcl Public access policy for visualization components (Kibana and Cerebro)
                     * 
                     */
                    EsAcl GetEsAcl() const;

                    /**
                     * 设置Public access policy for visualization components (Kibana and Cerebro)
                     * @param _esAcl Public access policy for visualization components (Kibana and Cerebro)
                     * 
                     */
                    void SetEsAcl(const EsAcl& _esAcl);

                    /**
                     * 判断参数 EsAcl 是否已赋值
                     * @return EsAcl 是否已赋值
                     * 
                     */
                    bool EsAclHasBeenSet() const;

                    /**
                     * 获取Abandoned. Please use NodeInfoList.
Disk size in GB
                     * @return DiskSize Abandoned. Please use NodeInfoList.
Disk size in GB
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Abandoned. Please use NodeInfoList.
Disk size in GB
                     * @param _diskSize Abandoned. Please use NodeInfoList.
Disk size in GB
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Abandoned. Please use NodeInfoList.
Node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li>
                     * @return NodeType Abandoned. Please use NodeInfoList.
Node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Abandoned. Please use NodeInfoList.
Node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li>
                     * @param _nodeType Abandoned. Please use NodeInfoList.
Node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li>
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Abandoned. Please use NodeInfoList.
Number of dedicated primary nodes (supports only 3 or 5)
                     * @return MasterNodeNum Abandoned. Please use NodeInfoList.
Number of dedicated primary nodes (supports only 3 or 5)
                     * 
                     */
                    uint64_t GetMasterNodeNum() const;

                    /**
                     * 设置Abandoned. Please use NodeInfoList.
Number of dedicated primary nodes (supports only 3 or 5)
                     * @param _masterNodeNum Abandoned. Please use NodeInfoList.
Number of dedicated primary nodes (supports only 3 or 5)
                     * 
                     */
                    void SetMasterNodeNum(const uint64_t& _masterNodeNum);

                    /**
                     * 判断参数 MasterNodeNum 是否已赋值
                     * @return MasterNodeNum 是否已赋值
                     * 
                     */
                    bool MasterNodeNumHasBeenSet() const;

                    /**
                     * 获取Abandoned. Please use NodeInfoList.
Dedicated primary node specification<li>ES.S1.SMALL2: 1-core 2GB</li><li>ES.S1.MEDIUM4: 2-core 4GB</li><li>ES.S1.MEDIUM8: 2-core 8GB</li><li>ES.S1.LARGE16: 4-core 16GB</li><li>ES.S1.2XLARGE32: 8-core 32GB</li><li>ES.S1.4XLARGE32: 16-core 32GB</li><li>ES.S1.4XLARGE64: 16-core 64GB</li>
                     * @return MasterNodeType Abandoned. Please use NodeInfoList.
Dedicated primary node specification<li>ES.S1.SMALL2: 1-core 2GB</li><li>ES.S1.MEDIUM4: 2-core 4GB</li><li>ES.S1.MEDIUM8: 2-core 8GB</li><li>ES.S1.LARGE16: 4-core 16GB</li><li>ES.S1.2XLARGE32: 8-core 32GB</li><li>ES.S1.4XLARGE32: 16-core 32GB</li><li>ES.S1.4XLARGE64: 16-core 64GB</li>
                     * 
                     */
                    std::string GetMasterNodeType() const;

                    /**
                     * 设置Abandoned. Please use NodeInfoList.
Dedicated primary node specification<li>ES.S1.SMALL2: 1-core 2GB</li><li>ES.S1.MEDIUM4: 2-core 4GB</li><li>ES.S1.MEDIUM8: 2-core 8GB</li><li>ES.S1.LARGE16: 4-core 16GB</li><li>ES.S1.2XLARGE32: 8-core 32GB</li><li>ES.S1.4XLARGE32: 16-core 32GB</li><li>ES.S1.4XLARGE64: 16-core 64GB</li>
                     * @param _masterNodeType Abandoned. Please use NodeInfoList.
Dedicated primary node specification<li>ES.S1.SMALL2: 1-core 2GB</li><li>ES.S1.MEDIUM4: 2-core 4GB</li><li>ES.S1.MEDIUM8: 2-core 8GB</li><li>ES.S1.LARGE16: 4-core 16GB</li><li>ES.S1.2XLARGE32: 8-core 32GB</li><li>ES.S1.4XLARGE32: 16-core 32GB</li><li>ES.S1.4XLARGE64: 16-core 64GB</li>
                     * 
                     */
                    void SetMasterNodeType(const std::string& _masterNodeType);

                    /**
                     * 判断参数 MasterNodeType 是否已赋值
                     * @return MasterNodeType 是否已赋值
                     * 
                     */
                    bool MasterNodeTypeHasBeenSet() const;

                    /**
                     * 获取Abandoned. Please use NodeInfoList.
Dedicated primary node disk size (in GB. The system default configuration is 50 GB. Customization is temporarily not supported.)
                     * @return MasterNodeDiskSize Abandoned. Please use NodeInfoList.
Dedicated primary node disk size (in GB. The system default configuration is 50 GB. Customization is temporarily not supported.)
                     * 
                     */
                    uint64_t GetMasterNodeDiskSize() const;

                    /**
                     * 设置Abandoned. Please use NodeInfoList.
Dedicated primary node disk size (in GB. The system default configuration is 50 GB. Customization is temporarily not supported.)
                     * @param _masterNodeDiskSize Abandoned. Please use NodeInfoList.
Dedicated primary node disk size (in GB. The system default configuration is 50 GB. Customization is temporarily not supported.)
                     * 
                     */
                    void SetMasterNodeDiskSize(const uint64_t& _masterNodeDiskSize);

                    /**
                     * 判断参数 MasterNodeDiskSize 是否已赋值
                     * @return MasterNodeDiskSize 是否已赋值
                     * 
                     */
                    bool MasterNodeDiskSizeHasBeenSet() const;

                    /**
                     * 获取Whether to force restart when updating the configuration <li>true: force restart</li><li>false: do not force restart</li>Currently, this needs to be set only when updating EsConfig. The default value is false.
                     * @return ForceRestart Whether to force restart when updating the configuration <li>true: force restart</li><li>false: do not force restart</li>Currently, this needs to be set only when updating EsConfig. The default value is false.
                     * 
                     */
                    bool GetForceRestart() const;

                    /**
                     * 设置Whether to force restart when updating the configuration <li>true: force restart</li><li>false: do not force restart</li>Currently, this needs to be set only when updating EsConfig. The default value is false.
                     * @param _forceRestart Whether to force restart when updating the configuration <li>true: force restart</li><li>false: do not force restart</li>Currently, this needs to be set only when updating EsConfig. The default value is false.
                     * 
                     */
                    void SetForceRestart(const bool& _forceRestart);

                    /**
                     * 判断参数 ForceRestart 是否已赋值
                     * @return ForceRestart 是否已赋值
                     * 
                     */
                    bool ForceRestartHasBeenSet() const;

                    /**
                     * 获取COS auto backup information
                     * @return CosBackup COS auto backup information
                     * 
                     */
                    CosBackup GetCosBackup() const;

                    /**
                     * 设置COS auto backup information
                     * @param _cosBackup COS auto backup information
                     * 
                     */
                    void SetCosBackup(const CosBackup& _cosBackup);

                    /**
                     * 判断参数 CosBackup 是否已赋值
                     * @return CosBackup 是否已赋值
                     * 
                     */
                    bool CosBackupHasBeenSet() const;

                    /**
                     * 获取Node information list. You can transmit only the node to be updated and its corresponding specification information. Supported operations include <li>modifying the count of a node type</li><li>modifying the node specification and disk size of a node type</li><li>adding a node type (you need to simultaneously specify the node type, count, specification, disk, and other information)</li>. You can perform only one of the above operations at a time, and the disk type cannot be modified.
                     * @return NodeInfoList Node information list. You can transmit only the node to be updated and its corresponding specification information. Supported operations include <li>modifying the count of a node type</li><li>modifying the node specification and disk size of a node type</li><li>adding a node type (you need to simultaneously specify the node type, count, specification, disk, and other information)</li>. You can perform only one of the above operations at a time, and the disk type cannot be modified.
                     * 
                     */
                    std::vector<NodeInfo> GetNodeInfoList() const;

                    /**
                     * 设置Node information list. You can transmit only the node to be updated and its corresponding specification information. Supported operations include <li>modifying the count of a node type</li><li>modifying the node specification and disk size of a node type</li><li>adding a node type (you need to simultaneously specify the node type, count, specification, disk, and other information)</li>. You can perform only one of the above operations at a time, and the disk type cannot be modified.
                     * @param _nodeInfoList Node information list. You can transmit only the node to be updated and its corresponding specification information. Supported operations include <li>modifying the count of a node type</li><li>modifying the node specification and disk size of a node type</li><li>adding a node type (you need to simultaneously specify the node type, count, specification, disk, and other information)</li>. You can perform only one of the above operations at a time, and the disk type cannot be modified.
                     * 
                     */
                    void SetNodeInfoList(const std::vector<NodeInfo>& _nodeInfoList);

                    /**
                     * 判断参数 NodeInfoList 是否已赋值
                     * @return NodeInfoList 是否已赋值
                     * 
                     */
                    bool NodeInfoListHasBeenSet() const;

                    /**
                     * 获取Public access status of the ES cluster
OPEN: enabled.
-CLOSE: disabled.
                     * @return PublicAccess Public access status of the ES cluster
OPEN: enabled.
-CLOSE: disabled.
                     * 
                     */
                    std::string GetPublicAccess() const;

                    /**
                     * 设置Public access status of the ES cluster
OPEN: enabled.
-CLOSE: disabled.
                     * @param _publicAccess Public access status of the ES cluster
OPEN: enabled.
-CLOSE: disabled.
                     * 
                     */
                    void SetPublicAccess(const std::string& _publicAccess);

                    /**
                     * 判断参数 PublicAccess 是否已赋值
                     * @return PublicAccess 是否已赋值
                     * 
                     */
                    bool PublicAccessHasBeenSet() const;

                    /**
                     * 获取Public network access control list
                     * @return EsPublicAcl Public network access control list
                     * 
                     */
                    EsPublicAcl GetEsPublicAcl() const;

                    /**
                     * 设置Public network access control list
                     * @param _esPublicAcl Public network access control list
                     * 
                     */
                    void SetEsPublicAcl(const EsPublicAcl& _esPublicAcl);

                    /**
                     * 判断参数 EsPublicAcl 是否已赋值
                     * @return EsPublicAcl 是否已赋值
                     * 
                     */
                    bool EsPublicAclHasBeenSet() const;

                    /**
                     * 获取Kibana public access status
OPEN: enabled.
-CLOSE: disabled.
                     * @return KibanaPublicAccess Kibana public access status
OPEN: enabled.
-CLOSE: disabled.
                     * 
                     */
                    std::string GetKibanaPublicAccess() const;

                    /**
                     * 设置Kibana public access status
OPEN: enabled.
-CLOSE: disabled.
                     * @param _kibanaPublicAccess Kibana public access status
OPEN: enabled.
-CLOSE: disabled.
                     * 
                     */
                    void SetKibanaPublicAccess(const std::string& _kibanaPublicAccess);

                    /**
                     * 判断参数 KibanaPublicAccess 是否已赋值
                     * @return KibanaPublicAccess 是否已赋值
                     * 
                     */
                    bool KibanaPublicAccessHasBeenSet() const;

                    /**
                     * 获取Kibana internal access status
OPEN: enabled.
-CLOSE: disabled.
                     * @return KibanaPrivateAccess Kibana internal access status
OPEN: enabled.
-CLOSE: disabled.
                     * 
                     */
                    std::string GetKibanaPrivateAccess() const;

                    /**
                     * 设置Kibana internal access status
OPEN: enabled.
-CLOSE: disabled.
                     * @param _kibanaPrivateAccess Kibana internal access status
OPEN: enabled.
-CLOSE: disabled.
                     * 
                     */
                    void SetKibanaPrivateAccess(const std::string& _kibanaPrivateAccess);

                    /**
                     * 判断参数 KibanaPrivateAccess 是否已赋值
                     * @return KibanaPrivateAccess 是否已赋值
                     * 
                     */
                    bool KibanaPrivateAccessHasBeenSet() const;

                    /**
                     * 获取Turn on or off user authentication for the basic version of ES 6.8 and above
                     * @return BasicSecurityType Turn on or off user authentication for the basic version of ES 6.8 and above
                     * 
                     */
                    int64_t GetBasicSecurityType() const;

                    /**
                     * 设置Turn on or off user authentication for the basic version of ES 6.8 and above
                     * @param _basicSecurityType Turn on or off user authentication for the basic version of ES 6.8 and above
                     * 
                     */
                    void SetBasicSecurityType(const int64_t& _basicSecurityType);

                    /**
                     * 判断参数 BasicSecurityType 是否已赋值
                     * @return BasicSecurityType 是否已赋值
                     * 
                     */
                    bool BasicSecurityTypeHasBeenSet() const;

                    /**
                     * 获取Kibana private network port
                     * @return KibanaPrivatePort Kibana private network port
                     * 
                     */
                    uint64_t GetKibanaPrivatePort() const;

                    /**
                     * 设置Kibana private network port
                     * @param _kibanaPrivatePort Kibana private network port
                     * 
                     */
                    void SetKibanaPrivatePort(const uint64_t& _kibanaPrivatePort);

                    /**
                     * 判断参数 KibanaPrivatePort 是否已赋值
                     * @return KibanaPrivatePort 是否已赋值
                     * 
                     */
                    bool KibanaPrivatePortHasBeenSet() const;

                    /**
                     * 获取0: Scale out via blue-green change without restarting the cluster (default) 1: Scale out by unmounting disks with a cluster rolling restart
                     * @return ScaleType 0: Scale out via blue-green change without restarting the cluster (default) 1: Scale out by unmounting disks with a cluster rolling restart
                     * 
                     */
                    int64_t GetScaleType() const;

                    /**
                     * 设置0: Scale out via blue-green change without restarting the cluster (default) 1: Scale out by unmounting disks with a cluster rolling restart
                     * @param _scaleType 0: Scale out via blue-green change without restarting the cluster (default) 1: Scale out by unmounting disks with a cluster rolling restart
                     * 
                     */
                    void SetScaleType(const int64_t& _scaleType);

                    /**
                     * 判断参数 ScaleType 是否已赋值
                     * @return ScaleType 是否已赋值
                     * 
                     */
                    bool ScaleTypeHasBeenSet() const;

                    /**
                     * 获取Multi-AZ deployment
                     * @return MultiZoneInfo Multi-AZ deployment
                     * 
                     */
                    std::vector<ZoneDetail> GetMultiZoneInfo() const;

                    /**
                     * 设置Multi-AZ deployment
                     * @param _multiZoneInfo Multi-AZ deployment
                     * 
                     */
                    void SetMultiZoneInfo(const std::vector<ZoneDetail>& _multiZoneInfo);

                    /**
                     * 判断参数 MultiZoneInfo 是否已赋值
                     * @return MultiZoneInfo 是否已赋值
                     * 
                     */
                    bool MultiZoneInfoHasBeenSet() const;

                    /**
                     * 获取Scenario template type. -1: not enabled. 1: common. 2: log. 3: search
                     * @return SceneType Scenario template type. -1: not enabled. 1: common. 2: log. 3: search
                     * 
                     */
                    int64_t GetSceneType() const;

                    /**
                     * 设置Scenario template type. -1: not enabled. 1: common. 2: log. 3: search
                     * @param _sceneType Scenario template type. -1: not enabled. 1: common. 2: log. 3: search
                     * 
                     */
                    void SetSceneType(const int64_t& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取Kibana configuration item (JSON format string)
                     * @return KibanaConfig Kibana configuration item (JSON format string)
                     * 
                     */
                    std::string GetKibanaConfig() const;

                    /**
                     * 设置Kibana configuration item (JSON format string)
                     * @param _kibanaConfig Kibana configuration item (JSON format string)
                     * 
                     */
                    void SetKibanaConfig(const std::string& _kibanaConfig);

                    /**
                     * 判断参数 KibanaConfig 是否已赋值
                     * @return KibanaConfig 是否已赋值
                     * 
                     */
                    bool KibanaConfigHasBeenSet() const;

                    /**
                     * 获取Visualize node configuration
                     * @return WebNodeTypeInfo Visualize node configuration
                     * 
                     */
                    WebNodeTypeInfo GetWebNodeTypeInfo() const;

                    /**
                     * 设置Visualize node configuration
                     * @param _webNodeTypeInfo Visualize node configuration
                     * 
                     */
                    void SetWebNodeTypeInfo(const WebNodeTypeInfo& _webNodeTypeInfo);

                    /**
                     * 判断参数 WebNodeTypeInfo 是否已赋值
                     * @return WebNodeTypeInfo 是否已赋值
                     * 
                     */
                    bool WebNodeTypeInfoHasBeenSet() const;

                    /**
                     * 获取Switch to the new network architecture
                     * @return SwitchPrivateLink Switch to the new network architecture
                     * 
                     */
                    std::string GetSwitchPrivateLink() const;

                    /**
                     * 设置Switch to the new network architecture
                     * @param _switchPrivateLink Switch to the new network architecture
                     * 
                     */
                    void SetSwitchPrivateLink(const std::string& _switchPrivateLink);

                    /**
                     * 判断参数 SwitchPrivateLink 是否已赋值
                     * @return SwitchPrivateLink 是否已赋值
                     * 
                     */
                    bool SwitchPrivateLinkHasBeenSet() const;

                    /**
                     * 获取Enable Cerebro
                     * @return EnableCerebro Enable Cerebro
                     * 
                     */
                    bool GetEnableCerebro() const;

                    /**
                     * 设置Enable Cerebro
                     * @param _enableCerebro Enable Cerebro
                     * 
                     */
                    void SetEnableCerebro(const bool& _enableCerebro);

                    /**
                     * 判断参数 EnableCerebro 是否已赋值
                     * @return EnableCerebro 是否已赋值
                     * 
                     */
                    bool EnableCerebroHasBeenSet() const;

                    /**
                     * 获取Cerebro public access status
OPEN: enabled.
-CLOSE: disabled.
                     * @return CerebroPublicAccess Cerebro public access status
OPEN: enabled.
-CLOSE: disabled.
                     * 
                     */
                    std::string GetCerebroPublicAccess() const;

                    /**
                     * 设置Cerebro public access status
OPEN: enabled.
-CLOSE: disabled.
                     * @param _cerebroPublicAccess Cerebro public access status
OPEN: enabled.
-CLOSE: disabled.
                     * 
                     */
                    void SetCerebroPublicAccess(const std::string& _cerebroPublicAccess);

                    /**
                     * 判断参数 CerebroPublicAccess 是否已赋值
                     * @return CerebroPublicAccess 是否已赋值
                     * 
                     */
                    bool CerebroPublicAccessHasBeenSet() const;

                    /**
                     * 获取Cerebro private network access status
OPEN: enabled.
-CLOSE: disabled.
                     * @return CerebroPrivateAccess Cerebro private network access status
OPEN: enabled.
-CLOSE: disabled.
                     * 
                     */
                    std::string GetCerebroPrivateAccess() const;

                    /**
                     * 设置Cerebro private network access status
OPEN: enabled.
-CLOSE: disabled.
                     * @param _cerebroPrivateAccess Cerebro private network access status
OPEN: enabled.
-CLOSE: disabled.
                     * 
                     */
                    void SetCerebroPrivateAccess(const std::string& _cerebroPrivateAccess);

                    /**
                     * 判断参数 CerebroPrivateAccess 是否已赋值
                     * @return CerebroPrivateAccess 是否已赋值
                     * 
                     */
                    bool CerebroPrivateAccessHasBeenSet() const;

                    /**
                     * 获取Newly-added or modified configuration group information
                     * @return EsConfigSet Newly-added or modified configuration group information
                     * 
                     */
                    EsConfigSetInfo GetEsConfigSet() const;

                    /**
                     * 设置Newly-added or modified configuration group information
                     * @param _esConfigSet Newly-added or modified configuration group information
                     * 
                     */
                    void SetEsConfigSet(const EsConfigSetInfo& _esConfigSet);

                    /**
                     * 判断参数 EsConfigSet 是否已赋值
                     * @return EsConfigSet 是否已赋值
                     * 
                     */
                    bool EsConfigSetHasBeenSet() const;

                    /**
                     * 获取Maintenance time slot.
                     * @return OperationDuration Maintenance time slot.
                     * 
                     */
                    OperationDurationUpdated GetOperationDuration() const;

                    /**
                     * 设置Maintenance time slot.
                     * @param _operationDuration Maintenance time slot.
                     * 
                     */
                    void SetOperationDuration(const OperationDurationUpdated& _operationDuration);

                    /**
                     * 判断参数 OperationDuration 是否已赋值
                     * @return OperationDuration 是否已赋值
                     * 
                     */
                    bool OperationDurationHasBeenSet() const;

                    /**
                     * 获取Whether Alerting public network alert output is enabled:
OPEN: enabled.
-CLOSE: disabled.
                     * @return KibanaAlteringPublicAccess Whether Alerting public network alert output is enabled:
OPEN: enabled.
-CLOSE: disabled.
                     * 
                     */
                    std::string GetKibanaAlteringPublicAccess() const;

                    /**
                     * 设置Whether Alerting public network alert output is enabled:
OPEN: enabled.
-CLOSE: disabled.
                     * @param _kibanaAlteringPublicAccess Whether Alerting public network alert output is enabled:
OPEN: enabled.
-CLOSE: disabled.
                     * 
                     */
                    void SetKibanaAlteringPublicAccess(const std::string& _kibanaAlteringPublicAccess);

                    /**
                     * 判断参数 KibanaAlteringPublicAccess 是否已赋值
                     * @return KibanaAlteringPublicAccess 是否已赋值
                     * 
                     */
                    bool KibanaAlteringPublicAccessHasBeenSet() const;

                    /**
                     * 获取Custom domain name of kibana on the private network
                     * @return KibanaPrivateDomain Custom domain name of kibana on the private network
                     * 
                     */
                    std::string GetKibanaPrivateDomain() const;

                    /**
                     * 设置Custom domain name of kibana on the private network
                     * @param _kibanaPrivateDomain Custom domain name of kibana on the private network
                     * 
                     */
                    void SetKibanaPrivateDomain(const std::string& _kibanaPrivateDomain);

                    /**
                     * 判断参数 KibanaPrivateDomain 是否已赋值
                     * @return KibanaPrivateDomain 是否已赋值
                     * 
                     */
                    bool KibanaPrivateDomainHasBeenSet() const;

                    /**
                     * 获取Custom domain name of cerebro on the private network
                     * @return CerebroPrivateDomain Custom domain name of cerebro on the private network
                     * 
                     */
                    std::string GetCerebroPrivateDomain() const;

                    /**
                     * 设置Custom domain name of cerebro on the private network
                     * @param _cerebroPrivateDomain Custom domain name of cerebro on the private network
                     * 
                     */
                    void SetCerebroPrivateDomain(const std::string& _cerebroPrivateDomain);

                    /**
                     * 判断参数 CerebroPrivateDomain 是否已赋值
                     * @return CerebroPrivateDomain 是否已赋值
                     * 
                     */
                    bool CerebroPrivateDomainHasBeenSet() const;

                    /**
                     * 获取Change to an https cluster. http is selected by default.
                     * @return Protocol Change to an https cluster. http is selected by default.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Change to an https cluster. http is selected by default.
                     * @param _protocol Change to an https cluster. http is selected by default.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Outbound access details of the node

                     * @return OutboundPublicAcls Outbound access details of the node

                     * 
                     */
                    std::vector<OutboundPublicAcl> GetOutboundPublicAcls() const;

                    /**
                     * 设置Outbound access details of the node

                     * @param _outboundPublicAcls Outbound access details of the node

                     * 
                     */
                    void SetOutboundPublicAcls(const std::vector<OutboundPublicAcl>& _outboundPublicAcls);

                    /**
                     * 判断参数 OutboundPublicAcls 是否已赋值
                     * @return OutboundPublicAcls 是否已赋值
                     * 
                     */
                    bool OutboundPublicAclsHasBeenSet() const;

                    /**
                     * 获取Outbound access operations of the node
OPEN
-CLOSE: disabled.
                     * @return OutboundPublicAccess Outbound access operations of the node
OPEN
-CLOSE: disabled.
                     * 
                     */
                    std::string GetOutboundPublicAccess() const;

                    /**
                     * 设置Outbound access operations of the node
OPEN
-CLOSE: disabled.
                     * @param _outboundPublicAccess Outbound access operations of the node
OPEN
-CLOSE: disabled.
                     * 
                     */
                    void SetOutboundPublicAccess(const std::string& _outboundPublicAccess);

                    /**
                     * 判断参数 OutboundPublicAccess 是否已赋值
                     * @return OutboundPublicAccess 是否已赋值
                     * 
                     */
                    bool OutboundPublicAccessHasBeenSet() const;

                    /**
                     * 获取Parameter for delayed cvm launch
                     * @return CvmDelayOnlineTime Parameter for delayed cvm launch
                     * 
                     */
                    uint64_t GetCvmDelayOnlineTime() const;

                    /**
                     * 设置Parameter for delayed cvm launch
                     * @param _cvmDelayOnlineTime Parameter for delayed cvm launch
                     * 
                     */
                    void SetCvmDelayOnlineTime(const uint64_t& _cvmDelayOnlineTime);

                    /**
                     * 判断参数 CvmDelayOnlineTime 是否已赋值
                     * @return CvmDelayOnlineTime 是否已赋值
                     * 
                     */
                    bool CvmDelayOnlineTimeHasBeenSet() const;

                    /**
                     * 获取Number of concurrent shard migrations
                     * @return ShardAllocationConcurrents Number of concurrent shard migrations
                     * 
                     */
                    uint64_t GetShardAllocationConcurrents() const;

                    /**
                     * 设置Number of concurrent shard migrations
                     * @param _shardAllocationConcurrents Number of concurrent shard migrations
                     * 
                     */
                    void SetShardAllocationConcurrents(const uint64_t& _shardAllocationConcurrents);

                    /**
                     * 判断参数 ShardAllocationConcurrents 是否已赋值
                     * @return ShardAllocationConcurrents 是否已赋值
                     * 
                     */
                    bool ShardAllocationConcurrentsHasBeenSet() const;

                    /**
                     * 获取Shard migration concurrency speed
                     * @return ShardAllocationBytes Shard migration concurrency speed
                     * 
                     */
                    uint64_t GetShardAllocationBytes() const;

                    /**
                     * 设置Shard migration concurrency speed
                     * @param _shardAllocationBytes Shard migration concurrency speed
                     * 
                     */
                    void SetShardAllocationBytes(const uint64_t& _shardAllocationBytes);

                    /**
                     * 判断参数 ShardAllocationBytes 是否已赋值
                     * @return ShardAllocationBytes 是否已赋值
                     * 
                     */
                    bool ShardAllocationBytesHasBeenSet() const;

                    /**
                     * 获取Read-write separation mode: -1: not enabled; 1: local read/write separation; 2: remote read/write separation.
                     * @return ReadWriteMode Read-write separation mode: -1: not enabled; 1: local read/write separation; 2: remote read/write separation.
                     * 
                     */
                    int64_t GetReadWriteMode() const;

                    /**
                     * 设置Read-write separation mode: -1: not enabled; 1: local read/write separation; 2: remote read/write separation.
                     * @param _readWriteMode Read-write separation mode: -1: not enabled; 1: local read/write separation; 2: remote read/write separation.
                     * 
                     */
                    void SetReadWriteMode(const int64_t& _readWriteMode);

                    /**
                     * 判断参数 ReadWriteMode 是否已赋值
                     * @return ReadWriteMode 是否已赋值
                     * 
                     */
                    bool ReadWriteModeHasBeenSet() const;

                    /**
                     * 获取Whether to enable the placement group async task
                     * @return EnableScheduleRecoverGroup Whether to enable the placement group async task
                     * 
                     */
                    bool GetEnableScheduleRecoverGroup() const;

                    /**
                     * 设置Whether to enable the placement group async task
                     * @param _enableScheduleRecoverGroup Whether to enable the placement group async task
                     * 
                     */
                    void SetEnableScheduleRecoverGroup(const bool& _enableScheduleRecoverGroup);

                    /**
                     * 判断参数 EnableScheduleRecoverGroup 是否已赋值
                     * @return EnableScheduleRecoverGroup 是否已赋值
                     * 
                     */
                    bool EnableScheduleRecoverGroupHasBeenSet() const;

                    /**
                     * 获取Placement group async task maintenance time slot
                     * @return EnableScheduleOperationDuration Placement group async task maintenance time slot
                     * 
                     */
                    EnableScheduleOperationDuration GetEnableScheduleOperationDuration() const;

                    /**
                     * 设置Placement group async task maintenance time slot
                     * @param _enableScheduleOperationDuration Placement group async task maintenance time slot
                     * 
                     */
                    void SetEnableScheduleOperationDuration(const EnableScheduleOperationDuration& _enableScheduleOperationDuration);

                    /**
                     * 判断参数 EnableScheduleOperationDuration 是否已赋值
                     * @return EnableScheduleOperationDuration 是否已赋值
                     * 
                     */
                    bool EnableScheduleOperationDurationHasBeenSet() const;

                    /**
                     * 获取Cluster protection: OPEN: enable, CLOSE: disable
                     * @return EnableDestroyProtection Cluster protection: OPEN: enable, CLOSE: disable
                     * 
                     */
                    std::string GetEnableDestroyProtection() const;

                    /**
                     * 设置Cluster protection: OPEN: enable, CLOSE: disable
                     * @param _enableDestroyProtection Cluster protection: OPEN: enable, CLOSE: disable
                     * 
                     */
                    void SetEnableDestroyProtection(const std::string& _enableDestroyProtection);

                    /**
                     * 判断参数 EnableDestroyProtection 是否已赋值
                     * @return EnableDestroyProtection 是否已赋值
                     * 
                     */
                    bool EnableDestroyProtectionHasBeenSet() const;

                    /**
                     * 获取Auto capacity expansion parameter
                     * @return AutoScaleDiskInfoList Auto capacity expansion parameter
                     * 
                     */
                    std::vector<AutoScaleDiskInfo> GetAutoScaleDiskInfoList() const;

                    /**
                     * 设置Auto capacity expansion parameter
                     * @param _autoScaleDiskInfoList Auto capacity expansion parameter
                     * 
                     */
                    void SetAutoScaleDiskInfoList(const std::vector<AutoScaleDiskInfo>& _autoScaleDiskInfoList);

                    /**
                     * 判断参数 AutoScaleDiskInfoList 是否已赋值
                     * @return AutoScaleDiskInfoList 是否已赋值
                     * 
                     */
                    bool AutoScaleDiskInfoListHasBeenSet() const;

                    /**
                     * 获取Auto-expansion delete parameter
                     * @return AutoScaleDiskDeleteNodeTypeList Auto-expansion delete parameter
                     * 
                     */
                    std::vector<std::string> GetAutoScaleDiskDeleteNodeTypeList() const;

                    /**
                     * 设置Auto-expansion delete parameter
                     * @param _autoScaleDiskDeleteNodeTypeList Auto-expansion delete parameter
                     * 
                     */
                    void SetAutoScaleDiskDeleteNodeTypeList(const std::vector<std::string>& _autoScaleDiskDeleteNodeTypeList);

                    /**
                     * 判断参数 AutoScaleDiskDeleteNodeTypeList 是否已赋值
                     * @return AutoScaleDiskDeleteNodeTypeList 是否已赋值
                     * 
                     */
                    bool AutoScaleDiskDeleteNodeTypeListHasBeenSet() const;

                    /**
                     * 获取Other additional configuration, jvm or yml.
                     * @return OtherConfig Other additional configuration, jvm or yml.
                     * 
                     */
                    OtherConfig GetOtherConfig() const;

                    /**
                     * 设置Other additional configuration, jvm or yml.
                     * @param _otherConfig Other additional configuration, jvm or yml.
                     * 
                     */
                    void SetOtherConfig(const OtherConfig& _otherConfig);

                    /**
                     * 判断参数 OtherConfig 是否已赋值
                     * @return OtherConfig 是否已赋值
                     * 
                     */
                    bool OtherConfigHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name (1-50 English letters, Chinese characters, digits, hyphens -, or underscores _)
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Abandoned. Please use NodeInfoList.
Number of nodes (2-50).
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * ES configuration item (JSON format string)
                     */
                    std::string m_esConfig;
                    bool m_esConfigHasBeenSet;

                    /**
                     * Password of the default user elastic (8–16 characters, including at least two of the following: [a-z,A-Z], [0-9], and special characters [-!@#$%&^*+=_:;,.?])
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Public access policy for visualization components (Kibana and Cerebro)
                     */
                    EsAcl m_esAcl;
                    bool m_esAclHasBeenSet;

                    /**
                     * Abandoned. Please use NodeInfoList.
Disk size in GB
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Abandoned. Please use NodeInfoList.
Node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Abandoned. Please use NodeInfoList.
Number of dedicated primary nodes (supports only 3 or 5)
                     */
                    uint64_t m_masterNodeNum;
                    bool m_masterNodeNumHasBeenSet;

                    /**
                     * Abandoned. Please use NodeInfoList.
Dedicated primary node specification<li>ES.S1.SMALL2: 1-core 2GB</li><li>ES.S1.MEDIUM4: 2-core 4GB</li><li>ES.S1.MEDIUM8: 2-core 8GB</li><li>ES.S1.LARGE16: 4-core 16GB</li><li>ES.S1.2XLARGE32: 8-core 32GB</li><li>ES.S1.4XLARGE32: 16-core 32GB</li><li>ES.S1.4XLARGE64: 16-core 64GB</li>
                     */
                    std::string m_masterNodeType;
                    bool m_masterNodeTypeHasBeenSet;

                    /**
                     * Abandoned. Please use NodeInfoList.
Dedicated primary node disk size (in GB. The system default configuration is 50 GB. Customization is temporarily not supported.)
                     */
                    uint64_t m_masterNodeDiskSize;
                    bool m_masterNodeDiskSizeHasBeenSet;

                    /**
                     * Whether to force restart when updating the configuration <li>true: force restart</li><li>false: do not force restart</li>Currently, this needs to be set only when updating EsConfig. The default value is false.
                     */
                    bool m_forceRestart;
                    bool m_forceRestartHasBeenSet;

                    /**
                     * COS auto backup information
                     */
                    CosBackup m_cosBackup;
                    bool m_cosBackupHasBeenSet;

                    /**
                     * Node information list. You can transmit only the node to be updated and its corresponding specification information. Supported operations include <li>modifying the count of a node type</li><li>modifying the node specification and disk size of a node type</li><li>adding a node type (you need to simultaneously specify the node type, count, specification, disk, and other information)</li>. You can perform only one of the above operations at a time, and the disk type cannot be modified.
                     */
                    std::vector<NodeInfo> m_nodeInfoList;
                    bool m_nodeInfoListHasBeenSet;

                    /**
                     * Public access status of the ES cluster
OPEN: enabled.
-CLOSE: disabled.
                     */
                    std::string m_publicAccess;
                    bool m_publicAccessHasBeenSet;

                    /**
                     * Public network access control list
                     */
                    EsPublicAcl m_esPublicAcl;
                    bool m_esPublicAclHasBeenSet;

                    /**
                     * Kibana public access status
OPEN: enabled.
-CLOSE: disabled.
                     */
                    std::string m_kibanaPublicAccess;
                    bool m_kibanaPublicAccessHasBeenSet;

                    /**
                     * Kibana internal access status
OPEN: enabled.
-CLOSE: disabled.
                     */
                    std::string m_kibanaPrivateAccess;
                    bool m_kibanaPrivateAccessHasBeenSet;

                    /**
                     * Turn on or off user authentication for the basic version of ES 6.8 and above
                     */
                    int64_t m_basicSecurityType;
                    bool m_basicSecurityTypeHasBeenSet;

                    /**
                     * Kibana private network port
                     */
                    uint64_t m_kibanaPrivatePort;
                    bool m_kibanaPrivatePortHasBeenSet;

                    /**
                     * 0: Scale out via blue-green change without restarting the cluster (default) 1: Scale out by unmounting disks with a cluster rolling restart
                     */
                    int64_t m_scaleType;
                    bool m_scaleTypeHasBeenSet;

                    /**
                     * Multi-AZ deployment
                     */
                    std::vector<ZoneDetail> m_multiZoneInfo;
                    bool m_multiZoneInfoHasBeenSet;

                    /**
                     * Scenario template type. -1: not enabled. 1: common. 2: log. 3: search
                     */
                    int64_t m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * Kibana configuration item (JSON format string)
                     */
                    std::string m_kibanaConfig;
                    bool m_kibanaConfigHasBeenSet;

                    /**
                     * Visualize node configuration
                     */
                    WebNodeTypeInfo m_webNodeTypeInfo;
                    bool m_webNodeTypeInfoHasBeenSet;

                    /**
                     * Switch to the new network architecture
                     */
                    std::string m_switchPrivateLink;
                    bool m_switchPrivateLinkHasBeenSet;

                    /**
                     * Enable Cerebro
                     */
                    bool m_enableCerebro;
                    bool m_enableCerebroHasBeenSet;

                    /**
                     * Cerebro public access status
OPEN: enabled.
-CLOSE: disabled.
                     */
                    std::string m_cerebroPublicAccess;
                    bool m_cerebroPublicAccessHasBeenSet;

                    /**
                     * Cerebro private network access status
OPEN: enabled.
-CLOSE: disabled.
                     */
                    std::string m_cerebroPrivateAccess;
                    bool m_cerebroPrivateAccessHasBeenSet;

                    /**
                     * Newly-added or modified configuration group information
                     */
                    EsConfigSetInfo m_esConfigSet;
                    bool m_esConfigSetHasBeenSet;

                    /**
                     * Maintenance time slot.
                     */
                    OperationDurationUpdated m_operationDuration;
                    bool m_operationDurationHasBeenSet;

                    /**
                     * Whether Alerting public network alert output is enabled:
OPEN: enabled.
-CLOSE: disabled.
                     */
                    std::string m_kibanaAlteringPublicAccess;
                    bool m_kibanaAlteringPublicAccessHasBeenSet;

                    /**
                     * Custom domain name of kibana on the private network
                     */
                    std::string m_kibanaPrivateDomain;
                    bool m_kibanaPrivateDomainHasBeenSet;

                    /**
                     * Custom domain name of cerebro on the private network
                     */
                    std::string m_cerebroPrivateDomain;
                    bool m_cerebroPrivateDomainHasBeenSet;

                    /**
                     * Change to an https cluster. http is selected by default.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Outbound access details of the node

                     */
                    std::vector<OutboundPublicAcl> m_outboundPublicAcls;
                    bool m_outboundPublicAclsHasBeenSet;

                    /**
                     * Outbound access operations of the node
OPEN
-CLOSE: disabled.
                     */
                    std::string m_outboundPublicAccess;
                    bool m_outboundPublicAccessHasBeenSet;

                    /**
                     * Parameter for delayed cvm launch
                     */
                    uint64_t m_cvmDelayOnlineTime;
                    bool m_cvmDelayOnlineTimeHasBeenSet;

                    /**
                     * Number of concurrent shard migrations
                     */
                    uint64_t m_shardAllocationConcurrents;
                    bool m_shardAllocationConcurrentsHasBeenSet;

                    /**
                     * Shard migration concurrency speed
                     */
                    uint64_t m_shardAllocationBytes;
                    bool m_shardAllocationBytesHasBeenSet;

                    /**
                     * Read-write separation mode: -1: not enabled; 1: local read/write separation; 2: remote read/write separation.
                     */
                    int64_t m_readWriteMode;
                    bool m_readWriteModeHasBeenSet;

                    /**
                     * Whether to enable the placement group async task
                     */
                    bool m_enableScheduleRecoverGroup;
                    bool m_enableScheduleRecoverGroupHasBeenSet;

                    /**
                     * Placement group async task maintenance time slot
                     */
                    EnableScheduleOperationDuration m_enableScheduleOperationDuration;
                    bool m_enableScheduleOperationDurationHasBeenSet;

                    /**
                     * Cluster protection: OPEN: enable, CLOSE: disable
                     */
                    std::string m_enableDestroyProtection;
                    bool m_enableDestroyProtectionHasBeenSet;

                    /**
                     * Auto capacity expansion parameter
                     */
                    std::vector<AutoScaleDiskInfo> m_autoScaleDiskInfoList;
                    bool m_autoScaleDiskInfoListHasBeenSet;

                    /**
                     * Auto-expansion delete parameter
                     */
                    std::vector<std::string> m_autoScaleDiskDeleteNodeTypeList;
                    bool m_autoScaleDiskDeleteNodeTypeListHasBeenSet;

                    /**
                     * Other additional configuration, jvm or yml.
                     */
                    OtherConfig m_otherConfig;
                    bool m_otherConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPDATEINSTANCEREQUEST_H_
