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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SCANBASELINERISKLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SCANBASELINERISKLISTREQUEST_H_

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
                * ScanBaselineRiskList request structure.
                */
                class ScanBaselineRiskListRequest : public AbstractModel
                {
                public:
                    ScanBaselineRiskListRequest();
                    ~ScanBaselineRiskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Baseline policy type. Valid values:</p><ul><li>SYSTEM: system policy (built-in in CSIP)</li><li>SELF: user-defined policy</li></ul>
                     * @return PolicyType <p>Baseline policy type. Valid values:</p><ul><li>SYSTEM: system policy (built-in in CSIP)</li><li>SELF: user-defined policy</li></ul>
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置<p>Baseline policy type. Valid values:</p><ul><li>SYSTEM: system policy (built-in in CSIP)</li><li>SELF: user-defined policy</li></ul>
                     * @param _policyType <p>Baseline policy type. Valid values:</p><ul><li>SYSTEM: system policy (built-in in CSIP)</li><li>SELF: user-defined policy</li></ul>
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取<p>Target baseline policy ID. It must be greater than 0.</p>
                     * @return PolicyID <p>Target baseline policy ID. It must be greater than 0.</p>
                     * 
                     */
                    uint64_t GetPolicyID() const;

                    /**
                     * 设置<p>Target baseline policy ID. It must be greater than 0.</p>
                     * @param _policyID <p>Target baseline policy ID. It must be greater than 0.</p>
                     * 
                     */
                    void SetPolicyID(const uint64_t& _policyID);

                    /**
                     * 判断参数 PolicyID 是否已赋值
                     * @return PolicyID 是否已赋值
                     * 
                     */
                    bool PolicyIDHasBeenSet() const;

                    /**
                     * 获取<p>Baseline system parent category ID.</p>
                     * @return ParentCategoryID <p>Baseline system parent category ID.</p>
                     * 
                     */
                    uint64_t GetParentCategoryID() const;

                    /**
                     * 设置<p>Baseline system parent category ID.</p>
                     * @param _parentCategoryID <p>Baseline system parent category ID.</p>
                     * 
                     */
                    void SetParentCategoryID(const uint64_t& _parentCategoryID);

                    /**
                     * 判断参数 ParentCategoryID 是否已赋值
                     * @return ParentCategoryID 是否已赋值
                     * 
                     */
                    bool ParentCategoryIDHasBeenSet() const;

                    /**
                     * 获取<p>List of RiskIDs of risk records pending rescan. It cannot be empty and elements cannot be empty strings.</p>
                     * @return RiskIDList <p>List of RiskIDs of risk records pending rescan. It cannot be empty and elements cannot be empty strings.</p>
                     * 
                     */
                    std::vector<std::string> GetRiskIDList() const;

                    /**
                     * 设置<p>List of RiskIDs of risk records pending rescan. It cannot be empty and elements cannot be empty strings.</p>
                     * @param _riskIDList <p>List of RiskIDs of risk records pending rescan. It cannot be empty and elements cannot be empty strings.</p>
                     * 
                     */
                    void SetRiskIDList(const std::vector<std::string>& _riskIDList);

                    /**
                     * 判断参数 RiskIDList 是否已赋值
                     * @return RiskIDList 是否已赋值
                     * 
                     */
                    bool RiskIDListHasBeenSet() const;

                    /**
                     * 获取<p>Check item ID</p>
                     * @return ItemID <p>Check item ID</p>
                     * 
                     */
                    uint64_t GetItemID() const;

                    /**
                     * 设置<p>Check item ID</p>
                     * @param _itemID <p>Check item ID</p>
                     * 
                     */
                    void SetItemID(const uint64_t& _itemID);

                    /**
                     * 判断参数 ItemID 是否已赋值
                     * @return ItemID 是否已赋值
                     * 
                     */
                    bool ItemIDHasBeenSet() const;

                    /**
                     * 获取<p>Baseline subcategory ID.</p>
                     * @return CategoryID <p>Baseline subcategory ID.</p>
                     * 
                     */
                    uint64_t GetCategoryID() const;

                    /**
                     * 设置<p>Baseline subcategory ID.</p>
                     * @param _categoryID <p>Baseline subcategory ID.</p>
                     * 
                     */
                    void SetCategoryID(const uint64_t& _categoryID);

                    /**
                     * 判断参数 CategoryID 是否已赋值
                     * @return CategoryID 是否已赋值
                     * 
                     */
                    bool CategoryIDHasBeenSet() const;

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

                private:

                    /**
                     * <p>Baseline policy type. Valid values:</p><ul><li>SYSTEM: system policy (built-in in CSIP)</li><li>SELF: user-defined policy</li></ul>
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * <p>Target baseline policy ID. It must be greater than 0.</p>
                     */
                    uint64_t m_policyID;
                    bool m_policyIDHasBeenSet;

                    /**
                     * <p>Baseline system parent category ID.</p>
                     */
                    uint64_t m_parentCategoryID;
                    bool m_parentCategoryIDHasBeenSet;

                    /**
                     * <p>List of RiskIDs of risk records pending rescan. It cannot be empty and elements cannot be empty strings.</p>
                     */
                    std::vector<std::string> m_riskIDList;
                    bool m_riskIDListHasBeenSet;

                    /**
                     * <p>Check item ID</p>
                     */
                    uint64_t m_itemID;
                    bool m_itemIDHasBeenSet;

                    /**
                     * <p>Baseline subcategory ID.</p>
                     */
                    uint64_t m_categoryID;
                    bool m_categoryIDHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SCANBASELINERISKLISTREQUEST_H_
