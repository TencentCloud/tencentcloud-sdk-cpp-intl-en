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
                     * 获取The site name.
                     * @return ZoneName The site name.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置The site name.
                     * @param _zoneName The site name.
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
                     * 获取A subdomain name under the site. Specify this field if you want to verify the ownership of a subdomain name. Otherwise you can leave it blank.

                     * @return Domain A subdomain name under the site. Specify this field if you want to verify the ownership of a subdomain name. Otherwise you can leave it blank.

                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置A subdomain name under the site. Specify this field if you want to verify the ownership of a subdomain name. Otherwise you can leave it blank.

                     * @param _domain A subdomain name under the site. Specify this field if you want to verify the ownership of a subdomain name. Otherwise you can leave it blank.

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
                     * The site name.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * A subdomain name under the site. Specify this field if you want to verify the ownership of a subdomain name. Otherwise you can leave it blank.

                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IDENTIFYZONEREQUEST_H_
