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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DNSRECORD_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DNSRECORD_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DNS record
                */
                class DnsRecord : public AbstractModel
                {
                public:
                    DnsRecord();
                    ~DnsRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Record ID
                     * @return Id Record ID
                     */
                    std::string GetId() const;

                    /**
                     * 设置Record ID
                     * @param Id Record ID
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Record type
                     * @return Type Record type
                     */
                    std::string GetType() const;

                    /**
                     * 设置Record type
                     * @param Type Record type
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Host record
                     * @return Name Host record
                     */
                    std::string GetName() const;

                    /**
                     * 设置Host record
                     * @param Name Host record
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Record value
                     * @return Content Record value
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Record value
                     * @param Content Record value
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Proxy mode
                     * @return Mode Proxy mode
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Proxy mode
                     * @param Mode Proxy mode
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取TTL value
                     * @return Ttl TTL value
                     */
                    int64_t GetTtl() const;

                    /**
                     * 设置TTL value
                     * @param Ttl TTL value
                     */
                    void SetTtl(const int64_t& _ttl);

                    /**
                     * 判断参数 Ttl 是否已赋值
                     * @return Ttl 是否已赋值
                     */
                    bool TtlHasBeenSet() const;

                    /**
                     * 获取Priority
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Priority Priority
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Priority
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Priority Priority
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreatedOn Creation time
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置Creation time
                     * @param CreatedOn Creation time
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取Modification time
                     * @return ModifiedOn Modification time
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置Modification time
                     * @param ModifiedOn Modification time
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     */
                    bool ModifiedOnHasBeenSet() const;

                    /**
                     * 获取Domain name lock
                     * @return Locked Domain name lock
                     */
                    bool GetLocked() const;

                    /**
                     * 设置Domain name lock
                     * @param Locked Domain name lock
                     */
                    void SetLocked(const bool& _locked);

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     */
                    bool LockedHasBeenSet() const;

                    /**
                     * 获取Site ID
                     * @return ZoneId Site ID
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID
                     * @param ZoneId Site ID
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Site name
                     * @return ZoneName Site name
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Site name
                     * @param ZoneName Site name
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取Resolution status
`active`: Activated
`pending`: Not activated
                     * @return Status Resolution status
`active`: Activated
`pending`: Not activated
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Resolution status
`active`: Activated
`pending`: Not activated
                     * @param Status Resolution status
`active`: Activated
`pending`: Not activated
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取CNAME address
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Cname CNAME address
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetCname() const;

                    /**
                     * 设置CNAME address
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Cname CNAME address
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取Which service is enabled for the domain name.
- `lb`: Load balancing
- `security`: Security acceleration
- `l4`: L4 proxy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DomainStatus Which service is enabled for the domain name.
- `lb`: Load balancing
- `security`: Security acceleration
- `l4`: L4 proxy
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetDomainStatus() const;

                    /**
                     * 设置Which service is enabled for the domain name.
- `lb`: Load balancing
- `security`: Security acceleration
- `l4`: L4 proxy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DomainStatus Which service is enabled for the domain name.
- `lb`: Load balancing
- `security`: Security acceleration
- `l4`: L4 proxy
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDomainStatus(const std::vector<std::string>& _domainStatus);

                    /**
                     * 判断参数 DomainStatus 是否已赋值
                     * @return DomainStatus 是否已赋值
                     */
                    bool DomainStatusHasBeenSet() const;

                private:

                    /**
                     * Record ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Record type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Host record
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Record value
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Proxy mode
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * TTL value
                     */
                    int64_t m_ttl;
                    bool m_ttlHasBeenSet;

                    /**
                     * Priority
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                    /**
                     * Domain name lock
                     */
                    bool m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * Site ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Site name
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Resolution status
`active`: Activated
`pending`: Not activated
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * CNAME address
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * Which service is enabled for the domain name.
- `lb`: Load balancing
- `security`: Security acceleration
- `l4`: L4 proxy
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_domainStatus;
                    bool m_domainStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DNSRECORD_H_
