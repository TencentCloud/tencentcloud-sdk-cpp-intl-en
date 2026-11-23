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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMGROUPREFERENCE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMGROUPREFERENCE_H_

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
                * Security module that references the custom group
                */
                class CustomGroupReference : public AbstractModel
                {
                public:
                    CustomGroupReference();
                    ~CustomGroupReference() = default;
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
                     * 获取<p>Entity type.</p><p>Valid values:</p><ul><li>WebSec.ZonePolicy: Site-level protection policy</li><li>WebSec.HostPolicy: Domain-level protection policy</li><li>WebSec.Template: Policy template</li><li>WebSec.APIResource: API resource</li><li>WebSec.JSInjectionRule: Injection rule</li><li>DDoS.L4Proxy: Layer-4 proxy DDoS protection</li><li>DDoS.L3Transit: Layer-3 transit DDoS protection</li></ul>
                     * @return EntityType <p>Entity type.</p><p>Valid values:</p><ul><li>WebSec.ZonePolicy: Site-level protection policy</li><li>WebSec.HostPolicy: Domain-level protection policy</li><li>WebSec.Template: Policy template</li><li>WebSec.APIResource: API resource</li><li>WebSec.JSInjectionRule: Injection rule</li><li>DDoS.L4Proxy: Layer-4 proxy DDoS protection</li><li>DDoS.L3Transit: Layer-3 transit DDoS protection</li></ul>
                     * 
                     */
                    std::string GetEntityType() const;

                    /**
                     * 设置<p>Entity type.</p><p>Valid values:</p><ul><li>WebSec.ZonePolicy: Site-level protection policy</li><li>WebSec.HostPolicy: Domain-level protection policy</li><li>WebSec.Template: Policy template</li><li>WebSec.APIResource: API resource</li><li>WebSec.JSInjectionRule: Injection rule</li><li>DDoS.L4Proxy: Layer-4 proxy DDoS protection</li><li>DDoS.L3Transit: Layer-3 transit DDoS protection</li></ul>
                     * @param _entityType <p>Entity type.</p><p>Valid values:</p><ul><li>WebSec.ZonePolicy: Site-level protection policy</li><li>WebSec.HostPolicy: Domain-level protection policy</li><li>WebSec.Template: Policy template</li><li>WebSec.APIResource: API resource</li><li>WebSec.JSInjectionRule: Injection rule</li><li>DDoS.L4Proxy: Layer-4 proxy DDoS protection</li><li>DDoS.L3Transit: Layer-3 transit DDoS protection</li></ul>
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
                     * 获取<p>Entity identifier, which has different meanings depending on EntityType:</p><ul><li>WebSec.ZonePolicy: Site ID</li><li>WebSec.HostPolicy: Domain</li><li>WebSec.Template: Template ID</li><li>WebSec.APIResource: API resource ID</li><li>WebSec.JSInjectionRule: JavaScript injection rule ID</li><li>DDoS.L4Proxy: Instance ID</li><li>DDoS.L3Transit: Instance ID</li></ul>
                     * @return EntityId <p>Entity identifier, which has different meanings depending on EntityType:</p><ul><li>WebSec.ZonePolicy: Site ID</li><li>WebSec.HostPolicy: Domain</li><li>WebSec.Template: Template ID</li><li>WebSec.APIResource: API resource ID</li><li>WebSec.JSInjectionRule: JavaScript injection rule ID</li><li>DDoS.L4Proxy: Instance ID</li><li>DDoS.L3Transit: Instance ID</li></ul>
                     * 
                     */
                    std::string GetEntityId() const;

                    /**
                     * 设置<p>Entity identifier, which has different meanings depending on EntityType:</p><ul><li>WebSec.ZonePolicy: Site ID</li><li>WebSec.HostPolicy: Domain</li><li>WebSec.Template: Template ID</li><li>WebSec.APIResource: API resource ID</li><li>WebSec.JSInjectionRule: JavaScript injection rule ID</li><li>DDoS.L4Proxy: Instance ID</li><li>DDoS.L3Transit: Instance ID</li></ul>
                     * @param _entityId <p>Entity identifier, which has different meanings depending on EntityType:</p><ul><li>WebSec.ZonePolicy: Site ID</li><li>WebSec.HostPolicy: Domain</li><li>WebSec.Template: Template ID</li><li>WebSec.APIResource: API resource ID</li><li>WebSec.JSInjectionRule: JavaScript injection rule ID</li><li>DDoS.L4Proxy: Instance ID</li><li>DDoS.L3Transit: Instance ID</li></ul>
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
                     * 获取<p>Entity identifier, which has different meanings depending on EntityType:</p><ul><li>WebSec.ZonePolicy: Empty</li><li>WebSec.HostPolicy: Empty</li><li>WebSec.Template: Template name</li><li>WebSec.APIResource: API resource name</li><li>WebSec.JSInjectionRule: JavaScript injection rule name</li><li>DDoS.L4Proxy: Empty</li><li>DDoS.L3Transit: Empty</li></ul>
                     * @return EntityName <p>Entity identifier, which has different meanings depending on EntityType:</p><ul><li>WebSec.ZonePolicy: Empty</li><li>WebSec.HostPolicy: Empty</li><li>WebSec.Template: Template name</li><li>WebSec.APIResource: API resource name</li><li>WebSec.JSInjectionRule: JavaScript injection rule name</li><li>DDoS.L4Proxy: Empty</li><li>DDoS.L3Transit: Empty</li></ul>
                     * 
                     */
                    std::string GetEntityName() const;

                    /**
                     * 设置<p>Entity identifier, which has different meanings depending on EntityType:</p><ul><li>WebSec.ZonePolicy: Empty</li><li>WebSec.HostPolicy: Empty</li><li>WebSec.Template: Template name</li><li>WebSec.APIResource: API resource name</li><li>WebSec.JSInjectionRule: JavaScript injection rule name</li><li>DDoS.L4Proxy: Empty</li><li>DDoS.L3Transit: Empty</li></ul>
                     * @param _entityName <p>Entity identifier, which has different meanings depending on EntityType:</p><ul><li>WebSec.ZonePolicy: Empty</li><li>WebSec.HostPolicy: Empty</li><li>WebSec.Template: Template name</li><li>WebSec.APIResource: API resource name</li><li>WebSec.JSInjectionRule: JavaScript injection rule name</li><li>DDoS.L4Proxy: Empty</li><li>DDoS.L3Transit: Empty</li></ul>
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
                     * 获取<p>Sub-entity type.</p><p>Valid values:</p><ul><li>WebSec.ExceptionRule: Protection exception rule</li><li>WebSec.BasicAccessRule: Basic access control</li><li>WebSec.PreciseMatchRule: Precise match rule</li><li>WebSec.RateLimitRule: Precise rate limiting</li><li>WebSec.BotCustomRule: Advanced Bot management - Custom rule</li><li>DDoS.L4Proxy.IpAccessControl: Layer-4 proxy DDoS protection - IP allowlist/blocklist</li><li>DDoS.L3Transit.IpAccessControl: Layer-3 transit DDoS protection - IP allowlist/blocklist</li></ul>
                     * @return SubEntityType <p>Sub-entity type.</p><p>Valid values:</p><ul><li>WebSec.ExceptionRule: Protection exception rule</li><li>WebSec.BasicAccessRule: Basic access control</li><li>WebSec.PreciseMatchRule: Precise match rule</li><li>WebSec.RateLimitRule: Precise rate limiting</li><li>WebSec.BotCustomRule: Advanced Bot management - Custom rule</li><li>DDoS.L4Proxy.IpAccessControl: Layer-4 proxy DDoS protection - IP allowlist/blocklist</li><li>DDoS.L3Transit.IpAccessControl: Layer-3 transit DDoS protection - IP allowlist/blocklist</li></ul>
                     * 
                     */
                    std::string GetSubEntityType() const;

                    /**
                     * 设置<p>Sub-entity type.</p><p>Valid values:</p><ul><li>WebSec.ExceptionRule: Protection exception rule</li><li>WebSec.BasicAccessRule: Basic access control</li><li>WebSec.PreciseMatchRule: Precise match rule</li><li>WebSec.RateLimitRule: Precise rate limiting</li><li>WebSec.BotCustomRule: Advanced Bot management - Custom rule</li><li>DDoS.L4Proxy.IpAccessControl: Layer-4 proxy DDoS protection - IP allowlist/blocklist</li><li>DDoS.L3Transit.IpAccessControl: Layer-3 transit DDoS protection - IP allowlist/blocklist</li></ul>
                     * @param _subEntityType <p>Sub-entity type.</p><p>Valid values:</p><ul><li>WebSec.ExceptionRule: Protection exception rule</li><li>WebSec.BasicAccessRule: Basic access control</li><li>WebSec.PreciseMatchRule: Precise match rule</li><li>WebSec.RateLimitRule: Precise rate limiting</li><li>WebSec.BotCustomRule: Advanced Bot management - Custom rule</li><li>DDoS.L4Proxy.IpAccessControl: Layer-4 proxy DDoS protection - IP allowlist/blocklist</li><li>DDoS.L3Transit.IpAccessControl: Layer-3 transit DDoS protection - IP allowlist/blocklist</li></ul>
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
                     * 获取<p>Sub-entity identifier, which has different meanings depending on SubEntityType:</p><ul><li>WebSec.ExceptionRule: Rule ID</li><li>WebSec.BasicAccessRule: Rule ID</li><li>WebSec.PreciseMatchRule: Rule ID</li><li>WebSec.RateLimitRule: Rule ID</li><li>WebSec.BotCustomRule: Rule ID</li><li>DDoS.L4Proxy.IpAccessControl: Empty</li><li>DDoS.L3Transit.IpAccessControl: Empty</li></ul><p>EntityType and SubEntityType are in a mapping relationship. Different EntityTypes support different SubEntityTypes.<br>WebSec.ZonePolicy, WebSec.HostPolicy, and WebSec.Template support the following SubEntityTypes:</p><ul><li>WebSec.ExceptionRule</li><li>WebSec.BasicAccessRule</li><li>WebSec.PreciseMatchRule</li><li>WebSec.RateLimitRule</li><li>WebSec.BotCustomRule</li></ul>DDoS.L4Proxy supports the following SubEntityType:<ul><li>DDoS.L4Proxy.IpAccessControl</li></ul>DDoS.L3Transit supports the following SubEntityType:<ul><li>DDoS.L3Transit.IpAccessControl</li></ul>
                     * @return SubEntityId <p>Sub-entity identifier, which has different meanings depending on SubEntityType:</p><ul><li>WebSec.ExceptionRule: Rule ID</li><li>WebSec.BasicAccessRule: Rule ID</li><li>WebSec.PreciseMatchRule: Rule ID</li><li>WebSec.RateLimitRule: Rule ID</li><li>WebSec.BotCustomRule: Rule ID</li><li>DDoS.L4Proxy.IpAccessControl: Empty</li><li>DDoS.L3Transit.IpAccessControl: Empty</li></ul><p>EntityType and SubEntityType are in a mapping relationship. Different EntityTypes support different SubEntityTypes.<br>WebSec.ZonePolicy, WebSec.HostPolicy, and WebSec.Template support the following SubEntityTypes:</p><ul><li>WebSec.ExceptionRule</li><li>WebSec.BasicAccessRule</li><li>WebSec.PreciseMatchRule</li><li>WebSec.RateLimitRule</li><li>WebSec.BotCustomRule</li></ul>DDoS.L4Proxy supports the following SubEntityType:<ul><li>DDoS.L4Proxy.IpAccessControl</li></ul>DDoS.L3Transit supports the following SubEntityType:<ul><li>DDoS.L3Transit.IpAccessControl</li></ul>
                     * 
                     */
                    std::string GetSubEntityId() const;

                    /**
                     * 设置<p>Sub-entity identifier, which has different meanings depending on SubEntityType:</p><ul><li>WebSec.ExceptionRule: Rule ID</li><li>WebSec.BasicAccessRule: Rule ID</li><li>WebSec.PreciseMatchRule: Rule ID</li><li>WebSec.RateLimitRule: Rule ID</li><li>WebSec.BotCustomRule: Rule ID</li><li>DDoS.L4Proxy.IpAccessControl: Empty</li><li>DDoS.L3Transit.IpAccessControl: Empty</li></ul><p>EntityType and SubEntityType are in a mapping relationship. Different EntityTypes support different SubEntityTypes.<br>WebSec.ZonePolicy, WebSec.HostPolicy, and WebSec.Template support the following SubEntityTypes:</p><ul><li>WebSec.ExceptionRule</li><li>WebSec.BasicAccessRule</li><li>WebSec.PreciseMatchRule</li><li>WebSec.RateLimitRule</li><li>WebSec.BotCustomRule</li></ul>DDoS.L4Proxy supports the following SubEntityType:<ul><li>DDoS.L4Proxy.IpAccessControl</li></ul>DDoS.L3Transit supports the following SubEntityType:<ul><li>DDoS.L3Transit.IpAccessControl</li></ul>
                     * @param _subEntityId <p>Sub-entity identifier, which has different meanings depending on SubEntityType:</p><ul><li>WebSec.ExceptionRule: Rule ID</li><li>WebSec.BasicAccessRule: Rule ID</li><li>WebSec.PreciseMatchRule: Rule ID</li><li>WebSec.RateLimitRule: Rule ID</li><li>WebSec.BotCustomRule: Rule ID</li><li>DDoS.L4Proxy.IpAccessControl: Empty</li><li>DDoS.L3Transit.IpAccessControl: Empty</li></ul><p>EntityType and SubEntityType are in a mapping relationship. Different EntityTypes support different SubEntityTypes.<br>WebSec.ZonePolicy, WebSec.HostPolicy, and WebSec.Template support the following SubEntityTypes:</p><ul><li>WebSec.ExceptionRule</li><li>WebSec.BasicAccessRule</li><li>WebSec.PreciseMatchRule</li><li>WebSec.RateLimitRule</li><li>WebSec.BotCustomRule</li></ul>DDoS.L4Proxy supports the following SubEntityType:<ul><li>DDoS.L4Proxy.IpAccessControl</li></ul>DDoS.L3Transit supports the following SubEntityType:<ul><li>DDoS.L3Transit.IpAccessControl</li></ul>
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
                     * 获取<p>Sub-entity name, which has different meanings depending on SubEntityType:</p><ul><li>WebSec.ExceptionRule: Rule name</li><li>WebSec.BasicAccessRule: Rule name</li><li>WebSec.PreciseMatchRule: Rule name</li><li>WebSec.RateLimitRule: Rule name</li><li>WebSec.BotCustomRule: Rule name</li><li>DDoS.L4Proxy.IpAccessControl: Empty</li><li>DDoS.L3Transit.IpAccessControl: Empty</li></ul>
                     * @return SubEntityName <p>Sub-entity name, which has different meanings depending on SubEntityType:</p><ul><li>WebSec.ExceptionRule: Rule name</li><li>WebSec.BasicAccessRule: Rule name</li><li>WebSec.PreciseMatchRule: Rule name</li><li>WebSec.RateLimitRule: Rule name</li><li>WebSec.BotCustomRule: Rule name</li><li>DDoS.L4Proxy.IpAccessControl: Empty</li><li>DDoS.L3Transit.IpAccessControl: Empty</li></ul>
                     * 
                     */
                    std::string GetSubEntityName() const;

                    /**
                     * 设置<p>Sub-entity name, which has different meanings depending on SubEntityType:</p><ul><li>WebSec.ExceptionRule: Rule name</li><li>WebSec.BasicAccessRule: Rule name</li><li>WebSec.PreciseMatchRule: Rule name</li><li>WebSec.RateLimitRule: Rule name</li><li>WebSec.BotCustomRule: Rule name</li><li>DDoS.L4Proxy.IpAccessControl: Empty</li><li>DDoS.L3Transit.IpAccessControl: Empty</li></ul>
                     * @param _subEntityName <p>Sub-entity name, which has different meanings depending on SubEntityType:</p><ul><li>WebSec.ExceptionRule: Rule name</li><li>WebSec.BasicAccessRule: Rule name</li><li>WebSec.PreciseMatchRule: Rule name</li><li>WebSec.RateLimitRule: Rule name</li><li>WebSec.BotCustomRule: Rule name</li><li>DDoS.L4Proxy.IpAccessControl: Empty</li><li>DDoS.L3Transit.IpAccessControl: Empty</li></ul>
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
                     * <p>Entity type.</p><p>Valid values:</p><ul><li>WebSec.ZonePolicy: Site-level protection policy</li><li>WebSec.HostPolicy: Domain-level protection policy</li><li>WebSec.Template: Policy template</li><li>WebSec.APIResource: API resource</li><li>WebSec.JSInjectionRule: Injection rule</li><li>DDoS.L4Proxy: Layer-4 proxy DDoS protection</li><li>DDoS.L3Transit: Layer-3 transit DDoS protection</li></ul>
                     */
                    std::string m_entityType;
                    bool m_entityTypeHasBeenSet;

                    /**
                     * <p>Entity identifier, which has different meanings depending on EntityType:</p><ul><li>WebSec.ZonePolicy: Site ID</li><li>WebSec.HostPolicy: Domain</li><li>WebSec.Template: Template ID</li><li>WebSec.APIResource: API resource ID</li><li>WebSec.JSInjectionRule: JavaScript injection rule ID</li><li>DDoS.L4Proxy: Instance ID</li><li>DDoS.L3Transit: Instance ID</li></ul>
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * <p>Entity identifier, which has different meanings depending on EntityType:</p><ul><li>WebSec.ZonePolicy: Empty</li><li>WebSec.HostPolicy: Empty</li><li>WebSec.Template: Template name</li><li>WebSec.APIResource: API resource name</li><li>WebSec.JSInjectionRule: JavaScript injection rule name</li><li>DDoS.L4Proxy: Empty</li><li>DDoS.L3Transit: Empty</li></ul>
                     */
                    std::string m_entityName;
                    bool m_entityNameHasBeenSet;

                    /**
                     * <p>Sub-entity type.</p><p>Valid values:</p><ul><li>WebSec.ExceptionRule: Protection exception rule</li><li>WebSec.BasicAccessRule: Basic access control</li><li>WebSec.PreciseMatchRule: Precise match rule</li><li>WebSec.RateLimitRule: Precise rate limiting</li><li>WebSec.BotCustomRule: Advanced Bot management - Custom rule</li><li>DDoS.L4Proxy.IpAccessControl: Layer-4 proxy DDoS protection - IP allowlist/blocklist</li><li>DDoS.L3Transit.IpAccessControl: Layer-3 transit DDoS protection - IP allowlist/blocklist</li></ul>
                     */
                    std::string m_subEntityType;
                    bool m_subEntityTypeHasBeenSet;

                    /**
                     * <p>Sub-entity identifier, which has different meanings depending on SubEntityType:</p><ul><li>WebSec.ExceptionRule: Rule ID</li><li>WebSec.BasicAccessRule: Rule ID</li><li>WebSec.PreciseMatchRule: Rule ID</li><li>WebSec.RateLimitRule: Rule ID</li><li>WebSec.BotCustomRule: Rule ID</li><li>DDoS.L4Proxy.IpAccessControl: Empty</li><li>DDoS.L3Transit.IpAccessControl: Empty</li></ul><p>EntityType and SubEntityType are in a mapping relationship. Different EntityTypes support different SubEntityTypes.<br>WebSec.ZonePolicy, WebSec.HostPolicy, and WebSec.Template support the following SubEntityTypes:</p><ul><li>WebSec.ExceptionRule</li><li>WebSec.BasicAccessRule</li><li>WebSec.PreciseMatchRule</li><li>WebSec.RateLimitRule</li><li>WebSec.BotCustomRule</li></ul>DDoS.L4Proxy supports the following SubEntityType:<ul><li>DDoS.L4Proxy.IpAccessControl</li></ul>DDoS.L3Transit supports the following SubEntityType:<ul><li>DDoS.L3Transit.IpAccessControl</li></ul>
                     */
                    std::string m_subEntityId;
                    bool m_subEntityIdHasBeenSet;

                    /**
                     * <p>Sub-entity name, which has different meanings depending on SubEntityType:</p><ul><li>WebSec.ExceptionRule: Rule name</li><li>WebSec.BasicAccessRule: Rule name</li><li>WebSec.PreciseMatchRule: Rule name</li><li>WebSec.RateLimitRule: Rule name</li><li>WebSec.BotCustomRule: Rule name</li><li>DDoS.L4Proxy.IpAccessControl: Empty</li><li>DDoS.L3Transit.IpAccessControl: Empty</li></ul>
                     */
                    std::string m_subEntityName;
                    bool m_subEntityNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMGROUPREFERENCE_H_
