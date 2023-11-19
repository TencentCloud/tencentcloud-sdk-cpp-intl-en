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
                     * 获取Origin group name. It can contain 1 to 200 characters ([a-z], [A-Z], [0-9] and [_-]).
                     * @return Name Origin group name. It can contain 1 to 200 characters ([a-z], [A-Z], [0-9] and [_-]).
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Origin group name. It can contain 1 to 200 characters ([a-z], [A-Z], [0-9] and [_-]).
                     * @param _name Origin group name. It can contain 1 to 200 characters ([a-z], [A-Z], [0-9] and [_-]).
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
                     * 获取(Required) Origin group type. Values:
<li>`GENERAL`: General origin groups. It supports IPs and domain names. It can be referenced by DNS, Rule Engine, Layer 4 Proxy and General LoadBalancer. </li>
<li>`HTTP`: HTTP-specific origin groups. It supports IPs/domain names and object storage buckets. It can be referenced by acceleration domain names, rule engines and HTTP LoadBalancer. It cannot be referenced by L4 proxies. </li>
                     * @return Type (Required) Origin group type. Values:
<li>`GENERAL`: General origin groups. It supports IPs and domain names. It can be referenced by DNS, Rule Engine, Layer 4 Proxy and General LoadBalancer. </li>
<li>`HTTP`: HTTP-specific origin groups. It supports IPs/domain names and object storage buckets. It can be referenced by acceleration domain names, rule engines and HTTP LoadBalancer. It cannot be referenced by L4 proxies. </li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置(Required) Origin group type. Values:
<li>`GENERAL`: General origin groups. It supports IPs and domain names. It can be referenced by DNS, Rule Engine, Layer 4 Proxy and General LoadBalancer. </li>
<li>`HTTP`: HTTP-specific origin groups. It supports IPs/domain names and object storage buckets. It can be referenced by acceleration domain names, rule engines and HTTP LoadBalancer. It cannot be referenced by L4 proxies. </li>
                     * @param _type (Required) Origin group type. Values:
<li>`GENERAL`: General origin groups. It supports IPs and domain names. It can be referenced by DNS, Rule Engine, Layer 4 Proxy and General LoadBalancer. </li>
<li>`HTTP`: HTTP-specific origin groups. It supports IPs/domain names and object storage buckets. It can be referenced by acceleration domain names, rule engines and HTTP LoadBalancer. It cannot be referenced by L4 proxies. </li>
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
                     * 获取(Required) Origins in the origin group.
                     * @return Records (Required) Origins in the origin group.
                     * 
                     */
                    std::vector<OriginRecord> GetRecords() const;

                    /**
                     * 设置(Required) Origins in the origin group.
                     * @param _records (Required) Origins in the origin group.
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
                     * 获取Host header used for origin-pull. It only works when `Type=HTTP`. The `HostHeader` specified in `RuleEngine` takes a higher priority over this configuration.
                     * @return HostHeader Host header used for origin-pull. It only works when `Type=HTTP`. The `HostHeader` specified in `RuleEngine` takes a higher priority over this configuration.
                     * 
                     */
                    std::string GetHostHeader() const;

                    /**
                     * 设置Host header used for origin-pull. It only works when `Type=HTTP`. The `HostHeader` specified in `RuleEngine` takes a higher priority over this configuration.
                     * @param _hostHeader Host header used for origin-pull. It only works when `Type=HTTP`. The `HostHeader` specified in `RuleEngine` takes a higher priority over this configuration.
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
                     * Site ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Origin group name. It can contain 1 to 200 characters ([a-z], [A-Z], [0-9] and [_-]).
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * (Required) Origin group type. Values:
<li>`GENERAL`: General origin groups. It supports IPs and domain names. It can be referenced by DNS, Rule Engine, Layer 4 Proxy and General LoadBalancer. </li>
<li>`HTTP`: HTTP-specific origin groups. It supports IPs/domain names and object storage buckets. It can be referenced by acceleration domain names, rule engines and HTTP LoadBalancer. It cannot be referenced by L4 proxies. </li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * (Required) Origins in the origin group.
                     */
                    std::vector<OriginRecord> m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * Host header used for origin-pull. It only works when `Type=HTTP`. The `HostHeader` specified in `RuleEngine` takes a higher priority over this configuration.
                     */
                    std::string m_hostHeader;
                    bool m_hostHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEORIGINGROUPREQUEST_H_
