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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEACCELERATIONDOMAINREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEACCELERATIONDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateAccelerationDomain request structure.
                */
                class CreateAccelerationDomainRequest : public AbstractModel
                {
                public:
                    CreateAccelerationDomainRequest();
                    ~CreateAccelerationDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the site related with the acceleration domain name.
                     * @return ZoneId ID of the site related with the acceleration domain name.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site related with the acceleration domain name.
                     * @param _zoneId ID of the site related with the acceleration domain name.
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
                     * 获取Acceleration domain name
                     * @return DomainName Acceleration domain name
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Acceleration domain name
                     * @param _domainName Acceleration domain name
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Details of the origin.
                     * @return OriginInfo Details of the origin.
                     * 
                     */
                    OriginInfo GetOriginInfo() const;

                    /**
                     * 设置Details of the origin.
                     * @param _originInfo Details of the origin.
                     * 
                     */
                    void SetOriginInfo(const OriginInfo& _originInfo);

                    /**
                     * 判断参数 OriginInfo 是否已赋值
                     * @return OriginInfo 是否已赋值
                     * 
                     */
                    bool OriginInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return OriginProtocol 
                     * 
                     */
                    std::string GetOriginProtocol() const;

                    /**
                     * 设置
                     * @param _originProtocol 
                     * 
                     */
                    void SetOriginProtocol(const std::string& _originProtocol);

                    /**
                     * 判断参数 OriginProtocol 是否已赋值
                     * @return OriginProtocol 是否已赋值
                     * 
                     */
                    bool OriginProtocolHasBeenSet() const;

                    /**
                     * 获取
                     * @return HttpOriginPort 
                     * 
                     */
                    uint64_t GetHttpOriginPort() const;

                    /**
                     * 设置
                     * @param _httpOriginPort 
                     * 
                     */
                    void SetHttpOriginPort(const uint64_t& _httpOriginPort);

                    /**
                     * 判断参数 HttpOriginPort 是否已赋值
                     * @return HttpOriginPort 是否已赋值
                     * 
                     */
                    bool HttpOriginPortHasBeenSet() const;

                    /**
                     * 获取
                     * @return HttpsOriginPort 
                     * 
                     */
                    uint64_t GetHttpsOriginPort() const;

                    /**
                     * 设置
                     * @param _httpsOriginPort 
                     * 
                     */
                    void SetHttpsOriginPort(const uint64_t& _httpsOriginPort);

                    /**
                     * 判断参数 HttpsOriginPort 是否已赋值
                     * @return HttpsOriginPort 是否已赋值
                     * 
                     */
                    bool HttpsOriginPortHasBeenSet() const;

                    /**
                     * 获取
                     * @return IPv6Status 
                     * 
                     */
                    std::string GetIPv6Status() const;

                    /**
                     * 设置
                     * @param _iPv6Status 
                     * 
                     */
                    void SetIPv6Status(const std::string& _iPv6Status);

                    /**
                     * 判断参数 IPv6Status 是否已赋值
                     * @return IPv6Status 是否已赋值
                     * 
                     */
                    bool IPv6StatusHasBeenSet() const;

                private:

                    /**
                     * ID of the site related with the acceleration domain name.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Acceleration domain name
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Details of the origin.
                     */
                    OriginInfo m_originInfo;
                    bool m_originInfoHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_originProtocol;
                    bool m_originProtocolHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_httpOriginPort;
                    bool m_httpOriginPortHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_httpsOriginPort;
                    bool m_httpsOriginPortHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_iPv6Status;
                    bool m_iPv6StatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEACCELERATIONDOMAINREQUEST_H_
