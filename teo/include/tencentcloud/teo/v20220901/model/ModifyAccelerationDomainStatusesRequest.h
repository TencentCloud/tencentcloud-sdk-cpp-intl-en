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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYACCELERATIONDOMAINSTATUSESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYACCELERATIONDOMAINSTATUSESREQUEST_H_

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
                * ModifyAccelerationDomainStatuses request structure.
                */
                class ModifyAccelerationDomainStatusesRequest : public AbstractModel
                {
                public:
                    ModifyAccelerationDomainStatusesRequest();
                    ~ModifyAccelerationDomainStatusesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the site related with the accelerated domain name.
                     * @return ZoneId ID of the site related with the accelerated domain name.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site related with the accelerated domain name.
                     * @param _zoneId ID of the site related with the accelerated domain name.
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
                     * 获取List of accelerated domain names to be modified.
                     * @return DomainNames List of accelerated domain names to be modified.
                     * 
                     */
                    std::vector<std::string> GetDomainNames() const;

                    /**
                     * 设置List of accelerated domain names to be modified.
                     * @param _domainNames List of accelerated domain names to be modified.
                     * 
                     */
                    void SetDomainNames(const std::vector<std::string>& _domainNames);

                    /**
                     * 判断参数 DomainNames 是否已赋值
                     * @return DomainNames 是否已赋值
                     * 
                     */
                    bool DomainNamesHasBeenSet() const;

                    /**
                     * 获取Status of the accelerated domain name. Values:
<li>`online`: Enabled</li>
<li>`offline`: Disabled</li>
                     * @return Status Status of the accelerated domain name. Values:
<li>`online`: Enabled</li>
<li>`offline`: Disabled</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status of the accelerated domain name. Values:
<li>`online`: Enabled</li>
<li>`offline`: Disabled</li>
                     * @param _status Status of the accelerated domain name. Values:
<li>`online`: Enabled</li>
<li>`offline`: Disabled</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether to force suspension when the domain name has associated resources (such as alias domain names and traffic scheduling policies). Values:
<li>`true`: Suspend the domain name and all associated resources.</li>
<li>`true`: Do not suspend the domain name and all associated resources.</li>Default value: `false`.
                     * @return Force Whether to force suspension when the domain name has associated resources (such as alias domain names and traffic scheduling policies). Values:
<li>`true`: Suspend the domain name and all associated resources.</li>
<li>`true`: Do not suspend the domain name and all associated resources.</li>Default value: `false`.
                     * 
                     */
                    bool GetForce() const;

                    /**
                     * 设置Whether to force suspension when the domain name has associated resources (such as alias domain names and traffic scheduling policies). Values:
<li>`true`: Suspend the domain name and all associated resources.</li>
<li>`true`: Do not suspend the domain name and all associated resources.</li>Default value: `false`.
                     * @param _force Whether to force suspension when the domain name has associated resources (such as alias domain names and traffic scheduling policies). Values:
<li>`true`: Suspend the domain name and all associated resources.</li>
<li>`true`: Do not suspend the domain name and all associated resources.</li>Default value: `false`.
                     * 
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * ID of the site related with the accelerated domain name.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * List of accelerated domain names to be modified.
                     */
                    std::vector<std::string> m_domainNames;
                    bool m_domainNamesHasBeenSet;

                    /**
                     * Status of the accelerated domain name. Values:
<li>`online`: Enabled</li>
<li>`offline`: Disabled</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether to force suspension when the domain name has associated resources (such as alias domain names and traffic scheduling policies). Values:
<li>`true`: Suspend the domain name and all associated resources.</li>
<li>`true`: Do not suspend the domain name and all associated resources.</li>Default value: `false`.
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYACCELERATIONDOMAINSTATUSESREQUEST_H_
