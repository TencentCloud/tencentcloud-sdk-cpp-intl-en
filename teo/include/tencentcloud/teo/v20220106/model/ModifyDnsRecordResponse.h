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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYDNSRECORDRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYDNSRECORDRESPONSE_H_

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
                * ModifyDnsRecord response structure.
                */
                class ModifyDnsRecordResponse : public AbstractModel
                {
                public:
                    ModifyDnsRecordResponse();
                    ~ModifyDnsRecordResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Record ID
                     * @return Id Record ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Record type
                     * @return Type Record type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Record name
                     * @return Name Record name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Record content
                     * @return Content Record content
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取
                     * @return Ttl 
                     * 
                     */
                    int64_t GetTtl() const;

                    /**
                     * 判断参数 Ttl 是否已赋值
                     * @return Ttl 是否已赋值
                     * 
                     */
                    bool TtlHasBeenSet() const;

                    /**
                     * 获取Priority
                     * @return Priority Priority
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Proxy mode
                     * @return Mode Proxy mode
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Resolution status
                     * @return Status Resolution status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取CNAME address
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Cname CNAME address
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取Whether the DNS record is locked
                     * @return Locked Whether the DNS record is locked
                     * 
                     */
                    bool GetLocked() const;

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     * 
                     */
                    bool LockedHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreatedOn Creation time
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取Modification time
                     * @return ModifiedOn Modification time
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     * 
                     */
                    bool ModifiedOnHasBeenSet() const;

                    /**
                     * 获取Site ID
                     * @return ZoneId Site ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Site name
                     * @return ZoneName Site name
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

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
                     * Record name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Record content
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_ttl;
                    bool m_ttlHasBeenSet;

                    /**
                     * Priority
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Proxy mode
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Resolution status
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
                     * Whether the DNS record is locked
                     */
                    bool m_locked;
                    bool m_lockedHasBeenSet;

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
                     * Site ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Site name
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYDNSRECORDRESPONSE_H_
