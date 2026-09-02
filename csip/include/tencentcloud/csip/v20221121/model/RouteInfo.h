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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ROUTEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ROUTEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Routing information
                */
                class RouteInfo : public AbstractModel
                {
                public:
                    RouteInfo();
                    ~RouteInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Access IP.
                     * @return Vip Access IP.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Access IP.
                     * @param _vip Access IP.
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Access Port
                     * @return Vport Access Port
                     * 
                     */
                    std::string GetVport() const;

                    /**
                     * 设置Access Port
                     * @param _vport Access Port
                     * 
                     */
                    void SetVport(const std::string& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Domain name
                     * @return Domain Domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param _domain Domain name
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
                     * 获取Access domain name port.
                     * @return DomainPort Access domain name port.
                     * 
                     */
                    std::string GetDomainPort() const;

                    /**
                     * 设置Access domain name port.
                     * @param _domainPort Access domain name port.
                     * 
                     */
                    void SetDomainPort(const std::string& _domainPort);

                    /**
                     * 判断参数 DomainPort 是否已赋值
                     * @return DomainPort 是否已赋值
                     * 
                     */
                    bool DomainPortHasBeenSet() const;

                private:

                    /**
                     * Access IP.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Access Port
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Access domain name port.
                     */
                    std::string m_domainPort;
                    bool m_domainPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ROUTEINFO_H_
