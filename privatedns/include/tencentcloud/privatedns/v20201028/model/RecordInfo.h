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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_RECORDINFO_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_RECORDINFO_H_

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
                * Private domain information.
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
                     * @return RecordId Record ID.
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置Record ID.
                     * @param _recordId Record ID.
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
                     * 获取Private domain ID, which is in zone-xxxxxxxx format.
                     * @return ZoneId Private domain ID, which is in zone-xxxxxxxx format.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Private domain ID, which is in zone-xxxxxxxx format.
                     * @param _zoneId Private domain ID, which is in zone-xxxxxxxx format.
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
                     * 获取Subdomain name.
                     * @return SubDomain Subdomain name.
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置Subdomain name.
                     * @param _subDomain Subdomain name.
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
                     * 获取Record type. Valid values: A, AAAA, CNAME, MX, TXT, and PTR.
                     * @return RecordType Record type. Valid values: A, AAAA, CNAME, MX, TXT, and PTR.
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置Record type. Valid values: A, AAAA, CNAME, MX, TXT, and PTR.
                     * @param _recordType Record type. Valid values: A, AAAA, CNAME, MX, TXT, and PTR.
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
                     * 获取Record value.
                     * @return RecordValue Record value.
                     * 
                     */
                    std::string GetRecordValue() const;

                    /**
                     * 设置Record value.
                     * @param _recordValue Record value.
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
                     * 获取Record cache time. The smaller the value, the faster the record will take effect. Value range: 1-86,400s. Default value: 600.
                     * @return TTL Record cache time. The smaller the value, the faster the record will take effect. Value range: 1-86,400s. Default value: 600.
                     * 
                     */
                    int64_t GetTTL() const;

                    /**
                     * 设置Record cache time. The smaller the value, the faster the record will take effect. Value range: 1-86,400s. Default value: 600.
                     * @param _tTL Record cache time. The smaller the value, the faster the record will take effect. Value range: 1-86,400s. Default value: 600.
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
                     * 获取MX priority, which is required when the record type is mx. valid values: 5, 10, 15, 20, 30, 40, and 50.
                     * @return MX MX priority, which is required when the record type is mx. valid values: 5, 10, 15, 20, 30, 40, and 50.
                     * 
                     */
                    int64_t GetMX() const;

                    /**
                     * 设置MX priority, which is required when the record type is mx. valid values: 5, 10, 15, 20, 30, 40, and 50.
                     * @param _mX MX priority, which is required when the record type is mx. valid values: 5, 10, 15, 20, 30, 40, and 50.
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
                     * 获取Record weight. valid values: 1–100.
                     * @return Weight Record weight. valid values: 1–100.
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Record weight. valid values: 1–100.
                     * @param _weight Record weight. valid values: 1–100.
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
                     * 获取Record creation time.
                     * @return CreatedOn Record creation time.
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置Record creation time.
                     * @param _createdOn Record creation time.
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
                     * 获取Record update time.
                     * @return UpdatedOn Record update time.
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置Record update time.
                     * @param _updatedOn Record update time.
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
                     * 获取0 suspend 1 enable.
                     * @return Enabled 0 suspend 1 enable.
                     * 
                     */
                    uint64_t GetEnabled() const;

                    /**
                     * 设置0 suspend 1 enable.
                     * @param _enabled 0 suspend 1 enable.
                     * 
                     */
                    void SetEnabled(const uint64_t& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * Record ID.
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * Private domain ID, which is in zone-xxxxxxxx format.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Subdomain name.
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * Record type. Valid values: A, AAAA, CNAME, MX, TXT, and PTR.
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * Record value.
                     */
                    std::string m_recordValue;
                    bool m_recordValueHasBeenSet;

                    /**
                     * Record cache time. The smaller the value, the faster the record will take effect. Value range: 1-86,400s. Default value: 600.
                     */
                    int64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * MX priority, which is required when the record type is mx. valid values: 5, 10, 15, 20, 30, 40, and 50.
                     */
                    int64_t m_mX;
                    bool m_mXHasBeenSet;

                    /**
                     * Record weight. valid values: 1–100.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Record creation time.
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * Record update time.
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * 0 suspend 1 enable.
                     */
                    uint64_t m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_RECORDINFO_H_
