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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYORIGINGROUPREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYORIGINGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginRecord.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyOriginGroup request structure.
                */
                class ModifyOriginGroupRequest : public AbstractModel
                {
                public:
                    ModifyOriginGroupRequest();
                    ~ModifyOriginGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
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
                     * 获取Origin group ID. This parameter is required.
                     * @return GroupId Origin group ID. This parameter is required.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Origin group ID. This parameter is required.
                     * @param _groupId Origin group ID. This parameter is required.
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Origin server group name. The original configuration applies if this field is not specified. It can contain 1 to 200 characters, including a-z, A-Z, 0-9, underscores (_), and hyphens (-).	
                     * @return Name Origin server group name. The original configuration applies if this field is not specified. It can contain 1 to 200 characters, including a-z, A-Z, 0-9, underscores (_), and hyphens (-).	
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Origin server group name. The original configuration applies if this field is not specified. It can contain 1 to 200 characters, including a-z, A-Z, 0-9, underscores (_), and hyphens (-).	
                     * @param _name Origin server group name. The original configuration applies if this field is not specified. It can contain 1 to 200 characters, including a-z, A-Z, 0-9, underscores (_), and hyphens (-).	
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Origin server group type. Valid values:
<li>GENERAL: general origin group, only supports adding IP/domain origin servers, and can be referenced by DNS, rule engine, Layer 4 proxy, and general load balancer;</li>
<li>HTTP: HTTP-specific origin group. It supports adding IP/domain name and COS origin servers, with the incapability of being referenced by Layer-4 proxy.</li>Leave it blank to retain the original configuration.
                     * @return Type Origin server group type. Valid values:
<li>GENERAL: general origin group, only supports adding IP/domain origin servers, and can be referenced by DNS, rule engine, Layer 4 proxy, and general load balancer;</li>
<li>HTTP: HTTP-specific origin group. It supports adding IP/domain name and COS origin servers, with the incapability of being referenced by Layer-4 proxy.</li>Leave it blank to retain the original configuration.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Origin server group type. Valid values:
<li>GENERAL: general origin group, only supports adding IP/domain origin servers, and can be referenced by DNS, rule engine, Layer 4 proxy, and general load balancer;</li>
<li>HTTP: HTTP-specific origin group. It supports adding IP/domain name and COS origin servers, with the incapability of being referenced by Layer-4 proxy.</li>Leave it blank to retain the original configuration.
                     * @param _type Origin server group type. Valid values:
<li>GENERAL: general origin group, only supports adding IP/domain origin servers, and can be referenced by DNS, rule engine, Layer 4 proxy, and general load balancer;</li>
<li>HTTP: HTTP-specific origin group. It supports adding IP/domain name and COS origin servers, with the incapability of being referenced by Layer-4 proxy.</li>Leave it blank to retain the original configuration.
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
                     * 获取Origin server record information. If this field is not specified, the original configuration will be retained.
                     * @return Records Origin server record information. If this field is not specified, the original configuration will be retained.
                     * 
                     */
                    std::vector<OriginRecord> GetRecords() const;

                    /**
                     * 设置Origin server record information. If this field is not specified, the original configuration will be retained.
                     * @param _records Origin server record information. If this field is not specified, the original configuration will be retained.
                     * 
                     */
                    void SetRecords(const std::vector<OriginRecord>& _records);

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                    /**
                     * 获取Origin-pull Host Header. This parameter is valid only when Type = HTTP. No configuration or fill in the blank indicates no origin-pull Host is configured. The rule engine modification of Host Header configuration has a higher priority than the Host Header of the origin server group.
                     * @return HostHeader Origin-pull Host Header. This parameter is valid only when Type = HTTP. No configuration or fill in the blank indicates no origin-pull Host is configured. The rule engine modification of Host Header configuration has a higher priority than the Host Header of the origin server group.
                     * 
                     */
                    std::string GetHostHeader() const;

                    /**
                     * 设置Origin-pull Host Header. This parameter is valid only when Type = HTTP. No configuration or fill in the blank indicates no origin-pull Host is configured. The rule engine modification of Host Header configuration has a higher priority than the Host Header of the origin server group.
                     * @param _hostHeader Origin-pull Host Header. This parameter is valid only when Type = HTTP. No configuration or fill in the blank indicates no origin-pull Host is configured. The rule engine modification of Host Header configuration has a higher priority than the Host Header of the origin server group.
                     * 
                     */
                    void SetHostHeader(const std::string& _hostHeader);

                    /**
                     * 判断参数 HostHeader 是否已赋值
                     * @return HostHeader 是否已赋值
                     * 
                     */
                    bool HostHeaderHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Origin group ID. This parameter is required.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Origin server group name. The original configuration applies if this field is not specified. It can contain 1 to 200 characters, including a-z, A-Z, 0-9, underscores (_), and hyphens (-).	
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Origin server group type. Valid values:
<li>GENERAL: general origin group, only supports adding IP/domain origin servers, and can be referenced by DNS, rule engine, Layer 4 proxy, and general load balancer;</li>
<li>HTTP: HTTP-specific origin group. It supports adding IP/domain name and COS origin servers, with the incapability of being referenced by Layer-4 proxy.</li>Leave it blank to retain the original configuration.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Origin server record information. If this field is not specified, the original configuration will be retained.
                     */
                    std::vector<OriginRecord> m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * Origin-pull Host Header. This parameter is valid only when Type = HTTP. No configuration or fill in the blank indicates no origin-pull Host is configured. The rule engine modification of Host Header configuration has a higher priority than the Host Header of the origin server group.
                     */
                    std::string m_hostHeader;
                    bool m_hostHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYORIGINGROUPREQUEST_H_
