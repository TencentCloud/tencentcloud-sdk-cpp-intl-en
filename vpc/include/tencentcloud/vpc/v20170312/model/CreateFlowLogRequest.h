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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEFLOWLOGREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEFLOWLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateFlowLog request structure.
                */
                class CreateFlowLogRequest : public AbstractModel
                {
                public:
                    CreateFlowLogRequest();
                    ~CreateFlowLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the VPC instance
                     * @return VpcId ID of the VPC instance
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置ID of the VPC instance
                     * @param VpcId ID of the VPC instance
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取The name of the flow log instance.
                     * @return FlowLogName The name of the flow log instance.
                     */
                    std::string GetFlowLogName() const;

                    /**
                     * 设置The name of the flow log instance.
                     * @param FlowLogName The name of the flow log instance.
                     */
                    void SetFlowLogName(const std::string& _flowLogName);

                    /**
                     * 判断参数 FlowLogName 是否已赋值
                     * @return FlowLogName 是否已赋值
                     */
                    bool FlowLogNameHasBeenSet() const;

                    /**
                     * 获取The type of resources to which the flow log belongs. Valid values: 'VPC', 'SUBNET' and 'NETWORKINTERFACE'.
                     * @return ResourceType The type of resources to which the flow log belongs. Valid values: 'VPC', 'SUBNET' and 'NETWORKINTERFACE'.
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置The type of resources to which the flow log belongs. Valid values: 'VPC', 'SUBNET' and 'NETWORKINTERFACE'.
                     * @param ResourceType The type of resources to which the flow log belongs. Valid values: 'VPC', 'SUBNET' and 'NETWORKINTERFACE'.
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取The unique ID of the resource.
                     * @return ResourceId The unique ID of the resource.
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置The unique ID of the resource.
                     * @param ResourceId The unique ID of the resource.
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Type of the flow logs to be collected. Valid values: `ACCEPT`, `REJECT` and `ALL`.
                     * @return TrafficType Type of the flow logs to be collected. Valid values: `ACCEPT`, `REJECT` and `ALL`.
                     */
                    std::string GetTrafficType() const;

                    /**
                     * 设置Type of the flow logs to be collected. Valid values: `ACCEPT`, `REJECT` and `ALL`.
                     * @param TrafficType Type of the flow logs to be collected. Valid values: `ACCEPT`, `REJECT` and `ALL`.
                     */
                    void SetTrafficType(const std::string& _trafficType);

                    /**
                     * 判断参数 TrafficType 是否已赋值
                     * @return TrafficType 是否已赋值
                     */
                    bool TrafficTypeHasBeenSet() const;

                    /**
                     * 获取The storage ID of the flow log.
                     * @return CloudLogId The storage ID of the flow log.
                     */
                    std::string GetCloudLogId() const;

                    /**
                     * 设置The storage ID of the flow log.
                     * @param CloudLogId The storage ID of the flow log.
                     */
                    void SetCloudLogId(const std::string& _cloudLogId);

                    /**
                     * 判断参数 CloudLogId 是否已赋值
                     * @return CloudLogId 是否已赋值
                     */
                    bool CloudLogIdHasBeenSet() const;

                    /**
                     * 获取The description of the flow log instance
                     * @return FlowLogDescription The description of the flow log instance
                     */
                    std::string GetFlowLogDescription() const;

                    /**
                     * 设置The description of the flow log instance
                     * @param FlowLogDescription The description of the flow log instance
                     */
                    void SetFlowLogDescription(const std::string& _flowLogDescription);

                    /**
                     * 判断参数 FlowLogDescription 是否已赋值
                     * @return FlowLogDescription 是否已赋值
                     */
                    bool FlowLogDescriptionHasBeenSet() const;

                private:

                    /**
                     * ID of the VPC instance
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The name of the flow log instance.
                     */
                    std::string m_flowLogName;
                    bool m_flowLogNameHasBeenSet;

                    /**
                     * The type of resources to which the flow log belongs. Valid values: 'VPC', 'SUBNET' and 'NETWORKINTERFACE'.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * The unique ID of the resource.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Type of the flow logs to be collected. Valid values: `ACCEPT`, `REJECT` and `ALL`.
                     */
                    std::string m_trafficType;
                    bool m_trafficTypeHasBeenSet;

                    /**
                     * The storage ID of the flow log.
                     */
                    std::string m_cloudLogId;
                    bool m_cloudLogIdHasBeenSet;

                    /**
                     * The description of the flow log instance
                     */
                    std::string m_flowLogDescription;
                    bool m_flowLogDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEFLOWLOGREQUEST_H_
