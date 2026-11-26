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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IDENTIFYZONEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IDENTIFYZONEREQUEST_H_

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
                * IdentifyZone request structure.
                */
                class IdentifyZoneRequest : public AbstractModel
                {
                public:
                    IdentifyZoneRequest();
                    ~IdentifyZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site name.
                     * @return ZoneName Site name.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Site name.
                     * @param _zoneName Site name.
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取Subdomain under the site. If verifying a subdomain under the Verification Site, pass this value; otherwise empty.

                     * @return Domain Subdomain under the site. If verifying a subdomain under the Verification Site, pass this value; otherwise empty.

                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Subdomain under the site. If verifying a subdomain under the Verification Site, pass this value; otherwise empty.

                     * @param _domain Subdomain under the site. If verifying a subdomain under the Verification Site, pass this value; otherwise empty.

                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * Site name.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Subdomain under the site. If verifying a subdomain under the Verification Site, pass this value; otherwise empty.

                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IDENTIFYZONEREQUEST_H_
