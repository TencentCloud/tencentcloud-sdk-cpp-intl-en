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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDNSRECORDSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDNSRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DnsRecord.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyDnsRecords request structure.
                */
                class ModifyDnsRecordsRequest : public AbstractModel
                {
                public:
                    ModifyDnsRecordsRequest();
                    ~ModifyDnsRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID.
                     * @return ZoneId Site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID.
                     * @param _zoneId Site ID.
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
                     * 获取List of DNS record modification data, with a maximum of 100 modifications at a time.
                     * @return DnsRecords List of DNS record modification data, with a maximum of 100 modifications at a time.
                     * 
                     */
                    std::vector<DnsRecord> GetDnsRecords() const;

                    /**
                     * 设置List of DNS record modification data, with a maximum of 100 modifications at a time.
                     * @param _dnsRecords List of DNS record modification data, with a maximum of 100 modifications at a time.
                     * 
                     */
                    void SetDnsRecords(const std::vector<DnsRecord>& _dnsRecords);

                    /**
                     * 判断参数 DnsRecords 是否已赋值
                     * @return DnsRecords 是否已赋值
                     * 
                     */
                    bool DnsRecordsHasBeenSet() const;

                private:

                    /**
                     * Site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * List of DNS record modification data, with a maximum of 100 modifications at a time.
                     */
                    std::vector<DnsRecord> m_dnsRecords;
                    bool m_dnsRecordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDNSRECORDSREQUEST_H_
