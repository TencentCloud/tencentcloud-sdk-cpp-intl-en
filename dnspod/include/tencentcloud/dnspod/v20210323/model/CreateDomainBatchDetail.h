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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEDOMAINBATCHDETAIL_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEDOMAINBATCHDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/CreateDomainBatchRecord.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * Response structure for bulk adding domains
                */
                class CreateDomainBatchDetail : public AbstractModel
                {
                public:
                    CreateDomainBatchDetail();
                    ~CreateDomainBatchDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取See `RecordInfoBatch`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecordList See `RecordInfoBatch`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CreateDomainBatchRecord> GetRecordList() const;

                    /**
                     * 设置See `RecordInfoBatch`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RecordList See `RecordInfoBatch`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRecordList(const std::vector<CreateDomainBatchRecord>& _recordList);

                    /**
                     * 判断参数 RecordList 是否已赋值
                     * @return RecordList 是否已赋值
                     */
                    bool RecordListHasBeenSet() const;

                    /**
                     * 获取Task ID
                     * @return Id Task ID
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Task ID
                     * @param Id Task ID
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Domain
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Domain Domain
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Domain Domain
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Domain level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DomainGrade Domain level
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDomainGrade() const;

                    /**
                     * 设置Domain level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DomainGrade Domain level
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDomainGrade(const std::string& _domainGrade);

                    /**
                     * 判断参数 DomainGrade 是否已赋值
                     * @return DomainGrade 是否已赋值
                     */
                    bool DomainGradeHasBeenSet() const;

                    /**
                     * 获取Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrMsg Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ErrMsg Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取Task running status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Task running status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task running status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Status Task running status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Operation type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Operation Operation type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Operation type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Operation Operation type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     */
                    bool OperationHasBeenSet() const;

                private:

                    /**
                     * See `RecordInfoBatch`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CreateDomainBatchRecord> m_recordList;
                    bool m_recordListHasBeenSet;

                    /**
                     * Task ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Domain
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Domain level
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domainGrade;
                    bool m_domainGradeHasBeenSet;

                    /**
                     * Error message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * Task running status
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEDOMAINBATCHDETAIL_H_
