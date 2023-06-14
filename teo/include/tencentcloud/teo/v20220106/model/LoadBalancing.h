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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_LOADBALANCING_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_LOADBALANCING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/OriginGroup.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * CLB information
                */
                class LoadBalancing : public AbstractModel
                {
                public:
                    LoadBalancing();
                    ~LoadBalancing() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Subdomain name. You can use @ to represent the root domain.
                     * @return Host Subdomain name. You can use @ to represent the root domain.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Subdomain name. You can use @ to represent the root domain.
                     * @param _host Subdomain name. You can use @ to represent the root domain.
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Proxy mode. Valid values:
`dns_only`: Only DNS
`proxied`: Enable proxy
                     * @return Type Proxy mode. Valid values:
`dns_only`: Only DNS
`proxied`: Enable proxy
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Proxy mode. Valid values:
`dns_only`: Only DNS
`proxied`: Enable proxy
                     * @param _type Proxy mode. Valid values:
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
                     * 获取Information of the origin server used
                     * @return Origin Information of the origin server used
                     * 
                     */
                    std::vector<OriginGroup> GetOrigin() const;

                    /**
                     * 设置Information of the origin server used
                     * @param _origin Information of the origin server used
                     * 
                     */
                    void SetOrigin(const std::vector<OriginGroup>& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param _updateTime Update time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Status
                     * @return Status Status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
                     * @param _status Status
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
                     * 获取Schedules domain names
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Cname Schedules domain names
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置Schedules domain names
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _cname Schedules domain names
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                private:

                    /**
                     * CLB instance ID
                     */
                    std::string m_loadBalancingId;
                    bool m_loadBalancingIdHasBeenSet;

                    /**
                     * Site ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Subdomain name. You can use @ to represent the root domain.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Proxy mode. Valid values:
`dns_only`: Only DNS
`proxied`: Enable proxy
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Indicates DNS TTL time when `Type=dns_only`
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * ID of the origin group used
                     */
                    std::vector<std::string> m_originId;
                    bool m_originIdHasBeenSet;

                    /**
                     * Information of the origin server used
                     */
                    std::vector<OriginGroup> m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Schedules domain names
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_LOADBALANCING_H_
