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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CKAFKAROUTEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CKAFKAROUTEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CKafka domain name information
                */
                class CKafkaRouteInfo : public AbstractModel
                {
                public:
                    CKafkaRouteInfo();
                    ~CKafkaRouteInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Routing ID
                     * @return RouteID Routing ID
                     * 
                     */
                    int64_t GetRouteID() const;

                    /**
                     * 设置Routing ID
                     * @param _routeID Routing ID
                     * 
                     */
                    void SetRouteID(const int64_t& _routeID);

                    /**
                     * 判断参数 RouteID 是否已赋值
                     * @return RouteID 是否已赋值
                     * 
                     */
                    bool RouteIDHasBeenSet() const;

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
                     * 获取Domain Port
                     * @return DomainPort Domain Port
                     * 
                     */
                    uint64_t GetDomainPort() const;

                    /**
                     * 设置Domain Port
                     * @param _domainPort Domain Port
                     * 
                     */
                    void SetDomainPort(const uint64_t& _domainPort);

                    /**
                     * 判断参数 DomainPort 是否已赋值
                     * @return DomainPort 是否已赋值
                     * 
                     */
                    bool DomainPortHasBeenSet() const;

                    /**
                     * 获取Virtual IP
                     * @return Vip Virtual IP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Virtual IP
                     * @param _vip Virtual IP
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
                     * 获取Virtual IP Type
                     * @return VipType Virtual IP Type
                     * 
                     */
                    int64_t GetVipType() const;

                    /**
                     * 设置Virtual IP Type
                     * @param _vipType Virtual IP Type
                     * 
                     */
                    void SetVipType(const int64_t& _vipType);

                    /**
                     * 判断参数 VipType 是否已赋值
                     * @return VipType 是否已赋值
                     * 
                     */
                    bool VipTypeHasBeenSet() const;

                    /**
                     * 获取Access type
                     * @return AccessType Access type
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置Access type
                     * @param _accessType Access type
                     * 
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                private:

                    /**
                     * Routing ID
                     */
                    int64_t m_routeID;
                    bool m_routeIDHasBeenSet;

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Domain Port
                     */
                    uint64_t m_domainPort;
                    bool m_domainPortHasBeenSet;

                    /**
                     * Virtual IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Virtual IP Type
                     */
                    int64_t m_vipType;
                    bool m_vipTypeHasBeenSet;

                    /**
                     * Access type
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CKAFKAROUTEINFO_H_
