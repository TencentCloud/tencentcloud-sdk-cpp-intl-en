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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQVIPINSTANCEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQVIPINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateRabbitMQVipInstance request structure.
                */
                class CreateRabbitMQVipInstanceRequest : public AbstractModel
                {
                public:
                    CreateRabbitMQVipInstanceRequest();
                    ~CreateRabbitMQVipInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取AZ
                     * @return ZoneIds AZ
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置AZ
                     * @param ZoneIds AZ
                     */
                    void SetZoneIds(const std::vector<int64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param VpcId VPC ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID
                     * @return SubnetId VPC subnet ID
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID
                     * @param SubnetId VPC subnet ID
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Cluster name
                     * @return ClusterName Cluster name
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
                     * @param ClusterName Cluster name
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Node specification (`rabbit-vip-basic-1`: Basic; `rabbit-vip-basic-2`: Standard; `rabbit-vip-basic-3`: Advanced I; `rabbit-vip-basic-4`: Advanced II). If this parameter is left empty, the default value is `rabbit-vip-basic-1`.
                     * @return NodeSpec Node specification (`rabbit-vip-basic-1`: Basic; `rabbit-vip-basic-2`: Standard; `rabbit-vip-basic-3`: Advanced I; `rabbit-vip-basic-4`: Advanced II). If this parameter is left empty, the default value is `rabbit-vip-basic-1`.
                     */
                    std::string GetNodeSpec() const;

                    /**
                     * 设置Node specification (`rabbit-vip-basic-1`: Basic; `rabbit-vip-basic-2`: Standard; `rabbit-vip-basic-3`: Advanced I; `rabbit-vip-basic-4`: Advanced II). If this parameter is left empty, the default value is `rabbit-vip-basic-1`.
                     * @param NodeSpec Node specification (`rabbit-vip-basic-1`: Basic; `rabbit-vip-basic-2`: Standard; `rabbit-vip-basic-3`: Advanced I; `rabbit-vip-basic-4`: Advanced II). If this parameter is left empty, the default value is `rabbit-vip-basic-1`.
                     */
                    void SetNodeSpec(const std::string& _nodeSpec);

                    /**
                     * 判断参数 NodeSpec 是否已赋值
                     * @return NodeSpec 是否已赋值
                     */
                    bool NodeSpecHasBeenSet() const;

                    /**
                     * 获取Number of nodes, which is at least three for multi-AZ deployment. If this parameter is left empty, the value will be set to 1 for single-AZ deployment and 3 for multi-AZ deployment by default.
                     * @return NodeNum Number of nodes, which is at least three for multi-AZ deployment. If this parameter is left empty, the value will be set to 1 for single-AZ deployment and 3 for multi-AZ deployment by default.
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置Number of nodes, which is at least three for multi-AZ deployment. If this parameter is left empty, the value will be set to 1 for single-AZ deployment and 3 for multi-AZ deployment by default.
                     * @param NodeNum Number of nodes, which is at least three for multi-AZ deployment. If this parameter is left empty, the value will be set to 1 for single-AZ deployment and 3 for multi-AZ deployment by default.
                     */
                    void SetNodeNum(const int64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取Storage capacity of a single node, which is 200 GB by default.
                     * @return StorageSize Storage capacity of a single node, which is 200 GB by default.
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置Storage capacity of a single node, which is 200 GB by default.
                     * @param StorageSize Storage capacity of a single node, which is 200 GB by default.
                     */
                    void SetStorageSize(const int64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取Whether to enable mirrored queue. Default value: `false`.
                     * @return EnableCreateDefaultHaMirrorQueue Whether to enable mirrored queue. Default value: `false`.
                     */
                    bool GetEnableCreateDefaultHaMirrorQueue() const;

                    /**
                     * 设置Whether to enable mirrored queue. Default value: `false`.
                     * @param EnableCreateDefaultHaMirrorQueue Whether to enable mirrored queue. Default value: `false`.
                     */
                    void SetEnableCreateDefaultHaMirrorQueue(const bool& _enableCreateDefaultHaMirrorQueue);

                    /**
                     * 判断参数 EnableCreateDefaultHaMirrorQueue 是否已赋值
                     * @return EnableCreateDefaultHaMirrorQueue 是否已赋值
                     */
                    bool EnableCreateDefaultHaMirrorQueueHasBeenSet() const;

                    /**
                     * 获取Whether to enable auto-renewal. Default value: `true`.
                     * @return AutoRenewFlag Whether to enable auto-renewal. Default value: `true`.
                     */
                    bool GetAutoRenewFlag() const;

                    /**
                     * 设置Whether to enable auto-renewal. Default value: `true`.
                     * @param AutoRenewFlag Whether to enable auto-renewal. Default value: `true`.
                     */
                    void SetAutoRenewFlag(const bool& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Validity period, which is one month by default.
                     * @return TimeSpan Validity period, which is one month by default.
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Validity period, which is one month by default.
                     * @param TimeSpan Validity period, which is one month by default.
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                private:

                    /**
                     * AZ
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Node specification (`rabbit-vip-basic-1`: Basic; `rabbit-vip-basic-2`: Standard; `rabbit-vip-basic-3`: Advanced I; `rabbit-vip-basic-4`: Advanced II). If this parameter is left empty, the default value is `rabbit-vip-basic-1`.
                     */
                    std::string m_nodeSpec;
                    bool m_nodeSpecHasBeenSet;

                    /**
                     * Number of nodes, which is at least three for multi-AZ deployment. If this parameter is left empty, the value will be set to 1 for single-AZ deployment and 3 for multi-AZ deployment by default.
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * Storage capacity of a single node, which is 200 GB by default.
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * Whether to enable mirrored queue. Default value: `false`.
                     */
                    bool m_enableCreateDefaultHaMirrorQueue;
                    bool m_enableCreateDefaultHaMirrorQueueHasBeenSet;

                    /**
                     * Whether to enable auto-renewal. Default value: `true`.
                     */
                    bool m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Validity period, which is one month by default.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQVIPINSTANCEREQUEST_H_
