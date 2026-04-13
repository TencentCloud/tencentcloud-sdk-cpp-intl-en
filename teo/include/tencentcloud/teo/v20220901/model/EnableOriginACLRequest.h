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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ENABLEORIGINACLREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ENABLEORIGINACLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * EnableOriginACL request structure.
                */
                class EnableOriginACLRequest : public AbstractModel
                {
                public:
                    EnableOriginACLRequest();
                    ~EnableOriginACLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
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
                     * 获取When first enabling origin protection for a site, configure the layer-7 acceleration domain name in specific IP range mode.
<li>ALL: Target all layer-7 acceleration domain names under the current site. When the number of domains exceeds 200, please go through first in specific mode to enable 200 domain names, and enable the remaining resource via the ModifyOriginACL API.</li>
<li>Specific: Enables layer-7 acceleration for the site's designated domain name.</li>Note: When no parameter is defined, the default is specific. For subsequent addition of layer-7 acceleration domain names or layer-4 proxy instances, configure them via the ModifyOriginACL API.
                     * @return L7EnableMode When first enabling origin protection for a site, configure the layer-7 acceleration domain name in specific IP range mode.
<li>ALL: Target all layer-7 acceleration domain names under the current site. When the number of domains exceeds 200, please go through first in specific mode to enable 200 domain names, and enable the remaining resource via the ModifyOriginACL API.</li>
<li>Specific: Enables layer-7 acceleration for the site's designated domain name.</li>Note: When no parameter is defined, the default is specific. For subsequent addition of layer-7 acceleration domain names or layer-4 proxy instances, configure them via the ModifyOriginACL API.
                     * 
                     */
                    std::string GetL7EnableMode() const;

                    /**
                     * 设置When first enabling origin protection for a site, configure the layer-7 acceleration domain name in specific IP range mode.
<li>ALL: Target all layer-7 acceleration domain names under the current site. When the number of domains exceeds 200, please go through first in specific mode to enable 200 domain names, and enable the remaining resource via the ModifyOriginACL API.</li>
<li>Specific: Enables layer-7 acceleration for the site's designated domain name.</li>Note: When no parameter is defined, the default is specific. For subsequent addition of layer-7 acceleration domain names or layer-4 proxy instances, configure them via the ModifyOriginACL API.
                     * @param _l7EnableMode When first enabling origin protection for a site, configure the layer-7 acceleration domain name in specific IP range mode.
<li>ALL: Target all layer-7 acceleration domain names under the current site. When the number of domains exceeds 200, please go through first in specific mode to enable 200 domain names, and enable the remaining resource via the ModifyOriginACL API.</li>
<li>Specific: Enables layer-7 acceleration for the site's designated domain name.</li>Note: When no parameter is defined, the default is specific. For subsequent addition of layer-7 acceleration domain names or layer-4 proxy instances, configure them via the ModifyOriginACL API.
                     * 
                     */
                    void SetL7EnableMode(const std::string& _l7EnableMode);

                    /**
                     * 判断参数 L7EnableMode 是否已赋值
                     * @return L7EnableMode 是否已赋值
                     * 
                     */
                    bool L7EnableModeHasBeenSet() const;

                    /**
                     * 获取Enable the list of layer-7 acceleration domain names with origin protection. this parameter is valid only when L7EnableMode is set to specific. when L7EnableMode is set to all, retain this parameter as empty. only supports up to 200 layer-7 acceleration domain names in a single operation.
                     * @return L7Hosts Enable the list of layer-7 acceleration domain names with origin protection. this parameter is valid only when L7EnableMode is set to specific. when L7EnableMode is set to all, retain this parameter as empty. only supports up to 200 layer-7 acceleration domain names in a single operation.
                     * 
                     */
                    std::vector<std::string> GetL7Hosts() const;

                    /**
                     * 设置Enable the list of layer-7 acceleration domain names with origin protection. this parameter is valid only when L7EnableMode is set to specific. when L7EnableMode is set to all, retain this parameter as empty. only supports up to 200 layer-7 acceleration domain names in a single operation.
                     * @param _l7Hosts Enable the list of layer-7 acceleration domain names with origin protection. this parameter is valid only when L7EnableMode is set to specific. when L7EnableMode is set to all, retain this parameter as empty. only supports up to 200 layer-7 acceleration domain names in a single operation.
                     * 
                     */
                    void SetL7Hosts(const std::vector<std::string>& _l7Hosts);

                    /**
                     * 判断参数 L7Hosts 是否已赋值
                     * @return L7Hosts 是否已赋值
                     * 
                     */
                    bool L7HostsHasBeenSet() const;

                    /**
                     * 获取When first enabling origin protection for a site, configure the Layer 4 Proxy Instance Configuration in specific IP range mode.
<li>ALL: Enable all L4 proxy instances under the current site. When the instance count exceeds 100, please go through specific mode to enable 100 domain names first. Enable the remaining resources via the ModifyOriginACL API.</li>
<li>specific: Enable for the designated L4 proxy instance under the site.</li>Note: When no parameter is defined, the default is specific. Configure subsequent addition of L7 acceleration domains/L4 proxy instances via the ModifyOriginACL API.
                     * @return L4EnableMode When first enabling origin protection for a site, configure the Layer 4 Proxy Instance Configuration in specific IP range mode.
<li>ALL: Enable all L4 proxy instances under the current site. When the instance count exceeds 100, please go through specific mode to enable 100 domain names first. Enable the remaining resources via the ModifyOriginACL API.</li>
<li>specific: Enable for the designated L4 proxy instance under the site.</li>Note: When no parameter is defined, the default is specific. Configure subsequent addition of L7 acceleration domains/L4 proxy instances via the ModifyOriginACL API.
                     * 
                     */
                    std::string GetL4EnableMode() const;

                    /**
                     * 设置When first enabling origin protection for a site, configure the Layer 4 Proxy Instance Configuration in specific IP range mode.
<li>ALL: Enable all L4 proxy instances under the current site. When the instance count exceeds 100, please go through specific mode to enable 100 domain names first. Enable the remaining resources via the ModifyOriginACL API.</li>
<li>specific: Enable for the designated L4 proxy instance under the site.</li>Note: When no parameter is defined, the default is specific. Configure subsequent addition of L7 acceleration domains/L4 proxy instances via the ModifyOriginACL API.
                     * @param _l4EnableMode When first enabling origin protection for a site, configure the Layer 4 Proxy Instance Configuration in specific IP range mode.
<li>ALL: Enable all L4 proxy instances under the current site. When the instance count exceeds 100, please go through specific mode to enable 100 domain names first. Enable the remaining resources via the ModifyOriginACL API.</li>
<li>specific: Enable for the designated L4 proxy instance under the site.</li>Note: When no parameter is defined, the default is specific. Configure subsequent addition of L7 acceleration domains/L4 proxy instances via the ModifyOriginACL API.
                     * 
                     */
                    void SetL4EnableMode(const std::string& _l4EnableMode);

                    /**
                     * 判断参数 L4EnableMode 是否已赋值
                     * @return L4EnableMode 是否已赋值
                     * 
                     */
                    bool L4EnableModeHasBeenSet() const;

                    /**
                     * 获取The list of L4 proxy instances with origin protection enabled. this parameter is valid only when L4EnableMode is set to specific. retain this parameter empty when L4EnableMode is set to all. only supports up to 100 layer-4 proxy instances per operation.
                     * @return L4ProxyIds The list of L4 proxy instances with origin protection enabled. this parameter is valid only when L4EnableMode is set to specific. retain this parameter empty when L4EnableMode is set to all. only supports up to 100 layer-4 proxy instances per operation.
                     * 
                     */
                    std::vector<std::string> GetL4ProxyIds() const;

                    /**
                     * 设置The list of L4 proxy instances with origin protection enabled. this parameter is valid only when L4EnableMode is set to specific. retain this parameter empty when L4EnableMode is set to all. only supports up to 100 layer-4 proxy instances per operation.
                     * @param _l4ProxyIds The list of L4 proxy instances with origin protection enabled. this parameter is valid only when L4EnableMode is set to specific. retain this parameter empty when L4EnableMode is set to all. only supports up to 100 layer-4 proxy instances per operation.
                     * 
                     */
                    void SetL4ProxyIds(const std::vector<std::string>& _l4ProxyIds);

                    /**
                     * 判断参数 L4ProxyIds 是否已赋值
                     * @return L4ProxyIds 是否已赋值
                     * 
                     */
                    bool L4ProxyIdsHasBeenSet() const;

                    /**
                     * 获取The origin protection back-to-origin ACL control domain. If left empty, the standard global control domain is used by default. Available control domain information can be obtained through the DescribeAvailableOriginACLFamily API query.
Valid values are as follows:
<li>gaz: Standard global availability zone control domain;</li>
<li>mlc: Standard Chinese mainland availability zone control domain;</li>
<li>emc: Standard global (exclude Chinese mainland) availability zone control domain;</li>
<li>plat-gaz: Simplify global availability zone control domain;</li>
<li>plat-mlc: Simplified Chinese mainland availability zone control domain;</li>
<li>plat-emc: Simplify the global (excluding Chinese mainland) availability zone control domain;</li>
                     * @return OriginACLFamily The origin protection back-to-origin ACL control domain. If left empty, the standard global control domain is used by default. Available control domain information can be obtained through the DescribeAvailableOriginACLFamily API query.
Valid values are as follows:
<li>gaz: Standard global availability zone control domain;</li>
<li>mlc: Standard Chinese mainland availability zone control domain;</li>
<li>emc: Standard global (exclude Chinese mainland) availability zone control domain;</li>
<li>plat-gaz: Simplify global availability zone control domain;</li>
<li>plat-mlc: Simplified Chinese mainland availability zone control domain;</li>
<li>plat-emc: Simplify the global (excluding Chinese mainland) availability zone control domain;</li>
                     * 
                     */
                    std::string GetOriginACLFamily() const;

                    /**
                     * 设置The origin protection back-to-origin ACL control domain. If left empty, the standard global control domain is used by default. Available control domain information can be obtained through the DescribeAvailableOriginACLFamily API query.
Valid values are as follows:
<li>gaz: Standard global availability zone control domain;</li>
<li>mlc: Standard Chinese mainland availability zone control domain;</li>
<li>emc: Standard global (exclude Chinese mainland) availability zone control domain;</li>
<li>plat-gaz: Simplify global availability zone control domain;</li>
<li>plat-mlc: Simplified Chinese mainland availability zone control domain;</li>
<li>plat-emc: Simplify the global (excluding Chinese mainland) availability zone control domain;</li>
                     * @param _originACLFamily The origin protection back-to-origin ACL control domain. If left empty, the standard global control domain is used by default. Available control domain information can be obtained through the DescribeAvailableOriginACLFamily API query.
Valid values are as follows:
<li>gaz: Standard global availability zone control domain;</li>
<li>mlc: Standard Chinese mainland availability zone control domain;</li>
<li>emc: Standard global (exclude Chinese mainland) availability zone control domain;</li>
<li>plat-gaz: Simplify global availability zone control domain;</li>
<li>plat-mlc: Simplified Chinese mainland availability zone control domain;</li>
<li>plat-emc: Simplify the global (excluding Chinese mainland) availability zone control domain;</li>
                     * 
                     */
                    void SetOriginACLFamily(const std::string& _originACLFamily);

                    /**
                     * 判断参数 OriginACLFamily 是否已赋值
                     * @return OriginACLFamily 是否已赋值
                     * 
                     */
                    bool OriginACLFamilyHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * When first enabling origin protection for a site, configure the layer-7 acceleration domain name in specific IP range mode.
<li>ALL: Target all layer-7 acceleration domain names under the current site. When the number of domains exceeds 200, please go through first in specific mode to enable 200 domain names, and enable the remaining resource via the ModifyOriginACL API.</li>
<li>Specific: Enables layer-7 acceleration for the site's designated domain name.</li>Note: When no parameter is defined, the default is specific. For subsequent addition of layer-7 acceleration domain names or layer-4 proxy instances, configure them via the ModifyOriginACL API.
                     */
                    std::string m_l7EnableMode;
                    bool m_l7EnableModeHasBeenSet;

                    /**
                     * Enable the list of layer-7 acceleration domain names with origin protection. this parameter is valid only when L7EnableMode is set to specific. when L7EnableMode is set to all, retain this parameter as empty. only supports up to 200 layer-7 acceleration domain names in a single operation.
                     */
                    std::vector<std::string> m_l7Hosts;
                    bool m_l7HostsHasBeenSet;

                    /**
                     * When first enabling origin protection for a site, configure the Layer 4 Proxy Instance Configuration in specific IP range mode.
<li>ALL: Enable all L4 proxy instances under the current site. When the instance count exceeds 100, please go through specific mode to enable 100 domain names first. Enable the remaining resources via the ModifyOriginACL API.</li>
<li>specific: Enable for the designated L4 proxy instance under the site.</li>Note: When no parameter is defined, the default is specific. Configure subsequent addition of L7 acceleration domains/L4 proxy instances via the ModifyOriginACL API.
                     */
                    std::string m_l4EnableMode;
                    bool m_l4EnableModeHasBeenSet;

                    /**
                     * The list of L4 proxy instances with origin protection enabled. this parameter is valid only when L4EnableMode is set to specific. retain this parameter empty when L4EnableMode is set to all. only supports up to 100 layer-4 proxy instances per operation.
                     */
                    std::vector<std::string> m_l4ProxyIds;
                    bool m_l4ProxyIdsHasBeenSet;

                    /**
                     * The origin protection back-to-origin ACL control domain. If left empty, the standard global control domain is used by default. Available control domain information can be obtained through the DescribeAvailableOriginACLFamily API query.
Valid values are as follows:
<li>gaz: Standard global availability zone control domain;</li>
<li>mlc: Standard Chinese mainland availability zone control domain;</li>
<li>emc: Standard global (exclude Chinese mainland) availability zone control domain;</li>
<li>plat-gaz: Simplify global availability zone control domain;</li>
<li>plat-mlc: Simplified Chinese mainland availability zone control domain;</li>
<li>plat-emc: Simplify the global (excluding Chinese mainland) availability zone control domain;</li>
                     */
                    std::string m_originACLFamily;
                    bool m_originACLFamilyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ENABLEORIGINACLREQUEST_H_
