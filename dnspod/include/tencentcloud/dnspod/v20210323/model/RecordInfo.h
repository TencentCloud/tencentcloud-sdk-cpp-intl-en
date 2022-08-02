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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_RECORDINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_RECORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Record information
                */
                class RecordInfo : public AbstractModel
                {
                public:
                    RecordInfo();
                    ~RecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Record ID.
                     * @return Id Record ID.
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Record ID.
                     * @param Id Record ID.
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Subdomain (host record).
                     * @return SubDomain Subdomain (host record).
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置Subdomain (host record).
                     * @param SubDomain Subdomain (host record).
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     */
                    bool SubDomainHasBeenSet() const;

                    /**
                     * 获取Record type. For more information, see the `DescribeRecordType` API.
                     * @return RecordType Record type. For more information, see the `DescribeRecordType` API.
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置Record type. For more information, see the `DescribeRecordType` API.
                     * @param RecordType Record type. For more information, see the `DescribeRecordType` API.
                     */
                    void SetRecordType(const std::string& _recordType);

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     */
                    bool RecordTypeHasBeenSet() const;

                    /**
                     * 获取Split zone of the DNS record. For more information, see the `DescribeRecordLineList` API.
                     * @return RecordLine Split zone of the DNS record. For more information, see the `DescribeRecordLineList` API.
                     */
                    std::string GetRecordLine() const;

                    /**
                     * 设置Split zone of the DNS record. For more information, see the `DescribeRecordLineList` API.
                     * @param RecordLine Split zone of the DNS record. For more information, see the `DescribeRecordLineList` API.
                     */
                    void SetRecordLine(const std::string& _recordLine);

                    /**
                     * 判断参数 RecordLine 是否已赋值
                     * @return RecordLine 是否已赋值
                     */
                    bool RecordLineHasBeenSet() const;

                    /**
                     * 获取Split zone ID of the DNS record. For more information, see the `DescribeRecordLineList` API.
                     * @return RecordLineId Split zone ID of the DNS record. For more information, see the `DescribeRecordLineList` API.
                     */
                    std::string GetRecordLineId() const;

                    /**
                     * 设置Split zone ID of the DNS record. For more information, see the `DescribeRecordLineList` API.
                     * @param RecordLineId Split zone ID of the DNS record. For more information, see the `DescribeRecordLineList` API.
                     */
                    void SetRecordLineId(const std::string& _recordLineId);

                    /**
                     * 判断参数 RecordLineId 是否已赋值
                     * @return RecordLineId 是否已赋值
                     */
                    bool RecordLineIdHasBeenSet() const;

                    /**
                     * 获取Record value.
                     * @return Value Record value.
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Record value.
                     * @param Value Record value.
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Record weight.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Weight Record weight.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置Record weight.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Weight Record weight.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取MX record value. It is 0 by default for non-MX records.
                     * @return MX MX record value. It is 0 by default for non-MX records.
                     */
                    uint64_t GetMX() const;

                    /**
                     * 设置MX record value. It is 0 by default for non-MX records.
                     * @param MX MX record value. It is 0 by default for non-MX records.
                     */
                    void SetMX(const uint64_t& _mX);

                    /**
                     * 判断参数 MX 是否已赋值
                     * @return MX 是否已赋值
                     */
                    bool MXHasBeenSet() const;

                    /**
                     * 获取TTL value of the record.
                     * @return TTL TTL value of the record.
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置TTL value of the record.
                     * @param TTL TTL value of the record.
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取Record status. Valid values: 0 (disabled); 1 (enabled).
                     * @return Enabled Record status. Valid values: 0 (disabled); 1 (enabled).
                     */
                    uint64_t GetEnabled() const;

                    /**
                     * 设置Record status. Valid values: 0 (disabled); 1 (enabled).
                     * @param Enabled Record status. Valid values: 0 (disabled); 1 (enabled).
                     */
                    void SetEnabled(const uint64_t& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取D-Monitor status of the record.
"Ok" : The server is normal.
"Warn" : There is an alarm on this record, and the server returns 4XX.
"Down" : The server is down.
"" : D-Monitor is disabled for this record.
                     * @return MonitorStatus D-Monitor status of the record.
"Ok" : The server is normal.
"Warn" : There is an alarm on this record, and the server returns 4XX.
"Down" : The server is down.
"" : D-Monitor is disabled for this record.
                     */
                    std::string GetMonitorStatus() const;

                    /**
                     * 设置D-Monitor status of the record.
"Ok" : The server is normal.
"Warn" : There is an alarm on this record, and the server returns 4XX.
"Down" : The server is down.
"" : D-Monitor is disabled for this record.
                     * @param MonitorStatus D-Monitor status of the record.
"Ok" : The server is normal.
"Warn" : There is an alarm on this record, and the server returns 4XX.
"Down" : The server is down.
"" : D-Monitor is disabled for this record.
                     */
                    void SetMonitorStatus(const std::string& _monitorStatus);

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     */
                    bool MonitorStatusHasBeenSet() const;

                    /**
                     * 获取Record remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remark Record remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Record remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Remark Record remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Last update time of the record.
                     * @return UpdatedOn Last update time of the record.
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置Last update time of the record.
                     * @param UpdatedOn Last update time of the record.
                     */
                    void SetUpdatedOn(const std::string& _updatedOn);

                    /**
                     * 判断参数 UpdatedOn 是否已赋值
                     * @return UpdatedOn 是否已赋值
                     */
                    bool UpdatedOnHasBeenSet() const;

                    /**
                     * 获取Domain ID.
                     * @return DomainId Domain ID.
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置Domain ID.
                     * @param DomainId Domain ID.
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     */
                    bool DomainIdHasBeenSet() const;

                private:

                    /**
                     * Record ID.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Subdomain (host record).
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * Record type. For more information, see the `DescribeRecordType` API.
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * Split zone of the DNS record. For more information, see the `DescribeRecordLineList` API.
                     */
                    std::string m_recordLine;
                    bool m_recordLineHasBeenSet;

                    /**
                     * Split zone ID of the DNS record. For more information, see the `DescribeRecordLineList` API.
                     */
                    std::string m_recordLineId;
                    bool m_recordLineIdHasBeenSet;

                    /**
                     * Record value.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Record weight.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * MX record value. It is 0 by default for non-MX records.
                     */
                    uint64_t m_mX;
                    bool m_mXHasBeenSet;

                    /**
                     * TTL value of the record.
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * Record status. Valid values: 0 (disabled); 1 (enabled).
                     */
                    uint64_t m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * D-Monitor status of the record.
"Ok" : The server is normal.
"Warn" : There is an alarm on this record, and the server returns 4XX.
"Down" : The server is down.
"" : D-Monitor is disabled for this record.
                     */
                    std::string m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * Record remarks.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Last update time of the record.
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * Domain ID.
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_RECORDINFO_H_
