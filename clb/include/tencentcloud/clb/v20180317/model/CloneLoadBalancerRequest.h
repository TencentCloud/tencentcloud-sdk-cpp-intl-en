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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CLONELOADBALANCERREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CLONELOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/InternetAccessible.h>
#include <tencentcloud/clb/v20180317/model/TagInfo.h>
#include <tencentcloud/clb/v20180317/model/ExclusiveCluster.h>
#include <tencentcloud/clb/v20180317/model/SnatIp.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
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
                     * 获取Specifies the clb ID. you can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
                     * @return LoadBalancerId Specifies the clb ID. you can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置Specifies the clb ID. you can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
                     * @param _loadBalancerId Specifies the clb ID. you can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
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
                     * 获取Specifies the name of the cloned load balancing instance. rule: 1-60 english letters, chinese characters, digits, connecting lines "-", or underscores "_".
Note: if the name is identical to that of an existing load balancing instance in the system, the system will automatically generate a name for the created cloud load balancer instance.
                     * @return LoadBalancerName Specifies the name of the cloned load balancing instance. rule: 1-60 english letters, chinese characters, digits, connecting lines "-", or underscores "_".
Note: if the name is identical to that of an existing load balancing instance in the system, the system will automatically generate a name for the created cloud load balancer instance.
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置Specifies the name of the cloned load balancing instance. rule: 1-60 english letters, chinese characters, digits, connecting lines "-", or underscores "_".
Note: if the name is identical to that of an existing load balancing instance in the system, the system will automatically generate a name for the created cloud load balancer instance.
                     * @param _loadBalancerName Specifies the name of the cloned load balancing instance. rule: 1-60 english letters, chinese characters, digits, connecting lines "-", or underscores "_".
Note: if the name is identical to that of an existing load balancing instance in the system, the system will automatically generate a name for the created cloud load balancer instance.
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
                     * 获取ID of the project to which a CLB instance belongs, which can be obtained through the `DescribeProject` API. If this parameter is not passed in, the default project will be used.
                     * @return ProjectId ID of the project to which a CLB instance belongs, which can be obtained through the `DescribeProject` API. If this parameter is not passed in, the default project will be used.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置ID of the project to which a CLB instance belongs, which can be obtained through the `DescribeProject` API. If this parameter is not passed in, the default project will be used.
                     * @param _projectId ID of the project to which a CLB instance belongs, which can be obtained through the `DescribeProject` API. If this parameter is not passed in, the default project will be used.
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
                     * 获取Sets the primary AZ ID for cross-AZ disaster recovery, such as `100001` or `ap-guangzhou-1`, which is applicable only to public network CLB.
Note: A primary AZ loads traffic, while a secondary AZ does not load traffic by default and will be used only if the primary AZ becomes unavailable. The platform will automatically select the optimal secondary AZ. You can use the `DescribeResource` API to query the primary AZ list of a region.
                     * @return MasterZoneId Sets the primary AZ ID for cross-AZ disaster recovery, such as `100001` or `ap-guangzhou-1`, which is applicable only to public network CLB.
Note: A primary AZ loads traffic, while a secondary AZ does not load traffic by default and will be used only if the primary AZ becomes unavailable. The platform will automatically select the optimal secondary AZ. You can use the `DescribeResource` API to query the primary AZ list of a region.
                     * 
                     */
                    std::string GetMasterZoneId() const;

                    /**
                     * 设置Sets the primary AZ ID for cross-AZ disaster recovery, such as `100001` or `ap-guangzhou-1`, which is applicable only to public network CLB.
Note: A primary AZ loads traffic, while a secondary AZ does not load traffic by default and will be used only if the primary AZ becomes unavailable. The platform will automatically select the optimal secondary AZ. You can use the `DescribeResource` API to query the primary AZ list of a region.
                     * @param _masterZoneId Sets the primary AZ ID for cross-AZ disaster recovery, such as `100001` or `ap-guangzhou-1`, which is applicable only to public network CLB.
Note: A primary AZ loads traffic, while a secondary AZ does not load traffic by default and will be used only if the primary AZ becomes unavailable. The platform will automatically select the optimal secondary AZ. You can use the `DescribeResource` API to query the primary AZ list of a region.
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
                     * 获取Specifies the secondary AZ ID for cross-AZ disaster recovery, such as `100001` or `ap-guangzhou-1`. It is applicable only to public network CLB.
Note: A secondary AZ will load traffic if the primary AZ is faulty. You can use the `DescribeMasterZones` API to query the primary and secondary AZ list of a region.
                     * @return SlaveZoneId Specifies the secondary AZ ID for cross-AZ disaster recovery, such as `100001` or `ap-guangzhou-1`. It is applicable only to public network CLB.
Note: A secondary AZ will load traffic if the primary AZ is faulty. You can use the `DescribeMasterZones` API to query the primary and secondary AZ list of a region.
                     * 
                     */
                    std::string GetSlaveZoneId() const;

                    /**
                     * 设置Specifies the secondary AZ ID for cross-AZ disaster recovery, such as `100001` or `ap-guangzhou-1`. It is applicable only to public network CLB.
Note: A secondary AZ will load traffic if the primary AZ is faulty. You can use the `DescribeMasterZones` API to query the primary and secondary AZ list of a region.
                     * @param _slaveZoneId Specifies the secondary AZ ID for cross-AZ disaster recovery, such as `100001` or `ap-guangzhou-1`. It is applicable only to public network CLB.
Note: A secondary AZ will load traffic if the primary AZ is faulty. You can use the `DescribeMasterZones` API to query the primary and secondary AZ list of a region.
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
                     * 获取Applicable only to public network clb. AZ ID, both availability zone ID and name are supported. specify availability zone to create a load balancing instance, for example: 100001 or ap-guangzhou-1. if not passed, queries CVM instances in all azs. if needed, call the API for the query DescribeZones (https://www.tencentcloud.comom/document/product/213/15707?from_cn_redirect=1) to specify availability zone.
                     * @return ZoneId Applicable only to public network clb. AZ ID, both availability zone ID and name are supported. specify availability zone to create a load balancing instance, for example: 100001 or ap-guangzhou-1. if not passed, queries CVM instances in all azs. if needed, call the API for the query DescribeZones (https://www.tencentcloud.comom/document/product/213/15707?from_cn_redirect=1) to specify availability zone.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Applicable only to public network clb. AZ ID, both availability zone ID and name are supported. specify availability zone to create a load balancing instance, for example: 100001 or ap-guangzhou-1. if not passed, queries CVM instances in all azs. if needed, call the API for the query DescribeZones (https://www.tencentcloud.comom/document/product/213/15707?from_cn_redirect=1) to specify availability zone.
                     * @param _zoneId Applicable only to public network clb. AZ ID, both availability zone ID and name are supported. specify availability zone to create a load balancing instance, for example: 100001 or ap-guangzhou-1. if not passed, queries CVM instances in all azs. if needed, call the API for the query DescribeZones (https://www.tencentcloud.comom/document/product/213/15707?from_cn_redirect=1) to specify availability zone.
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
                     * 获取Specifies the Vip to apply for cloud load balancer.
                     * @return Vip Specifies the Vip to apply for cloud load balancer.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Specifies the Vip to apply for cloud load balancer.
                     * @param _vip Specifies the Vip to apply for cloud load balancer.
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
                     * 获取Proceed to purchase cloud load balancer and Tag it at the same time.
                     * @return Tags Proceed to purchase cloud load balancer and Tag it at the same time.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Proceed to purchase cloud load balancer and Tag it at the same time.
                     * @param _tags Proceed to purchase cloud load balancer and Tag it at the same time.
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
                     * 获取BANDWIDTH PACKAGE ID, which can be obtained through the [DescribeBandwidthPackages](https://www.tencentcloud.comom/document/api/215/19209?from_cn_redirect=1) api. specifies this parameter indicates the network billing mode (InternetAccessible.InternetChargeType) supports only billing by BANDWIDTH PACKAGE (BANDWIDTH_PACKAGE).
                     * @return BandwidthPackageId BANDWIDTH PACKAGE ID, which can be obtained through the [DescribeBandwidthPackages](https://www.tencentcloud.comom/document/api/215/19209?from_cn_redirect=1) api. specifies this parameter indicates the network billing mode (InternetAccessible.InternetChargeType) supports only billing by BANDWIDTH PACKAGE (BANDWIDTH_PACKAGE).
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置BANDWIDTH PACKAGE ID, which can be obtained through the [DescribeBandwidthPackages](https://www.tencentcloud.comom/document/api/215/19209?from_cn_redirect=1) api. specifies this parameter indicates the network billing mode (InternetAccessible.InternetChargeType) supports only billing by BANDWIDTH PACKAGE (BANDWIDTH_PACKAGE).
                     * @param _bandwidthPackageId BANDWIDTH PACKAGE ID, which can be obtained through the [DescribeBandwidthPackages](https://www.tencentcloud.comom/document/api/215/19209?from_cn_redirect=1) api. specifies this parameter indicates the network billing mode (InternetAccessible.InternetChargeType) supports only billing by BANDWIDTH PACKAGE (BANDWIDTH_PACKAGE).
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
                     * 获取Specifies whether the cross-regional or cross-Vpc IP binding feature is supported.
                     * @return SnatPro Specifies whether the cross-regional or cross-Vpc IP binding feature is supported.
                     * 
                     */
                    bool GetSnatPro() const;

                    /**
                     * 设置Specifies whether the cross-regional or cross-Vpc IP binding feature is supported.
                     * @param _snatPro Specifies whether the cross-regional or cross-Vpc IP binding feature is supported.
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
                     * 获取Enables cross-regional or cross-Vpc IP binding and creates a SnatIp.
                     * @return SnatIps Enables cross-regional or cross-Vpc IP binding and creates a SnatIp.
                     * 
                     */
                    std::vector<SnatIp> GetSnatIps() const;

                    /**
                     * 设置Enables cross-regional or cross-Vpc IP binding and creates a SnatIp.
                     * @param _snatIps Enables cross-regional or cross-Vpc IP binding and creates a SnatIp.
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
                     * 获取Public network exclusive cluster ID or CDCId. can be obtained through the [DescribeExclusiveClusters](https://www.tencentcloud.comom/document/product/214/49278?from_cn_redirect=1) api.
                     * @return ClusterIds Public network exclusive cluster ID or CDCId. can be obtained through the [DescribeExclusiveClusters](https://www.tencentcloud.comom/document/product/214/49278?from_cn_redirect=1) api.
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置Public network exclusive cluster ID or CDCId. can be obtained through the [DescribeExclusiveClusters](https://www.tencentcloud.comom/document/product/214/49278?from_cn_redirect=1) api.
                     * @param _clusterIds Public network exclusive cluster ID or CDCId. can be obtained through the [DescribeExclusiveClusters](https://www.tencentcloud.comom/document/product/214/49278?from_cn_redirect=1) api.
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
                     * 获取Performance capacity specification. <li>clb.c2.medium (standard type)</li> <li>clb.c3.small (advanced type 1)</li> <li>clb.c3.medium (advanced type 2)</li> <li>clb.c4.small (high-strength type 1)</li> <li>clb.c4.medium (high-strength type 2)</li> <li>clb.c4.large (high-strength type 3)</li> <li>clb.c4.xlarge (high-strength type 4)</li>.
                     * @return SlaType Performance capacity specification. <li>clb.c2.medium (standard type)</li> <li>clb.c3.small (advanced type 1)</li> <li>clb.c3.medium (advanced type 2)</li> <li>clb.c4.small (high-strength type 1)</li> <li>clb.c4.medium (high-strength type 2)</li> <li>clb.c4.large (high-strength type 3)</li> <li>clb.c4.xlarge (high-strength type 4)</li>.
                     * 
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置Performance capacity specification. <li>clb.c2.medium (standard type)</li> <li>clb.c3.small (advanced type 1)</li> <li>clb.c3.medium (advanced type 2)</li> <li>clb.c4.small (high-strength type 1)</li> <li>clb.c4.medium (high-strength type 2)</li> <li>clb.c4.large (high-strength type 3)</li> <li>clb.c4.xlarge (high-strength type 4)</li>.
                     * @param _slaType Performance capacity specification. <li>clb.c2.medium (standard type)</li> <li>clb.c3.small (advanced type 1)</li> <li>clb.c3.medium (advanced type 2)</li> <li>clb.c4.small (high-strength type 1)</li> <li>clb.c4.medium (high-strength type 2)</li> <li>clb.c4.large (high-strength type 3)</li> <li>clb.c4.xlarge (high-strength type 4)</li>.
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
                     * 获取Specifies the Tag of the Stgw exclusive cluster.
                     * @return ClusterTag Specifies the Tag of the Stgw exclusive cluster.
                     * 
                     */
                    std::string GetClusterTag() const;

                    /**
                     * 设置Specifies the Tag of the Stgw exclusive cluster.
                     * @param _clusterTag Specifies the Tag of the Stgw exclusive cluster.
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
                     * 获取Applicable only to private network clb. when connected to nearby, select availability zone for deployment. you can call DescribeZones (https://www.tencentcloud.comom/document/product/213/15707?from_cn_redirect=1) to query the availability zone list.
                     * @return Zones Applicable only to private network clb. when connected to nearby, select availability zone for deployment. you can call DescribeZones (https://www.tencentcloud.comom/document/product/213/15707?from_cn_redirect=1) to query the availability zone list.
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置Applicable only to private network clb. when connected to nearby, select availability zone for deployment. you can call DescribeZones (https://www.tencentcloud.comom/document/product/213/15707?from_cn_redirect=1) to query the availability zone list.
                     * @param _zones Applicable only to private network clb. when connected to nearby, select availability zone for deployment. you can call DescribeZones (https://www.tencentcloud.comom/document/product/213/15707?from_cn_redirect=1) to query the availability zone list.
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
                     * 获取The unique ID of EIP, such as EIP-qhx8udkc, applicable only to private network clb binding EIP, can be queried through the DescribeAddresses API (https://www.tencentcloud.comom/document/product/215/16702?from_cn_redirect=1).
                     * @return EipAddressId The unique ID of EIP, such as EIP-qhx8udkc, applicable only to private network clb binding EIP, can be queried through the DescribeAddresses API (https://www.tencentcloud.comom/document/product/215/16702?from_cn_redirect=1).
                     * 
                     */
                    std::string GetEipAddressId() const;

                    /**
                     * 设置The unique ID of EIP, such as EIP-qhx8udkc, applicable only to private network clb binding EIP, can be queried through the DescribeAddresses API (https://www.tencentcloud.comom/document/product/215/16702?from_cn_redirect=1).
                     * @param _eipAddressId The unique ID of EIP, such as EIP-qhx8udkc, applicable only to private network clb binding EIP, can be queried through the DescribeAddresses API (https://www.tencentcloud.comom/document/product/215/16702?from_cn_redirect=1).
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
                     * Specifies the clb ID. you can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Specifies the name of the cloned load balancing instance. rule: 1-60 english letters, chinese characters, digits, connecting lines "-", or underscores "_".
Note: if the name is identical to that of an existing load balancing instance in the system, the system will automatically generate a name for the created cloud load balancer instance.
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * ID of the project to which a CLB instance belongs, which can be obtained through the `DescribeProject` API. If this parameter is not passed in, the default project will be used.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Sets the primary AZ ID for cross-AZ disaster recovery, such as `100001` or `ap-guangzhou-1`, which is applicable only to public network CLB.
Note: A primary AZ loads traffic, while a secondary AZ does not load traffic by default and will be used only if the primary AZ becomes unavailable. The platform will automatically select the optimal secondary AZ. You can use the `DescribeResource` API to query the primary AZ list of a region.
                     */
                    std::string m_masterZoneId;
                    bool m_masterZoneIdHasBeenSet;

                    /**
                     * Specifies the secondary AZ ID for cross-AZ disaster recovery, such as `100001` or `ap-guangzhou-1`. It is applicable only to public network CLB.
Note: A secondary AZ will load traffic if the primary AZ is faulty. You can use the `DescribeMasterZones` API to query the primary and secondary AZ list of a region.
                     */
                    std::string m_slaveZoneId;
                    bool m_slaveZoneIdHasBeenSet;

                    /**
                     * Applicable only to public network clb. AZ ID, both availability zone ID and name are supported. specify availability zone to create a load balancing instance, for example: 100001 or ap-guangzhou-1. if not passed, queries CVM instances in all azs. if needed, call the API for the query DescribeZones (https://www.tencentcloud.comom/document/product/213/15707?from_cn_redirect=1) to specify availability zone.
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
                     * Specifies the Vip to apply for cloud load balancer.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Proceed to purchase cloud load balancer and Tag it at the same time.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Exclusive cluster information.
                     */
                    ExclusiveCluster m_exclusiveCluster;
                    bool m_exclusiveClusterHasBeenSet;

                    /**
                     * BANDWIDTH PACKAGE ID, which can be obtained through the [DescribeBandwidthPackages](https://www.tencentcloud.comom/document/api/215/19209?from_cn_redirect=1) api. specifies this parameter indicates the network billing mode (InternetAccessible.InternetChargeType) supports only billing by BANDWIDTH PACKAGE (BANDWIDTH_PACKAGE).
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * Specifies whether the cross-regional or cross-Vpc IP binding feature is supported.
                     */
                    bool m_snatPro;
                    bool m_snatProHasBeenSet;

                    /**
                     * Enables cross-regional or cross-Vpc IP binding and creates a SnatIp.
                     */
                    std::vector<SnatIp> m_snatIps;
                    bool m_snatIpsHasBeenSet;

                    /**
                     * Public network exclusive cluster ID or CDCId. can be obtained through the [DescribeExclusiveClusters](https://www.tencentcloud.comom/document/product/214/49278?from_cn_redirect=1) api.
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * Performance capacity specification. <li>clb.c2.medium (standard type)</li> <li>clb.c3.small (advanced type 1)</li> <li>clb.c3.medium (advanced type 2)</li> <li>clb.c4.small (high-strength type 1)</li> <li>clb.c4.medium (high-strength type 2)</li> <li>clb.c4.large (high-strength type 3)</li> <li>clb.c4.xlarge (high-strength type 4)</li>.
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                    /**
                     * Specifies the Tag of the Stgw exclusive cluster.
                     */
                    std::string m_clusterTag;
                    bool m_clusterTagHasBeenSet;

                    /**
                     * Applicable only to private network clb. when connected to nearby, select availability zone for deployment. you can call DescribeZones (https://www.tencentcloud.comom/document/product/213/15707?from_cn_redirect=1) to query the availability zone list.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * The unique ID of EIP, such as EIP-qhx8udkc, applicable only to private network clb binding EIP, can be queried through the DescribeAddresses API (https://www.tencentcloud.comom/document/product/215/16702?from_cn_redirect=1).
                     */
                    std::string m_eipAddressId;
                    bool m_eipAddressIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CLONELOADBALANCERREQUEST_H_
