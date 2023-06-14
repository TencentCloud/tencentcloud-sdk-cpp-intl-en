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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYLOADBALANCINGREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYLOADBALANCINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * ModifyLoadBalancing request structure.
                */
                class ModifyLoadBalancingRequest : public AbstractModel
                {
                public:
                    ModifyLoadBalancingRequest();
                    ~ModifyLoadBalancingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID
                     * @return ZoneId Site ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID
                     * @param _zoneId Site ID
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
                     * 获取CLB instance ID
                     * @return LoadBalancingId CLB instance ID
                     * 
                     */
                    std::string GetLoadBalancingId() const;

                    /**
                     * 设置CLB instance ID
                     * @param _loadBalancingId CLB instance ID
                     * 
                     */
                    void SetLoadBalancingId(const std::string& _loadBalancingId);

                    /**
                     * 判断参数 LoadBalancingId 是否已赋值
                     * @return LoadBalancingId 是否已赋值
                     * 
                     */
                    bool LoadBalancingIdHasBeenSet() const;

                    /**
                     * 获取Proxy mode.
`dns_only`: Only DNS
`proxied`: Enable proxy
                     * @return Type Proxy mode.
`dns_only`: Only DNS
`proxied`: Enable proxy
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Proxy mode.
`dns_only`: Only DNS
`proxied`: Enable proxy
                     * @param _type Proxy mode.
`dns_only`: Only DNS
`proxied`: Enable proxy
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取ID of the origin group used
                     * @return OriginId ID of the origin group used
                     * 
                     */
                    std::vector<std::string> GetOriginId() const;

                    /**
                     * 设置ID of the origin group used
                     * @param _originId ID of the origin group used
                     * 
                     */
                    void SetOriginId(const std::vector<std::string>& _originId);

                    /**
                     * 判断参数 OriginId 是否已赋值
                     * @return OriginId 是否已赋值
                     * 
                     */
                    bool OriginIdHasBeenSet() const;

                    /**
                     * 获取Indicates DNS TTL time when `Type=dns_only`
                     * @return TTL Indicates DNS TTL time when `Type=dns_only`
                     * 
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置Indicates DNS TTL time when `Type=dns_only`
                     * @param _tTL Indicates DNS TTL time when `Type=dns_only`
                     * 
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     * 
                     */
                    bool TTLHasBeenSet() const;

                private:

                    /**
                     * Site ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * CLB instance ID
                     */
                    std::string m_loadBalancingId;
                    bool m_loadBalancingIdHasBeenSet;

                    /**
                     * Proxy mode.
`dns_only`: Only DNS
`proxied`: Enable proxy
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * ID of the origin group used
                     */
                    std::vector<std::string> m_originId;
                    bool m_originIdHasBeenSet;

                    /**
                     * Indicates DNS TTL time when `Type=dns_only`
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYLOADBALANCINGREQUEST_H_
