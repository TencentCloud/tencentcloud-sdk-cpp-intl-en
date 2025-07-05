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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATERECORDREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATERECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * CreateRecord request structure.
                */
                class CreateRecordRequest : public AbstractModel
                {
                public:
                    CreateRecordRequest();
                    ~CreateRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain
                     * @return Domain Domain
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain
                     * @param _domain Domain
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Record type, which is obtained through the record type API. The value contains uppercase letters, such as `A`.
                     * @return RecordType Record type, which is obtained through the record type API. The value contains uppercase letters, such as `A`.
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置Record type, which is obtained through the record type API. The value contains uppercase letters, such as `A`.
                     * @param _recordType Record type, which is obtained through the record type API. The value contains uppercase letters, such as `A`.
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
                     * 获取Record split zone, which is obtained through the record split zone API.
                     * @return RecordLine Record split zone, which is obtained through the record split zone API.
                     * 
                     */
                    std::string GetRecordLine() const;

                    /**
                     * 设置Record split zone, which is obtained through the record split zone API.
                     * @param _recordLine Record split zone, which is obtained through the record split zone API.
                     * 
                     */
                    void SetRecordLine(const std::string& _recordLine);

                    /**
                     * 判断参数 RecordLine 是否已赋值
                     * @return RecordLine 是否已赋值
                     * 
                     */
                    bool RecordLineHasBeenSet() const;

                    /**
                     * 获取Record value, such as `IP : 200.200.200.200`, `CNAME : cname.dnspod.com`, and `MX : mail.dnspod.com`.
                     * @return Value Record value, such as `IP : 200.200.200.200`, `CNAME : cname.dnspod.com`, and `MX : mail.dnspod.com`.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Record value, such as `IP : 200.200.200.200`, `CNAME : cname.dnspod.com`, and `MX : mail.dnspod.com`.
                     * @param _value Record value, such as `IP : 200.200.200.200`, `CNAME : cname.dnspod.com`, and `MX : mail.dnspod.com`.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Domain ID. The `DomainId` parameter has a higher priority than `Domain`. If `DomainId` is passed in, `Domain` will be ignored.
                     * @return DomainId Domain ID. The `DomainId` parameter has a higher priority than `Domain`. If `DomainId` is passed in, `Domain` will be ignored.
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置Domain ID. The `DomainId` parameter has a higher priority than `Domain`. If `DomainId` is passed in, `Domain` will be ignored.
                     * @param _domainId Domain ID. The `DomainId` parameter has a higher priority than `Domain`. If `DomainId` is passed in, `Domain` will be ignored.
                     * 
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取Host record such as `www`. If it is not passed in, it will be `@` by default.
                     * @return SubDomain Host record such as `www`. If it is not passed in, it will be `@` by default.
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置Host record such as `www`. If it is not passed in, it will be `@` by default.
                     * @param _subDomain Host record such as `www`. If it is not passed in, it will be `@` by default.
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
                     * 获取Split zone ID, which is obtained through the record split zone API. The value is a string such as `10=1`. The `RecordLineId` parameter has a higher priority than `RecordLine`. If both of them are passed in, `RecordLineId` will be used first.
                     * @return RecordLineId Split zone ID, which is obtained through the record split zone API. The value is a string such as `10=1`. The `RecordLineId` parameter has a higher priority than `RecordLine`. If both of them are passed in, `RecordLineId` will be used first.
                     * 
                     */
                    std::string GetRecordLineId() const;

                    /**
                     * 设置Split zone ID, which is obtained through the record split zone API. The value is a string such as `10=1`. The `RecordLineId` parameter has a higher priority than `RecordLine`. If both of them are passed in, `RecordLineId` will be used first.
                     * @param _recordLineId Split zone ID, which is obtained through the record split zone API. The value is a string such as `10=1`. The `RecordLineId` parameter has a higher priority than `RecordLine`. If both of them are passed in, `RecordLineId` will be used first.
                     * 
                     */
                    void SetRecordLineId(const std::string& _recordLineId);

                    /**
                     * 判断参数 RecordLineId 是否已赋值
                     * @return RecordLineId 是否已赋值
                     * 
                     */
                    bool RecordLineIdHasBeenSet() const;

                    /**
                     * 获取MX priority, which is required for an MX record and will take effect if the record type is MX. Value range: 1–20.
                     * @return MX MX priority, which is required for an MX record and will take effect if the record type is MX. Value range: 1–20.
                     * 
                     */
                    uint64_t GetMX() const;

                    /**
                     * 设置MX priority, which is required for an MX record and will take effect if the record type is MX. Value range: 1–20.
                     * @param _mX MX priority, which is required for an MX record and will take effect if the record type is MX. Value range: 1–20.
                     * 
                     */
                    void SetMX(const uint64_t& _mX);

                    /**
                     * 判断参数 MX 是否已赋值
                     * @return MX 是否已赋值
                     * 
                     */
                    bool MXHasBeenSet() const;

                    /**
                     * 获取TTL. Value range: 1–604800. The minimum value varies by domain level.
                     * @return TTL TTL. Value range: 1–604800. The minimum value varies by domain level.
                     * 
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置TTL. Value range: 1–604800. The minimum value varies by domain level.
                     * @param _tTL TTL. Value range: 1–604800. The minimum value varies by domain level.
                     * 
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     * 
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取Weight information, which is an integer between 0 and 100. It is supported only for enterprise VIP domains. `0` indicates not to pass in this parameter, i.e., not to set the weight.
                     * @return Weight Weight information, which is an integer between 0 and 100. It is supported only for enterprise VIP domains. `0` indicates not to pass in this parameter, i.e., not to set the weight.
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置Weight information, which is an integer between 0 and 100. It is supported only for enterprise VIP domains. `0` indicates not to pass in this parameter, i.e., not to set the weight.
                     * @param _weight Weight information, which is an integer between 0 and 100. It is supported only for enterprise VIP domains. `0` indicates not to pass in this parameter, i.e., not to set the weight.
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Initial status of the record. Valid values: ENABLE, DISABLE. Default value: ENABLE. If `DISABLE` is passed in, the DNS record won't take effect, and the limit on round-robin DNS won't be verified.
                     * @return Status Initial status of the record. Valid values: ENABLE, DISABLE. Default value: ENABLE. If `DISABLE` is passed in, the DNS record won't take effect, and the limit on round-robin DNS won't be verified.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Initial status of the record. Valid values: ENABLE, DISABLE. Default value: ENABLE. If `DISABLE` is passed in, the DNS record won't take effect, and the limit on round-robin DNS won't be verified.
                     * @param _status Initial status of the record. Valid values: ENABLE, DISABLE. Default value: ENABLE. If `DISABLE` is passed in, the DNS record won't take effect, and the limit on round-robin DNS won't be verified.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Domain
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Record type, which is obtained through the record type API. The value contains uppercase letters, such as `A`.
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * Record split zone, which is obtained through the record split zone API.
                     */
                    std::string m_recordLine;
                    bool m_recordLineHasBeenSet;

                    /**
                     * Record value, such as `IP : 200.200.200.200`, `CNAME : cname.dnspod.com`, and `MX : mail.dnspod.com`.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Domain ID. The `DomainId` parameter has a higher priority than `Domain`. If `DomainId` is passed in, `Domain` will be ignored.
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * Host record such as `www`. If it is not passed in, it will be `@` by default.
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * Split zone ID, which is obtained through the record split zone API. The value is a string such as `10=1`. The `RecordLineId` parameter has a higher priority than `RecordLine`. If both of them are passed in, `RecordLineId` will be used first.
                     */
                    std::string m_recordLineId;
                    bool m_recordLineIdHasBeenSet;

                    /**
                     * MX priority, which is required for an MX record and will take effect if the record type is MX. Value range: 1–20.
                     */
                    uint64_t m_mX;
                    bool m_mXHasBeenSet;

                    /**
                     * TTL. Value range: 1–604800. The minimum value varies by domain level.
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * Weight information, which is an integer between 0 and 100. It is supported only for enterprise VIP domains. `0` indicates not to pass in this parameter, i.e., not to set the weight.
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Initial status of the record. Valid values: ENABLE, DISABLE. Default value: ENABLE. If `DISABLE` is passed in, the DNS record won't take effect, and the limit on round-robin DNS won't be verified.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATERECORDREQUEST_H_
