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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEPRIVATEZONERECORDREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEPRIVATEZONERECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * CreatePrivateZoneRecord request structure.
                */
                class CreatePrivateZoneRecordRequest : public AbstractModel
                {
                public:
                    CreatePrivateZoneRecordRequest();
                    ~CreatePrivateZoneRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Private domain ID
                     * @return ZoneId Private domain ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Private domain ID
                     * @param _zoneId Private domain ID
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
                     * 获取Record type. Valid values: "A", "AAAA", "CNAME", "MX", "TXT", "PTR"
                     * @return RecordType Record type. Valid values: "A", "AAAA", "CNAME", "MX", "TXT", "PTR"
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置Record type. Valid values: "A", "AAAA", "CNAME", "MX", "TXT", "PTR"
                     * @param _recordType Record type. Valid values: "A", "AAAA", "CNAME", "MX", "TXT", "PTR"
                     * 
                     */
                    void SetRecordType(const std::string& _recordType);

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     * 
                     */
                    bool RecordTypeHasBeenSet() const;

                    /**
                     * 获取Subdomain, such as "www", "m", and "@"
                     * @return SubDomain Subdomain, such as "www", "m", and "@"
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置Subdomain, such as "www", "m", and "@"
                     * @param _subDomain Subdomain, such as "www", "m", and "@"
                     * 
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     * 
                     */
                    bool SubDomainHasBeenSet() const;

                    /**
                     * 获取Record value, such as IP: 192.168.10.2, CNAME: cname.qcloud.com., and MX: mail.qcloud.com.
                     * @return RecordValue Record value, such as IP: 192.168.10.2, CNAME: cname.qcloud.com., and MX: mail.qcloud.com.
                     * 
                     */
                    std::string GetRecordValue() const;

                    /**
                     * 设置Record value, such as IP: 192.168.10.2, CNAME: cname.qcloud.com., and MX: mail.qcloud.com.
                     * @param _recordValue Record value, such as IP: 192.168.10.2, CNAME: cname.qcloud.com., and MX: mail.qcloud.com.
                     * 
                     */
                    void SetRecordValue(const std::string& _recordValue);

                    /**
                     * 判断参数 RecordValue 是否已赋值
                     * @return RecordValue 是否已赋值
                     * 
                     */
                    bool RecordValueHasBeenSet() const;

                    /**
                     * 获取Record weight. Value range: 1–100
                     * @return Weight Record weight. Value range: 1–100
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Record weight. Value range: 1–100
                     * @param _weight Record weight. Value range: 1–100
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取MX priority, which is required when the record type is MX. Valid values: 5, 10, 15, 20, 30, 40, 50
                     * @return MX MX priority, which is required when the record type is MX. Valid values: 5, 10, 15, 20, 30, 40, 50
                     * 
                     */
                    int64_t GetMX() const;

                    /**
                     * 设置MX priority, which is required when the record type is MX. Valid values: 5, 10, 15, 20, 30, 40, 50
                     * @param _mX MX priority, which is required when the record type is MX. Valid values: 5, 10, 15, 20, 30, 40, 50
                     * 
                     */
                    void SetMX(const int64_t& _mX);

                    /**
                     * 判断参数 MX 是否已赋值
                     * @return MX 是否已赋值
                     * 
                     */
                    bool MXHasBeenSet() const;

                    /**
                     * 获取Record cache time. The smaller the value, the faster the record will take effect. Value range: 1–86400s. Default value: 600
                     * @return TTL Record cache time. The smaller the value, the faster the record will take effect. Value range: 1–86400s. Default value: 600
                     * 
                     */
                    int64_t GetTTL() const;

                    /**
                     * 设置Record cache time. The smaller the value, the faster the record will take effect. Value range: 1–86400s. Default value: 600
                     * @param _tTL Record cache time. The smaller the value, the faster the record will take effect. Value range: 1–86400s. Default value: 600
                     * 
                     */
                    void SetTTL(const int64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     * 
                     */
                    bool TTLHasBeenSet() const;

                private:

                    /**
                     * Private domain ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Record type. Valid values: "A", "AAAA", "CNAME", "MX", "TXT", "PTR"
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * Subdomain, such as "www", "m", and "@"
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * Record value, such as IP: 192.168.10.2, CNAME: cname.qcloud.com., and MX: mail.qcloud.com.
                     */
                    std::string m_recordValue;
                    bool m_recordValueHasBeenSet;

                    /**
                     * Record weight. Value range: 1–100
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * MX priority, which is required when the record type is MX. Valid values: 5, 10, 15, 20, 30, 40, 50
                     */
                    int64_t m_mX;
                    bool m_mXHasBeenSet;

                    /**
                     * Record cache time. The smaller the value, the faster the record will take effect. Value range: 1–86400s. Default value: 600
                     */
                    int64_t m_tTL;
                    bool m_tTLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEPRIVATEZONERECORDREQUEST_H_
