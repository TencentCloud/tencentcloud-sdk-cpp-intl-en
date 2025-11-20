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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATETARGETGROUPREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATETARGETGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/TargetGroupInstance.h>
#include <tencentcloud/clb/v20180317/model/TargetGroupHealthCheck.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
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
                     * 获取Target group name (up to 50 characters)
                     * @return TargetGroupName Target group name (up to 50 characters)
                     * 
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置Target group name (up to 50 characters)
                     * @param _targetGroupName Target group name (up to 50 characters)
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
                     * 获取`vpcid` attribute of a target group. If this parameter is left empty, the default VPC will be used.
                     * @return VpcId `vpcid` attribute of a target group. If this parameter is left empty, the default VPC will be used.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置`vpcid` attribute of a target group. If this parameter is left empty, the default VPC will be used.
                     * @param _vpcId `vpcid` attribute of a target group. If this parameter is left empty, the default VPC will be used.
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
                     * 获取Default port of the target group, which can be used for adding servers subsequently. Either the Port or the port in TargetGroupInstances.N should be input.
                     * @return Port Default port of the target group, which can be used for adding servers subsequently. Either the Port or the port in TargetGroupInstances.N should be input.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Default port of the target group, which can be used for adding servers subsequently. Either the Port or the port in TargetGroupInstances.N should be input.
                     * @param _port Default port of the target group, which can be used for adding servers subsequently. Either the Port or the port in TargetGroupInstances.N should be input.
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
                     * 获取
                     * @return Type 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置
                     * @param _type 
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Protocol 
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置
                     * @param _protocol 
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
                     * 获取
                     * @return HealthCheck 
                     * 
                     */
                    TargetGroupHealthCheck GetHealthCheck() const;

                    /**
                     * 设置
                     * @param _healthCheck 
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
                     * 获取
                     * @return ScheduleAlgorithm 
                     * 
                     */
                    std::string GetScheduleAlgorithm() const;

                    /**
                     * 设置
                     * @param _scheduleAlgorithm 
                     * 
                     */
                    void SetScheduleAlgorithm(const std::string& _scheduleAlgorithm);

                    /**
                     * 判断参数 ScheduleAlgorithm 是否已赋值
                     * @return ScheduleAlgorithm 是否已赋值
                     * 
                     */
                    bool ScheduleAlgorithmHasBeenSet() const;

                private:

                    /**
                     * Target group name (up to 50 characters)
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                    /**
                     * `vpcid` attribute of a target group. If this parameter is left empty, the default VPC will be used.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Default port of the target group, which can be used for adding servers subsequently. Either the Port or the port in TargetGroupInstances.N should be input.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Real server bound to a target group
                     */
                    std::vector<TargetGroupInstance> m_targetGroupInstances;
                    bool m_targetGroupInstancesHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 
                     */
                    TargetGroupHealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_scheduleAlgorithm;
                    bool m_scheduleAlgorithmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATETARGETGROUPREQUEST_H_
