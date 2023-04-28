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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_ADDRECORDBATCH_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_ADDRECORDBATCH_H_

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
                * Records to be bulk added
                */
                class AddRecordBatch : public AbstractModel
                {
                public:
                    AddRecordBatch();
                    ~AddRecordBatch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Subdomain (host record), which is `@` by default.
                     * @return SubDomain Subdomain (host record), which is `@` by default.
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置Subdomain (host record), which is `@` by default.
                     * @param SubDomain Subdomain (host record), which is `@` by default.
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     */
                    bool SubDomainHasBeenSet() const;

                    /**
                     * 获取Split zone of the DNS record. For more information, see the `DescribeRecordLineList` API. If neither `RecordLine` nor `RecordLineId` is specified, the default split zone will be used.
                     * @return RecordLine Split zone of the DNS record. For more information, see the `DescribeRecordLineList` API. If neither `RecordLine` nor `RecordLineId` is specified, the default split zone will be used.
                     */
                    std::string GetRecordLine() const;

                    /**
                     * 设置Split zone of the DNS record. For more information, see the `DescribeRecordLineList` API. If neither `RecordLine` nor `RecordLineId` is specified, the default split zone will be used.
                     * @param RecordLine Split zone of the DNS record. For more information, see the `DescribeRecordLineList` API. If neither `RecordLine` nor `RecordLineId` is specified, the default split zone will be used.
                     */
                    void SetRecordLine(const std::string& _recordLine);

                    /**
                     * 判断参数 RecordLine 是否已赋值
                     * @return RecordLine 是否已赋值
                     */
                    bool RecordLineHasBeenSet() const;

                    /**
                     * 获取Split zone ID of the DNS record. If both `RecordLine` and `RecordLineId` are specified, `RecordLineId` will be used.
                     * @return RecordLineId Split zone ID of the DNS record. If both `RecordLine` and `RecordLineId` are specified, `RecordLineId` will be used.
                     */
                    std::string GetRecordLineId() const;

                    /**
                     * 设置Split zone ID of the DNS record. If both `RecordLine` and `RecordLineId` are specified, `RecordLineId` will be used.
                     * @param RecordLineId Split zone ID of the DNS record. If both `RecordLine` and `RecordLineId` are specified, `RecordLineId` will be used.
                     */
                    void SetRecordLineId(const std::string& _recordLineId);

                    /**
                     * 判断参数 RecordLineId 是否已赋值
                     * @return RecordLineId 是否已赋值
                     */
                    bool RecordLineIdHasBeenSet() const;

                    /**
                     * 获取The record weight (not supported).
                     * @return Weight The record weight (not supported).
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置The record weight (not supported).
                     * @param Weight The record weight (not supported).
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取MX record value. It is `0` by default for non-MX records and required for MX records.
                     * @return MX MX record value. It is `0` by default for non-MX records and required for MX records.
                     */
                    uint64_t GetMX() const;

                    /**
                     * 设置MX record value. It is `0` by default for non-MX records and required for MX records.
                     * @param MX MX record value. It is `0` by default for non-MX records and required for MX records.
                     */
                    void SetMX(const uint64_t& _mX);

                    /**
                     * 判断参数 MX 是否已赋值
                     * @return MX 是否已赋值
                     */
                    bool MXHasBeenSet() const;

                    /**
                     * 获取TTL value of the record, which is `600` by default.
                     * @return TTL TTL value of the record, which is `600` by default.
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置TTL value of the record, which is `600` by default.
                     * @param TTL TTL value of the record, which is `600` by default.
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取Record status (not supported). Valid values: `0` (disabled); `1` (enabled). Default value: `1`.
                     * @return Enabled Record status (not supported). Valid values: `0` (disabled); `1` (enabled). Default value: `1`.
                     */
                    uint64_t GetEnabled() const;

                    /**
                     * 设置Record status (not supported). Valid values: `0` (disabled); `1` (enabled). Default value: `1`.
                     * @param Enabled Record status (not supported). Valid values: `0` (disabled); `1` (enabled). Default value: `1`.
                     */
                    void SetEnabled(const uint64_t& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Record remarks (not supported).
                     * @return Remark Record remarks (not supported).
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Record remarks (not supported).
                     * @param Remark Record remarks (not supported).
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * Record type. For more information, see the `DescribeRecordType` API.
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * Record value.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Subdomain (host record), which is `@` by default.
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * Split zone of the DNS record. For more information, see the `DescribeRecordLineList` API. If neither `RecordLine` nor `RecordLineId` is specified, the default split zone will be used.
                     */
                    std::string m_recordLine;
                    bool m_recordLineHasBeenSet;

                    /**
                     * Split zone ID of the DNS record. If both `RecordLine` and `RecordLineId` are specified, `RecordLineId` will be used.
                     */
                    std::string m_recordLineId;
                    bool m_recordLineIdHasBeenSet;

                    /**
                     * The record weight (not supported).
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * MX record value. It is `0` by default for non-MX records and required for MX records.
                     */
                    uint64_t m_mX;
                    bool m_mXHasBeenSet;

                    /**
                     * TTL value of the record, which is `600` by default.
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * Record status (not supported). Valid values: `0` (disabled); `1` (enabled). Default value: `1`.
                     */
                    uint64_t m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Record remarks (not supported).
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_ADDRECORDBATCH_H_
