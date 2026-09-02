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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYDISTRIBUTIONSTATISTICSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYDISTRIBUTIONSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmIdentifyDistributionStatistics request structure.
                */
                class DescribeDspmIdentifyDistributionStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeDspmIdentifyDistributionStatisticsRequest();
                    ~DescribeDspmIdentifyDistributionStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Statistics type</p><p>Enumeration values:</p><ul><li>FieldTop5Asset: Top 5 identification fields</li><li>FieldCategoryDistribution: Classification distribution of identification fields</li><li>FieldLevelDistribution: Field level distribution of identification fields</li><li>AssetDistribution: Asset distribution of identification</li></ul>
                     * @return StatType <p>Statistics type</p><p>Enumeration values:</p><ul><li>FieldTop5Asset: Top 5 identification fields</li><li>FieldCategoryDistribution: Classification distribution of identification fields</li><li>FieldLevelDistribution: Field level distribution of identification fields</li><li>AssetDistribution: Asset distribution of identification</li></ul>
                     * 
                     */
                    std::string GetStatType() const;

                    /**
                     * 设置<p>Statistics type</p><p>Enumeration values:</p><ul><li>FieldTop5Asset: Top 5 identification fields</li><li>FieldCategoryDistribution: Classification distribution of identification fields</li><li>FieldLevelDistribution: Field level distribution of identification fields</li><li>AssetDistribution: Asset distribution of identification</li></ul>
                     * @param _statType <p>Statistics type</p><p>Enumeration values:</p><ul><li>FieldTop5Asset: Top 5 identification fields</li><li>FieldCategoryDistribution: Classification distribution of identification fields</li><li>FieldLevelDistribution: Field level distribution of identification fields</li><li>AssetDistribution: Asset distribution of identification</li></ul>
                     * 
                     */
                    void SetStatType(const std::string& _statType);

                    /**
                     * 判断参数 StatType 是否已赋值
                     * @return StatType 是否已赋值
                     * 
                     */
                    bool StatTypeHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Asset type</p><p>Enumeration values:</p><ul><li>cdb: TencentDB for MySQL</li><li>mariadb: TencentDB for MariaDB</li></ul>
                     * @return AssetType <p>Asset type</p><p>Enumeration values:</p><ul><li>cdb: TencentDB for MySQL</li><li>mariadb: TencentDB for MariaDB</li></ul>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>Asset type</p><p>Enumeration values:</p><ul><li>cdb: TencentDB for MySQL</li><li>mariadb: TencentDB for MariaDB</li></ul>
                     * @param _assetType <p>Asset type</p><p>Enumeration values:</p><ul><li>cdb: TencentDB for MySQL</li><li>mariadb: TencentDB for MariaDB</li></ul>
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>Recognition template id</p>
                     * @return ComplianceId <p>Recognition template id</p>
                     * 
                     */
                    uint64_t GetComplianceId() const;

                    /**
                     * 设置<p>Recognition template id</p>
                     * @param _complianceId <p>Recognition template id</p>
                     * 
                     */
                    void SetComplianceId(const uint64_t& _complianceId);

                    /**
                     * 判断参数 ComplianceId 是否已赋值
                     * @return ComplianceId 是否已赋值
                     * 
                     */
                    bool ComplianceIdHasBeenSet() const;

                private:

                    /**
                     * <p>Statistics type</p><p>Enumeration values:</p><ul><li>FieldTop5Asset: Top 5 identification fields</li><li>FieldCategoryDistribution: Classification distribution of identification fields</li><li>FieldLevelDistribution: Field level distribution of identification fields</li><li>AssetDistribution: Asset distribution of identification</li></ul>
                     */
                    std::string m_statType;
                    bool m_statTypeHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Asset type</p><p>Enumeration values:</p><ul><li>cdb: TencentDB for MySQL</li><li>mariadb: TencentDB for MariaDB</li></ul>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>Recognition template id</p>
                     */
                    uint64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYDISTRIBUTIONSTATISTICSREQUEST_H_
