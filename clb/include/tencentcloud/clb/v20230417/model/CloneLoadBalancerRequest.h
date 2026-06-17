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

#ifndef TENCENTCLOUD_CLB_V20230417_MODEL_CLONELOADBALANCERREQUEST_H_
#define TENCENTCLOUD_CLB_V20230417_MODEL_CLONELOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20230417/model/InternetAccessible.h>
#include <tencentcloud/clb/v20230417/model/TagInfo.h>
#include <tencentcloud/clb/v20230417/model/ExclusiveCluster.h>
#include <tencentcloud/clb/v20230417/model/SnatIp.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20230417
        {
            namespace Model
            {
                /**
                * CloneLoadBalancer request structure.
                */
                class CloneLoadBalancerRequest : public AbstractModel
                {
                public:
                    CloneLoadBalancerRequest();
                    ~CloneLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CLB ID.
                     * @return LoadBalancerId CLB ID.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB ID.
                     * @param _loadBalancerId CLB ID.
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取The name of the cloned CLB instance. Rule: 1-60 English letters, Chinese characters, digits, hyphens "-", or underscores "_".
Note: If the name is the same as an existing Cloud Load Balancer instance in the system, the system will automatically generate the name of the created CLB instance.
                     * @return LoadBalancerName The name of the cloned CLB instance. Rule: 1-60 English letters, Chinese characters, digits, hyphens "-", or underscores "_".
Note: If the name is the same as an existing Cloud Load Balancer instance in the system, the system will automatically generate the name of the created CLB instance.
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置The name of the cloned CLB instance. Rule: 1-60 English letters, Chinese characters, digits, hyphens "-", or underscores "_".
Note: If the name is the same as an existing Cloud Load Balancer instance in the system, the system will automatically generate the name of the created CLB instance.
                     * @param _loadBalancerName The name of the cloned CLB instance. Rule: 1-60 English letters, Chinese characters, digits, hyphens "-", or underscores "_".
Note: If the name is the same as an existing Cloud Load Balancer instance in the system, the system will automatically generate the name of the created CLB instance.
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取The project ID associated with the Cloud Load Balancer instance can be obtained through the [DescribeLoadBalancers](https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1) API. If this parameter is not specified, it will be used as the default project.
                     * @return ProjectId The project ID associated with the Cloud Load Balancer instance can be obtained through the [DescribeLoadBalancers](https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1) API. If this parameter is not specified, it will be used as the default project.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置The project ID associated with the Cloud Load Balancer instance can be obtained through the [DescribeLoadBalancers](https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1) API. If this parameter is not specified, it will be used as the default project.
                     * @param _projectId The project ID associated with the Cloud Load Balancer instance can be obtained through the [DescribeLoadBalancers](https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1) API. If this parameter is not specified, it will be used as the default project.
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Applicable only to public network CLB. Sets the primary AZ ID for cross-AZ disaster recovery, such as 100001 or ap-guangzhou-1.
Note: The primary AZ loads traffic, while the secondary AZ does not load traffic by default and is used only if the primary AZ becomes unavailable. The platform will automatically select the optimal secondary AZ. You can call the [DescribeResources](https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1) API to query the primary AZ list of a region.
                     * @return MasterZoneId Applicable only to public network CLB. Sets the primary AZ ID for cross-AZ disaster recovery, such as 100001 or ap-guangzhou-1.
Note: The primary AZ loads traffic, while the secondary AZ does not load traffic by default and is used only if the primary AZ becomes unavailable. The platform will automatically select the optimal secondary AZ. You can call the [DescribeResources](https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1) API to query the primary AZ list of a region.
                     * 
                     */
                    std::string GetMasterZoneId() const;

                    /**
                     * 设置Applicable only to public network CLB. Sets the primary AZ ID for cross-AZ disaster recovery, such as 100001 or ap-guangzhou-1.
Note: The primary AZ loads traffic, while the secondary AZ does not load traffic by default and is used only if the primary AZ becomes unavailable. The platform will automatically select the optimal secondary AZ. You can call the [DescribeResources](https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1) API to query the primary AZ list of a region.
                     * @param _masterZoneId Applicable only to public network CLB. Sets the primary AZ ID for cross-AZ disaster recovery, such as 100001 or ap-guangzhou-1.
Note: The primary AZ loads traffic, while the secondary AZ does not load traffic by default and is used only if the primary AZ becomes unavailable. The platform will automatically select the optimal secondary AZ. You can call the [DescribeResources](https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1) API to query the primary AZ list of a region.
                     * 
                     */
                    void SetMasterZoneId(const std::string& _masterZoneId);

                    /**
                     * 判断参数 MasterZoneId 是否已赋值
                     * @return MasterZoneId 是否已赋值
                     * 
                     */
                    bool MasterZoneIdHasBeenSet() const;

                    /**
                     * 获取Applicable only to public network CLB. Sets the secondary AZ ID for cross-AZ disaster recovery, such as 100001 or ap-guangzhou-1.
Note: The secondary AZ sustains traffic when the primary AZ encounters faults. You can call the [DescribeResources](https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1) API to query the list of primary/secondary AZs in a region.
                     * @return SlaveZoneId Applicable only to public network CLB. Sets the secondary AZ ID for cross-AZ disaster recovery, such as 100001 or ap-guangzhou-1.
Note: The secondary AZ sustains traffic when the primary AZ encounters faults. You can call the [DescribeResources](https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1) API to query the list of primary/secondary AZs in a region.
                     * 
                     */
                    std::string GetSlaveZoneId() const;

                    /**
                     * 设置Applicable only to public network CLB. Sets the secondary AZ ID for cross-AZ disaster recovery, such as 100001 or ap-guangzhou-1.
Note: The secondary AZ sustains traffic when the primary AZ encounters faults. You can call the [DescribeResources](https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1) API to query the list of primary/secondary AZs in a region.
                     * @param _slaveZoneId Applicable only to public network CLB. Sets the secondary AZ ID for cross-AZ disaster recovery, such as 100001 or ap-guangzhou-1.
Note: The secondary AZ sustains traffic when the primary AZ encounters faults. You can call the [DescribeResources](https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1) API to query the list of primary/secondary AZs in a region.
                     * 
                     */
                    void SetSlaveZoneId(const std::string& _slaveZoneId);

                    /**
                     * 判断参数 SlaveZoneId 是否已赋值
                     * @return SlaveZoneId 是否已赋值
                     * 
                     */
                    bool SlaveZoneIdHasBeenSet() const;

                    /**
                     * 获取Applicable only to public network CLB. Availability zone ID. Specify an availability zone to create a Cloud Load Balancer instance, for example, ap-guangzhou-1. If not specified, queries CVM instances in all AZs. If needed, call the DescribeZones API (https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1) to query the availability zone list.
                     * @return ZoneId Applicable only to public network CLB. Availability zone ID. Specify an availability zone to create a Cloud Load Balancer instance, for example, ap-guangzhou-1. If not specified, queries CVM instances in all AZs. If needed, call the DescribeZones API (https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1) to query the availability zone list.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Applicable only to public network CLB. Availability zone ID. Specify an availability zone to create a Cloud Load Balancer instance, for example, ap-guangzhou-1. If not specified, queries CVM instances in all AZs. If needed, call the DescribeZones API (https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1) to query the availability zone list.
                     * @param _zoneId Applicable only to public network CLB. Availability zone ID. Specify an availability zone to create a Cloud Load Balancer instance, for example, ap-guangzhou-1. If not specified, queries CVM instances in all AZs. If needed, call the DescribeZones API (https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1) to query the availability zone list.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取CLB network billing mode, applicable only to public network CLB instances.
                     * @return InternetAccessible CLB network billing mode, applicable only to public network CLB instances.
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置CLB network billing mode, applicable only to public network CLB instances.
                     * @param _internetAccessible CLB network billing mode, applicable only to public network CLB instances.
                     * 
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     * 
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取It only applies to public CLB. Currently, the static single-line IP type is supported only for the regions of Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu, and Chongqing. If you need to experience it, contact your business manager. After approval, you can select the ISP type as China Mobile (CMCC), China Unicom (CUCC), or China Telecom (CTCC). The network billing mode should be selected as billing by bandwidth package (BANDWIDTH_PACKAGE). If this parameter is not specified, BGP is used by default. You can use the DescribeResources API to query ISPs supported for a region.
                     * @return VipIsp It only applies to public CLB. Currently, the static single-line IP type is supported only for the regions of Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu, and Chongqing. If you need to experience it, contact your business manager. After approval, you can select the ISP type as China Mobile (CMCC), China Unicom (CUCC), or China Telecom (CTCC). The network billing mode should be selected as billing by bandwidth package (BANDWIDTH_PACKAGE). If this parameter is not specified, BGP is used by default. You can use the DescribeResources API to query ISPs supported for a region.
                     * 
                     */
                    std::string GetVipIsp() const;

                    /**
                     * 设置It only applies to public CLB. Currently, the static single-line IP type is supported only for the regions of Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu, and Chongqing. If you need to experience it, contact your business manager. After approval, you can select the ISP type as China Mobile (CMCC), China Unicom (CUCC), or China Telecom (CTCC). The network billing mode should be selected as billing by bandwidth package (BANDWIDTH_PACKAGE). If this parameter is not specified, BGP is used by default. You can use the DescribeResources API to query ISPs supported for a region.
                     * @param _vipIsp It only applies to public CLB. Currently, the static single-line IP type is supported only for the regions of Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu, and Chongqing. If you need to experience it, contact your business manager. After approval, you can select the ISP type as China Mobile (CMCC), China Unicom (CUCC), or China Telecom (CTCC). The network billing mode should be selected as billing by bandwidth package (BANDWIDTH_PACKAGE). If this parameter is not specified, BGP is used by default. You can use the DescribeResources API to query ISPs supported for a region.
                     * 
                     */
                    void SetVipIsp(const std::string& _vipIsp);

                    /**
                     * 判断参数 VipIsp 是否已赋值
                     * @return VipIsp 是否已赋值
                     * 
                     */
                    bool VipIspHasBeenSet() const;

                    /**
                     * 获取Designate a Vip to apply for Cloud Load Balancer.
                     * @return Vip Designate a Vip to apply for Cloud Load Balancer.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Designate a Vip to apply for Cloud Load Balancer.
                     * @param _vip Designate a Vip to apply for Cloud Load Balancer.
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取When you purchase Cloud Load Balancer (CLB), you can tag it.
                     * @return Tags When you purchase Cloud Load Balancer (CLB), you can tag it.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置When you purchase Cloud Load Balancer (CLB), you can tag it.
                     * @param _tags When you purchase Cloud Load Balancer (CLB), you can tag it.
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Exclusive cluster information.
                     * @return ExclusiveCluster Exclusive cluster information.
                     * 
                     */
                    ExclusiveCluster GetExclusiveCluster() const;

                    /**
                     * 设置Exclusive cluster information.
                     * @param _exclusiveCluster Exclusive cluster information.
                     * 
                     */
                    void SetExclusiveCluster(const ExclusiveCluster& _exclusiveCluster);

                    /**
                     * 判断参数 ExclusiveCluster 是否已赋值
                     * @return ExclusiveCluster 是否已赋值
                     * 
                     */
                    bool ExclusiveClusterHasBeenSet() const;

                    /**
                     * 获取Bandwidth package ID. If this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) supports only billing by bandwidth package (BANDWIDTH_PACKAGE).
                     * @return BandwidthPackageId Bandwidth package ID. If this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) supports only billing by bandwidth package (BANDWIDTH_PACKAGE).
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置Bandwidth package ID. If this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) supports only billing by bandwidth package (BANDWIDTH_PACKAGE).
                     * @param _bandwidthPackageId Bandwidth package ID. If this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) supports only billing by bandwidth package (BANDWIDTH_PACKAGE).
                     * 
                     */
                    void SetBandwidthPackageId(const std::string& _bandwidthPackageId);

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                    /**
                     * 获取Whether to support the feature of binding IP addresses across regions/VPCs.
                     * @return SnatPro Whether to support the feature of binding IP addresses across regions/VPCs.
                     * 
                     */
                    bool GetSnatPro() const;

                    /**
                     * 设置Whether to support the feature of binding IP addresses across regions/VPCs.
                     * @param _snatPro Whether to support the feature of binding IP addresses across regions/VPCs.
                     * 
                     */
                    void SetSnatPro(const bool& _snatPro);

                    /**
                     * 判断参数 SnatPro 是否已赋值
                     * @return SnatPro 是否已赋值
                     * 
                     */
                    bool SnatProHasBeenSet() const;

                    /**
                     * 获取SNAT IP addresses to be created when the feature of cross-region/cross-VPC IP address binding is enabled.
                     * @return SnatIps SNAT IP addresses to be created when the feature of cross-region/cross-VPC IP address binding is enabled.
                     * 
                     */
                    std::vector<SnatIp> GetSnatIps() const;

                    /**
                     * 设置SNAT IP addresses to be created when the feature of cross-region/cross-VPC IP address binding is enabled.
                     * @param _snatIps SNAT IP addresses to be created when the feature of cross-region/cross-VPC IP address binding is enabled.
                     * 
                     */
                    void SetSnatIps(const std::vector<SnatIp>& _snatIps);

                    /**
                     * 判断参数 SnatIps 是否已赋值
                     * @return SnatIps 是否已赋值
                     * 
                     */
                    bool SnatIpsHasBeenSet() const;

                    /**
                     * 获取Public network exclusive cluster ID or CDCId.
                     * @return ClusterIds Public network exclusive cluster ID or CDCId.
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置Public network exclusive cluster ID or CDCId.
                     * @param _clusterIds Public network exclusive cluster ID or CDCId.
                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                    /**
                     * 获取Performance capacity specification.<li>clb.c2.medium (standard type)</li><li>clb.c3.small (advanced type 1)</li><li>clb.c3.medium (advanced type 2)</li><li>clb.c4.small (high-strength type 1)</li><li>clb.c4.medium (high-strength type 2)</li><li>clb.c4.large (high-strength type 3)</li><li>clb.c4.xlarge (high-strength type 4)</li>
                     * @return SlaType Performance capacity specification.<li>clb.c2.medium (standard type)</li><li>clb.c3.small (advanced type 1)</li><li>clb.c3.medium (advanced type 2)</li><li>clb.c4.small (high-strength type 1)</li><li>clb.c4.medium (high-strength type 2)</li><li>clb.c4.large (high-strength type 3)</li><li>clb.c4.xlarge (high-strength type 4)</li>
                     * 
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置Performance capacity specification.<li>clb.c2.medium (standard type)</li><li>clb.c3.small (advanced type 1)</li><li>clb.c3.medium (advanced type 2)</li><li>clb.c4.small (high-strength type 1)</li><li>clb.c4.medium (high-strength type 2)</li><li>clb.c4.large (high-strength type 3)</li><li>clb.c4.xlarge (high-strength type 4)</li>
                     * @param _slaType Performance capacity specification.<li>clb.c2.medium (standard type)</li><li>clb.c3.small (advanced type 1)</li><li>clb.c3.medium (advanced type 2)</li><li>clb.c4.small (high-strength type 1)</li><li>clb.c4.medium (high-strength type 2)</li><li>clb.c4.large (high-strength type 3)</li><li>clb.c4.xlarge (high-strength type 4)</li>
                     * 
                     */
                    void SetSlaType(const std::string& _slaType);

                    /**
                     * 判断参数 SlaType 是否已赋值
                     * @return SlaType 是否已赋值
                     * 
                     */
                    bool SlaTypeHasBeenSet() const;

                    /**
                     * 获取Exclusive STGW cluster tag.
                     * @return ClusterTag Exclusive STGW cluster tag.
                     * 
                     */
                    std::string GetClusterTag() const;

                    /**
                     * 设置Exclusive STGW cluster tag.
                     * @param _clusterTag Exclusive STGW cluster tag.
                     * 
                     */
                    void SetClusterTag(const std::string& _clusterTag);

                    /**
                     * 判断参数 ClusterTag 是否已赋值
                     * @return ClusterTag 是否已赋值
                     * 
                     */
                    bool ClusterTagHasBeenSet() const;

                    /**
                     * 获取Applicable only to private network CLB. When connected to nearby via private network, select availability zone for deployment. You can call the [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1) API to query the availability zone list.
                     * @return Zones Applicable only to private network CLB. When connected to nearby via private network, select availability zone for deployment. You can call the [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1) API to query the availability zone list.
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置Applicable only to private network CLB. When connected to nearby via private network, select availability zone for deployment. You can call the [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1) API to query the availability zone list.
                     * @param _zones Applicable only to private network CLB. When connected to nearby via private network, select availability zone for deployment. You can call the [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1) API to query the availability zone list.
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取Unique ID of an EIP, in the format of eip-11112222, which is applicable only for binding EIP to private network CLB.
                     * @return EipAddressId Unique ID of an EIP, in the format of eip-11112222, which is applicable only for binding EIP to private network CLB.
                     * 
                     */
                    std::string GetEipAddressId() const;

                    /**
                     * 设置Unique ID of an EIP, in the format of eip-11112222, which is applicable only for binding EIP to private network CLB.
                     * @param _eipAddressId Unique ID of an EIP, in the format of eip-11112222, which is applicable only for binding EIP to private network CLB.
                     * 
                     */
                    void SetEipAddressId(const std::string& _eipAddressId);

                    /**
                     * 判断参数 EipAddressId 是否已赋值
                     * @return EipAddressId 是否已赋值
                     * 
                     */
                    bool EipAddressIdHasBeenSet() const;

                private:

                    /**
                     * CLB ID.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * The name of the cloned CLB instance. Rule: 1-60 English letters, Chinese characters, digits, hyphens "-", or underscores "_".
Note: If the name is the same as an existing Cloud Load Balancer instance in the system, the system will automatically generate the name of the created CLB instance.
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * The project ID associated with the Cloud Load Balancer instance can be obtained through the [DescribeLoadBalancers](https://www.tencentcloud.com/document/product/214/30685?from_cn_redirect=1) API. If this parameter is not specified, it will be used as the default project.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Applicable only to public network CLB. Sets the primary AZ ID for cross-AZ disaster recovery, such as 100001 or ap-guangzhou-1.
Note: The primary AZ loads traffic, while the secondary AZ does not load traffic by default and is used only if the primary AZ becomes unavailable. The platform will automatically select the optimal secondary AZ. You can call the [DescribeResources](https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1) API to query the primary AZ list of a region.
                     */
                    std::string m_masterZoneId;
                    bool m_masterZoneIdHasBeenSet;

                    /**
                     * Applicable only to public network CLB. Sets the secondary AZ ID for cross-AZ disaster recovery, such as 100001 or ap-guangzhou-1.
Note: The secondary AZ sustains traffic when the primary AZ encounters faults. You can call the [DescribeResources](https://www.tencentcloud.com/document/api/214/70213?from_cn_redirect=1) API to query the list of primary/secondary AZs in a region.
                     */
                    std::string m_slaveZoneId;
                    bool m_slaveZoneIdHasBeenSet;

                    /**
                     * Applicable only to public network CLB. Availability zone ID. Specify an availability zone to create a Cloud Load Balancer instance, for example, ap-guangzhou-1. If not specified, queries CVM instances in all AZs. If needed, call the DescribeZones API (https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1) to query the availability zone list.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * CLB network billing mode, applicable only to public network CLB instances.
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * It only applies to public CLB. Currently, the static single-line IP type is supported only for the regions of Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu, and Chongqing. If you need to experience it, contact your business manager. After approval, you can select the ISP type as China Mobile (CMCC), China Unicom (CUCC), or China Telecom (CTCC). The network billing mode should be selected as billing by bandwidth package (BANDWIDTH_PACKAGE). If this parameter is not specified, BGP is used by default. You can use the DescribeResources API to query ISPs supported for a region.
                     */
                    std::string m_vipIsp;
                    bool m_vipIspHasBeenSet;

                    /**
                     * Designate a Vip to apply for Cloud Load Balancer.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * When you purchase Cloud Load Balancer (CLB), you can tag it.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Exclusive cluster information.
                     */
                    ExclusiveCluster m_exclusiveCluster;
                    bool m_exclusiveClusterHasBeenSet;

                    /**
                     * Bandwidth package ID. If this parameter is specified, the network billing mode (InternetAccessible.InternetChargeType) supports only billing by bandwidth package (BANDWIDTH_PACKAGE).
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * Whether to support the feature of binding IP addresses across regions/VPCs.
                     */
                    bool m_snatPro;
                    bool m_snatProHasBeenSet;

                    /**
                     * SNAT IP addresses to be created when the feature of cross-region/cross-VPC IP address binding is enabled.
                     */
                    std::vector<SnatIp> m_snatIps;
                    bool m_snatIpsHasBeenSet;

                    /**
                     * Public network exclusive cluster ID or CDCId.
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * Performance capacity specification.<li>clb.c2.medium (standard type)</li><li>clb.c3.small (advanced type 1)</li><li>clb.c3.medium (advanced type 2)</li><li>clb.c4.small (high-strength type 1)</li><li>clb.c4.medium (high-strength type 2)</li><li>clb.c4.large (high-strength type 3)</li><li>clb.c4.xlarge (high-strength type 4)</li>
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                    /**
                     * Exclusive STGW cluster tag.
                     */
                    std::string m_clusterTag;
                    bool m_clusterTagHasBeenSet;

                    /**
                     * Applicable only to private network CLB. When connected to nearby via private network, select availability zone for deployment. You can call the [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1) API to query the availability zone list.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Unique ID of an EIP, in the format of eip-11112222, which is applicable only for binding EIP to private network CLB.
                     */
                    std::string m_eipAddressId;
                    bool m_eipAddressIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20230417_MODEL_CLONELOADBALANCERREQUEST_H_
