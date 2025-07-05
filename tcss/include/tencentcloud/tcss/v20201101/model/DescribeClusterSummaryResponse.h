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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECLUSTERSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECLUSTERSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeClusterSummary response structure.
                */
                class DescribeClusterSummaryResponse : public AbstractModel
                {
                public:
                    DescribeClusterSummaryResponse();
                    ~DescribeClusterSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of clusters
                     * @return TotalCount Total number of clusters
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Number of clusters at risk
                     * @return RiskClusterCount Number of clusters at risk
                     * 
                     */
                    uint64_t GetRiskClusterCount() const;

                    /**
                     * 判断参数 RiskClusterCount 是否已赋值
                     * @return RiskClusterCount 是否已赋值
                     * 
                     */
                    bool RiskClusterCountHasBeenSet() const;

                    /**
                     * 获取Number of clusters not checked
                     * @return UncheckClusterCount Number of clusters not checked
                     * 
                     */
                    uint64_t GetUncheckClusterCount() const;

                    /**
                     * 判断参数 UncheckClusterCount 是否已赋值
                     * @return UncheckClusterCount 是否已赋值
                     * 
                     */
                    bool UncheckClusterCountHasBeenSet() const;

                    /**
                     * 获取Number of managed clusters
                     * @return ManagedClusterCount Number of managed clusters
                     * 
                     */
                    uint64_t GetManagedClusterCount() const;

                    /**
                     * 判断参数 ManagedClusterCount 是否已赋值
                     * @return ManagedClusterCount 是否已赋值
                     * 
                     */
                    bool ManagedClusterCountHasBeenSet() const;

                    /**
                     * 获取Number of self-deployed clusters
                     * @return IndependentClusterCount Number of self-deployed clusters
                     * 
                     */
                    uint64_t GetIndependentClusterCount() const;

                    /**
                     * 判断参数 IndependentClusterCount 是否已赋值
                     * @return IndependentClusterCount 是否已赋值
                     * 
                     */
                    bool IndependentClusterCountHasBeenSet() const;

                    /**
                     * 获取Number of clusters involving no risks
                     * @return NoRiskClusterCount Number of clusters involving no risks
                     * 
                     */
                    uint64_t GetNoRiskClusterCount() const;

                    /**
                     * 判断参数 NoRiskClusterCount 是否已赋值
                     * @return NoRiskClusterCount 是否已赋值
                     * 
                     */
                    bool NoRiskClusterCountHasBeenSet() const;

                    /**
                     * 获取Number of checked clusters
                     * @return CheckedClusterCount Number of checked clusters
                     * 
                     */
                    uint64_t GetCheckedClusterCount() const;

                    /**
                     * 判断参数 CheckedClusterCount 是否已赋值
                     * @return CheckedClusterCount 是否已赋值
                     * 
                     */
                    bool CheckedClusterCountHasBeenSet() const;

                    /**
                     * 获取Number of clusters automatically checked
                     * @return AutoCheckClusterCount Number of clusters automatically checked
                     * 
                     */
                    uint64_t GetAutoCheckClusterCount() const;

                    /**
                     * 判断参数 AutoCheckClusterCount 是否已赋值
                     * @return AutoCheckClusterCount 是否已赋值
                     * 
                     */
                    bool AutoCheckClusterCountHasBeenSet() const;

                    /**
                     * 获取Number of clusters manually checked
                     * @return ManualCheckClusterCount Number of clusters manually checked
                     * 
                     */
                    uint64_t GetManualCheckClusterCount() const;

                    /**
                     * 判断参数 ManualCheckClusterCount 是否已赋值
                     * @return ManualCheckClusterCount 是否已赋值
                     * 
                     */
                    bool ManualCheckClusterCountHasBeenSet() const;

                    /**
                     * 获取Number of clusters that failed the check
                     * @return FailedClusterCount Number of clusters that failed the check
                     * 
                     */
                    uint64_t GetFailedClusterCount() const;

                    /**
                     * 判断参数 FailedClusterCount 是否已赋值
                     * @return FailedClusterCount 是否已赋值
                     * 
                     */
                    bool FailedClusterCountHasBeenSet() const;

                    /**
                     * 获取Number of clusters not imported
                     * @return NotImportedClusterCount Number of clusters not imported
                     * 
                     */
                    uint64_t GetNotImportedClusterCount() const;

                    /**
                     * 判断参数 NotImportedClusterCount 是否已赋值
                     * @return NotImportedClusterCount 是否已赋值
                     * 
                     */
                    bool NotImportedClusterCountHasBeenSet() const;

                    /**
                     * 获取Number of EKS clusters
                     * @return ServerlessClusterCount Number of EKS clusters
                     * 
                     */
                    uint64_t GetServerlessClusterCount() const;

                    /**
                     * 判断参数 ServerlessClusterCount 是否已赋值
                     * @return ServerlessClusterCount 是否已赋值
                     * 
                     */
                    bool ServerlessClusterCountHasBeenSet() const;

                    /**
                     * 获取
                     * @return TkeClusterCount 
                     * 
                     */
                    uint64_t GetTkeClusterCount() const;

                    /**
                     * 判断参数 TkeClusterCount 是否已赋值
                     * @return TkeClusterCount 是否已赋值
                     * 
                     */
                    bool TkeClusterCountHasBeenSet() const;

                    /**
                     * 获取
                     * @return UserCreateTencentClusterCount 
                     * 
                     */
                    uint64_t GetUserCreateTencentClusterCount() const;

                    /**
                     * 判断参数 UserCreateTencentClusterCount 是否已赋值
                     * @return UserCreateTencentClusterCount 是否已赋值
                     * 
                     */
                    bool UserCreateTencentClusterCountHasBeenSet() const;

                    /**
                     * 获取
                     * @return UserCreateHybridClusterCount 
                     * 
                     */
                    uint64_t GetUserCreateHybridClusterCount() const;

                    /**
                     * 判断参数 UserCreateHybridClusterCount 是否已赋值
                     * @return UserCreateHybridClusterCount 是否已赋值
                     * 
                     */
                    bool UserCreateHybridClusterCountHasBeenSet() const;

                private:

                    /**
                     * Total number of clusters
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Number of clusters at risk
                     */
                    uint64_t m_riskClusterCount;
                    bool m_riskClusterCountHasBeenSet;

                    /**
                     * Number of clusters not checked
                     */
                    uint64_t m_uncheckClusterCount;
                    bool m_uncheckClusterCountHasBeenSet;

                    /**
                     * Number of managed clusters
                     */
                    uint64_t m_managedClusterCount;
                    bool m_managedClusterCountHasBeenSet;

                    /**
                     * Number of self-deployed clusters
                     */
                    uint64_t m_independentClusterCount;
                    bool m_independentClusterCountHasBeenSet;

                    /**
                     * Number of clusters involving no risks
                     */
                    uint64_t m_noRiskClusterCount;
                    bool m_noRiskClusterCountHasBeenSet;

                    /**
                     * Number of checked clusters
                     */
                    uint64_t m_checkedClusterCount;
                    bool m_checkedClusterCountHasBeenSet;

                    /**
                     * Number of clusters automatically checked
                     */
                    uint64_t m_autoCheckClusterCount;
                    bool m_autoCheckClusterCountHasBeenSet;

                    /**
                     * Number of clusters manually checked
                     */
                    uint64_t m_manualCheckClusterCount;
                    bool m_manualCheckClusterCountHasBeenSet;

                    /**
                     * Number of clusters that failed the check
                     */
                    uint64_t m_failedClusterCount;
                    bool m_failedClusterCountHasBeenSet;

                    /**
                     * Number of clusters not imported
                     */
                    uint64_t m_notImportedClusterCount;
                    bool m_notImportedClusterCountHasBeenSet;

                    /**
                     * Number of EKS clusters
                     */
                    uint64_t m_serverlessClusterCount;
                    bool m_serverlessClusterCountHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_tkeClusterCount;
                    bool m_tkeClusterCountHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_userCreateTencentClusterCount;
                    bool m_userCreateTencentClusterCountHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_userCreateHybridClusterCount;
                    bool m_userCreateHybridClusterCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECLUSTERSUMMARYRESPONSE_H_
