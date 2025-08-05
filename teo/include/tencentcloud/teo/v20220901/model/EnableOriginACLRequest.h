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
                     * 获取L7 acceleration domain name activation in origin protection mode.
<li>`all`: enable layer-7 acceleration domain names for the site.</li>.
<Li>Specific: enable for the site's designated layer-7 acceleration domain name.</li>when no parameter is defined, the default is specific.
                     * @return L7EnableMode L7 acceleration domain name activation in origin protection mode.
<li>`all`: enable layer-7 acceleration domain names for the site.</li>.
<Li>Specific: enable for the site's designated layer-7 acceleration domain name.</li>when no parameter is defined, the default is specific.
                     * 
                     */
                    std::string GetL7EnableMode() const;

                    /**
                     * 设置L7 acceleration domain name activation in origin protection mode.
<li>`all`: enable layer-7 acceleration domain names for the site.</li>.
<Li>Specific: enable for the site's designated layer-7 acceleration domain name.</li>when no parameter is defined, the default is specific.
                     * @param _l7EnableMode L7 acceleration domain name activation in origin protection mode.
<li>`all`: enable layer-7 acceleration domain names for the site.</li>.
<Li>Specific: enable for the site's designated layer-7 acceleration domain name.</li>when no parameter is defined, the default is specific.
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
                     * 获取Specifies the origin protection mode of the l4 proxy instance.
<Li>ALL: enable for all l4 proxy instances under the site.</li>.
<Li>Specific: enable for the designated layer 4 proxy instance of the site.</li>when no parameter is defined, the default is specific.
                     * @return L4EnableMode Specifies the origin protection mode of the l4 proxy instance.
<Li>ALL: enable for all l4 proxy instances under the site.</li>.
<Li>Specific: enable for the designated layer 4 proxy instance of the site.</li>when no parameter is defined, the default is specific.
                     * 
                     */
                    std::string GetL4EnableMode() const;

                    /**
                     * 设置Specifies the origin protection mode of the l4 proxy instance.
<Li>ALL: enable for all l4 proxy instances under the site.</li>.
<Li>Specific: enable for the designated layer 4 proxy instance of the site.</li>when no parameter is defined, the default is specific.
                     * @param _l4EnableMode Specifies the origin protection mode of the l4 proxy instance.
<Li>ALL: enable for all l4 proxy instances under the site.</li>.
<Li>Specific: enable for the designated layer 4 proxy instance of the site.</li>when no parameter is defined, the default is specific.
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

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * L7 acceleration domain name activation in origin protection mode.
<li>`all`: enable layer-7 acceleration domain names for the site.</li>.
<Li>Specific: enable for the site's designated layer-7 acceleration domain name.</li>when no parameter is defined, the default is specific.
                     */
                    std::string m_l7EnableMode;
                    bool m_l7EnableModeHasBeenSet;

                    /**
                     * Enable the list of layer-7 acceleration domain names with origin protection. this parameter is valid only when L7EnableMode is set to specific. when L7EnableMode is set to all, retain this parameter as empty. only supports up to 200 layer-7 acceleration domain names in a single operation.
                     */
                    std::vector<std::string> m_l7Hosts;
                    bool m_l7HostsHasBeenSet;

                    /**
                     * Specifies the origin protection mode of the l4 proxy instance.
<Li>ALL: enable for all l4 proxy instances under the site.</li>.
<Li>Specific: enable for the designated layer 4 proxy instance of the site.</li>when no parameter is defined, the default is specific.
                     */
                    std::string m_l4EnableMode;
                    bool m_l4EnableModeHasBeenSet;

                    /**
                     * The list of L4 proxy instances with origin protection enabled. this parameter is valid only when L4EnableMode is set to specific. retain this parameter empty when L4EnableMode is set to all. only supports up to 100 layer-4 proxy instances per operation.
                     */
                    std::vector<std::string> m_l4ProxyIds;
                    bool m_l4ProxyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ENABLEORIGINACLREQUEST_H_
