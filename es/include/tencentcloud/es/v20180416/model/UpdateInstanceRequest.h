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
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name, which can contain 1 to 50 English letters, Chinese characters, digits, dashes (-), or underscores (_)
                     * @return InstanceName Instance name, which can contain 1 to 50 English letters, Chinese characters, digits, dashes (-), or underscores (_)
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name, which can contain 1 to 50 English letters, Chinese characters, digits, dashes (-), or underscores (_)
                     * @param InstanceName Instance name, which can contain 1 to 50 English letters, Chinese characters, digits, dashes (-), or underscores (_)
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取This parameter has been disused. Please use `NodeInfoList`
Number of nodes (2-50)
                     * @return NodeNum This parameter has been disused. Please use `NodeInfoList`
Number of nodes (2-50)
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置This parameter has been disused. Please use `NodeInfoList`
Number of nodes (2-50)
                     * @param NodeNum This parameter has been disused. Please use `NodeInfoList`
Number of nodes (2-50)
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取ES configuration item (JSON string)
                     * @return EsConfig ES configuration item (JSON string)
                     */
                    std::string GetEsConfig() const;

                    /**
                     * 设置ES configuration item (JSON string)
                     * @param EsConfig ES configuration item (JSON string)
                     */
                    void SetEsConfig(const std::string& _esConfig);

                    /**
                     * 判断参数 EsConfig 是否已赋值
                     * @return EsConfig 是否已赋值
                     */
                    bool EsConfigHasBeenSet() const;

                    /**
                     * 获取Password of the default user 'elastic', which must contain 8 to 16 characters, including at least two of the following three types of characters: [a-z,A-Z], [0-9] and [-!@#$%&^*+=_:;,.?]
                     * @return Password Password of the default user 'elastic', which must contain 8 to 16 characters, including at least two of the following three types of characters: [a-z,A-Z], [0-9] and [-!@#$%&^*+=_:;,.?]
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password of the default user 'elastic', which must contain 8 to 16 characters, including at least two of the following three types of characters: [a-z,A-Z], [0-9] and [-!@#$%&^*+=_:;,.?]
                     * @param Password Password of the default user 'elastic', which must contain 8 to 16 characters, including at least two of the following three types of characters: [a-z,A-Z], [0-9] and [-!@#$%&^*+=_:;,.?]
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Access control list
                     * @return EsAcl Access control list
                     */
                    EsAcl GetEsAcl() const;

                    /**
                     * 设置Access control list
                     * @param EsAcl Access control list
                     */
                    void SetEsAcl(const EsAcl& _esAcl);

                    /**
                     * 判断参数 EsAcl 是否已赋值
                     * @return EsAcl 是否已赋值
                     */
                    bool EsAclHasBeenSet() const;

                    /**
                     * 获取This parameter has been disused. Please use `NodeInfoList`
Disk size in GB
                     * @return DiskSize This parameter has been disused. Please use `NodeInfoList`
Disk size in GB
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置This parameter has been disused. Please use `NodeInfoList`
Disk size in GB
                     * @param DiskSize This parameter has been disused. Please use `NodeInfoList`
Disk size in GB
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取This parameter has been disused. Please use `NodeInfoList`
Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     * @return NodeType This parameter has been disused. Please use `NodeInfoList`
Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置This parameter has been disused. Please use `NodeInfoList`
Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     * @param NodeType This parameter has been disused. Please use `NodeInfoList`
Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取This parameter has been disused. Please use `NodeInfoList`
Number of dedicated primary nodes (only 3 and 5 are supported)
                     * @return MasterNodeNum This parameter has been disused. Please use `NodeInfoList`
Number of dedicated primary nodes (only 3 and 5 are supported)
                     */
                    uint64_t GetMasterNodeNum() const;

                    /**
                     * 设置This parameter has been disused. Please use `NodeInfoList`
Number of dedicated primary nodes (only 3 and 5 are supported)
                     * @param MasterNodeNum This parameter has been disused. Please use `NodeInfoList`
Number of dedicated primary nodes (only 3 and 5 are supported)
                     */
                    void SetMasterNodeNum(const uint64_t& _masterNodeNum);

                    /**
                     * 判断参数 MasterNodeNum 是否已赋值
                     * @return MasterNodeNum 是否已赋值
                     */
                    bool MasterNodeNumHasBeenSet() const;

                    /**
                     * 获取This parameter has been disused. Please use `NodeInfoList`
Dedicated primary node specification <li>ES.S1.SMALL2: 1-core 2 GB</li><li>ES.S1.MEDIUM4: 2-core 4 GB</li><li>ES.S1.MEDIUM8: 2-core 8 GB</li><li>ES.S1.LARGE16: 4-core 16 GB</li><li>ES.S1.2XLARGE32: 8-core 32 GB</li><li>ES.S1.4XLARGE32: 16-core 32 GB</li><li>ES.S1.4XLARGE64: 16-core 64 GB</li>
                     * @return MasterNodeType This parameter has been disused. Please use `NodeInfoList`
Dedicated primary node specification <li>ES.S1.SMALL2: 1-core 2 GB</li><li>ES.S1.MEDIUM4: 2-core 4 GB</li><li>ES.S1.MEDIUM8: 2-core 8 GB</li><li>ES.S1.LARGE16: 4-core 16 GB</li><li>ES.S1.2XLARGE32: 8-core 32 GB</li><li>ES.S1.4XLARGE32: 16-core 32 GB</li><li>ES.S1.4XLARGE64: 16-core 64 GB</li>
                     */
                    std::string GetMasterNodeType() const;

                    /**
                     * 设置This parameter has been disused. Please use `NodeInfoList`
Dedicated primary node specification <li>ES.S1.SMALL2: 1-core 2 GB</li><li>ES.S1.MEDIUM4: 2-core 4 GB</li><li>ES.S1.MEDIUM8: 2-core 8 GB</li><li>ES.S1.LARGE16: 4-core 16 GB</li><li>ES.S1.2XLARGE32: 8-core 32 GB</li><li>ES.S1.4XLARGE32: 16-core 32 GB</li><li>ES.S1.4XLARGE64: 16-core 64 GB</li>
                     * @param MasterNodeType This parameter has been disused. Please use `NodeInfoList`
Dedicated primary node specification <li>ES.S1.SMALL2: 1-core 2 GB</li><li>ES.S1.MEDIUM4: 2-core 4 GB</li><li>ES.S1.MEDIUM8: 2-core 8 GB</li><li>ES.S1.LARGE16: 4-core 16 GB</li><li>ES.S1.2XLARGE32: 8-core 32 GB</li><li>ES.S1.4XLARGE32: 16-core 32 GB</li><li>ES.S1.4XLARGE64: 16-core 64 GB</li>
                     */
                    void SetMasterNodeType(const std::string& _masterNodeType);

                    /**
                     * 判断参数 MasterNodeType 是否已赋值
                     * @return MasterNodeType 是否已赋值
                     */
                    bool MasterNodeTypeHasBeenSet() const;

                    /**
                     * 获取This parameter has been disused. Please use `NodeInfoList`
Dedicated primary node disk size in GB. This is 50 GB by default and currently cannot be customized
                     * @return MasterNodeDiskSize This parameter has been disused. Please use `NodeInfoList`
Dedicated primary node disk size in GB. This is 50 GB by default and currently cannot be customized
                     */
                    uint64_t GetMasterNodeDiskSize() const;

                    /**
                     * 设置This parameter has been disused. Please use `NodeInfoList`
Dedicated primary node disk size in GB. This is 50 GB by default and currently cannot be customized
                     * @param MasterNodeDiskSize This parameter has been disused. Please use `NodeInfoList`
Dedicated primary node disk size in GB. This is 50 GB by default and currently cannot be customized
                     */
                    void SetMasterNodeDiskSize(const uint64_t& _masterNodeDiskSize);

                    /**
                     * 判断参数 MasterNodeDiskSize 是否已赋值
                     * @return MasterNodeDiskSize 是否已赋值
                     */
                    bool MasterNodeDiskSizeHasBeenSet() const;

                    /**
                     * 获取Whether to force restart during configuration update <li>true: Yes </li><li>false: No </li>This needs to be set only for EsConfig. Default value: false
                     * @return ForceRestart Whether to force restart during configuration update <li>true: Yes </li><li>false: No </li>This needs to be set only for EsConfig. Default value: false
                     */
                    bool GetForceRestart() const;

                    /**
                     * 设置Whether to force restart during configuration update <li>true: Yes </li><li>false: No </li>This needs to be set only for EsConfig. Default value: false
                     * @param ForceRestart Whether to force restart during configuration update <li>true: Yes </li><li>false: No </li>This needs to be set only for EsConfig. Default value: false
                     */
                    void SetForceRestart(const bool& _forceRestart);

                    /**
                     * 判断参数 ForceRestart 是否已赋值
                     * @return ForceRestart 是否已赋值
                     */
                    bool ForceRestartHasBeenSet() const;

                    /**
                     * 获取Auto-backup to COS
                     * @return CosBackup Auto-backup to COS
                     */
                    CosBackup GetCosBackup() const;

                    /**
                     * 设置Auto-backup to COS
                     * @param CosBackup Auto-backup to COS
                     */
                    void SetCosBackup(const CosBackup& _cosBackup);

                    /**
                     * 判断参数 CosBackup 是否已赋值
                     * @return CosBackup 是否已赋值
                     */
                    bool CosBackupHasBeenSet() const;

                    /**
                     * 获取Node information list. You can pass in only the nodes to be updated and their corresponding specification information. Supported operations include: <li>modifying the number of nodes in the same type </li><li>modifying the specification and disk size of nodes in the same type </li><li>adding a node type (you must also specify the node type, quantity, specification, disk, etc.) </li>The above operations can only be performed one at a time, and the disk type cannot be modified
                     * @return NodeInfoList Node information list. You can pass in only the nodes to be updated and their corresponding specification information. Supported operations include: <li>modifying the number of nodes in the same type </li><li>modifying the specification and disk size of nodes in the same type </li><li>adding a node type (you must also specify the node type, quantity, specification, disk, etc.) </li>The above operations can only be performed one at a time, and the disk type cannot be modified
                     */
                    std::vector<NodeInfo> GetNodeInfoList() const;

                    /**
                     * 设置Node information list. You can pass in only the nodes to be updated and their corresponding specification information. Supported operations include: <li>modifying the number of nodes in the same type </li><li>modifying the specification and disk size of nodes in the same type </li><li>adding a node type (you must also specify the node type, quantity, specification, disk, etc.) </li>The above operations can only be performed one at a time, and the disk type cannot be modified
                     * @param NodeInfoList Node information list. You can pass in only the nodes to be updated and their corresponding specification information. Supported operations include: <li>modifying the number of nodes in the same type </li><li>modifying the specification and disk size of nodes in the same type </li><li>adding a node type (you must also specify the node type, quantity, specification, disk, etc.) </li>The above operations can only be performed one at a time, and the disk type cannot be modified
                     */
                    void SetNodeInfoList(const std::vector<NodeInfo>& _nodeInfoList);

                    /**
                     * 判断参数 NodeInfoList 是否已赋值
                     * @return NodeInfoList 是否已赋值
                     */
                    bool NodeInfoListHasBeenSet() const;

                    /**
                     * 获取Public network access status
                     * @return PublicAccess Public network access status
                     */
                    std::string GetPublicAccess() const;

                    /**
                     * 设置Public network access status
                     * @param PublicAccess Public network access status
                     */
                    void SetPublicAccess(const std::string& _publicAccess);

                    /**
                     * 判断参数 PublicAccess 是否已赋值
                     * @return PublicAccess 是否已赋值
                     */
                    bool PublicAccessHasBeenSet() const;

                    /**
                     * 获取Public network ACL
                     * @return EsPublicAcl Public network ACL
                     */
                    EsPublicAcl GetEsPublicAcl() const;

                    /**
                     * 设置Public network ACL
                     * @param EsPublicAcl Public network ACL
                     */
                    void SetEsPublicAcl(const EsPublicAcl& _esPublicAcl);

                    /**
                     * 判断参数 EsPublicAcl 是否已赋值
                     * @return EsPublicAcl 是否已赋值
                     */
                    bool EsPublicAclHasBeenSet() const;

                    /**
                     * 获取Public network access status of Kibana
                     * @return KibanaPublicAccess Public network access status of Kibana
                     */
                    std::string GetKibanaPublicAccess() const;

                    /**
                     * 设置Public network access status of Kibana
                     * @param KibanaPublicAccess Public network access status of Kibana
                     */
                    void SetKibanaPublicAccess(const std::string& _kibanaPublicAccess);

                    /**
                     * 判断参数 KibanaPublicAccess 是否已赋值
                     * @return KibanaPublicAccess 是否已赋值
                     */
                    bool KibanaPublicAccessHasBeenSet() const;

                    /**
                     * 获取Private network access status of Kibana
                     * @return KibanaPrivateAccess Private network access status of Kibana
                     */
                    std::string GetKibanaPrivateAccess() const;

                    /**
                     * 设置Private network access status of Kibana
                     * @param KibanaPrivateAccess Private network access status of Kibana
                     */
                    void SetKibanaPrivateAccess(const std::string& _kibanaPrivateAccess);

                    /**
                     * 判断参数 KibanaPrivateAccess 是否已赋值
                     * @return KibanaPrivateAccess 是否已赋值
                     */
                    bool KibanaPrivateAccessHasBeenSet() const;

                    /**
                     * 获取Enables or disables user authentication for ES Basic Edition v6.8 and above
                     * @return BasicSecurityType Enables or disables user authentication for ES Basic Edition v6.8 and above
                     */
                    int64_t GetBasicSecurityType() const;

                    /**
                     * 设置Enables or disables user authentication for ES Basic Edition v6.8 and above
                     * @param BasicSecurityType Enables or disables user authentication for ES Basic Edition v6.8 and above
                     */
                    void SetBasicSecurityType(const int64_t& _basicSecurityType);

                    /**
                     * 判断参数 BasicSecurityType 是否已赋值
                     * @return BasicSecurityType 是否已赋值
                     */
                    bool BasicSecurityTypeHasBeenSet() const;

                    /**
                     * 获取Kibana private port
                     * @return KibanaPrivatePort Kibana private port
                     */
                    uint64_t GetKibanaPrivatePort() const;

                    /**
                     * 设置Kibana private port
                     * @param KibanaPrivatePort Kibana private port
                     */
                    void SetKibanaPrivatePort(const uint64_t& _kibanaPrivatePort);

                    /**
                     * 判断参数 KibanaPrivatePort 是否已赋值
                     * @return KibanaPrivatePort 是否已赋值
                     */
                    bool KibanaPrivatePortHasBeenSet() const;

                    /**
                     * 获取0: scaling in blue/green deployment mode without cluster restart (default); 1: scaling by unmounting disk with rolling cluster restart
                     * @return ScaleType 0: scaling in blue/green deployment mode without cluster restart (default); 1: scaling by unmounting disk with rolling cluster restart
                     */
                    int64_t GetScaleType() const;

                    /**
                     * 设置0: scaling in blue/green deployment mode without cluster restart (default); 1: scaling by unmounting disk with rolling cluster restart
                     * @param ScaleType 0: scaling in blue/green deployment mode without cluster restart (default); 1: scaling by unmounting disk with rolling cluster restart
                     */
                    void SetScaleType(const int64_t& _scaleType);

                    /**
                     * 判断参数 ScaleType 是否已赋值
                     * @return ScaleType 是否已赋值
                     */
                    bool ScaleTypeHasBeenSet() const;

                    /**
                     * 获取Multi-AZ deployment
                     * @return MultiZoneInfo Multi-AZ deployment
                     */
                    std::vector<ZoneDetail> GetMultiZoneInfo() const;

                    /**
                     * 设置Multi-AZ deployment
                     * @param MultiZoneInfo Multi-AZ deployment
                     */
                    void SetMultiZoneInfo(const std::vector<ZoneDetail>& _multiZoneInfo);

                    /**
                     * 判断参数 MultiZoneInfo 是否已赋值
                     * @return MultiZoneInfo 是否已赋值
                     */
                    bool MultiZoneInfoHasBeenSet() const;

                    /**
                     * 获取Scenario template type. -1: not enabled; 1: general; 2: log; 3: search
                     * @return SceneType Scenario template type. -1: not enabled; 1: general; 2: log; 3: search
                     */
                    int64_t GetSceneType() const;

                    /**
                     * 设置Scenario template type. -1: not enabled; 1: general; 2: log; 3: search
                     * @param SceneType Scenario template type. -1: not enabled; 1: general; 2: log; 3: search
                     */
                    void SetSceneType(const int64_t& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取Kibana configuration item (JSON string)
                     * @return KibanaConfig Kibana configuration item (JSON string)
                     */
                    std::string GetKibanaConfig() const;

                    /**
                     * 设置Kibana configuration item (JSON string)
                     * @param KibanaConfig Kibana configuration item (JSON string)
                     */
                    void SetKibanaConfig(const std::string& _kibanaConfig);

                    /**
                     * 判断参数 KibanaConfig 是否已赋值
                     * @return KibanaConfig 是否已赋值
                     */
                    bool KibanaConfigHasBeenSet() const;

                    /**
                     * 获取Visual node configuration
                     * @return WebNodeTypeInfo Visual node configuration
                     */
                    WebNodeTypeInfo GetWebNodeTypeInfo() const;

                    /**
                     * 设置Visual node configuration
                     * @param WebNodeTypeInfo Visual node configuration
                     */
                    void SetWebNodeTypeInfo(const WebNodeTypeInfo& _webNodeTypeInfo);

                    /**
                     * 判断参数 WebNodeTypeInfo 是否已赋值
                     * @return WebNodeTypeInfo 是否已赋值
                     */
                    bool WebNodeTypeInfoHasBeenSet() const;

                    /**
                     * 获取Whether to switch to the new network architecture
                     * @return SwitchPrivateLink Whether to switch to the new network architecture
                     */
                    std::string GetSwitchPrivateLink() const;

                    /**
                     * 设置Whether to switch to the new network architecture
                     * @param SwitchPrivateLink Whether to switch to the new network architecture
                     */
                    void SetSwitchPrivateLink(const std::string& _switchPrivateLink);

                    /**
                     * 判断参数 SwitchPrivateLink 是否已赋值
                     * @return SwitchPrivateLink 是否已赋值
                     */
                    bool SwitchPrivateLinkHasBeenSet() const;

                    /**
                     * 获取Whether to enable Cerebro
                     * @return EnableCerebro Whether to enable Cerebro
                     */
                    bool GetEnableCerebro() const;

                    /**
                     * 设置Whether to enable Cerebro
                     * @param EnableCerebro Whether to enable Cerebro
                     */
                    void SetEnableCerebro(const bool& _enableCerebro);

                    /**
                     * 判断参数 EnableCerebro 是否已赋值
                     * @return EnableCerebro 是否已赋值
                     */
                    bool EnableCerebroHasBeenSet() const;

                    /**
                     * 获取Cerebro public network access status
                     * @return CerebroPublicAccess Cerebro public network access status
                     */
                    std::string GetCerebroPublicAccess() const;

                    /**
                     * 设置Cerebro public network access status
                     * @param CerebroPublicAccess Cerebro public network access status
                     */
                    void SetCerebroPublicAccess(const std::string& _cerebroPublicAccess);

                    /**
                     * 判断参数 CerebroPublicAccess 是否已赋值
                     * @return CerebroPublicAccess 是否已赋值
                     */
                    bool CerebroPublicAccessHasBeenSet() const;

                    /**
                     * 获取Cerebro private network access status
                     * @return CerebroPrivateAccess Cerebro private network access status
                     */
                    std::string GetCerebroPrivateAccess() const;

                    /**
                     * 设置Cerebro private network access status
                     * @param CerebroPrivateAccess Cerebro private network access status
                     */
                    void SetCerebroPrivateAccess(const std::string& _cerebroPrivateAccess);

                    /**
                     * 判断参数 CerebroPrivateAccess 是否已赋值
                     * @return CerebroPrivateAccess 是否已赋值
                     */
                    bool CerebroPrivateAccessHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name, which can contain 1 to 50 English letters, Chinese characters, digits, dashes (-), or underscores (_)
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * This parameter has been disused. Please use `NodeInfoList`
Number of nodes (2-50)
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * ES configuration item (JSON string)
                     */
                    std::string m_esConfig;
                    bool m_esConfigHasBeenSet;

                    /**
                     * Password of the default user 'elastic', which must contain 8 to 16 characters, including at least two of the following three types of characters: [a-z,A-Z], [0-9] and [-!@#$%&^*+=_:;,.?]
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Access control list
                     */
                    EsAcl m_esAcl;
                    bool m_esAclHasBeenSet;

                    /**
                     * This parameter has been disused. Please use `NodeInfoList`
Disk size in GB
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * This parameter has been disused. Please use `NodeInfoList`
Node specification <li>ES.S1.SMALL2: 1-core 2 GB </li><li>ES.S1.MEDIUM4: 2-core 4 GB </li><li>ES.S1.MEDIUM8: 2-core 8 GB </li><li>ES.S1.LARGE16: 4-core 16 GB </li><li>ES.S1.2XLARGE32: 8-core 32 GB </li><li>ES.S1.4XLARGE32: 16-core 32 GB </li><li>ES.S1.4XLARGE64: 16-core 64 GB </li>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * This parameter has been disused. Please use `NodeInfoList`
Number of dedicated primary nodes (only 3 and 5 are supported)
                     */
                    uint64_t m_masterNodeNum;
                    bool m_masterNodeNumHasBeenSet;

                    /**
                     * This parameter has been disused. Please use `NodeInfoList`
Dedicated primary node specification <li>ES.S1.SMALL2: 1-core 2 GB</li><li>ES.S1.MEDIUM4: 2-core 4 GB</li><li>ES.S1.MEDIUM8: 2-core 8 GB</li><li>ES.S1.LARGE16: 4-core 16 GB</li><li>ES.S1.2XLARGE32: 8-core 32 GB</li><li>ES.S1.4XLARGE32: 16-core 32 GB</li><li>ES.S1.4XLARGE64: 16-core 64 GB</li>
                     */
                    std::string m_masterNodeType;
                    bool m_masterNodeTypeHasBeenSet;

                    /**
                     * This parameter has been disused. Please use `NodeInfoList`
Dedicated primary node disk size in GB. This is 50 GB by default and currently cannot be customized
                     */
                    uint64_t m_masterNodeDiskSize;
                    bool m_masterNodeDiskSizeHasBeenSet;

                    /**
                     * Whether to force restart during configuration update <li>true: Yes </li><li>false: No </li>This needs to be set only for EsConfig. Default value: false
                     */
                    bool m_forceRestart;
                    bool m_forceRestartHasBeenSet;

                    /**
                     * Auto-backup to COS
                     */
                    CosBackup m_cosBackup;
                    bool m_cosBackupHasBeenSet;

                    /**
                     * Node information list. You can pass in only the nodes to be updated and their corresponding specification information. Supported operations include: <li>modifying the number of nodes in the same type </li><li>modifying the specification and disk size of nodes in the same type </li><li>adding a node type (you must also specify the node type, quantity, specification, disk, etc.) </li>The above operations can only be performed one at a time, and the disk type cannot be modified
                     */
                    std::vector<NodeInfo> m_nodeInfoList;
                    bool m_nodeInfoListHasBeenSet;

                    /**
                     * Public network access status
                     */
                    std::string m_publicAccess;
                    bool m_publicAccessHasBeenSet;

                    /**
                     * Public network ACL
                     */
                    EsPublicAcl m_esPublicAcl;
                    bool m_esPublicAclHasBeenSet;

                    /**
                     * Public network access status of Kibana
                     */
                    std::string m_kibanaPublicAccess;
                    bool m_kibanaPublicAccessHasBeenSet;

                    /**
                     * Private network access status of Kibana
                     */
                    std::string m_kibanaPrivateAccess;
                    bool m_kibanaPrivateAccessHasBeenSet;

                    /**
                     * Enables or disables user authentication for ES Basic Edition v6.8 and above
                     */
                    int64_t m_basicSecurityType;
                    bool m_basicSecurityTypeHasBeenSet;

                    /**
                     * Kibana private port
                     */
                    uint64_t m_kibanaPrivatePort;
                    bool m_kibanaPrivatePortHasBeenSet;

                    /**
                     * 0: scaling in blue/green deployment mode without cluster restart (default); 1: scaling by unmounting disk with rolling cluster restart
                     */
                    int64_t m_scaleType;
                    bool m_scaleTypeHasBeenSet;

                    /**
                     * Multi-AZ deployment
                     */
                    std::vector<ZoneDetail> m_multiZoneInfo;
                    bool m_multiZoneInfoHasBeenSet;

                    /**
                     * Scenario template type. -1: not enabled; 1: general; 2: log; 3: search
                     */
                    int64_t m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * Kibana configuration item (JSON string)
                     */
                    std::string m_kibanaConfig;
                    bool m_kibanaConfigHasBeenSet;

                    /**
                     * Visual node configuration
                     */
                    WebNodeTypeInfo m_webNodeTypeInfo;
                    bool m_webNodeTypeInfoHasBeenSet;

                    /**
                     * Whether to switch to the new network architecture
                     */
                    std::string m_switchPrivateLink;
                    bool m_switchPrivateLinkHasBeenSet;

                    /**
                     * Whether to enable Cerebro
                     */
                    bool m_enableCerebro;
                    bool m_enableCerebroHasBeenSet;

                    /**
                     * Cerebro public network access status
                     */
                    std::string m_cerebroPublicAccess;
                    bool m_cerebroPublicAccessHasBeenSet;

                    /**
                     * Cerebro private network access status
                     */
                    std::string m_cerebroPrivateAccess;
                    bool m_cerebroPrivateAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPDATEINSTANCEREQUEST_H_
