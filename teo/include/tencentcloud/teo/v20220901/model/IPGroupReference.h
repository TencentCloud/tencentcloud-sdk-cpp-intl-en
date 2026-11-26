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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IPGROUPREFERENCE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IPGROUPREFERENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Security module that refers to an IP group
                */
                class IPGroupReference : public AbstractModel
                {
                public:
                    IPGroupReference();
                    ~IPGroupReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Site ID.</p>
                     * @return ZoneId <p>Site ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Site ID.</p>
                     * @param _zoneId <p>Site ID.</p>
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
                     * 获取<p>Entity type.</p><p>Enumeration values:</p><ul><li>WebSec.ZonePolicy: site-level security policy</li><li>WebSec.HostPolicy: domain-level security policy</li><li>WebSec.Template: policy template</li><li>DDoS.L4Proxy: Layer 4 proxy DDoS protection</li><li>DDoS.L3Transit: layer-3 anycast DDoS protection</li></ul>
                     * @return EntityType <p>Entity type.</p><p>Enumeration values:</p><ul><li>WebSec.ZonePolicy: site-level security policy</li><li>WebSec.HostPolicy: domain-level security policy</li><li>WebSec.Template: policy template</li><li>DDoS.L4Proxy: Layer 4 proxy DDoS protection</li><li>DDoS.L3Transit: layer-3 anycast DDoS protection</li></ul>
                     * 
                     */
                    std::string GetEntityType() const;

                    /**
                     * 设置<p>Entity type.</p><p>Enumeration values:</p><ul><li>WebSec.ZonePolicy: site-level security policy</li><li>WebSec.HostPolicy: domain-level security policy</li><li>WebSec.Template: policy template</li><li>DDoS.L4Proxy: Layer 4 proxy DDoS protection</li><li>DDoS.L3Transit: layer-3 anycast DDoS protection</li></ul>
                     * @param _entityType <p>Entity type.</p><p>Enumeration values:</p><ul><li>WebSec.ZonePolicy: site-level security policy</li><li>WebSec.HostPolicy: domain-level security policy</li><li>WebSec.Template: policy template</li><li>DDoS.L4Proxy: Layer 4 proxy DDoS protection</li><li>DDoS.L3Transit: layer-3 anycast DDoS protection</li></ul>
                     * 
                     */
                    void SetEntityType(const std::string& _entityType);

                    /**
                     * 判断参数 EntityType 是否已赋值
                     * @return EntityType 是否已赋值
                     * 
                     */
                    bool EntityTypeHasBeenSet() const;

                    /**
                     * 获取<p>Entity identification, representing different meanings based on EntityType:</p><ul><li>WebSec.ZonePolicy: site ID;</li><li>WebSec.HostPolicy: domain name;</li><li>WebSec.Template: template ID;</li><li>DDoS.L4Proxy: instance ID;</li><li>DDoS.L3Transit: instance ID.</li></ul>
                     * @return EntityId <p>Entity identification, representing different meanings based on EntityType:</p><ul><li>WebSec.ZonePolicy: site ID;</li><li>WebSec.HostPolicy: domain name;</li><li>WebSec.Template: template ID;</li><li>DDoS.L4Proxy: instance ID;</li><li>DDoS.L3Transit: instance ID.</li></ul>
                     * 
                     */
                    std::string GetEntityId() const;

                    /**
                     * 设置<p>Entity identification, representing different meanings based on EntityType:</p><ul><li>WebSec.ZonePolicy: site ID;</li><li>WebSec.HostPolicy: domain name;</li><li>WebSec.Template: template ID;</li><li>DDoS.L4Proxy: instance ID;</li><li>DDoS.L3Transit: instance ID.</li></ul>
                     * @param _entityId <p>Entity identification, representing different meanings based on EntityType:</p><ul><li>WebSec.ZonePolicy: site ID;</li><li>WebSec.HostPolicy: domain name;</li><li>WebSec.Template: template ID;</li><li>DDoS.L4Proxy: instance ID;</li><li>DDoS.L3Transit: instance ID.</li></ul>
                     * 
                     */
                    void SetEntityId(const std::string& _entityId);

                    /**
                     * 判断参数 EntityId 是否已赋值
                     * @return EntityId 是否已赋值
                     * 
                     */
                    bool EntityIdHasBeenSet() const;

                    /**
                     * 获取<p>Entity identifier. Its meaning varies based on EntityType:</p><ul><li>WebSec.ZonePolicy: empty;</li><li>WebSec.HostPolicy: empty;</li><li>WebSec.Template: Template name;</li><li>DDoS.L4Proxy: empty;</li><li>DDoS.L3Transit: empty.</li></ul>
                     * @return EntityName <p>Entity identifier. Its meaning varies based on EntityType:</p><ul><li>WebSec.ZonePolicy: empty;</li><li>WebSec.HostPolicy: empty;</li><li>WebSec.Template: Template name;</li><li>DDoS.L4Proxy: empty;</li><li>DDoS.L3Transit: empty.</li></ul>
                     * 
                     */
                    std::string GetEntityName() const;

                    /**
                     * 设置<p>Entity identifier. Its meaning varies based on EntityType:</p><ul><li>WebSec.ZonePolicy: empty;</li><li>WebSec.HostPolicy: empty;</li><li>WebSec.Template: Template name;</li><li>DDoS.L4Proxy: empty;</li><li>DDoS.L3Transit: empty.</li></ul>
                     * @param _entityName <p>Entity identifier. Its meaning varies based on EntityType:</p><ul><li>WebSec.ZonePolicy: empty;</li><li>WebSec.HostPolicy: empty;</li><li>WebSec.Template: Template name;</li><li>DDoS.L4Proxy: empty;</li><li>DDoS.L3Transit: empty.</li></ul>
                     * 
                     */
                    void SetEntityName(const std::string& _entityName);

                    /**
                     * 判断参数 EntityName 是否已赋值
                     * @return EntityName 是否已赋值
                     * 
                     */
                    bool EntityNameHasBeenSet() const;

                    /**
                     * 获取<p>Sub-entity type.</p><p>Enumeration values:</p><ul><li>WebSec.ExceptionRule: protection exception rule</li><li>WebSec.BasicAccessRule: basic access control</li><li>WebSec.PreciseMatchRule: exact match rule</li><li>WebSec.RateLimitRule: precision rate limiting</li><li>WebSec.BotCustomRule: advanced bot management - custom rule</li><li>DDoS.L4Proxy.IpAccessControl: Layer 4 proxy DDoS protection - IP blocklist/allowlist</li><li>DDoS.L3Transit.IpAccessControl: layer-3 transit DDoS protection - IP blocklist/allowlist</li></ul>
                     * @return SubEntityType <p>Sub-entity type.</p><p>Enumeration values:</p><ul><li>WebSec.ExceptionRule: protection exception rule</li><li>WebSec.BasicAccessRule: basic access control</li><li>WebSec.PreciseMatchRule: exact match rule</li><li>WebSec.RateLimitRule: precision rate limiting</li><li>WebSec.BotCustomRule: advanced bot management - custom rule</li><li>DDoS.L4Proxy.IpAccessControl: Layer 4 proxy DDoS protection - IP blocklist/allowlist</li><li>DDoS.L3Transit.IpAccessControl: layer-3 transit DDoS protection - IP blocklist/allowlist</li></ul>
                     * 
                     */
                    std::string GetSubEntityType() const;

                    /**
                     * 设置<p>Sub-entity type.</p><p>Enumeration values:</p><ul><li>WebSec.ExceptionRule: protection exception rule</li><li>WebSec.BasicAccessRule: basic access control</li><li>WebSec.PreciseMatchRule: exact match rule</li><li>WebSec.RateLimitRule: precision rate limiting</li><li>WebSec.BotCustomRule: advanced bot management - custom rule</li><li>DDoS.L4Proxy.IpAccessControl: Layer 4 proxy DDoS protection - IP blocklist/allowlist</li><li>DDoS.L3Transit.IpAccessControl: layer-3 transit DDoS protection - IP blocklist/allowlist</li></ul>
                     * @param _subEntityType <p>Sub-entity type.</p><p>Enumeration values:</p><ul><li>WebSec.ExceptionRule: protection exception rule</li><li>WebSec.BasicAccessRule: basic access control</li><li>WebSec.PreciseMatchRule: exact match rule</li><li>WebSec.RateLimitRule: precision rate limiting</li><li>WebSec.BotCustomRule: advanced bot management - custom rule</li><li>DDoS.L4Proxy.IpAccessControl: Layer 4 proxy DDoS protection - IP blocklist/allowlist</li><li>DDoS.L3Transit.IpAccessControl: layer-3 transit DDoS protection - IP blocklist/allowlist</li></ul>
                     * 
                     */
                    void SetSubEntityType(const std::string& _subEntityType);

                    /**
                     * 判断参数 SubEntityType 是否已赋值
                     * @return SubEntityType 是否已赋值
                     * 
                     */
                    bool SubEntityTypeHasBeenSet() const;

                    /**
                     * 获取<p>Sub-entity identifier. It represents different meanings based on SubEntityType:</p><ul><li>WebSec.ExceptionRule: rule ID;</li><li>WebSec.BasicAccessRule: rule ID;</li><li>WebSec.PreciseMatchRule: rule ID;</li><li>WebSec.RateLimitRule: rule ID;</li><li>WebSec.BotCustomRule: rule ID;</li><li>DDoS.L4Proxy.IpAccessControl: empty;</li><li>DDoS.L3Transit.IpAccessControl: empty.</li></ul><p>EntityType corresponds to SubEntityType. Different EntityType supports different SubEntityType.<br>WebSec.ZonePolicy, WebSec.HostPolicy, and WebSec.Template support the following SubEntityType:</p><ul><li>WebSec.ExceptionRule;</li><li>WebSec.BasicAccessRule;</li><li>WebSec.PreciseMatchRule;</li><li>WebSec.RateLimitRule;</li><li>WebSec.BotCustomRule.</li></ul>DDoS.L4Proxy supports the following SubEntityType:<ul><li>DDoS.L4Proxy.IpAccessControl;</li></ul>DDoS.L3Transit supports the following SubEntityType:<ul><li>DDoS.L3Transit.IpAccessControl.</li></ul>
                     * @return SubEntityId <p>Sub-entity identifier. It represents different meanings based on SubEntityType:</p><ul><li>WebSec.ExceptionRule: rule ID;</li><li>WebSec.BasicAccessRule: rule ID;</li><li>WebSec.PreciseMatchRule: rule ID;</li><li>WebSec.RateLimitRule: rule ID;</li><li>WebSec.BotCustomRule: rule ID;</li><li>DDoS.L4Proxy.IpAccessControl: empty;</li><li>DDoS.L3Transit.IpAccessControl: empty.</li></ul><p>EntityType corresponds to SubEntityType. Different EntityType supports different SubEntityType.<br>WebSec.ZonePolicy, WebSec.HostPolicy, and WebSec.Template support the following SubEntityType:</p><ul><li>WebSec.ExceptionRule;</li><li>WebSec.BasicAccessRule;</li><li>WebSec.PreciseMatchRule;</li><li>WebSec.RateLimitRule;</li><li>WebSec.BotCustomRule.</li></ul>DDoS.L4Proxy supports the following SubEntityType:<ul><li>DDoS.L4Proxy.IpAccessControl;</li></ul>DDoS.L3Transit supports the following SubEntityType:<ul><li>DDoS.L3Transit.IpAccessControl.</li></ul>
                     * 
                     */
                    std::string GetSubEntityId() const;

                    /**
                     * 设置<p>Sub-entity identifier. It represents different meanings based on SubEntityType:</p><ul><li>WebSec.ExceptionRule: rule ID;</li><li>WebSec.BasicAccessRule: rule ID;</li><li>WebSec.PreciseMatchRule: rule ID;</li><li>WebSec.RateLimitRule: rule ID;</li><li>WebSec.BotCustomRule: rule ID;</li><li>DDoS.L4Proxy.IpAccessControl: empty;</li><li>DDoS.L3Transit.IpAccessControl: empty.</li></ul><p>EntityType corresponds to SubEntityType. Different EntityType supports different SubEntityType.<br>WebSec.ZonePolicy, WebSec.HostPolicy, and WebSec.Template support the following SubEntityType:</p><ul><li>WebSec.ExceptionRule;</li><li>WebSec.BasicAccessRule;</li><li>WebSec.PreciseMatchRule;</li><li>WebSec.RateLimitRule;</li><li>WebSec.BotCustomRule.</li></ul>DDoS.L4Proxy supports the following SubEntityType:<ul><li>DDoS.L4Proxy.IpAccessControl;</li></ul>DDoS.L3Transit supports the following SubEntityType:<ul><li>DDoS.L3Transit.IpAccessControl.</li></ul>
                     * @param _subEntityId <p>Sub-entity identifier. It represents different meanings based on SubEntityType:</p><ul><li>WebSec.ExceptionRule: rule ID;</li><li>WebSec.BasicAccessRule: rule ID;</li><li>WebSec.PreciseMatchRule: rule ID;</li><li>WebSec.RateLimitRule: rule ID;</li><li>WebSec.BotCustomRule: rule ID;</li><li>DDoS.L4Proxy.IpAccessControl: empty;</li><li>DDoS.L3Transit.IpAccessControl: empty.</li></ul><p>EntityType corresponds to SubEntityType. Different EntityType supports different SubEntityType.<br>WebSec.ZonePolicy, WebSec.HostPolicy, and WebSec.Template support the following SubEntityType:</p><ul><li>WebSec.ExceptionRule;</li><li>WebSec.BasicAccessRule;</li><li>WebSec.PreciseMatchRule;</li><li>WebSec.RateLimitRule;</li><li>WebSec.BotCustomRule.</li></ul>DDoS.L4Proxy supports the following SubEntityType:<ul><li>DDoS.L4Proxy.IpAccessControl;</li></ul>DDoS.L3Transit supports the following SubEntityType:<ul><li>DDoS.L3Transit.IpAccessControl.</li></ul>
                     * 
                     */
                    void SetSubEntityId(const std::string& _subEntityId);

                    /**
                     * 判断参数 SubEntityId 是否已赋值
                     * @return SubEntityId 是否已赋值
                     * 
                     */
                    bool SubEntityIdHasBeenSet() const;

                    /**
                     * 获取<p>Sub-entity name, which represents different meanings according to SubEntityType:</p><ul><li>WebSec.ExceptionRule: rule name;</li><li>WebSec.BasicAccessRule: rule name;</li><li>WebSec.PreciseMatchRule: rule name;</li><li>WebSec.RateLimitRule: rule name;</li><li>WebSec.BotCustomRule: rule name;</li><li>DDoS.L4Proxy.IpAccessControl: rule name, where block means blocklist and allow means allowlist;</li><li>DDoS.L3Transit.IpAccessControl: rule name, where block means blocklist and allow means allowlist.</li></ul>
                     * @return SubEntityName <p>Sub-entity name, which represents different meanings according to SubEntityType:</p><ul><li>WebSec.ExceptionRule: rule name;</li><li>WebSec.BasicAccessRule: rule name;</li><li>WebSec.PreciseMatchRule: rule name;</li><li>WebSec.RateLimitRule: rule name;</li><li>WebSec.BotCustomRule: rule name;</li><li>DDoS.L4Proxy.IpAccessControl: rule name, where block means blocklist and allow means allowlist;</li><li>DDoS.L3Transit.IpAccessControl: rule name, where block means blocklist and allow means allowlist.</li></ul>
                     * 
                     */
                    std::string GetSubEntityName() const;

                    /**
                     * 设置<p>Sub-entity name, which represents different meanings according to SubEntityType:</p><ul><li>WebSec.ExceptionRule: rule name;</li><li>WebSec.BasicAccessRule: rule name;</li><li>WebSec.PreciseMatchRule: rule name;</li><li>WebSec.RateLimitRule: rule name;</li><li>WebSec.BotCustomRule: rule name;</li><li>DDoS.L4Proxy.IpAccessControl: rule name, where block means blocklist and allow means allowlist;</li><li>DDoS.L3Transit.IpAccessControl: rule name, where block means blocklist and allow means allowlist.</li></ul>
                     * @param _subEntityName <p>Sub-entity name, which represents different meanings according to SubEntityType:</p><ul><li>WebSec.ExceptionRule: rule name;</li><li>WebSec.BasicAccessRule: rule name;</li><li>WebSec.PreciseMatchRule: rule name;</li><li>WebSec.RateLimitRule: rule name;</li><li>WebSec.BotCustomRule: rule name;</li><li>DDoS.L4Proxy.IpAccessControl: rule name, where block means blocklist and allow means allowlist;</li><li>DDoS.L3Transit.IpAccessControl: rule name, where block means blocklist and allow means allowlist.</li></ul>
                     * 
                     */
                    void SetSubEntityName(const std::string& _subEntityName);

                    /**
                     * 判断参数 SubEntityName 是否已赋值
                     * @return SubEntityName 是否已赋值
                     * 
                     */
                    bool SubEntityNameHasBeenSet() const;

                private:

                    /**
                     * <p>Site ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Entity type.</p><p>Enumeration values:</p><ul><li>WebSec.ZonePolicy: site-level security policy</li><li>WebSec.HostPolicy: domain-level security policy</li><li>WebSec.Template: policy template</li><li>DDoS.L4Proxy: Layer 4 proxy DDoS protection</li><li>DDoS.L3Transit: layer-3 anycast DDoS protection</li></ul>
                     */
                    std::string m_entityType;
                    bool m_entityTypeHasBeenSet;

                    /**
                     * <p>Entity identification, representing different meanings based on EntityType:</p><ul><li>WebSec.ZonePolicy: site ID;</li><li>WebSec.HostPolicy: domain name;</li><li>WebSec.Template: template ID;</li><li>DDoS.L4Proxy: instance ID;</li><li>DDoS.L3Transit: instance ID.</li></ul>
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * <p>Entity identifier. Its meaning varies based on EntityType:</p><ul><li>WebSec.ZonePolicy: empty;</li><li>WebSec.HostPolicy: empty;</li><li>WebSec.Template: Template name;</li><li>DDoS.L4Proxy: empty;</li><li>DDoS.L3Transit: empty.</li></ul>
                     */
                    std::string m_entityName;
                    bool m_entityNameHasBeenSet;

                    /**
                     * <p>Sub-entity type.</p><p>Enumeration values:</p><ul><li>WebSec.ExceptionRule: protection exception rule</li><li>WebSec.BasicAccessRule: basic access control</li><li>WebSec.PreciseMatchRule: exact match rule</li><li>WebSec.RateLimitRule: precision rate limiting</li><li>WebSec.BotCustomRule: advanced bot management - custom rule</li><li>DDoS.L4Proxy.IpAccessControl: Layer 4 proxy DDoS protection - IP blocklist/allowlist</li><li>DDoS.L3Transit.IpAccessControl: layer-3 transit DDoS protection - IP blocklist/allowlist</li></ul>
                     */
                    std::string m_subEntityType;
                    bool m_subEntityTypeHasBeenSet;

                    /**
                     * <p>Sub-entity identifier. It represents different meanings based on SubEntityType:</p><ul><li>WebSec.ExceptionRule: rule ID;</li><li>WebSec.BasicAccessRule: rule ID;</li><li>WebSec.PreciseMatchRule: rule ID;</li><li>WebSec.RateLimitRule: rule ID;</li><li>WebSec.BotCustomRule: rule ID;</li><li>DDoS.L4Proxy.IpAccessControl: empty;</li><li>DDoS.L3Transit.IpAccessControl: empty.</li></ul><p>EntityType corresponds to SubEntityType. Different EntityType supports different SubEntityType.<br>WebSec.ZonePolicy, WebSec.HostPolicy, and WebSec.Template support the following SubEntityType:</p><ul><li>WebSec.ExceptionRule;</li><li>WebSec.BasicAccessRule;</li><li>WebSec.PreciseMatchRule;</li><li>WebSec.RateLimitRule;</li><li>WebSec.BotCustomRule.</li></ul>DDoS.L4Proxy supports the following SubEntityType:<ul><li>DDoS.L4Proxy.IpAccessControl;</li></ul>DDoS.L3Transit supports the following SubEntityType:<ul><li>DDoS.L3Transit.IpAccessControl.</li></ul>
                     */
                    std::string m_subEntityId;
                    bool m_subEntityIdHasBeenSet;

                    /**
                     * <p>Sub-entity name, which represents different meanings according to SubEntityType:</p><ul><li>WebSec.ExceptionRule: rule name;</li><li>WebSec.BasicAccessRule: rule name;</li><li>WebSec.PreciseMatchRule: rule name;</li><li>WebSec.RateLimitRule: rule name;</li><li>WebSec.BotCustomRule: rule name;</li><li>DDoS.L4Proxy.IpAccessControl: rule name, where block means blocklist and allow means allowlist;</li><li>DDoS.L3Transit.IpAccessControl: rule name, where block means blocklist and allow means allowlist.</li></ul>
                     */
                    std::string m_subEntityName;
                    bool m_subEntityNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IPGROUPREFERENCE_H_
