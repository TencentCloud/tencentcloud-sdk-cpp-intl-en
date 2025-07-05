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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_CREATETARGETGROUPREQUEST_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_CREATETARGETGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gwlb/v20240906/model/TargetGroupInstance.h>
#include <tencentcloud/gwlb/v20240906/model/TargetGroupHealthCheck.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * CreateTargetGroup request structure.
                */
                class CreateTargetGroupRequest : public AbstractModel
                {
                public:
                    CreateTargetGroupRequest();
                    ~CreateTargetGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Target group name, limited to 60 characters.
                     * @return TargetGroupName Target group name, limited to 60 characters.
                     * 
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置Target group name, limited to 60 characters.
                     * @param _targetGroupName Target group name, limited to 60 characters.
                     * 
                     */
                    void SetTargetGroupName(const std::string& _targetGroupName);

                    /**
                     * 判断参数 TargetGroupName 是否已赋值
                     * @return TargetGroupName 是否已赋值
                     * 
                     */
                    bool TargetGroupNameHasBeenSet() const;

                    /**
                     * 获取VPCID attribute of target group. If this parameter is left blank, the default VPC will be used.
                     * @return VpcId VPCID attribute of target group. If this parameter is left blank, the default VPC will be used.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPCID attribute of target group. If this parameter is left blank, the default VPC will be used.
                     * @param _vpcId VPCID attribute of target group. If this parameter is left blank, the default VPC will be used.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Default port of the target group, which can be used when servers are added later. Either 'Port' or 'TargetGroupInstances.N.port' must be filled in.
                     * @return Port Default port of the target group, which can be used when servers are added later. Either 'Port' or 'TargetGroupInstances.N.port' must be filled in.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Default port of the target group, which can be used when servers are added later. Either 'Port' or 'TargetGroupInstances.N.port' must be filled in.
                     * @param _port Default port of the target group, which can be used when servers are added later. Either 'Port' or 'TargetGroupInstances.N.port' must be filled in.
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Real server bound to a target group
                     * @return TargetGroupInstances Real server bound to a target group
                     * 
                     */
                    std::vector<TargetGroupInstance> GetTargetGroupInstances() const;

                    /**
                     * 设置Real server bound to a target group
                     * @param _targetGroupInstances Real server bound to a target group
                     * 
                     */
                    void SetTargetGroupInstances(const std::vector<TargetGroupInstance>& _targetGroupInstances);

                    /**
                     * 判断参数 TargetGroupInstances 是否已赋值
                     * @return TargetGroupInstances 是否已赋值
                     * 
                     */
                    bool TargetGroupInstancesHasBeenSet() const;

                    /**
                     * 获取GWLB target group protocol.
- TENCENT_GENEVE: GENEVE standard protocol

- AWS_GENEVE: GENEVE compatibility protocol (a ticket is required for allowlisting)
                     * @return Protocol GWLB target group protocol.
- TENCENT_GENEVE: GENEVE standard protocol

- AWS_GENEVE: GENEVE compatibility protocol (a ticket is required for allowlisting)
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置GWLB target group protocol.
- TENCENT_GENEVE: GENEVE standard protocol

- AWS_GENEVE: GENEVE compatibility protocol (a ticket is required for allowlisting)
                     * @param _protocol GWLB target group protocol.
- TENCENT_GENEVE: GENEVE standard protocol

- AWS_GENEVE: GENEVE compatibility protocol (a ticket is required for allowlisting)
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
                     * 获取Health check settings.
                     * @return HealthCheck Health check settings.
                     * 
                     */
                    TargetGroupHealthCheck GetHealthCheck() const;

                    /**
                     * 设置Health check settings.
                     * @param _healthCheck Health check settings.
                     * 
                     */
                    void SetHealthCheck(const TargetGroupHealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     * 
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取Load balancing algorithm.
- IP_HASH_3_ELASTIC: elastic hashing
                     * @return ScheduleAlgorithm Load balancing algorithm.
- IP_HASH_3_ELASTIC: elastic hashing
                     * 
                     */
                    std::string GetScheduleAlgorithm() const;

                    /**
                     * 设置Load balancing algorithm.
- IP_HASH_3_ELASTIC: elastic hashing
                     * @param _scheduleAlgorithm Load balancing algorithm.
- IP_HASH_3_ELASTIC: elastic hashing
                     * 
                     */
                    void SetScheduleAlgorithm(const std::string& _scheduleAlgorithm);

                    /**
                     * 判断参数 ScheduleAlgorithm 是否已赋值
                     * @return ScheduleAlgorithm 是否已赋值
                     * 
                     */
                    bool ScheduleAlgorithmHasBeenSet() const;

                    /**
                     * 获取Whether "All Dead, All Alive" is supported. It is supported by default.
                     * @return AllDeadToAlive Whether "All Dead, All Alive" is supported. It is supported by default.
                     * 
                     */
                    bool GetAllDeadToAlive() const;

                    /**
                     * 设置Whether "All Dead, All Alive" is supported. It is supported by default.
                     * @param _allDeadToAlive Whether "All Dead, All Alive" is supported. It is supported by default.
                     * 
                     */
                    void SetAllDeadToAlive(const bool& _allDeadToAlive);

                    /**
                     * 判断参数 AllDeadToAlive 是否已赋值
                     * @return AllDeadToAlive 是否已赋值
                     * 
                     */
                    bool AllDeadToAliveHasBeenSet() const;

                private:

                    /**
                     * Target group name, limited to 60 characters.
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                    /**
                     * VPCID attribute of target group. If this parameter is left blank, the default VPC will be used.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Default port of the target group, which can be used when servers are added later. Either 'Port' or 'TargetGroupInstances.N.port' must be filled in.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Real server bound to a target group
                     */
                    std::vector<TargetGroupInstance> m_targetGroupInstances;
                    bool m_targetGroupInstancesHasBeenSet;

                    /**
                     * GWLB target group protocol.
- TENCENT_GENEVE: GENEVE standard protocol

- AWS_GENEVE: GENEVE compatibility protocol (a ticket is required for allowlisting)
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Health check settings.
                     */
                    TargetGroupHealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * Load balancing algorithm.
- IP_HASH_3_ELASTIC: elastic hashing
                     */
                    std::string m_scheduleAlgorithm;
                    bool m_scheduleAlgorithmHasBeenSet;

                    /**
                     * Whether "All Dead, All Alive" is supported. It is supported by default.
                     */
                    bool m_allDeadToAlive;
                    bool m_allDeadToAliveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_CREATETARGETGROUPREQUEST_H_
