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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_LOADBALANCING_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_LOADBALANCING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AdvancedOriginGroup.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
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
                     * 获取The load balancer ID.
                     * @return LoadBalancingId The load balancer ID.
                     */
                    std::string GetLoadBalancingId() const;

                    /**
                     * 设置The load balancer ID.
                     * @param LoadBalancingId The load balancer ID.
                     */
                    void SetLoadBalancingId(const std::string& _loadBalancingId);

                    /**
                     * 判断参数 LoadBalancingId 是否已赋值
                     * @return LoadBalancingId 是否已赋值
                     */
                    bool LoadBalancingIdHasBeenSet() const;

                    /**
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param ZoneId The site ID.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Subdomain name. You can use @ to represent the root domain.
                     * @return Host Subdomain name. You can use @ to represent the root domain.
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Subdomain name. You can use @ to represent the root domain.
                     * @param Host Subdomain name. You can use @ to represent the root domain.
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取The proxy mode. Values:
<li>`dns_only`: Only DNS</li>
<li>`proxied`: Proxied</li>
                     * @return Type The proxy mode. Values:
<li>`dns_only`: Only DNS</li>
<li>`proxied`: Proxied</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置The proxy mode. Values:
<li>`dns_only`: Only DNS</li>
<li>`proxied`: Proxied</li>
                     * @param Type The proxy mode. Values:
<li>`dns_only`: Only DNS</li>
<li>`proxied`: Proxied</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The cache time of DNS records when `Type=dns_only`.
                     * @return TTL The cache time of DNS records when `Type=dns_only`.
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置The cache time of DNS records when `Type=dns_only`.
                     * @param TTL The cache time of DNS records when `Type=dns_only`.
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取The load balancer status. Values:
<li>`online`: Deployed</li>
<li>`process`: Deployment in progress</li>
                     * @return Status The load balancer status. Values:
<li>`online`: Deployed</li>
<li>`process`: Deployment in progress</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The load balancer status. Values:
<li>`online`: Deployed</li>
<li>`process`: Deployment in progress</li>
                     * @param Status The load balancer status. Values:
<li>`online`: Deployed</li>
<li>`process`: Deployment in progress</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Schedules domain names.
                     * @return Cname Schedules domain names.
                     */
                    std::string GetCname() const;

                    /**
                     * 设置Schedules domain names.
                     * @param Cname Schedules domain names.
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取The ID of the primary origin group.
                     * @return OriginGroupId The ID of the primary origin group.
                     */
                    std::string GetOriginGroupId() const;

                    /**
                     * 设置The ID of the primary origin group.
                     * @param OriginGroupId The ID of the primary origin group.
                     */
                    void SetOriginGroupId(const std::string& _originGroupId);

                    /**
                     * 判断参数 OriginGroupId 是否已赋值
                     * @return OriginGroupId 是否已赋值
                     */
                    bool OriginGroupIdHasBeenSet() const;

                    /**
                     * 获取The ID of the secondary origin group. If not specified, it indicates that secondary origins are not used.
                     * @return BackupOriginGroupId The ID of the secondary origin group. If not specified, it indicates that secondary origins are not used.
                     */
                    std::string GetBackupOriginGroupId() const;

                    /**
                     * 设置The ID of the secondary origin group. If not specified, it indicates that secondary origins are not used.
                     * @param BackupOriginGroupId The ID of the secondary origin group. If not specified, it indicates that secondary origins are not used.
                     */
                    void SetBackupOriginGroupId(const std::string& _backupOriginGroupId);

                    /**
                     * 判断参数 BackupOriginGroupId 是否已赋值
                     * @return BackupOriginGroupId 是否已赋值
                     */
                    bool BackupOriginGroupIdHasBeenSet() const;

                    /**
                     * 获取The update time.
                     * @return UpdateTime The update time.
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The update time.
                     * @param UpdateTime The update time.
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return OriginType 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置
                     * @param OriginType 
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return AdvancedOriginGroups 
                     */
                    std::vector<AdvancedOriginGroup> GetAdvancedOriginGroups() const;

                    /**
                     * 设置
                     * @param AdvancedOriginGroups 
                     */
                    void SetAdvancedOriginGroups(const std::vector<AdvancedOriginGroup>& _advancedOriginGroups);

                    /**
                     * 判断参数 AdvancedOriginGroups 是否已赋值
                     * @return AdvancedOriginGroups 是否已赋值
                     */
                    bool AdvancedOriginGroupsHasBeenSet() const;

                private:

                    /**
                     * The load balancer ID.
                     */
                    std::string m_loadBalancingId;
                    bool m_loadBalancingIdHasBeenSet;

                    /**
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Subdomain name. You can use @ to represent the root domain.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * The proxy mode. Values:
<li>`dns_only`: Only DNS</li>
<li>`proxied`: Proxied</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The cache time of DNS records when `Type=dns_only`.
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * The load balancer status. Values:
<li>`online`: Deployed</li>
<li>`process`: Deployment in progress</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Schedules domain names.
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * The ID of the primary origin group.
                     */
                    std::string m_originGroupId;
                    bool m_originGroupIdHasBeenSet;

                    /**
                     * The ID of the secondary origin group. If not specified, it indicates that secondary origins are not used.
                     */
                    std::string m_backupOriginGroupId;
                    bool m_backupOriginGroupIdHasBeenSet;

                    /**
                     * The update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<AdvancedOriginGroup> m_advancedOriginGroups;
                    bool m_advancedOriginGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_LOADBALANCING_H_
