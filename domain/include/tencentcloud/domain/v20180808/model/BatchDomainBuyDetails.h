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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_BATCHDOMAINBUYDETAILS_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_BATCHDOMAINBUYDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * The log details of bulk domain purchase  
                */
                class BatchDomainBuyDetails : public AbstractModel
                {
                public:
                    BatchDomainBuyDetails();
                    ~BatchDomainBuyDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The details ID.
                     * @return Id The details ID.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置The details ID.
                     * @param _id The details ID.
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取The bulk operation type. Valid values: `new` (register domains), `batch_transfer_prohibition_on` (enable transfer prohibition), `batch_transfer_prohibition_off` (disable transfer prohibition), `batch_update_prohibition_on` (enable update prohibition), `batch_update_prohibition_off` (disable update prohibition).
                     * @return Action The bulk operation type. Valid values: `new` (register domains), `batch_transfer_prohibition_on` (enable transfer prohibition), `batch_transfer_prohibition_off` (disable transfer prohibition), `batch_update_prohibition_on` (enable update prohibition), `batch_update_prohibition_off` (disable update prohibition).
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置The bulk operation type. Valid values: `new` (register domains), `batch_transfer_prohibition_on` (enable transfer prohibition), `batch_transfer_prohibition_off` (disable transfer prohibition), `batch_update_prohibition_on` (enable update prohibition), `batch_update_prohibition_off` (disable update prohibition).
                     * @param _action The bulk operation type. Valid values: `new` (register domains), `batch_transfer_prohibition_on` (enable transfer prohibition), `batch_transfer_prohibition_off` (disable transfer prohibition), `batch_update_prohibition_on` (enable update prohibition), `batch_update_prohibition_off` (disable update prohibition).
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取The domains.
                     * @return Domain The domains.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The domains.
                     * @param _domain The domains.
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
                     * 获取The status. Valid values: `SUCCESS`, `FAILURE`
                     * @return Status The status. Valid values: `SUCCESS`, `FAILURE`
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The status. Valid values: `SUCCESS`, `FAILURE`
                     * @param _status The status. Valid values: `SUCCESS`, `FAILURE`
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
                     * 获取The reason for failure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Reason The reason for failure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置The reason for failure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _reason The reason for failure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取The creation time.
                     * @return CreatedOn The creation time.
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置The creation time.
                     * @param _createdOn The creation time.
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
                     * 获取The update time.
                     * @return UpdatedOn The update time.
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置The update time.
                     * @param _updatedOn The update time.
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
                     * 获取Null: The DNS service is not transferred. `false`: The DNS service failed to be transferred. `true`: The DNS service is transferred successfully.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TransferDnsResult Null: The DNS service is not transferred. `false`: The DNS service failed to be transferred. `true`: The DNS service is transferred successfully.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetTransferDnsResult() const;

                    /**
                     * 设置Null: The DNS service is not transferred. `false`: The DNS service failed to be transferred. `true`: The DNS service is transferred successfully.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transferDnsResult Null: The DNS service is not transferred. `false`: The DNS service failed to be transferred. `true`: The DNS service is transferred successfully.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTransferDnsResult(const bool& _transferDnsResult);

                    /**
                     * 判断参数 TransferDnsResult 是否已赋值
                     * @return TransferDnsResult 是否已赋值
                     * 
                     */
                    bool TransferDnsResultHasBeenSet() const;

                    /**
                     * 获取The reason for failure, expressed in Chinese.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReasonZh The reason for failure, expressed in Chinese.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReasonZh() const;

                    /**
                     * 设置The reason for failure, expressed in Chinese.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _reasonZh The reason for failure, expressed in Chinese.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReasonZh(const std::string& _reasonZh);

                    /**
                     * 判断参数 ReasonZh 是否已赋值
                     * @return ReasonZh 是否已赋值
                     * 
                     */
                    bool ReasonZhHasBeenSet() const;

                    /**
                     * 获取The payment status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayStatus The payment status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPayStatus() const;

                    /**
                     * 设置The payment status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _payStatus The payment status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPayStatus(const int64_t& _payStatus);

                    /**
                     * 判断参数 PayStatus 是否已赋值
                     * @return PayStatus 是否已赋值
                     * 
                     */
                    bool PayStatusHasBeenSet() const;

                private:

                    /**
                     * The details ID.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * The bulk operation type. Valid values: `new` (register domains), `batch_transfer_prohibition_on` (enable transfer prohibition), `batch_transfer_prohibition_off` (disable transfer prohibition), `batch_update_prohibition_on` (enable update prohibition), `batch_update_prohibition_off` (disable update prohibition).
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * The domains.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The status. Valid values: `SUCCESS`, `FAILURE`
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The reason for failure.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * The creation time.
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * The update time.
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * Null: The DNS service is not transferred. `false`: The DNS service failed to be transferred. `true`: The DNS service is transferred successfully.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_transferDnsResult;
                    bool m_transferDnsResultHasBeenSet;

                    /**
                     * The reason for failure, expressed in Chinese.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_reasonZh;
                    bool m_reasonZhHasBeenSet;

                    /**
                     * The payment status.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_payStatus;
                    bool m_payStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_BATCHDOMAINBUYDETAILS_H_
