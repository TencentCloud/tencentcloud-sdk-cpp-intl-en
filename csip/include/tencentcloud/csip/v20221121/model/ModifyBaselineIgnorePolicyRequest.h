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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYBASELINEIGNOREPOLICYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYBASELINEIGNOREPOLICYREQUEST_H_

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
                * ModifyBaselineIgnorePolicy request structure.
                */
                class ModifyBaselineIgnorePolicyRequest : public AbstractModel
                {
                public:
                    ModifyBaselineIgnorePolicyRequest();
                    ~ModifyBaselineIgnorePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Detection item ID, identifying which detection item to set an ignore policy for.</p>
                     * @return ItemID <p>Detection item ID, identifying which detection item to set an ignore policy for.</p>
                     * 
                     */
                    uint64_t GetItemID() const;

                    /**
                     * 设置<p>Detection item ID, identifying which detection item to set an ignore policy for.</p>
                     * @param _itemID <p>Detection item ID, identifying which detection item to set an ignore policy for.</p>
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
                     * 获取<p>Ignorable range type.</p><p>Enumeration values:</p><ul><li>ALL: all assets</li><li>PICK: specified asset</li></ul>
                     * @return ScopeType <p>Ignorable range type.</p><p>Enumeration values:</p><ul><li>ALL: all assets</li><li>PICK: specified asset</li></ul>
                     * 
                     */
                    std::string GetScopeType() const;

                    /**
                     * 设置<p>Ignorable range type.</p><p>Enumeration values:</p><ul><li>ALL: all assets</li><li>PICK: specified asset</li></ul>
                     * @param _scopeType <p>Ignorable range type.</p><p>Enumeration values:</p><ul><li>ALL: all assets</li><li>PICK: specified asset</li></ul>
                     * 
                     */
                    void SetScopeType(const std::string& _scopeType);

                    /**
                     * 判断参数 ScopeType 是否已赋值
                     * @return ScopeType 是否已赋值
                     * 
                     */
                    bool ScopeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Remark information.</p>
                     * @return Remark <p>Remark information.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Remark information.</p>
                     * @param _remark <p>Remark information.</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>Ignore policy record ID. Pass 0 when creating, and pass the corresponding record ID when updating.</p>
                     * @return ID <p>Ignore policy record ID. Pass 0 when creating, and pass the corresponding record ID when updating.</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>Ignore policy record ID. Pass 0 when creating, and pass the corresponding record ID when updating.</p>
                     * @param _iD <p>Ignore policy record ID. Pass 0 when creating, and pass the corresponding record ID when updating.</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>Custom asset ID list. This parameter is valid only when PICK is selected. Import instance-id or cluster ID.</p>
                     * @return ScopeIncludeList <p>Custom asset ID list. This parameter is valid only when PICK is selected. Import instance-id or cluster ID.</p>
                     * 
                     */
                    std::vector<std::string> GetScopeIncludeList() const;

                    /**
                     * 设置<p>Custom asset ID list. This parameter is valid only when PICK is selected. Import instance-id or cluster ID.</p>
                     * @param _scopeIncludeList <p>Custom asset ID list. This parameter is valid only when PICK is selected. Import instance-id or cluster ID.</p>
                     * 
                     */
                    void SetScopeIncludeList(const std::vector<std::string>& _scopeIncludeList);

                    /**
                     * 判断参数 ScopeIncludeList 是否已赋值
                     * @return ScopeIncludeList 是否已赋值
                     * 
                     */
                    bool ScopeIncludeListHasBeenSet() const;

                    /**
                     * 获取<p>Remove asset ID list. This parameter is valid only when set to ALL. Input instance-id or cluster ID.</p>
                     * @return ScopeExcludeList <p>Remove asset ID list. This parameter is valid only when set to ALL. Input instance-id or cluster ID.</p>
                     * 
                     */
                    std::vector<std::string> GetScopeExcludeList() const;

                    /**
                     * 设置<p>Remove asset ID list. This parameter is valid only when set to ALL. Input instance-id or cluster ID.</p>
                     * @param _scopeExcludeList <p>Remove asset ID list. This parameter is valid only when set to ALL. Input instance-id or cluster ID.</p>
                     * 
                     */
                    void SetScopeExcludeList(const std::vector<std::string>& _scopeExcludeList);

                    /**
                     * 判断参数 ScopeExcludeList 是否已赋值
                     * @return ScopeExcludeList 是否已赋值
                     * 
                     */
                    bool ScopeExcludeListHasBeenSet() const;

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
                     * <p>Detection item ID, identifying which detection item to set an ignore policy for.</p>
                     */
                    uint64_t m_itemID;
                    bool m_itemIDHasBeenSet;

                    /**
                     * <p>Ignorable range type.</p><p>Enumeration values:</p><ul><li>ALL: all assets</li><li>PICK: specified asset</li></ul>
                     */
                    std::string m_scopeType;
                    bool m_scopeTypeHasBeenSet;

                    /**
                     * <p>Remark information.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Ignore policy record ID. Pass 0 when creating, and pass the corresponding record ID when updating.</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Custom asset ID list. This parameter is valid only when PICK is selected. Import instance-id or cluster ID.</p>
                     */
                    std::vector<std::string> m_scopeIncludeList;
                    bool m_scopeIncludeListHasBeenSet;

                    /**
                     * <p>Remove asset ID list. This parameter is valid only when set to ALL. Input instance-id or cluster ID.</p>
                     */
                    std::vector<std::string> m_scopeExcludeList;
                    bool m_scopeExcludeListHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYBASELINEIGNOREPOLICYREQUEST_H_
