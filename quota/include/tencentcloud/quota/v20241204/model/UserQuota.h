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

#ifndef TENCENTCLOUD_QUOTA_V20241204_MODEL_USERQUOTA_H_
#define TENCENTCLOUD_QUOTA_V20241204_MODEL_USERQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/quota/v20241204/model/QuotaDimension.h>


namespace TencentCloud
{
    namespace Quota
    {
        namespace V20241204
        {
            namespace Model
            {
                /**
                * User quota
                */
                class UserQuota : public AbstractModel
                {
                public:
                    UserQuota();
                    ~UserQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取uin
                     * @return MemberUin uin
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置uin
                     * @param _memberUin uin
                     * 
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取Account nickname
                     * @return MemberName Account nickname
                     * 
                     */
                    std::string GetMemberName() const;

                    /**
                     * 设置Account nickname
                     * @param _memberName Account nickname
                     * 
                     */
                    void SetMemberName(const std::string& _memberName);

                    /**
                     * 判断参数 MemberName 是否已赋值
                     * @return MemberName 是否已赋值
                     * 
                     */
                    bool MemberNameHasBeenSet() const;

                    /**
                     * 获取Quota Instance ID
                     * @return QuotaInstanceId Quota Instance ID
                     * 
                     */
                    std::string GetQuotaInstanceId() const;

                    /**
                     * 设置Quota Instance ID
                     * @param _quotaInstanceId Quota Instance ID
                     * 
                     */
                    void SetQuotaInstanceId(const std::string& _quotaInstanceId);

                    /**
                     * 判断参数 QuotaInstanceId 是否已赋值
                     * @return QuotaInstanceId 是否已赋值
                     * 
                     */
                    bool QuotaInstanceIdHasBeenSet() const;

                    /**
                     * 获取Quota ID
                     * @return QuotaId Quota ID
                     * 
                     */
                    int64_t GetQuotaId() const;

                    /**
                     * 设置Quota ID
                     * @param _quotaId Quota ID
                     * 
                     */
                    void SetQuotaId(const int64_t& _quotaId);

                    /**
                     * 判断参数 QuotaId 是否已赋值
                     * @return QuotaId 是否已赋值
                     * 
                     */
                    bool QuotaIdHasBeenSet() const;

                    /**
                     * 获取quota name
                     * @return QuotaName quota name
                     * 
                     */
                    std::string GetQuotaName() const;

                    /**
                     * 设置quota name
                     * @param _quotaName quota name
                     * 
                     */
                    void SetQuotaName(const std::string& _quotaName);

                    /**
                     * 判断参数 QuotaName 是否已赋值
                     * @return QuotaName 是否已赋值
                     * 
                     */
                    bool QuotaNameHasBeenSet() const;

                    /**
                     * 获取Product name
                     * @return ProductName Product name
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Product name
                     * @param _productName Product name
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Quota unit
                     * @return QuotaUnit Quota unit
                     * 
                     */
                    std::string GetQuotaUnit() const;

                    /**
                     * 设置Quota unit
                     * @param _quotaUnit Quota unit
                     * 
                     */
                    void SetQuotaUnit(const std::string& _quotaUnit);

                    /**
                     * 判断参数 QuotaUnit 是否已赋值
                     * @return QuotaUnit 是否已赋值
                     * 
                     */
                    bool QuotaUnitHasBeenSet() const;

                    /**
                     * 获取Quota application method, enumeration value: 1: Can apply, 2: Ticket application, 3: Cannot apply.
                     * @return ApplyType Quota application method, enumeration value: 1: Can apply, 2: Ticket application, 3: Cannot apply.
                     * 
                     */
                    int64_t GetApplyType() const;

                    /**
                     * 设置Quota application method, enumeration value: 1: Can apply, 2: Ticket application, 3: Cannot apply.
                     * @param _applyType Quota application method, enumeration value: 1: Can apply, 2: Ticket application, 3: Cannot apply.
                     * 
                     */
                    void SetApplyType(const int64_t& _applyType);

                    /**
                     * 判断参数 ApplyType 是否已赋值
                     * @return ApplyType 是否已赋值
                     * 
                     */
                    bool ApplyTypeHasBeenSet() const;

                    /**
                     * 获取User Total Quota
                     * @return TotalQuota User Total Quota
                     * 
                     */
                    int64_t GetTotalQuota() const;

                    /**
                     * 设置User Total Quota
                     * @param _totalQuota User Total Quota
                     * 
                     */
                    void SetTotalQuota(const int64_t& _totalQuota);

                    /**
                     * 判断参数 TotalQuota 是否已赋值
                     * @return TotalQuota 是否已赋值
                     * 
                     */
                    bool TotalQuotaHasBeenSet() const;

                    /**
                     * 获取Total usage of user quota
                     * @return TotalUsage Total usage of user quota
                     * 
                     */
                    int64_t GetTotalUsage() const;

                    /**
                     * 设置Total usage of user quota
                     * @param _totalUsage Total usage of user quota
                     * 
                     */
                    void SetTotalUsage(const int64_t& _totalUsage);

                    /**
                     * 判断参数 TotalUsage 是否已赋值
                     * @return TotalUsage 是否已赋值
                     * 
                     */
                    bool TotalUsageHasBeenSet() const;

                    /**
                     * 获取Quota description
                     * @return QuotaDescription Quota description
                     * 
                     */
                    std::string GetQuotaDescription() const;

                    /**
                     * 设置Quota description
                     * @param _quotaDescription Quota description
                     * 
                     */
                    void SetQuotaDescription(const std::string& _quotaDescription);

                    /**
                     * 判断参数 QuotaDescription 是否已赋值
                     * @return QuotaDescription 是否已赋值
                     * 
                     */
                    bool QuotaDescriptionHasBeenSet() const;

                    /**
                     * 获取Quota Dimension Value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QuotaDimensions Quota Dimension Value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<QuotaDimension> GetQuotaDimensions() const;

                    /**
                     * 设置Quota Dimension Value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _quotaDimensions Quota Dimension Value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQuotaDimensions(const std::vector<QuotaDimension>& _quotaDimensions);

                    /**
                     * 判断参数 QuotaDimensions 是否已赋值
                     * @return QuotaDimensions 是否已赋值
                     * 
                     */
                    bool QuotaDimensionsHasBeenSet() const;

                    /**
                     * 获取Status 5 Pending Approval
                     * @return Status Status 5 Pending Approval
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status 5 Pending Approval
                     * @param _status Status 5 Pending Approval
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * uin
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * Account nickname
                     */
                    std::string m_memberName;
                    bool m_memberNameHasBeenSet;

                    /**
                     * Quota Instance ID
                     */
                    std::string m_quotaInstanceId;
                    bool m_quotaInstanceIdHasBeenSet;

                    /**
                     * Quota ID
                     */
                    int64_t m_quotaId;
                    bool m_quotaIdHasBeenSet;

                    /**
                     * quota name
                     */
                    std::string m_quotaName;
                    bool m_quotaNameHasBeenSet;

                    /**
                     * Product name
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Quota unit
                     */
                    std::string m_quotaUnit;
                    bool m_quotaUnitHasBeenSet;

                    /**
                     * Quota application method, enumeration value: 1: Can apply, 2: Ticket application, 3: Cannot apply.
                     */
                    int64_t m_applyType;
                    bool m_applyTypeHasBeenSet;

                    /**
                     * User Total Quota
                     */
                    int64_t m_totalQuota;
                    bool m_totalQuotaHasBeenSet;

                    /**
                     * Total usage of user quota
                     */
                    int64_t m_totalUsage;
                    bool m_totalUsageHasBeenSet;

                    /**
                     * Quota description
                     */
                    std::string m_quotaDescription;
                    bool m_quotaDescriptionHasBeenSet;

                    /**
                     * Quota Dimension Value
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<QuotaDimension> m_quotaDimensions;
                    bool m_quotaDimensionsHasBeenSet;

                    /**
                     * Status 5 Pending Approval
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_QUOTA_V20241204_MODEL_USERQUOTA_H_
