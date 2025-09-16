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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_POD_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_POD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Container.h>
#include <tencentcloud/tione/v20211111/model/CrossTenantENIInfo.h>
#include <tencentcloud/tione/v20211111/model/ResourceInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Pod information display.
                */
                class Pod : public AbstractModel
                {
                public:
                    Pod();
                    ~Pod() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Pod name.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Pod name.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Pod name.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Pod name.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Unique ID of the Pod.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uid Unique ID of the Pod.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置Unique ID of the Pod.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uid Unique ID of the Pod.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取Service payment mode.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ChargeType Service payment mode.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置Service payment mode.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _chargeType Service payment mode.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取Pod status.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Phase Pod status.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPhase() const;

                    /**
                     * 设置Pod status.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _phase Pod status.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPhase(const std::string& _phase);

                    /**
                     * 判断参数 Phase 是否已赋值
                     * @return Phase 是否已赋值
                     * 
                     */
                    bool PhaseHasBeenSet() const;

                    /**
                     * 获取Pod IP address.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IP Pod IP address.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置Pod IP address.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _iP Pod IP address.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取Pod creation time.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Pod creation time.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Pod creation time.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Pod creation time.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Container list.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Containers Container list.Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    Container GetContainers() const;

                    /**
                     * 设置Container list.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _containers Container list.Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetContainers(const Container& _containers);

                    /**
                     * 判断参数 Containers 是否已赋值
                     * @return Containers 是否已赋值
                     * @deprecated
                     */
                    bool ContainersHasBeenSet() const;

                    /**
                     * 获取Container list.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerInfos Container list.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Container> GetContainerInfos() const;

                    /**
                     * 设置Container list.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _containerInfos Container list.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContainerInfos(const std::vector<Container>& _containerInfos);

                    /**
                     * 判断参数 ContainerInfos 是否已赋值
                     * @return ContainerInfos 是否已赋值
                     * 
                     */
                    bool ContainerInfosHasBeenSet() const;

                    /**
                     * 获取Container calling information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CrossTenantENIInfo Container calling information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CrossTenantENIInfo GetCrossTenantENIInfo() const;

                    /**
                     * 设置Container calling information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _crossTenantENIInfo Container calling information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCrossTenantENIInfo(const CrossTenantENIInfo& _crossTenantENIInfo);

                    /**
                     * 判断参数 CrossTenantENIInfo 是否已赋值
                     * @return CrossTenantENIInfo 是否已赋值
                     * 
                     */
                    bool CrossTenantENIInfoHasBeenSet() const;

                    /**
                     * 获取Instance status information.
                     * @return Status Instance status information.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Instance status information.
                     * @param _status Instance status information.
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
                     * 获取Instance scheduling start time.
                     * @return StartScheduleTime Instance scheduling start time.
                     * 
                     */
                    std::string GetStartScheduleTime() const;

                    /**
                     * 设置Instance scheduling start time.
                     * @param _startScheduleTime Instance scheduling start time.
                     * 
                     */
                    void SetStartScheduleTime(const std::string& _startScheduleTime);

                    /**
                     * 判断参数 StartScheduleTime 是否已赋值
                     * @return StartScheduleTime 是否已赋值
                     * 
                     */
                    bool StartScheduleTimeHasBeenSet() const;

                    /**
                     * 获取Supplemental instance status information.
                     * @return Message Supplemental instance status information.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Supplemental instance status information.
                     * @param _message Supplemental instance status information.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Node IP address of the current instance.
                     * @return NodeIP Node IP address of the current instance.
                     * 
                     */
                    std::string GetNodeIP() const;

                    /**
                     * 设置Node IP address of the current instance.
                     * @param _nodeIP Node IP address of the current instance.
                     * 
                     */
                    void SetNodeIP(const std::string& _nodeIP);

                    /**
                     * 判断参数 NodeIP 是否已赋值
                     * @return NodeIP 是否已赋值
                     * 
                     */
                    bool NodeIPHasBeenSet() const;

                    /**
                     * 获取Node ID of the current instance.
                     * @return NodeId Node ID of the current instance.
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置Node ID of the current instance.
                     * @param _nodeId Node ID of the current instance.
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取Resource group ID to which the instance belonged.
                     * @return ResourceGroupId Resource group ID to which the instance belonged.
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置Resource group ID to which the instance belonged.
                     * @param _resourceGroupId Resource group ID to which the instance belonged.
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取Resource group name.
                     * @return ResourceGroupName Resource group name.
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置Resource group name.
                     * @param _resourceGroupName Resource group name.
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取Resource usage information of the instance.
                     * @return ResourceInfo Resource usage information of the instance.
                     * 
                     */
                    ResourceInfo GetResourceInfo() const;

                    /**
                     * 设置Resource usage information of the instance.
                     * @param _resourceInfo Resource usage information of the instance.
                     * 
                     */
                    void SetResourceInfo(const ResourceInfo& _resourceInfo);

                    /**
                     * 判断参数 ResourceInfo 是否已赋值
                     * @return ResourceInfo 是否已赋值
                     * 
                     */
                    bool ResourceInfoHasBeenSet() const;

                private:

                    /**
                     * Pod name.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Unique ID of the Pod.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * Service payment mode.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * Pod status.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_phase;
                    bool m_phaseHasBeenSet;

                    /**
                     * Pod IP address.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * Pod creation time.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Container list.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Container m_containers;
                    bool m_containersHasBeenSet;

                    /**
                     * Container list.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Container> m_containerInfos;
                    bool m_containerInfosHasBeenSet;

                    /**
                     * Container calling information.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CrossTenantENIInfo m_crossTenantENIInfo;
                    bool m_crossTenantENIInfoHasBeenSet;

                    /**
                     * Instance status information.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance scheduling start time.
                     */
                    std::string m_startScheduleTime;
                    bool m_startScheduleTimeHasBeenSet;

                    /**
                     * Supplemental instance status information.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Node IP address of the current instance.
                     */
                    std::string m_nodeIP;
                    bool m_nodeIPHasBeenSet;

                    /**
                     * Node ID of the current instance.
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Resource group ID to which the instance belonged.
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * Resource group name.
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * Resource usage information of the instance.
                     */
                    ResourceInfo m_resourceInfo;
                    bool m_resourceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_POD_H_
