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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_BATCHRECORDINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_BATCHRECORDINFO_H_

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
                * Record information in the bulk task
                */
                class BatchRecordInfo : public AbstractModel
                {
                public:
                    BatchRecordInfo();
                    ~BatchRecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Record ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecordId Record ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRecordId() const;

                    /**
                     * 设置Record ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _recordId Record ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRecordId(const uint64_t& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取Subdomain (host record).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubDomain Subdomain (host record).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置Subdomain (host record).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subDomain Subdomain (host record).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Record type. For more information, see the `DescribeRecordType` API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecordType Record type. For more information, see the `DescribeRecordType` API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置Record type. For more information, see the `DescribeRecordType` API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _recordType Record type. For more information, see the `DescribeRecordType` API.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Split zone of the DNS record. For more information, see the `DescribeRecordLineList` API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecordLine Split zone of the DNS record. For more information, see the `DescribeRecordLineList` API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRecordLine() const;

                    /**
                     * 设置Split zone of the DNS record. For more information, see the `DescribeRecordLineList` API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _recordLine Split zone of the DNS record. For more information, see the `DescribeRecordLineList` API.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Record value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Value Record value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Record value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _value Record value
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取TTL value of the record
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TTL TTL value of the record
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置TTL value of the record
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tTL TTL value of the record
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Record adding status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Record adding status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Record adding status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Record adding status
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Operation type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Operation Operation type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Operation type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _operation Operation type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrMsg Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errMsg Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取ID of the record in the list
                     * @return Id ID of the record in the list
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置ID of the record in the list
                     * @param _id ID of the record in the list
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Record status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Enabled Record status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetEnabled() const;

                    /**
                     * 设置Record status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enabled Record status
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取MX weight of the record
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MX MX weight of the record
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMX() const;

                    /**
                     * 设置MX weight of the record
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mX MX weight of the record
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The record weight.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Weight The record weight.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置The record weight.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _weight The record weight.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * Record ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * Subdomain (host record).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * Record type. For more information, see the `DescribeRecordType` API.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * Split zone of the DNS record. For more information, see the `DescribeRecordLineList` API.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_recordLine;
                    bool m_recordLineHasBeenSet;

                    /**
                     * Record value
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * TTL value of the record
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * Record adding status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Operation type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * ID of the record in the list
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Record status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * MX weight of the record
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_mX;
                    bool m_mXHasBeenSet;

                    /**
                     * The record weight.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_BATCHRECORDINFO_H_
