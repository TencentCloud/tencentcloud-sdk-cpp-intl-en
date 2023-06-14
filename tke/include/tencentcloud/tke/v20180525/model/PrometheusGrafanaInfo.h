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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSGRAFANAINFO_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSGRAFANAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * The grafana information in the managed PROM instance
                */
                class PrometheusGrafanaInfo : public AbstractModel
                {
                public:
                    PrometheusGrafanaInfo();
                    ~PrometheusGrafanaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether it is enabled
                     * @return Enabled Whether it is enabled
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether it is enabled
                     * @param _enabled Whether it is enabled
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Domain name. It will be effective only when the public network access is enabled.
                     * @return Domain Domain name. It will be effective only when the public network access is enabled.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name. It will be effective only when the public network access is enabled.
                     * @param _domain Domain name. It will be effective only when the public network access is enabled.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取The private network or public network address
                     * @return Address The private network or public network address
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置The private network or public network address
                     * @param _address The private network or public network address
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取Whether the public network access is enabled.
`close`: the public network access is not enabled
`opening`: the public network access is being enabled
`open`: the public network access is enabled
                     * @return Internet Whether the public network access is enabled.
`close`: the public network access is not enabled
`opening`: the public network access is being enabled
`open`: the public network access is enabled
                     * 
                     */
                    std::string GetInternet() const;

                    /**
                     * 设置Whether the public network access is enabled.
`close`: the public network access is not enabled
`opening`: the public network access is being enabled
`open`: the public network access is enabled
                     * @param _internet Whether the public network access is enabled.
`close`: the public network access is not enabled
`opening`: the public network access is being enabled
`open`: the public network access is enabled
                     * 
                     */
                    void SetInternet(const std::string& _internet);

                    /**
                     * 判断参数 Internet 是否已赋值
                     * @return Internet 是否已赋值
                     * 
                     */
                    bool InternetHasBeenSet() const;

                    /**
                     * 获取The user name of the grafana admin
                     * @return AdminUser The user name of the grafana admin
                     * 
                     */
                    std::string GetAdminUser() const;

                    /**
                     * 设置The user name of the grafana admin
                     * @param _adminUser The user name of the grafana admin
                     * 
                     */
                    void SetAdminUser(const std::string& _adminUser);

                    /**
                     * 判断参数 AdminUser 是否已赋值
                     * @return AdminUser 是否已赋值
                     * 
                     */
                    bool AdminUserHasBeenSet() const;

                private:

                    /**
                     * Whether it is enabled
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Domain name. It will be effective only when the public network access is enabled.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The private network or public network address
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Whether the public network access is enabled.
`close`: the public network access is not enabled
`opening`: the public network access is being enabled
`open`: the public network access is enabled
                     */
                    std::string m_internet;
                    bool m_internetHasBeenSet;

                    /**
                     * The user name of the grafana admin
                     */
                    std::string m_adminUser;
                    bool m_adminUserHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSGRAFANAINFO_H_
