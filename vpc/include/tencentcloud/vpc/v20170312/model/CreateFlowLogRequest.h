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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEFLOWLOGREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEFLOWLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>
#include <tencentcloud/vpc/v20170312/model/FlowLogStorage.h>


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
                     * 获取The name of the flow log instance.
                     * @return FlowLogName The name of the flow log instance.
                     * 
                     */
                    std::string GetFlowLogName() const;

                    /**
                     * 设置The name of the flow log instance.
                     * @param _flowLogName The name of the flow log instance.
                     * 
                     */
                    void SetFlowLogName(const std::string& _flowLogName);

                    /**
                     * 判断参数 FlowLogName 是否已赋值
                     * @return FlowLogName 是否已赋值
                     * 
                     */
                    bool FlowLogNameHasBeenSet() const;

                    /**
                     * 获取The type of resource associated with the flow log. Valid values: `VPC`, `SUBNET`, `NETWORKINTERFACE`, `CCN`, `NAT`, and `DCG`.
                     * @return ResourceType The type of resource associated with the flow log. Valid values: `VPC`, `SUBNET`, `NETWORKINTERFACE`, `CCN`, `NAT`, and `DCG`.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置The type of resource associated with the flow log. Valid values: `VPC`, `SUBNET`, `NETWORKINTERFACE`, `CCN`, `NAT`, and `DCG`.
                     * @param _resourceType The type of resource associated with the flow log. Valid values: `VPC`, `SUBNET`, `NETWORKINTERFACE`, `CCN`, `NAT`, and `DCG`.
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取The unique ID of the resource.
                     * @return ResourceId The unique ID of the resource.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置The unique ID of the resource.
                     * @param _resourceId The unique ID of the resource.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Type of the flow logs to be collected. Valid values: `ACCEPT`, `REJECT` and `ALL`.
                     * @return TrafficType Type of the flow logs to be collected. Valid values: `ACCEPT`, `REJECT` and `ALL`.
                     * 
                     */
                    std::string GetTrafficType() const;

                    /**
                     * 设置Type of the flow logs to be collected. Valid values: `ACCEPT`, `REJECT` and `ALL`.
                     * @param _trafficType Type of the flow logs to be collected. Valid values: `ACCEPT`, `REJECT` and `ALL`.
                     * 
                     */
                    void SetTrafficType(const std::string& _trafficType);

                    /**
                     * 判断参数 TrafficType 是否已赋值
                     * @return TrafficType 是否已赋值
                     * 
                     */
                    bool TrafficTypeHasBeenSet() const;

                    /**
                     * 获取The VPC ID or unique ID of the resource. We recommend using the unique ID. This parameter is required unless the `ResourceType` is set to `CCN`.
                     * @return VpcId The VPC ID or unique ID of the resource. We recommend using the unique ID. This parameter is required unless the `ResourceType` is set to `CCN`.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置The VPC ID or unique ID of the resource. We recommend using the unique ID. This parameter is required unless the `ResourceType` is set to `CCN`.
                     * @param _vpcId The VPC ID or unique ID of the resource. We recommend using the unique ID. This parameter is required unless the `ResourceType` is set to `CCN`.
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
                     * 获取The description of the flow log.
                     * @return FlowLogDescription The description of the flow log.
                     * 
                     */
                    std::string GetFlowLogDescription() const;

                    /**
                     * 设置The description of the flow log.
                     * @param _flowLogDescription The description of the flow log.
                     * 
                     */
                    void SetFlowLogDescription(const std::string& _flowLogDescription);

                    /**
                     * 判断参数 FlowLogDescription 是否已赋值
                     * @return FlowLogDescription 是否已赋值
                     * 
                     */
                    bool FlowLogDescriptionHasBeenSet() const;

                    /**
                     * 获取The storage ID of the flow log.
                     * @return CloudLogId The storage ID of the flow log.
                     * 
                     */
                    std::string GetCloudLogId() const;

                    /**
                     * 设置The storage ID of the flow log.
                     * @param _cloudLogId The storage ID of the flow log.
                     * 
                     */
                    void SetCloudLogId(const std::string& _cloudLogId);

                    /**
                     * 判断参数 CloudLogId 是否已赋值
                     * @return CloudLogId 是否已赋值
                     * 
                     */
                    bool CloudLogIdHasBeenSet() const;

                    /**
                     * 获取Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * @return Tags Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * @param _tags Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Consumer types: `cls` and `ckafka`
                     * @return StorageType Consumer types: `cls` and `ckafka`
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置Consumer types: `cls` and `ckafka`
                     * @param _storageType Consumer types: `cls` and `ckafka`
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取Information of the flow log consumer, which is required when the consumer type is `ckafka`.
                     * @return FlowLogStorage Information of the flow log consumer, which is required when the consumer type is `ckafka`.
                     * 
                     */
                    FlowLogStorage GetFlowLogStorage() const;

                    /**
                     * 设置Information of the flow log consumer, which is required when the consumer type is `ckafka`.
                     * @param _flowLogStorage Information of the flow log consumer, which is required when the consumer type is `ckafka`.
                     * 
                     */
                    void SetFlowLogStorage(const FlowLogStorage& _flowLogStorage);

                    /**
                     * 判断参数 FlowLogStorage 是否已赋值
                     * @return FlowLogStorage 是否已赋值
                     * 
                     */
                    bool FlowLogStorageHasBeenSet() const;

                    /**
                     * 获取The region corresponding to the flow log storage ID. If not passed in, this field defaults to the current region.
                     * @return CloudLogRegion The region corresponding to the flow log storage ID. If not passed in, this field defaults to the current region.
                     * 
                     */
                    std::string GetCloudLogRegion() const;

                    /**
                     * 设置The region corresponding to the flow log storage ID. If not passed in, this field defaults to the current region.
                     * @param _cloudLogRegion The region corresponding to the flow log storage ID. If not passed in, this field defaults to the current region.
                     * 
                     */
                    void SetCloudLogRegion(const std::string& _cloudLogRegion);

                    /**
                     * 判断参数 CloudLogRegion 是否已赋值
                     * @return CloudLogRegion 是否已赋值
                     * 
                     */
                    bool CloudLogRegionHasBeenSet() const;

                private:

                    /**
                     * The name of the flow log instance.
                     */
                    std::string m_flowLogName;
                    bool m_flowLogNameHasBeenSet;

                    /**
                     * The type of resource associated with the flow log. Valid values: `VPC`, `SUBNET`, `NETWORKINTERFACE`, `CCN`, `NAT`, and `DCG`.
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
                     * The VPC ID or unique ID of the resource. We recommend using the unique ID. This parameter is required unless the `ResourceType` is set to `CCN`.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The description of the flow log.
                     */
                    std::string m_flowLogDescription;
                    bool m_flowLogDescriptionHasBeenSet;

                    /**
                     * The storage ID of the flow log.
                     */
                    std::string m_cloudLogId;
                    bool m_cloudLogIdHasBeenSet;

                    /**
                     * Bound tags, such as [{"Key": "city", "Value": "shanghai"}].
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Consumer types: `cls` and `ckafka`
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * Information of the flow log consumer, which is required when the consumer type is `ckafka`.
                     */
                    FlowLogStorage m_flowLogStorage;
                    bool m_flowLogStorageHasBeenSet;

                    /**
                     * The region corresponding to the flow log storage ID. If not passed in, this field defaults to the current region.
                     */
                    std::string m_cloudLogRegion;
                    bool m_cloudLogRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEFLOWLOGREQUEST_H_
