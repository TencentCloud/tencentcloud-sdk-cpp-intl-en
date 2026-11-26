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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEORIGINGROUPREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEORIGINGROUPREQUEST_H_

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
                * CreateOriginGroup request structure.
                */
                class CreateOriginGroupRequest : public AbstractModel
                {
                public:
                    CreateOriginGroupRequest();
                    ~CreateOriginGroupRequest() = default;
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
                     * 获取Origin server record information. This parameter is required.
                     * @return Records Origin server record information. This parameter is required.
                     * 
                     */
                    std::vector<OriginRecord> GetRecords() const;

                    /**
                     * 设置Origin server record information. This parameter is required.
                     * @param _records Origin server record information. This parameter is required.
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
                     * 获取Origin group name, which can contain 1 to 200 characters, including a-z, A-Z, 0-9, underscores (_), and hyphens (-).
                     * @return Name Origin group name, which can contain 1 to 200 characters, including a-z, A-Z, 0-9, underscores (_), and hyphens (-).
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Origin group name, which can contain 1 to 200 characters, including a-z, A-Z, 0-9, underscores (_), and hyphens (-).
                     * @param _name Origin group name, which can contain 1 to 200 characters, including a-z, A-Z, 0-9, underscores (_), and hyphens (-).
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
                     * 获取Origin server group type. This parameter is required. Valid values:
<li>GENERAL: general origin group, only supports adding IP/domain origin servers, and can be referenced by DNS, rule engine, Layer 4 proxy, general load balancer, and HTTP-specific load balancer;</li>
<li>HTTP: HTTP-specific origin server group. It supports adding IP/domain name and COS origin server as the origin server. It cannot be referenced by Layer-4 proxy. It can only be referenced by add acceleration domain name, rule engine - modify origin, and HTTP-specific load balancer.</li>
                     * @return Type Origin server group type. This parameter is required. Valid values:
<li>GENERAL: general origin group, only supports adding IP/domain origin servers, and can be referenced by DNS, rule engine, Layer 4 proxy, general load balancer, and HTTP-specific load balancer;</li>
<li>HTTP: HTTP-specific origin server group. It supports adding IP/domain name and COS origin server as the origin server. It cannot be referenced by Layer-4 proxy. It can only be referenced by add acceleration domain name, rule engine - modify origin, and HTTP-specific load balancer.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Origin server group type. This parameter is required. Valid values:
<li>GENERAL: general origin group, only supports adding IP/domain origin servers, and can be referenced by DNS, rule engine, Layer 4 proxy, general load balancer, and HTTP-specific load balancer;</li>
<li>HTTP: HTTP-specific origin server group. It supports adding IP/domain name and COS origin server as the origin server. It cannot be referenced by Layer-4 proxy. It can only be referenced by add acceleration domain name, rule engine - modify origin, and HTTP-specific load balancer.</li>
                     * @param _type Origin server group type. This parameter is required. Valid values:
<li>GENERAL: general origin group, only supports adding IP/domain origin servers, and can be referenced by DNS, rule engine, Layer 4 proxy, general load balancer, and HTTP-specific load balancer;</li>
<li>HTTP: HTTP-specific origin server group. It supports adding IP/domain name and COS origin server as the origin server. It cannot be referenced by Layer-4 proxy. It can only be referenced by add acceleration domain name, rule engine - modify origin, and HTTP-specific load balancer.</li>
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
                     * 获取Origin-pull Host Header. It takes effect only when it is input and Type is HTTP. The rule engine modification of the Host Header configuration has a higher priority than the Host Header of the origin server group.
                     * @return HostHeader Origin-pull Host Header. It takes effect only when it is input and Type is HTTP. The rule engine modification of the Host Header configuration has a higher priority than the Host Header of the origin server group.
                     * 
                     */
                    std::string GetHostHeader() const;

                    /**
                     * 设置Origin-pull Host Header. It takes effect only when it is input and Type is HTTP. The rule engine modification of the Host Header configuration has a higher priority than the Host Header of the origin server group.
                     * @param _hostHeader Origin-pull Host Header. It takes effect only when it is input and Type is HTTP. The rule engine modification of the Host Header configuration has a higher priority than the Host Header of the origin server group.
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
                     * Origin server record information. This parameter is required.
                     */
                    std::vector<OriginRecord> m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * Origin group name, which can contain 1 to 200 characters, including a-z, A-Z, 0-9, underscores (_), and hyphens (-).
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Origin server group type. This parameter is required. Valid values:
<li>GENERAL: general origin group, only supports adding IP/domain origin servers, and can be referenced by DNS, rule engine, Layer 4 proxy, general load balancer, and HTTP-specific load balancer;</li>
<li>HTTP: HTTP-specific origin server group. It supports adding IP/domain name and COS origin server as the origin server. It cannot be referenced by Layer-4 proxy. It can only be referenced by add acceleration domain name, rule engine - modify origin, and HTTP-specific load balancer.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Origin-pull Host Header. It takes effect only when it is input and Type is HTTP. The rule engine modification of the Host Header configuration has a higher priority than the Host Header of the origin server group.
                     */
                    std::string m_hostHeader;
                    bool m_hostHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEORIGINGROUPREQUEST_H_
