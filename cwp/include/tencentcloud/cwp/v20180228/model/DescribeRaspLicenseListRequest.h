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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERASPLICENSELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERASPLICENSELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
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
                     * 获取Filter criteria
-AssetType Asset type (CWP Host security asset, TCSS_HOST Container host node, TCSS_EKS Container super node)
-PluginStatus Plug-in status (Normal, Abnormal, Inactive)
-ProtectionSwitch (Enable, Disable)
-ProtectionVersion Protection edition (Rasp authorization package, Unauthorized)
-Instance ID
-Instance name
-InstanceIP Instance IP (private IP address/public network IP)
-Node ID of the container node
-NodeName Container node name
-Container Cluster ID
-Cluster name of the container cluster
                     * @return Filters Filter criteria
-AssetType Asset type (CWP Host security asset, TCSS_HOST Container host node, TCSS_EKS Container super node)
-PluginStatus Plug-in status (Normal, Abnormal, Inactive)
-ProtectionSwitch (Enable, Disable)
-ProtectionVersion Protection edition (Rasp authorization package, Unauthorized)
-Instance ID
-Instance name
-InstanceIP Instance IP (private IP address/public network IP)
-Node ID of the container node
-NodeName Container node name
-Container Cluster ID
-Cluster name of the container cluster
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter criteria
-AssetType Asset type (CWP Host security asset, TCSS_HOST Container host node, TCSS_EKS Container super node)
-PluginStatus Plug-in status (Normal, Abnormal, Inactive)
-ProtectionSwitch (Enable, Disable)
-ProtectionVersion Protection edition (Rasp authorization package, Unauthorized)
-Instance ID
-Instance name
-InstanceIP Instance IP (private IP address/public network IP)
-Node ID of the container node
-NodeName Container node name
-Container Cluster ID
-Cluster name of the container cluster
                     * @param _filters Filter criteria
-AssetType Asset type (CWP Host security asset, TCSS_HOST Container host node, TCSS_EKS Container super node)
-PluginStatus Plug-in status (Normal, Abnormal, Inactive)
-ProtectionSwitch (Enable, Disable)
-ProtectionVersion Protection edition (Rasp authorization package, Unauthorized)
-Instance ID
-Instance name
-InstanceIP Instance IP (private IP address/public network IP)
-Node ID of the container node
-NodeName Container node name
-Container Cluster ID
-Cluster name of the container cluster
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
                     * 获取Offset, which is 0 by default.
                     * @return Offset Offset, which is 0 by default.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, which is 0 by default.
                     * @param _offset Offset, which is 0 by default.
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
                     * 获取Sorting method: ASC, DESC.
                     * @return Order Sorting method: ASC, DESC.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method: ASC, DESC.
                     * @param _order Sorting method: ASC, DESC.
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
-Latest update time
                     * @return By Sort value
-Latest update time
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sort value
-Latest update time
                     * @param _by Sort value
-Latest update time
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
                     * Filter criteria
-AssetType Asset type (CWP Host security asset, TCSS_HOST Container host node, TCSS_EKS Container super node)
-PluginStatus Plug-in status (Normal, Abnormal, Inactive)
-ProtectionSwitch (Enable, Disable)
-ProtectionVersion Protection edition (Rasp authorization package, Unauthorized)
-Instance ID
-Instance name
-InstanceIP Instance IP (private IP address/public network IP)
-Node ID of the container node
-NodeName Container node name
-Container Cluster ID
-Cluster name of the container cluster
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Maximum number of entries. Default value: 10.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset, which is 0 by default.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting method: ASC, DESC.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sort value
-Latest update time
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERASPLICENSELISTREQUEST_H_
