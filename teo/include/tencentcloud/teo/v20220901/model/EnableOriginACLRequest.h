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
                     * 获取Specifies the site ID.
                     * @return ZoneId Specifies the site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Specifies the site ID.
                     * @param _zoneId Specifies the site ID.
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
                     * 获取The mode of configurating origin ACLs for L7 acceleration domains.
- all: configurate origin ACLs for all L7 acceleration domains under the site.
- specific: configurate origin ACLs for designated L7 acceleration domains under the site.
When the parameter is empty, it defaults to specific.

                     * @return L7EnableMode The mode of configurating origin ACLs for L7 acceleration domains.
- all: configurate origin ACLs for all L7 acceleration domains under the site.
- specific: configurate origin ACLs for designated L7 acceleration domains under the site.
When the parameter is empty, it defaults to specific.

                     * 
                     */
                    std::string GetL7EnableMode() const;

                    /**
                     * 设置The mode of configurating origin ACLs for L7 acceleration domains.
- all: configurate origin ACLs for all L7 acceleration domains under the site.
- specific: configurate origin ACLs for designated L7 acceleration domains under the site.
When the parameter is empty, it defaults to specific.

                     * @param _l7EnableMode The mode of configurating origin ACLs for L7 acceleration domains.
- all: configurate origin ACLs for all L7 acceleration domains under the site.
- specific: configurate origin ACLs for designated L7 acceleration domains under the site.
When the parameter is empty, it defaults to specific.

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
                     * 获取The list of L7 acceleration domains that require enabling the origin ACLs. This list must be empty when the request parameter L7EnableMode is set to 'all'. A maximum of 200 domains are supported at a time.
                     * @return L7Hosts The list of L7 acceleration domains that require enabling the origin ACLs. This list must be empty when the request parameter L7EnableMode is set to 'all'. A maximum of 200 domains are supported at a time.
                     * 
                     */
                    std::vector<std::string> GetL7Hosts() const;

                    /**
                     * 设置The list of L7 acceleration domains that require enabling the origin ACLs. This list must be empty when the request parameter L7EnableMode is set to 'all'. A maximum of 200 domains are supported at a time.
                     * @param _l7Hosts The list of L7 acceleration domains that require enabling the origin ACLs. This list must be empty when the request parameter L7EnableMode is set to 'all'. A maximum of 200 domains are supported at a time.
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
                     * 获取The mode of configurating origin ACLs for L4 proxy Instances.
- all: configurate origin ACLs for all L4 proxy Instances under the site.
- specific: configurate origin ACLs for designated  L4 proxy Instances under the site.
When the parameter is empty, it defaults to specific.
                     * @return L4EnableMode The mode of configurating origin ACLs for L4 proxy Instances.
- all: configurate origin ACLs for all L4 proxy Instances under the site.
- specific: configurate origin ACLs for designated  L4 proxy Instances under the site.
When the parameter is empty, it defaults to specific.
                     * 
                     */
                    std::string GetL4EnableMode() const;

                    /**
                     * 设置The mode of configurating origin ACLs for L4 proxy Instances.
- all: configurate origin ACLs for all L4 proxy Instances under the site.
- specific: configurate origin ACLs for designated  L4 proxy Instances under the site.
When the parameter is empty, it defaults to specific.
                     * @param _l4EnableMode The mode of configurating origin ACLs for L4 proxy Instances.
- all: configurate origin ACLs for all L4 proxy Instances under the site.
- specific: configurate origin ACLs for designated  L4 proxy Instances under the site.
When the parameter is empty, it defaults to specific.
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
                     * 获取The list of L4 proxy Instances that require enabling origin ACLs. This list must be empty when the request parameter L4EnableMode is set to 'all'. A maximum of 100 instances are supported at a time.
                     * @return L4ProxyIds The list of L4 proxy Instances that require enabling origin ACLs. This list must be empty when the request parameter L4EnableMode is set to 'all'. A maximum of 100 instances are supported at a time.
                     * 
                     */
                    std::vector<std::string> GetL4ProxyIds() const;

                    /**
                     * 设置The list of L4 proxy Instances that require enabling origin ACLs. This list must be empty when the request parameter L4EnableMode is set to 'all'. A maximum of 100 instances are supported at a time.
                     * @param _l4ProxyIds The list of L4 proxy Instances that require enabling origin ACLs. This list must be empty when the request parameter L4EnableMode is set to 'all'. A maximum of 100 instances are supported at a time.
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
                     * Specifies the site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The mode of configurating origin ACLs for L7 acceleration domains.
- all: configurate origin ACLs for all L7 acceleration domains under the site.
- specific: configurate origin ACLs for designated L7 acceleration domains under the site.
When the parameter is empty, it defaults to specific.

                     */
                    std::string m_l7EnableMode;
                    bool m_l7EnableModeHasBeenSet;

                    /**
                     * The list of L7 acceleration domains that require enabling the origin ACLs. This list must be empty when the request parameter L7EnableMode is set to 'all'. A maximum of 200 domains are supported at a time.
                     */
                    std::vector<std::string> m_l7Hosts;
                    bool m_l7HostsHasBeenSet;

                    /**
                     * The mode of configurating origin ACLs for L4 proxy Instances.
- all: configurate origin ACLs for all L4 proxy Instances under the site.
- specific: configurate origin ACLs for designated  L4 proxy Instances under the site.
When the parameter is empty, it defaults to specific.
                     */
                    std::string m_l4EnableMode;
                    bool m_l4EnableModeHasBeenSet;

                    /**
                     * The list of L4 proxy Instances that require enabling origin ACLs. This list must be empty when the request parameter L4EnableMode is set to 'all'. A maximum of 100 instances are supported at a time.
                     */
                    std::vector<std::string> m_l4ProxyIds;
                    bool m_l4ProxyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ENABLEORIGINACLREQUEST_H_
