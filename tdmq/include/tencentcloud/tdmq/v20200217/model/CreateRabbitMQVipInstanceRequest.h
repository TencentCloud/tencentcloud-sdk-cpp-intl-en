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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQVIPINSTANCEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQVIPINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Tag.h>


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
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置AZ
                     * @param _zoneIds AZ
                     * 
                     */
                    void SetZoneIds(const std::vector<int64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取vpc ID, such as vpc-xxx. valid VpcId can be obtained by logging in to the virtual private cloud console (https://console.cloud.tencent.com/vpc/vpc?rid=1) or via api call to DescribeVpcEx (https://www.tencentcloud.comom/document/api/215/1372?from_cn_redirect=1), retrieving the unVpcId field from the api response. if both VpcId and SubnetId are set to DEFAULT when creating an instance, the DEFAULT vpc network will be forcibly used.
                     * @return VpcId vpc ID, such as vpc-xxx. valid VpcId can be obtained by logging in to the virtual private cloud console (https://console.cloud.tencent.com/vpc/vpc?rid=1) or via api call to DescribeVpcEx (https://www.tencentcloud.comom/document/api/215/1372?from_cn_redirect=1), retrieving the unVpcId field from the api response. if both VpcId and SubnetId are set to DEFAULT when creating an instance, the DEFAULT vpc network will be forcibly used.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc ID, such as vpc-xxx. valid VpcId can be obtained by logging in to the virtual private cloud console (https://console.cloud.tencent.com/vpc/vpc?rid=1) or via api call to DescribeVpcEx (https://www.tencentcloud.comom/document/api/215/1372?from_cn_redirect=1), retrieving the unVpcId field from the api response. if both VpcId and SubnetId are set to DEFAULT when creating an instance, the DEFAULT vpc network will be forcibly used.
                     * @param _vpcId vpc ID, such as vpc-xxx. valid VpcId can be obtained by logging in to the virtual private cloud console (https://console.cloud.tencent.com/vpc/vpc?rid=1) or via api call to DescribeVpcEx (https://www.tencentcloud.comom/document/api/215/1372?from_cn_redirect=1), retrieving the unVpcId field from the api response. if both VpcId and SubnetId are set to DEFAULT when creating an instance, the DEFAULT vpc network will be forcibly used.
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
                     * 获取The subnet ID of the vpc, such as subnet-xxx. valid subnet ids can be queried by logging in to the subnet console (https://console.cloud.tencent.com/vpc/subnet?rid=1) or by calling the api [DescribeSubnets](https://www.tencentcloud.comom/document/api/215/15784?from_cn_redirect=1) and obtaining the unSubnetId field from the api response. if both SubnetId and VpcId are set to DEFAULT when creating an instance, the DEFAULT vpc network will be forcibly used.
                     * @return SubnetId The subnet ID of the vpc, such as subnet-xxx. valid subnet ids can be queried by logging in to the subnet console (https://console.cloud.tencent.com/vpc/subnet?rid=1) or by calling the api [DescribeSubnets](https://www.tencentcloud.comom/document/api/215/15784?from_cn_redirect=1) and obtaining the unSubnetId field from the api response. if both SubnetId and VpcId are set to DEFAULT when creating an instance, the DEFAULT vpc network will be forcibly used.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置The subnet ID of the vpc, such as subnet-xxx. valid subnet ids can be queried by logging in to the subnet console (https://console.cloud.tencent.com/vpc/subnet?rid=1) or by calling the api [DescribeSubnets](https://www.tencentcloud.comom/document/api/215/15784?from_cn_redirect=1) and obtaining the unSubnetId field from the api response. if both SubnetId and VpcId are set to DEFAULT when creating an instance, the DEFAULT vpc network will be forcibly used.
                     * @param _subnetId The subnet ID of the vpc, such as subnet-xxx. valid subnet ids can be queried by logging in to the subnet console (https://console.cloud.tencent.com/vpc/subnet?rid=1) or by calling the api [DescribeSubnets](https://www.tencentcloud.comom/document/api/215/15784?from_cn_redirect=1) and obtaining the unSubnetId field from the api response. if both SubnetId and VpcId are set to DEFAULT when creating an instance, the DEFAULT vpc network will be forcibly used.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Cluster name
                     * @return ClusterName Cluster name
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
                     * @param _clusterName Cluster name
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Node specification of the cluster. need to enter the corresponding specification flag.
2C8G:rabbit-vip-profession-2c8g
4C16G:rabbit-vip-profession-4c16g
8C32G:rabbit-vip-profession-8c32g
16C32G:rabbit-vip-basic-4
16C64G:rabbit-vip-profession-16c64g
2C4G:rabbit-vip-basic-5
4C8G:rabbit-vip-basic-1
8C16G (sold out): rabbit-vip-basic-2.
Specifies the default value as 4C8G: rabbit-vip-basic-1.
                     * @return NodeSpec Node specification of the cluster. need to enter the corresponding specification flag.
2C8G:rabbit-vip-profession-2c8g
4C16G:rabbit-vip-profession-4c16g
8C32G:rabbit-vip-profession-8c32g
16C32G:rabbit-vip-basic-4
16C64G:rabbit-vip-profession-16c64g
2C4G:rabbit-vip-basic-5
4C8G:rabbit-vip-basic-1
8C16G (sold out): rabbit-vip-basic-2.
Specifies the default value as 4C8G: rabbit-vip-basic-1.
                     * 
                     */
                    std::string GetNodeSpec() const;

                    /**
                     * 设置Node specification of the cluster. need to enter the corresponding specification flag.
2C8G:rabbit-vip-profession-2c8g
4C16G:rabbit-vip-profession-4c16g
8C32G:rabbit-vip-profession-8c32g
16C32G:rabbit-vip-basic-4
16C64G:rabbit-vip-profession-16c64g
2C4G:rabbit-vip-basic-5
4C8G:rabbit-vip-basic-1
8C16G (sold out): rabbit-vip-basic-2.
Specifies the default value as 4C8G: rabbit-vip-basic-1.
                     * @param _nodeSpec Node specification of the cluster. need to enter the corresponding specification flag.
2C8G:rabbit-vip-profession-2c8g
4C16G:rabbit-vip-profession-4c16g
8C32G:rabbit-vip-profession-8c32g
16C32G:rabbit-vip-basic-4
16C64G:rabbit-vip-profession-16c64g
2C4G:rabbit-vip-basic-5
4C8G:rabbit-vip-basic-1
8C16G (sold out): rabbit-vip-basic-2.
Specifies the default value as 4C8G: rabbit-vip-basic-1.
                     * 
                     */
                    void SetNodeSpec(const std::string& _nodeSpec);

                    /**
                     * 判断参数 NodeSpec 是否已赋值
                     * @return NodeSpec 是否已赋值
                     * 
                     */
                    bool NodeSpecHasBeenSet() const;

                    /**
                     * 获取Number of nodes, which is at least three for multi-AZ deployment. If this parameter is left empty, the value will be set to 1 for single-AZ deployment and 3 for multi-AZ deployment by default.
                     * @return NodeNum Number of nodes, which is at least three for multi-AZ deployment. If this parameter is left empty, the value will be set to 1 for single-AZ deployment and 3 for multi-AZ deployment by default.
                     * 
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置Number of nodes, which is at least three for multi-AZ deployment. If this parameter is left empty, the value will be set to 1 for single-AZ deployment and 3 for multi-AZ deployment by default.
                     * @param _nodeNum Number of nodes, which is at least three for multi-AZ deployment. If this parameter is left empty, the value will be set to 1 for single-AZ deployment and 3 for multi-AZ deployment by default.
                     * 
                     */
                    void SetNodeNum(const int64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取Storage capacity of a single node, which is 200 GB by default.
                     * @return StorageSize Storage capacity of a single node, which is 200 GB by default.
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置Storage capacity of a single node, which is 200 GB by default.
                     * @param _storageSize Storage capacity of a single node, which is 200 GB by default.
                     * 
                     */
                    void SetStorageSize(const int64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取Whether the default image queue is enabled. true means enabled, false means not enabled. defaults to false if not specified.
                     * @return EnableCreateDefaultHaMirrorQueue Whether the default image queue is enabled. true means enabled, false means not enabled. defaults to false if not specified.
                     * 
                     */
                    bool GetEnableCreateDefaultHaMirrorQueue() const;

                    /**
                     * 设置Whether the default image queue is enabled. true means enabled, false means not enabled. defaults to false if not specified.
                     * @param _enableCreateDefaultHaMirrorQueue Whether the default image queue is enabled. true means enabled, false means not enabled. defaults to false if not specified.
                     * 
                     */
                    void SetEnableCreateDefaultHaMirrorQueue(const bool& _enableCreateDefaultHaMirrorQueue);

                    /**
                     * 判断参数 EnableCreateDefaultHaMirrorQueue 是否已赋值
                     * @return EnableCreateDefaultHaMirrorQueue 是否已赋值
                     * 
                     */
                    bool EnableCreateDefaultHaMirrorQueueHasBeenSet() const;

                    /**
                     * 获取Only applies to prepaid clusters (when PayMode parameter is 1). specifies whether the cluster is automatically renewed. true means auto-renewal is enabled. the default is true if not specified.
                     * @return AutoRenewFlag Only applies to prepaid clusters (when PayMode parameter is 1). specifies whether the cluster is automatically renewed. true means auto-renewal is enabled. the default is true if not specified.
                     * 
                     */
                    bool GetAutoRenewFlag() const;

                    /**
                     * 设置Only applies to prepaid clusters (when PayMode parameter is 1). specifies whether the cluster is automatically renewed. true means auto-renewal is enabled. the default is true if not specified.
                     * @param _autoRenewFlag Only applies to prepaid clusters (when PayMode parameter is 1). specifies whether the cluster is automatically renewed. true means auto-renewal is enabled. the default is true if not specified.
                     * 
                     */
                    void SetAutoRenewFlag(const bool& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Validity period, which is one month by default.
                     * @return TimeSpan Validity period, which is one month by default.
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Validity period, which is one month by default.
                     * @param _timeSpan Validity period, which is one month by default.
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Payment mode. 0: postpaid, (pay-as-you-go); 1: prepaid (monthly subscription). Monthly subscription is used by default.
                     * @return PayMode Payment mode. 0: postpaid, (pay-as-you-go); 1: prepaid (monthly subscription). Monthly subscription is used by default.
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置Payment mode. 0: postpaid, (pay-as-you-go); 1: prepaid (monthly subscription). Monthly subscription is used by default.
                     * @param _payMode Payment mode. 0: postpaid, (pay-as-you-go); 1: prepaid (monthly subscription). Monthly subscription is used by default.
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Specifies the cluster edition. defaults to 3.8.30. valid values: 3.8.30, 3.11.8, 3.13.7.
                     * @return ClusterVersion Specifies the cluster edition. defaults to 3.8.30. valid values: 3.8.30, 3.11.8, 3.13.7.
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置Specifies the cluster edition. defaults to 3.8.30. valid values: 3.8.30, 3.11.8, 3.13.7.
                     * @param _clusterVersion Specifies the cluster edition. defaults to 3.8.30. valid values: 3.8.30, 3.11.8, 3.13.7.
                     * 
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取Whether the request is from the international website. Default value: false.
                     * @return IsIntl Whether the request is from the international website. Default value: false.
                     * 
                     */
                    bool GetIsIntl() const;

                    /**
                     * 设置Whether the request is from the international website. Default value: false.
                     * @param _isIntl Whether the request is from the international website. Default value: false.
                     * 
                     */
                    void SetIsIntl(const bool& _isIntl);

                    /**
                     * 判断参数 IsIntl 是否已赋值
                     * @return IsIntl 是否已赋值
                     * 
                     */
                    bool IsIntlHasBeenSet() const;

                    /**
                     * 获取Resource tag list.
                     * @return ResourceTags Resource tag list.
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置Resource tag list.
                     * @param _resourceTags Resource tag list.
                     * 
                     */
                    void SetResourceTags(const std::vector<Tag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取Specifies the public bandwidth size in Mbps.
                     * @return Bandwidth Specifies the public bandwidth size in Mbps.
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置Specifies the public bandwidth size in Mbps.
                     * @param _bandwidth Specifies the public bandwidth size in Mbps.
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Whether to enable public network access. If this parameter is not specified, the value is false by default.
                     * @return EnablePublicAccess Whether to enable public network access. If this parameter is not specified, the value is false by default.
                     * 
                     */
                    bool GetEnablePublicAccess() const;

                    /**
                     * 设置Whether to enable public network access. If this parameter is not specified, the value is false by default.
                     * @param _enablePublicAccess Whether to enable public network access. If this parameter is not specified, the value is false by default.
                     * 
                     */
                    void SetEnablePublicAccess(const bool& _enablePublicAccess);

                    /**
                     * 判断参数 EnablePublicAccess 是否已赋值
                     * @return EnablePublicAccess 是否已赋值
                     * 
                     */
                    bool EnablePublicAccessHasBeenSet() const;

                    /**
                     * 获取Whether to enable cluster deletion protection. if this parameter is not specified, the value is false by default.
                     * @return EnableDeletionProtection Whether to enable cluster deletion protection. if this parameter is not specified, the value is false by default.
                     * 
                     */
                    bool GetEnableDeletionProtection() const;

                    /**
                     * 设置Whether to enable cluster deletion protection. if this parameter is not specified, the value is false by default.
                     * @param _enableDeletionProtection Whether to enable cluster deletion protection. if this parameter is not specified, the value is false by default.
                     * 
                     */
                    void SetEnableDeletionProtection(const bool& _enableDeletionProtection);

                    /**
                     * 判断参数 EnableDeletionProtection 是否已赋值
                     * @return EnableDeletionProtection 是否已赋值
                     * 
                     */
                    bool EnableDeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * AZ
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * vpc ID, such as vpc-xxx. valid VpcId can be obtained by logging in to the virtual private cloud console (https://console.cloud.tencent.com/vpc/vpc?rid=1) or via api call to DescribeVpcEx (https://www.tencentcloud.comom/document/api/215/1372?from_cn_redirect=1), retrieving the unVpcId field from the api response. if both VpcId and SubnetId are set to DEFAULT when creating an instance, the DEFAULT vpc network will be forcibly used.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The subnet ID of the vpc, such as subnet-xxx. valid subnet ids can be queried by logging in to the subnet console (https://console.cloud.tencent.com/vpc/subnet?rid=1) or by calling the api [DescribeSubnets](https://www.tencentcloud.comom/document/api/215/15784?from_cn_redirect=1) and obtaining the unSubnetId field from the api response. if both SubnetId and VpcId are set to DEFAULT when creating an instance, the DEFAULT vpc network will be forcibly used.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Node specification of the cluster. need to enter the corresponding specification flag.
2C8G:rabbit-vip-profession-2c8g
4C16G:rabbit-vip-profession-4c16g
8C32G:rabbit-vip-profession-8c32g
16C32G:rabbit-vip-basic-4
16C64G:rabbit-vip-profession-16c64g
2C4G:rabbit-vip-basic-5
4C8G:rabbit-vip-basic-1
8C16G (sold out): rabbit-vip-basic-2.
Specifies the default value as 4C8G: rabbit-vip-basic-1.
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
                     * Whether the default image queue is enabled. true means enabled, false means not enabled. defaults to false if not specified.
                     */
                    bool m_enableCreateDefaultHaMirrorQueue;
                    bool m_enableCreateDefaultHaMirrorQueueHasBeenSet;

                    /**
                     * Only applies to prepaid clusters (when PayMode parameter is 1). specifies whether the cluster is automatically renewed. true means auto-renewal is enabled. the default is true if not specified.
                     */
                    bool m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Validity period, which is one month by default.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Payment mode. 0: postpaid, (pay-as-you-go); 1: prepaid (monthly subscription). Monthly subscription is used by default.
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Specifies the cluster edition. defaults to 3.8.30. valid values: 3.8.30, 3.11.8, 3.13.7.
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * Whether the request is from the international website. Default value: false.
                     */
                    bool m_isIntl;
                    bool m_isIntlHasBeenSet;

                    /**
                     * Resource tag list.
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * Specifies the public bandwidth size in Mbps.
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Whether to enable public network access. If this parameter is not specified, the value is false by default.
                     */
                    bool m_enablePublicAccess;
                    bool m_enablePublicAccessHasBeenSet;

                    /**
                     * Whether to enable cluster deletion protection. if this parameter is not specified, the value is false by default.
                     */
                    bool m_enableDeletionProtection;
                    bool m_enableDeletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQVIPINSTANCEREQUEST_H_
