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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_FLOWLOG_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_FLOWLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Flow Log
                */
                class FlowLog : public AbstractModel
                {
                public:
                    FlowLog();
                    ~FlowLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the VPC instance.
                     * @return VpcId ID of the VPC instance.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置ID of the VPC instance.
                     * @param _vpcId ID of the VPC instance.
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
                     * 获取The unique ID of the flow log.
                     * @return FlowLogId The unique ID of the flow log.
                     * 
                     */
                    std::string GetFlowLogId() const;

                    /**
                     * 设置The unique ID of the flow log.
                     * @param _flowLogId The unique ID of the flow log.
                     * 
                     */
                    void SetFlowLogId(const std::string& _flowLogId);

                    /**
                     * 判断参数 FlowLogId 是否已赋值
                     * @return FlowLogId 是否已赋值
                     * 
                     */
                    bool FlowLogIdHasBeenSet() const;

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
                     * 获取The unique ID of the resource
                     * @return ResourceId The unique ID of the resource
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置The unique ID of the resource
                     * @param _resourceId The unique ID of the resource
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
                     * 获取Type of flow logs to be collected. Valid values: `ACCEPT`, `REJECT` and `ALL`.
                     * @return TrafficType Type of flow logs to be collected. Valid values: `ACCEPT`, `REJECT` and `ALL`.
                     * 
                     */
                    std::string GetTrafficType() const;

                    /**
                     * 设置Type of flow logs to be collected. Valid values: `ACCEPT`, `REJECT` and `ALL`.
                     * @param _trafficType Type of flow logs to be collected. Valid values: `ACCEPT`, `REJECT` and `ALL`.
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
                     * 获取The storage ID of the flow log
                     * @return CloudLogId The storage ID of the flow log
                     * 
                     */
                    std::string GetCloudLogId() const;

                    /**
                     * 设置The storage ID of the flow log
                     * @param _cloudLogId The storage ID of the flow log
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
                     * 获取Flow log storage ID status.
                     * @return CloudLogState Flow log storage ID status.
                     * 
                     */
                    std::string GetCloudLogState() const;

                    /**
                     * 设置Flow log storage ID status.
                     * @param _cloudLogState Flow log storage ID status.
                     * 
                     */
                    void SetCloudLogState(const std::string& _cloudLogState);

                    /**
                     * 判断参数 CloudLogState 是否已赋值
                     * @return CloudLogState 是否已赋值
                     * 
                     */
                    bool CloudLogStateHasBeenSet() const;

                    /**
                     * 获取The flow log description.
                     * @return FlowLogDescription The flow log description.
                     * 
                     */
                    std::string GetFlowLogDescription() const;

                    /**
                     * 设置The flow log description.
                     * @param _flowLogDescription The flow log description.
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
                     * 获取The creation time of the flow log.
                     * @return CreatedTime The creation time of the flow log.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置The creation time of the flow log.
                     * @param _createdTime The creation time of the flow log.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Tag list, such as [{"Key": "city", "Value": "shanghai"}].
                     * @return TagSet Tag list, such as [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置Tag list, such as [{"Key": "city", "Value": "shanghai"}].
                     * @param _tagSet Tag list, such as [{"Key": "city", "Value": "shanghai"}].
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取Whether to enable. `true`: yes; `false`: no.
                     * @return Enable Whether to enable. `true`: yes; `false`: no.
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Whether to enable. `true`: yes; `false`: no.
                     * @param _enable Whether to enable. `true`: yes; `false`: no.
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Consumer end types: cls and ckafka
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return StorageType Consumer end types: cls and ckafka
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置Consumer end types: cls and ckafka
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _storageType Consumer end types: cls and ckafka
Note: this field may return `null`, indicating that no valid value can be found.
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
                     * 获取Information of the consumer, which is returned when the consumer type is `ckafka`.
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return FlowLogStorage Information of the consumer, which is returned when the consumer type is `ckafka`.
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    FlowLogStorage GetFlowLogStorage() const;

                    /**
                     * 设置Information of the consumer, which is returned when the consumer type is `ckafka`.
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _flowLogStorage Information of the consumer, which is returned when the consumer type is `ckafka`.
Note: this field may return `null`, indicating that no valid value can be found.
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
                     * 获取The region corresponding to the flow log storage ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CloudLogRegion The region corresponding to the flow log storage ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCloudLogRegion() const;

                    /**
                     * 设置The region corresponding to the flow log storage ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _cloudLogRegion The region corresponding to the flow log storage ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * ID of the VPC instance.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The unique ID of the flow log.
                     */
                    std::string m_flowLogId;
                    bool m_flowLogIdHasBeenSet;

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
                     * The unique ID of the resource
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Type of flow logs to be collected. Valid values: `ACCEPT`, `REJECT` and `ALL`.
                     */
                    std::string m_trafficType;
                    bool m_trafficTypeHasBeenSet;

                    /**
                     * The storage ID of the flow log
                     */
                    std::string m_cloudLogId;
                    bool m_cloudLogIdHasBeenSet;

                    /**
                     * Flow log storage ID status.
                     */
                    std::string m_cloudLogState;
                    bool m_cloudLogStateHasBeenSet;

                    /**
                     * The flow log description.
                     */
                    std::string m_flowLogDescription;
                    bool m_flowLogDescriptionHasBeenSet;

                    /**
                     * The creation time of the flow log.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Tag list, such as [{"Key": "city", "Value": "shanghai"}].
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * Whether to enable. `true`: yes; `false`: no.
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Consumer end types: cls and ckafka
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * Information of the consumer, which is returned when the consumer type is `ckafka`.
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    FlowLogStorage m_flowLogStorage;
                    bool m_flowLogStorageHasBeenSet;

                    /**
                     * The region corresponding to the flow log storage ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_cloudLogRegion;
                    bool m_cloudLogRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_FLOWLOG_H_
