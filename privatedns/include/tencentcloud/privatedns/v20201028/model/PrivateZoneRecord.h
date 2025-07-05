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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_PRIVATEZONERECORD_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_PRIVATEZONERECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Private domain information
                */
                class PrivateZoneRecord : public AbstractModel
                {
                public:
                    PrivateZoneRecord();
                    ~PrivateZoneRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Record ID
                     * @return RecordId Record ID
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置Record ID
                     * @param _recordId Record ID
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取Private domain ID: zone-xxxxxxxx
                     * @return ZoneId Private domain ID: zone-xxxxxxxx
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Private domain ID: zone-xxxxxxxx
                     * @param _zoneId Private domain ID: zone-xxxxxxxx
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
                     * 获取Subdomain
                     * @return SubDomain Subdomain
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置Subdomain
                     * @param _subDomain Subdomain
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
                     * 获取Record value
                     * @return RecordValue Record value
                     * 
                     */
                    std::string GetRecordValue() const;

                    /**
                     * 设置Record value
                     * @param _recordValue Record value
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

                    /**
                     * 获取MX priority, which is required when the record type is MX. Valid values: 5, 10, 15, 20, 30, 40, 50
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MX MX priority, which is required when the record type is MX. Valid values: 5, 10, 15, 20, 30, 40, 50
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMX() const;

                    /**
                     * 设置MX priority, which is required when the record type is MX. Valid values: 5, 10, 15, 20, 30, 40, 50
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _mX MX priority, which is required when the record type is MX. Valid values: 5, 10, 15, 20, 30, 40, 50
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Record status: ENABLED
                     * @return Status Record status: ENABLED
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Record status: ENABLED
                     * @param _status Record status: ENABLED
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Record weight. Value range: 1–100
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Weight Record weight. Value range: 1–100
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Record weight. Value range: 1–100
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _weight Record weight. Value range: 1–100
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Record creation time
                     * @return CreatedOn Record creation time
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置Record creation time
                     * @param _createdOn Record creation time
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取Record update time
                     * @return UpdatedOn Record update time
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置Record update time
                     * @param _updatedOn Record update time
                     * 
                     */
                    void SetUpdatedOn(const std::string& _updatedOn);

                    /**
                     * 判断参数 UpdatedOn 是否已赋值
                     * @return UpdatedOn 是否已赋值
                     * 
                     */
                    bool UpdatedOnHasBeenSet() const;

                    /**
                     * 获取Additional information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Extra Additional information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置Additional information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _extra Additional information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                private:

                    /**
                     * Record ID
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * Private domain ID: zone-xxxxxxxx
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Subdomain
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * Record type. Valid values: "A", "AAAA", "CNAME", "MX", "TXT", "PTR"
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * Record value
                     */
                    std::string m_recordValue;
                    bool m_recordValueHasBeenSet;

                    /**
                     * Record cache time. The smaller the value, the faster the record will take effect. Value range: 1–86400s. Default value: 600
                     */
                    int64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * MX priority, which is required when the record type is MX. Valid values: 5, 10, 15, 20, 30, 40, 50
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_mX;
                    bool m_mXHasBeenSet;

                    /**
                     * Record status: ENABLED
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Record weight. Value range: 1–100
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Record creation time
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * Record update time
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * Additional information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_PRIVATEZONERECORD_H_
