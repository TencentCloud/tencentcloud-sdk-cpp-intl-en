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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BATCHMODIFYBASELINEPOLICYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BATCHMODIFYBASELINEPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CycleScanConf.h>
#include <tencentcloud/csip/v20221121/model/BaselinePolicySystemCategoryConf.h>
#include <tencentcloud/csip/v20221121/model/BaselineCustomItemConf.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * BatchModifyBaselinePolicy request structure.
                */
                class BatchModifyBaselinePolicyRequest : public AbstractModel
                {
                public:
                    BatchModifyBaselinePolicyRequest();
                    ~BatchModifyBaselinePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>List of baseline policy IDs that need modification. It cannot be empty and elements cannot be 0.</p>
                     * @return PolicyIDList <p>List of baseline policy IDs that need modification. It cannot be empty and elements cannot be 0.</p>
                     * 
                     */
                    std::vector<uint64_t> GetPolicyIDList() const;

                    /**
                     * 设置<p>List of baseline policy IDs that need modification. It cannot be empty and elements cannot be 0.</p>
                     * @param _policyIDList <p>List of baseline policy IDs that need modification. It cannot be empty and elements cannot be 0.</p>
                     * 
                     */
                    void SetPolicyIDList(const std::vector<uint64_t>& _policyIDList);

                    /**
                     * 判断参数 PolicyIDList 是否已赋值
                     * @return PolicyIDList 是否已赋值
                     * 
                     */
                    bool PolicyIDListHasBeenSet() const;

                    /**
                     * 获取<p>Period scan configuration; can be omitted if not modified. When Enable=1, IntervalType and IntervalValueList must be simultaneously passed in.</p>
                     * @return CycleScanConf <p>Period scan configuration; can be omitted if not modified. When Enable=1, IntervalType and IntervalValueList must be simultaneously passed in.</p>
                     * 
                     */
                    CycleScanConf GetCycleScanConf() const;

                    /**
                     * 设置<p>Period scan configuration; can be omitted if not modified. When Enable=1, IntervalType and IntervalValueList must be simultaneously passed in.</p>
                     * @param _cycleScanConf <p>Period scan configuration; can be omitted if not modified. When Enable=1, IntervalType and IntervalValueList must be simultaneously passed in.</p>
                     * 
                     */
                    void SetCycleScanConf(const CycleScanConf& _cycleScanConf);

                    /**
                     * 判断参数 CycleScanConf 是否已赋值
                     * @return CycleScanConf 是否已赋值
                     * 
                     */
                    bool CycleScanConfHasBeenSet() const;

                    /**
                     * 获取<p>Automatic synchronization switch for newly-added built-in detection items. true: automatically join; false: do not join.</p>
                     * @return AutoSyncItem <p>Automatic synchronization switch for newly-added built-in detection items. true: automatically join; false: do not join.</p>
                     * 
                     */
                    bool GetAutoSyncItem() const;

                    /**
                     * 设置<p>Automatic synchronization switch for newly-added built-in detection items. true: automatically join; false: do not join.</p>
                     * @param _autoSyncItem <p>Automatic synchronization switch for newly-added built-in detection items. true: automatically join; false: do not join.</p>
                     * 
                     */
                    void SetAutoSyncItem(const bool& _autoSyncItem);

                    /**
                     * 判断参数 AutoSyncItem 是否已赋值
                     * @return AutoSyncItem 是否已赋值
                     * 
                     */
                    bool AutoSyncItemHasBeenSet() const;

                    /**
                     * 获取<p>Categorization / subcategory / detection item hit configuration; can be omitted if not modified.</p>
                     * @return CategoryConf <p>Categorization / subcategory / detection item hit configuration; can be omitted if not modified.</p>
                     * 
                     */
                    std::vector<BaselinePolicySystemCategoryConf> GetCategoryConf() const;

                    /**
                     * 设置<p>Categorization / subcategory / detection item hit configuration; can be omitted if not modified.</p>
                     * @param _categoryConf <p>Categorization / subcategory / detection item hit configuration; can be omitted if not modified.</p>
                     * 
                     */
                    void SetCategoryConf(const std::vector<BaselinePolicySystemCategoryConf>& _categoryConf);

                    /**
                     * 判断参数 CategoryConf 是否已赋值
                     * @return CategoryConf 是否已赋值
                     * 
                     */
                    bool CategoryConfHasBeenSet() const;

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
                     * 获取<p>Configuration list of custom detection item values; can be omitted if not modified. In each element, RuleID and CustomItemID cannot both be 0.</p>
                     * @return CustomItemConf <p>Configuration list of custom detection item values; can be omitted if not modified. In each element, RuleID and CustomItemID cannot both be 0.</p>
                     * 
                     */
                    std::vector<BaselineCustomItemConf> GetCustomItemConf() const;

                    /**
                     * 设置<p>Configuration list of custom detection item values; can be omitted if not modified. In each element, RuleID and CustomItemID cannot both be 0.</p>
                     * @param _customItemConf <p>Configuration list of custom detection item values; can be omitted if not modified. In each element, RuleID and CustomItemID cannot both be 0.</p>
                     * 
                     */
                    void SetCustomItemConf(const std::vector<BaselineCustomItemConf>& _customItemConf);

                    /**
                     * 判断参数 CustomItemConf 是否已赋值
                     * @return CustomItemConf 是否已赋值
                     * 
                     */
                    bool CustomItemConfHasBeenSet() const;

                private:

                    /**
                     * <p>List of baseline policy IDs that need modification. It cannot be empty and elements cannot be 0.</p>
                     */
                    std::vector<uint64_t> m_policyIDList;
                    bool m_policyIDListHasBeenSet;

                    /**
                     * <p>Period scan configuration; can be omitted if not modified. When Enable=1, IntervalType and IntervalValueList must be simultaneously passed in.</p>
                     */
                    CycleScanConf m_cycleScanConf;
                    bool m_cycleScanConfHasBeenSet;

                    /**
                     * <p>Automatic synchronization switch for newly-added built-in detection items. true: automatically join; false: do not join.</p>
                     */
                    bool m_autoSyncItem;
                    bool m_autoSyncItemHasBeenSet;

                    /**
                     * <p>Categorization / subcategory / detection item hit configuration; can be omitted if not modified.</p>
                     */
                    std::vector<BaselinePolicySystemCategoryConf> m_categoryConf;
                    bool m_categoryConfHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Configuration list of custom detection item values; can be omitted if not modified. In each element, RuleID and CustomItemID cannot both be 0.</p>
                     */
                    std::vector<BaselineCustomItemConf> m_customItemConf;
                    bool m_customItemConfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BATCHMODIFYBASELINEPOLICYREQUEST_H_
