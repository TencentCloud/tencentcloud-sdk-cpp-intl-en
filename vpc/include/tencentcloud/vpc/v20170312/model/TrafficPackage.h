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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICPACKAGE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICPACKAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Information of a traffic package
                */
                class TrafficPackage : public AbstractModel
                {
                public:
                    TrafficPackage();
                    ~TrafficPackage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique traffic package ID
                     * @return TrafficPackageId Unique traffic package ID
                     */
                    std::string GetTrafficPackageId() const;

                    /**
                     * 设置Unique traffic package ID
                     * @param TrafficPackageId Unique traffic package ID
                     */
                    void SetTrafficPackageId(const std::string& _trafficPackageId);

                    /**
                     * 判断参数 TrafficPackageId 是否已赋值
                     * @return TrafficPackageId 是否已赋值
                     */
                    bool TrafficPackageIdHasBeenSet() const;

                    /**
                     * 获取Traffic package name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TrafficPackageName Traffic package name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTrafficPackageName() const;

                    /**
                     * 设置Traffic package name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TrafficPackageName Traffic package name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTrafficPackageName(const std::string& _trafficPackageName);

                    /**
                     * 判断参数 TrafficPackageName 是否已赋值
                     * @return TrafficPackageName 是否已赋值
                     */
                    bool TrafficPackageNameHasBeenSet() const;

                    /**
                     * 获取Traffic package size in GB
                     * @return TotalAmount Traffic package size in GB
                     */
                    double GetTotalAmount() const;

                    /**
                     * 设置Traffic package size in GB
                     * @param TotalAmount Traffic package size in GB
                     */
                    void SetTotalAmount(const double& _totalAmount);

                    /**
                     * 判断参数 TotalAmount 是否已赋值
                     * @return TotalAmount 是否已赋值
                     */
                    bool TotalAmountHasBeenSet() const;

                    /**
                     * 获取Traffic package balance in GB
                     * @return RemainingAmount Traffic package balance in GB
                     */
                    double GetRemainingAmount() const;

                    /**
                     * 设置Traffic package balance in GB
                     * @param RemainingAmount Traffic package balance in GB
                     */
                    void SetRemainingAmount(const double& _remainingAmount);

                    /**
                     * 判断参数 RemainingAmount 是否已赋值
                     * @return RemainingAmount 是否已赋值
                     */
                    bool RemainingAmountHasBeenSet() const;

                    /**
                     * 获取Traffic package status. Valid values: `AVAILABLE`, `EXPIRED`, `EXHAUSTED`, `REFUNDED`, `DELETED`
                     * @return Status Traffic package status. Valid values: `AVAILABLE`, `EXPIRED`, `EXHAUSTED`, `REFUNDED`, `DELETED`
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Traffic package status. Valid values: `AVAILABLE`, `EXPIRED`, `EXHAUSTED`, `REFUNDED`, `DELETED`
                     * @param Status Traffic package status. Valid values: `AVAILABLE`, `EXPIRED`, `EXHAUSTED`, `REFUNDED`, `DELETED`
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Traffic package creation time
                     * @return CreatedTime Traffic package creation time
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Traffic package creation time
                     * @param CreatedTime Traffic package creation time
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Traffic package expiration time
                     * @return Deadline Traffic package expiration time
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置Traffic package expiration time
                     * @param Deadline Traffic package expiration time
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取Used traffic in GB
                     * @return UsedAmount Used traffic in GB
                     */
                    double GetUsedAmount() const;

                    /**
                     * 设置Used traffic in GB
                     * @param UsedAmount Used traffic in GB
                     */
                    void SetUsedAmount(const double& _usedAmount);

                    /**
                     * 判断参数 UsedAmount 是否已赋值
                     * @return UsedAmount 是否已赋值
                     */
                    bool UsedAmountHasBeenSet() const;

                    /**
                     * 获取Traffic package tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TagSet Traffic package tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置Traffic package tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TagSet Traffic package tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取Traffic package type (idle-time or full-time)
                     * @return DeductType Traffic package type (idle-time or full-time)
                     */
                    std::string GetDeductType() const;

                    /**
                     * 设置Traffic package type (idle-time or full-time)
                     * @param DeductType Traffic package type (idle-time or full-time)
                     */
                    void SetDeductType(const std::string& _deductType);

                    /**
                     * 判断参数 DeductType 是否已赋值
                     * @return DeductType 是否已赋值
                     */
                    bool DeductTypeHasBeenSet() const;

                private:

                    /**
                     * Unique traffic package ID
                     */
                    std::string m_trafficPackageId;
                    bool m_trafficPackageIdHasBeenSet;

                    /**
                     * Traffic package name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_trafficPackageName;
                    bool m_trafficPackageNameHasBeenSet;

                    /**
                     * Traffic package size in GB
                     */
                    double m_totalAmount;
                    bool m_totalAmountHasBeenSet;

                    /**
                     * Traffic package balance in GB
                     */
                    double m_remainingAmount;
                    bool m_remainingAmountHasBeenSet;

                    /**
                     * Traffic package status. Valid values: `AVAILABLE`, `EXPIRED`, `EXHAUSTED`, `REFUNDED`, `DELETED`
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Traffic package creation time
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Traffic package expiration time
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * Used traffic in GB
                     */
                    double m_usedAmount;
                    bool m_usedAmountHasBeenSet;

                    /**
                     * Traffic package tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * Traffic package type (idle-time or full-time)
                     */
                    std::string m_deductType;
                    bool m_deductTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICPACKAGE_H_
