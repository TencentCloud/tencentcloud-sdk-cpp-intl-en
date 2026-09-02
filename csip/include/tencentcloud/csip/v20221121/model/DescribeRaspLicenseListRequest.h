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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERASPLICENSELISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERASPLICENSELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeRaspLicenseList request structure.
                */
                class DescribeRaspLicenseListRequest : public AbstractModel
                {
                public:
                    DescribeRaspLicenseListRequest();
                    ~DescribeRaspLicenseListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria.
-AssetType: asset type (CWP: CWP asset, TCSS_HOST: container host node, TCSS_EKS: container super node)
-PluginStatus: plug-in status. Valid values: `Normal` (use normally), `Abnormal` (existence of anomalies), `Unused` (inactive).
-ProtectionSwitch (Enable: enabled; Disable: not enabled)
- ProtectionVersion: Protection edition. Valid values: `Rasp`: authorization package for important period protection; `Unauthorized`: unauthorized.
- InstanceID Instance ID
- InstanceName: instance name
- InstanceIP: instance IP address (private/public IP address)
- Container node ID of NodeID
-NodeName: Container node name
- ClusterID: Container cluster ID
-ClusterName: container cluster name.
                     * @return Filters Filter criteria.
-AssetType: asset type (CWP: CWP asset, TCSS_HOST: container host node, TCSS_EKS: container super node)
-PluginStatus: plug-in status. Valid values: `Normal` (use normally), `Abnormal` (existence of anomalies), `Unused` (inactive).
-ProtectionSwitch (Enable: enabled; Disable: not enabled)
- ProtectionVersion: Protection edition. Valid values: `Rasp`: authorization package for important period protection; `Unauthorized`: unauthorized.
- InstanceID Instance ID
- InstanceName: instance name
- InstanceIP: instance IP address (private/public IP address)
- Container node ID of NodeID
-NodeName: Container node name
- ClusterID: Container cluster ID
-ClusterName: container cluster name.
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter criteria.
-AssetType: asset type (CWP: CWP asset, TCSS_HOST: container host node, TCSS_EKS: container super node)
-PluginStatus: plug-in status. Valid values: `Normal` (use normally), `Abnormal` (existence of anomalies), `Unused` (inactive).
-ProtectionSwitch (Enable: enabled; Disable: not enabled)
- ProtectionVersion: Protection edition. Valid values: `Rasp`: authorization package for important period protection; `Unauthorized`: unauthorized.
- InstanceID Instance ID
- InstanceName: instance name
- InstanceIP: instance IP address (private/public IP address)
- Container node ID of NodeID
-NodeName: Container node name
- ClusterID: Container cluster ID
-ClusterName: container cluster name.
                     * @param _filters Filter criteria.
-AssetType: asset type (CWP: CWP asset, TCSS_HOST: container host node, TCSS_EKS: container super node)
-PluginStatus: plug-in status. Valid values: `Normal` (use normally), `Abnormal` (existence of anomalies), `Unused` (inactive).
-ProtectionSwitch (Enable: enabled; Disable: not enabled)
- ProtectionVersion: Protection edition. Valid values: `Rasp`: authorization package for important period protection; `Unauthorized`: unauthorized.
- InstanceID Instance ID
- InstanceName: instance name
- InstanceIP: instance IP address (private/public IP address)
- Container node ID of NodeID
-NodeName: Container node name
- ClusterID: Container cluster ID
-ClusterName: container cluster name.
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Maximum number of entries. Default value: 10.
                     * @return Limit Maximum number of entries. Default value: 10.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Maximum number of entries. Default value: 10.
                     * @param _limit Maximum number of entries. Default value: 10.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0
                     * @return Offset Offset. Default value: 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0
                     * @param _offset Offset. Default value: 0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: ASC (ascending) and DESC (descending).
                     * @return Order Sorting order. Valid values: ASC (ascending) and DESC (descending).
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order. Valid values: ASC (ascending) and DESC (descending).
                     * @param _order Sorting order. Valid values: ASC (ascending) and DESC (descending).
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Sort value
- LatestUpdateTime: Latest update time.
                     * @return By Sort value
- LatestUpdateTime: Latest update time.
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sort value
- LatestUpdateTime: Latest update time.
                     * @param _by Sort value
- LatestUpdateTime: Latest update time.
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * Filter criteria.
-AssetType: asset type (CWP: CWP asset, TCSS_HOST: container host node, TCSS_EKS: container super node)
-PluginStatus: plug-in status. Valid values: `Normal` (use normally), `Abnormal` (existence of anomalies), `Unused` (inactive).
-ProtectionSwitch (Enable: enabled; Disable: not enabled)
- ProtectionVersion: Protection edition. Valid values: `Rasp`: authorization package for important period protection; `Unauthorized`: unauthorized.
- InstanceID Instance ID
- InstanceName: instance name
- InstanceIP: instance IP address (private/public IP address)
- Container node ID of NodeID
-NodeName: Container node name
- ClusterID: Container cluster ID
-ClusterName: container cluster name.
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Maximum number of entries. Default value: 10.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting order. Valid values: ASC (ascending) and DESC (descending).
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sort value
- LatestUpdateTime: Latest update time.
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERASPLICENSELISTREQUEST_H_
