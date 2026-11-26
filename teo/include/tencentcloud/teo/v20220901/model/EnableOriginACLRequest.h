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
                     * 获取<p>Site ID.</p>
                     * @return ZoneId <p>Site ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Site ID.</p>
                     * @param _zoneId <p>Site ID.</p>
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
                     * 获取<p>Origin protection mode for Layer 7 accelerated domains. Default value: specific.<li>all: <strong>Automatic protection mode</strong>. All Layer 7 accelerated domains in the site are automatically added to the origin protection list, including Layer 7 accelerated domains added later.</li><li>specific: <strong>Manual protection mode</strong>. You need to manually specify the Layer 7 accelerated domains to be added to origin protection (specified by the L7Hosts parameter). Resources not specified are not added to the origin protection list. You can adjust protected resources later through the ModifyOriginACL API.</li>Note: When the value is all, leave L7Hosts empty. When the number of Layer 7 accelerated domains in the site exceeds 200, enable protection in specific mode first, enable the remaining resources through the ModifyOriginACL API, and then switch to all through the ModifyOriginACL API.</p>
                     * @return L7EnableMode <p>Origin protection mode for Layer 7 accelerated domains. Default value: specific.<li>all: <strong>Automatic protection mode</strong>. All Layer 7 accelerated domains in the site are automatically added to the origin protection list, including Layer 7 accelerated domains added later.</li><li>specific: <strong>Manual protection mode</strong>. You need to manually specify the Layer 7 accelerated domains to be added to origin protection (specified by the L7Hosts parameter). Resources not specified are not added to the origin protection list. You can adjust protected resources later through the ModifyOriginACL API.</li>Note: When the value is all, leave L7Hosts empty. When the number of Layer 7 accelerated domains in the site exceeds 200, enable protection in specific mode first, enable the remaining resources through the ModifyOriginACL API, and then switch to all through the ModifyOriginACL API.</p>
                     * 
                     */
                    std::string GetL7EnableMode() const;

                    /**
                     * 设置<p>Origin protection mode for Layer 7 accelerated domains. Default value: specific.<li>all: <strong>Automatic protection mode</strong>. All Layer 7 accelerated domains in the site are automatically added to the origin protection list, including Layer 7 accelerated domains added later.</li><li>specific: <strong>Manual protection mode</strong>. You need to manually specify the Layer 7 accelerated domains to be added to origin protection (specified by the L7Hosts parameter). Resources not specified are not added to the origin protection list. You can adjust protected resources later through the ModifyOriginACL API.</li>Note: When the value is all, leave L7Hosts empty. When the number of Layer 7 accelerated domains in the site exceeds 200, enable protection in specific mode first, enable the remaining resources through the ModifyOriginACL API, and then switch to all through the ModifyOriginACL API.</p>
                     * @param _l7EnableMode <p>Origin protection mode for Layer 7 accelerated domains. Default value: specific.<li>all: <strong>Automatic protection mode</strong>. All Layer 7 accelerated domains in the site are automatically added to the origin protection list, including Layer 7 accelerated domains added later.</li><li>specific: <strong>Manual protection mode</strong>. You need to manually specify the Layer 7 accelerated domains to be added to origin protection (specified by the L7Hosts parameter). Resources not specified are not added to the origin protection list. You can adjust protected resources later through the ModifyOriginACL API.</li>Note: When the value is all, leave L7Hosts empty. When the number of Layer 7 accelerated domains in the site exceeds 200, enable protection in specific mode first, enable the remaining resources through the ModifyOriginACL API, and then switch to all through the ModifyOriginACL API.</p>
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
                     * 获取<p>List of Layer 7 accelerated domains for which origin protection is to be enabled. This parameter takes effect only when L7EnableMode is specific. A maximum of 200 Layer 7 accelerated domains can be enabled at a time. If you want to enable more than 200 domains, use the ModifyOriginACL API for sharded configuration.</p>
                     * @return L7Hosts <p>List of Layer 7 accelerated domains for which origin protection is to be enabled. This parameter takes effect only when L7EnableMode is specific. A maximum of 200 Layer 7 accelerated domains can be enabled at a time. If you want to enable more than 200 domains, use the ModifyOriginACL API for sharded configuration.</p>
                     * 
                     */
                    std::vector<std::string> GetL7Hosts() const;

                    /**
                     * 设置<p>List of Layer 7 accelerated domains for which origin protection is to be enabled. This parameter takes effect only when L7EnableMode is specific. A maximum of 200 Layer 7 accelerated domains can be enabled at a time. If you want to enable more than 200 domains, use the ModifyOriginACL API for sharded configuration.</p>
                     * @param _l7Hosts <p>List of Layer 7 accelerated domains for which origin protection is to be enabled. This parameter takes effect only when L7EnableMode is specific. A maximum of 200 Layer 7 accelerated domains can be enabled at a time. If you want to enable more than 200 domains, use the ModifyOriginACL API for sharded configuration.</p>
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
                     * 获取<p>Origin protection mode for layer-4 proxy instances. Default value: specific.<li>all: <strong>Automatic protection mode</strong>. All layer-4 proxy instances in the site are automatically added to the origin protection list, including layer-4 proxy instance resources added later.</li><li>specific: <strong>Manual protection mode</strong>. You need to manually specify the layer-4 proxy instances to be added to origin protection (specified by the L4ProxyIds parameter). Resources not specified are not added to the origin protection list. You can adjust protected resources later through the ModifyOriginACL API.</li>Note: When the value is all, leave L4ProxyIds empty. When the number of layer-4 proxy instances in the site exceeds 100, enable protection in specific mode first, enable the remaining resources through the ModifyOriginACL API, and then switch to all through the ModifyOriginACL API.</p>
                     * @return L4EnableMode <p>Origin protection mode for layer-4 proxy instances. Default value: specific.<li>all: <strong>Automatic protection mode</strong>. All layer-4 proxy instances in the site are automatically added to the origin protection list, including layer-4 proxy instance resources added later.</li><li>specific: <strong>Manual protection mode</strong>. You need to manually specify the layer-4 proxy instances to be added to origin protection (specified by the L4ProxyIds parameter). Resources not specified are not added to the origin protection list. You can adjust protected resources later through the ModifyOriginACL API.</li>Note: When the value is all, leave L4ProxyIds empty. When the number of layer-4 proxy instances in the site exceeds 100, enable protection in specific mode first, enable the remaining resources through the ModifyOriginACL API, and then switch to all through the ModifyOriginACL API.</p>
                     * 
                     */
                    std::string GetL4EnableMode() const;

                    /**
                     * 设置<p>Origin protection mode for layer-4 proxy instances. Default value: specific.<li>all: <strong>Automatic protection mode</strong>. All layer-4 proxy instances in the site are automatically added to the origin protection list, including layer-4 proxy instance resources added later.</li><li>specific: <strong>Manual protection mode</strong>. You need to manually specify the layer-4 proxy instances to be added to origin protection (specified by the L4ProxyIds parameter). Resources not specified are not added to the origin protection list. You can adjust protected resources later through the ModifyOriginACL API.</li>Note: When the value is all, leave L4ProxyIds empty. When the number of layer-4 proxy instances in the site exceeds 100, enable protection in specific mode first, enable the remaining resources through the ModifyOriginACL API, and then switch to all through the ModifyOriginACL API.</p>
                     * @param _l4EnableMode <p>Origin protection mode for layer-4 proxy instances. Default value: specific.<li>all: <strong>Automatic protection mode</strong>. All layer-4 proxy instances in the site are automatically added to the origin protection list, including layer-4 proxy instance resources added later.</li><li>specific: <strong>Manual protection mode</strong>. You need to manually specify the layer-4 proxy instances to be added to origin protection (specified by the L4ProxyIds parameter). Resources not specified are not added to the origin protection list. You can adjust protected resources later through the ModifyOriginACL API.</li>Note: When the value is all, leave L4ProxyIds empty. When the number of layer-4 proxy instances in the site exceeds 100, enable protection in specific mode first, enable the remaining resources through the ModifyOriginACL API, and then switch to all through the ModifyOriginACL API.</p>
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
                     * 获取<p>List of layer-4 proxy instances for which origin protection is to be enabled. This parameter takes effect only when L4EnableMode is specific. A maximum of 100 layer-4 proxy instances can be enabled at a time. If you want to enable more than 100 layer-4 proxy instances, use the ModifyOriginACL API for sharded configuration.</p>
                     * @return L4ProxyIds <p>List of layer-4 proxy instances for which origin protection is to be enabled. This parameter takes effect only when L4EnableMode is specific. A maximum of 100 layer-4 proxy instances can be enabled at a time. If you want to enable more than 100 layer-4 proxy instances, use the ModifyOriginACL API for sharded configuration.</p>
                     * 
                     */
                    std::vector<std::string> GetL4ProxyIds() const;

                    /**
                     * 设置<p>List of layer-4 proxy instances for which origin protection is to be enabled. This parameter takes effect only when L4EnableMode is specific. A maximum of 100 layer-4 proxy instances can be enabled at a time. If you want to enable more than 100 layer-4 proxy instances, use the ModifyOriginACL API for sharded configuration.</p>
                     * @param _l4ProxyIds <p>List of layer-4 proxy instances for which origin protection is to be enabled. This parameter takes effect only when L4EnableMode is specific. A maximum of 100 layer-4 proxy instances can be enabled at a time. If you want to enable more than 100 layer-4 proxy instances, use the ModifyOriginACL API for sharded configuration.</p>
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
                     * 获取<p>Origin ACL control domain for origin protection. If not specified, the standard global control domain is used by default. Available control domains can be obtained through the DescribeAvailableOriginACLFamily API.<br>Valid values:</p><li>gaz: standard global AZ control domain;</li><li>mlc: standard Chinese mainland AZ control domain;</li><li>emc: standard global (excluding Chinese mainland) AZ control domain;</li><li>plat-gaz: simplified global AZ control domain;</li><li>plat-mlc: simplified Chinese mainland AZ control domain;</li><li>plat-emc: simplified global (excluding Chinese mainland) AZ control domain;</li>
                     * @return OriginACLFamily <p>Origin ACL control domain for origin protection. If not specified, the standard global control domain is used by default. Available control domains can be obtained through the DescribeAvailableOriginACLFamily API.<br>Valid values:</p><li>gaz: standard global AZ control domain;</li><li>mlc: standard Chinese mainland AZ control domain;</li><li>emc: standard global (excluding Chinese mainland) AZ control domain;</li><li>plat-gaz: simplified global AZ control domain;</li><li>plat-mlc: simplified Chinese mainland AZ control domain;</li><li>plat-emc: simplified global (excluding Chinese mainland) AZ control domain;</li>
                     * 
                     */
                    std::string GetOriginACLFamily() const;

                    /**
                     * 设置<p>Origin ACL control domain for origin protection. If not specified, the standard global control domain is used by default. Available control domains can be obtained through the DescribeAvailableOriginACLFamily API.<br>Valid values:</p><li>gaz: standard global AZ control domain;</li><li>mlc: standard Chinese mainland AZ control domain;</li><li>emc: standard global (excluding Chinese mainland) AZ control domain;</li><li>plat-gaz: simplified global AZ control domain;</li><li>plat-mlc: simplified Chinese mainland AZ control domain;</li><li>plat-emc: simplified global (excluding Chinese mainland) AZ control domain;</li>
                     * @param _originACLFamily <p>Origin ACL control domain for origin protection. If not specified, the standard global control domain is used by default. Available control domains can be obtained through the DescribeAvailableOriginACLFamily API.<br>Valid values:</p><li>gaz: standard global AZ control domain;</li><li>mlc: standard Chinese mainland AZ control domain;</li><li>emc: standard global (excluding Chinese mainland) AZ control domain;</li><li>plat-gaz: simplified global AZ control domain;</li><li>plat-mlc: simplified Chinese mainland AZ control domain;</li><li>plat-emc: simplified global (excluding Chinese mainland) AZ control domain;</li>
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
                     * <p>Site ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Origin protection mode for Layer 7 accelerated domains. Default value: specific.<li>all: <strong>Automatic protection mode</strong>. All Layer 7 accelerated domains in the site are automatically added to the origin protection list, including Layer 7 accelerated domains added later.</li><li>specific: <strong>Manual protection mode</strong>. You need to manually specify the Layer 7 accelerated domains to be added to origin protection (specified by the L7Hosts parameter). Resources not specified are not added to the origin protection list. You can adjust protected resources later through the ModifyOriginACL API.</li>Note: When the value is all, leave L7Hosts empty. When the number of Layer 7 accelerated domains in the site exceeds 200, enable protection in specific mode first, enable the remaining resources through the ModifyOriginACL API, and then switch to all through the ModifyOriginACL API.</p>
                     */
                    std::string m_l7EnableMode;
                    bool m_l7EnableModeHasBeenSet;

                    /**
                     * <p>List of Layer 7 accelerated domains for which origin protection is to be enabled. This parameter takes effect only when L7EnableMode is specific. A maximum of 200 Layer 7 accelerated domains can be enabled at a time. If you want to enable more than 200 domains, use the ModifyOriginACL API for sharded configuration.</p>
                     */
                    std::vector<std::string> m_l7Hosts;
                    bool m_l7HostsHasBeenSet;

                    /**
                     * <p>Origin protection mode for layer-4 proxy instances. Default value: specific.<li>all: <strong>Automatic protection mode</strong>. All layer-4 proxy instances in the site are automatically added to the origin protection list, including layer-4 proxy instance resources added later.</li><li>specific: <strong>Manual protection mode</strong>. You need to manually specify the layer-4 proxy instances to be added to origin protection (specified by the L4ProxyIds parameter). Resources not specified are not added to the origin protection list. You can adjust protected resources later through the ModifyOriginACL API.</li>Note: When the value is all, leave L4ProxyIds empty. When the number of layer-4 proxy instances in the site exceeds 100, enable protection in specific mode first, enable the remaining resources through the ModifyOriginACL API, and then switch to all through the ModifyOriginACL API.</p>
                     */
                    std::string m_l4EnableMode;
                    bool m_l4EnableModeHasBeenSet;

                    /**
                     * <p>List of layer-4 proxy instances for which origin protection is to be enabled. This parameter takes effect only when L4EnableMode is specific. A maximum of 100 layer-4 proxy instances can be enabled at a time. If you want to enable more than 100 layer-4 proxy instances, use the ModifyOriginACL API for sharded configuration.</p>
                     */
                    std::vector<std::string> m_l4ProxyIds;
                    bool m_l4ProxyIdsHasBeenSet;

                    /**
                     * <p>Origin ACL control domain for origin protection. If not specified, the standard global control domain is used by default. Available control domains can be obtained through the DescribeAvailableOriginACLFamily API.<br>Valid values:</p><li>gaz: standard global AZ control domain;</li><li>mlc: standard Chinese mainland AZ control domain;</li><li>emc: standard global (excluding Chinese mainland) AZ control domain;</li><li>plat-gaz: simplified global AZ control domain;</li><li>plat-mlc: simplified Chinese mainland AZ control domain;</li><li>plat-emc: simplified global (excluding Chinese mainland) AZ control domain;</li>
                     */
                    std::string m_originACLFamily;
                    bool m_originACLFamilyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ENABLEORIGINACLREQUEST_H_
