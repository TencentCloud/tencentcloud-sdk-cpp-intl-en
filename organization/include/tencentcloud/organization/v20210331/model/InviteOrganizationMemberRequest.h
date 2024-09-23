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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_INVITEORGANIZATIONMEMBERREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_INVITEORGANIZATIONMEMBERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/AuthRelationFile.h>
#include <tencentcloud/organization/v20210331/model/Tag.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * InviteOrganizationMember request structure.
                */
                class InviteOrganizationMemberRequest : public AbstractModel
                {
                public:
                    InviteOrganizationMemberRequest();
                    ~InviteOrganizationMemberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取UIN of an invited account.
                     * @return MemberUin UIN of an invited account.
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置UIN of an invited account.
                     * @param _memberUin UIN of an invited account.
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
                     * 获取Member name, which contains up to 25 characters, including English letters, digits, and symbols `+@&._[]-:,`.
                     * @return Name Member name, which contains up to 25 characters, including English letters, digits, and symbols `+@&._[]-:,`.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Member name, which contains up to 25 characters, including English letters, digits, and symbols `+@&._[]-:,`.
                     * @param _name Member name, which contains up to 25 characters, including English letters, digits, and symbols `+@&._[]-:,`.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Relationship policy. Valid value: `Financial`.
                     * @return PolicyType Relationship policy. Valid value: `Financial`.
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置Relationship policy. Valid value: `Financial`.
                     * @param _policyType Relationship policy. Valid value: `Financial`.
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
                     * 获取List of member financial permission IDs. Valid values: 1: View bills. 2: View balance. 3: Transfer funds. 4: Consolidate bills. 5: Issue invoice. 6: Inherit discounts. 7: Pay on behalf. 1 and 2 are required by default.
                     * @return PermissionIds List of member financial permission IDs. Valid values: 1: View bills. 2: View balance. 3: Transfer funds. 4: Consolidate bills. 5: Issue invoice. 6: Inherit discounts. 7: Pay on behalf. 1 and 2 are required by default.
                     * 
                     */
                    std::vector<uint64_t> GetPermissionIds() const;

                    /**
                     * 设置List of member financial permission IDs. Valid values: 1: View bills. 2: View balance. 3: Transfer funds. 4: Consolidate bills. 5: Issue invoice. 6: Inherit discounts. 7: Pay on behalf. 1 and 2 are required by default.
                     * @param _permissionIds List of member financial permission IDs. Valid values: 1: View bills. 2: View balance. 3: Transfer funds. 4: Consolidate bills. 5: Issue invoice. 6: Inherit discounts. 7: Pay on behalf. 1 and 2 are required by default.
                     * 
                     */
                    void SetPermissionIds(const std::vector<uint64_t>& _permissionIds);

                    /**
                     * 判断参数 PermissionIds 是否已赋值
                     * @return PermissionIds 是否已赋值
                     * 
                     */
                    bool PermissionIdsHasBeenSet() const;

                    /**
                     * 获取Node ID of the member's department, which can be obtained through [DescribeOrganizationNodes](https://intl.cloud.tencent.com/document/product/850/82926?from_cn_redirect=1).
                     * @return NodeId Node ID of the member's department, which can be obtained through [DescribeOrganizationNodes](https://intl.cloud.tencent.com/document/product/850/82926?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetNodeId() const;

                    /**
                     * 设置Node ID of the member's department, which can be obtained through [DescribeOrganizationNodes](https://intl.cloud.tencent.com/document/product/850/82926?from_cn_redirect=1).
                     * @param _nodeId Node ID of the member's department, which can be obtained through [DescribeOrganizationNodes](https://intl.cloud.tencent.com/document/product/850/82926?from_cn_redirect=1).
                     * 
                     */
                    void SetNodeId(const int64_t& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取Remarks.
                     * @return Remark Remarks.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks.
                     * @param _remark Remarks.
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
                     * 获取Whether to allow a member to exit. Valid values: Allow, Denied.
                     * @return IsAllowQuit Whether to allow a member to exit. Valid values: Allow, Denied.
                     * 
                     */
                    std::string GetIsAllowQuit() const;

                    /**
                     * 设置Whether to allow a member to exit. Valid values: Allow, Denied.
                     * @param _isAllowQuit Whether to allow a member to exit. Valid values: Allow, Denied.
                     * 
                     */
                    void SetIsAllowQuit(const std::string& _isAllowQuit);

                    /**
                     * 判断参数 IsAllowQuit 是否已赋值
                     * @return IsAllowQuit 是否已赋值
                     * 
                     */
                    bool IsAllowQuitHasBeenSet() const;

                    /**
                     * 获取Payer UIN, which is required when pay-on-behalf mode is used.
                     * @return PayUin Payer UIN, which is required when pay-on-behalf mode is used.
                     * 
                     */
                    std::string GetPayUin() const;

                    /**
                     * 设置Payer UIN, which is required when pay-on-behalf mode is used.
                     * @param _payUin Payer UIN, which is required when pay-on-behalf mode is used.
                     * 
                     */
                    void SetPayUin(const std::string& _payUin);

                    /**
                     * 判断参数 PayUin 是否已赋值
                     * @return PayUin 是否已赋值
                     * 
                     */
                    bool PayUinHasBeenSet() const;

                    /**
                     * 获取Name of a mutual trust real-name entity.
                     * @return RelationAuthName Name of a mutual trust real-name entity.
                     * 
                     */
                    std::string GetRelationAuthName() const;

                    /**
                     * 设置Name of a mutual trust real-name entity.
                     * @param _relationAuthName Name of a mutual trust real-name entity.
                     * 
                     */
                    void SetRelationAuthName(const std::string& _relationAuthName);

                    /**
                     * 判断参数 RelationAuthName 是否已赋值
                     * @return RelationAuthName 是否已赋值
                     * 
                     */
                    bool RelationAuthNameHasBeenSet() const;

                    /**
                     * 获取List of proof files of a mutual trust entity.
                     * @return AuthFile List of proof files of a mutual trust entity.
                     * 
                     */
                    std::vector<AuthRelationFile> GetAuthFile() const;

                    /**
                     * 设置List of proof files of a mutual trust entity.
                     * @param _authFile List of proof files of a mutual trust entity.
                     * 
                     */
                    void SetAuthFile(const std::vector<AuthRelationFile>& _authFile);

                    /**
                     * 判断参数 AuthFile 是否已赋值
                     * @return AuthFile 是否已赋值
                     * 
                     */
                    bool AuthFileHasBeenSet() const;

                    /**
                     * 获取Member tag list, with a maximum of 10.
                     * @return Tags Member tag list, with a maximum of 10.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Member tag list, with a maximum of 10.
                     * @param _tags Member tag list, with a maximum of 10.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * UIN of an invited account.
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * Member name, which contains up to 25 characters, including English letters, digits, and symbols `+@&._[]-:,`.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Relationship policy. Valid value: `Financial`.
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * List of member financial permission IDs. Valid values: 1: View bills. 2: View balance. 3: Transfer funds. 4: Consolidate bills. 5: Issue invoice. 6: Inherit discounts. 7: Pay on behalf. 1 and 2 are required by default.
                     */
                    std::vector<uint64_t> m_permissionIds;
                    bool m_permissionIdsHasBeenSet;

                    /**
                     * Node ID of the member's department, which can be obtained through [DescribeOrganizationNodes](https://intl.cloud.tencent.com/document/product/850/82926?from_cn_redirect=1).
                     */
                    int64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Whether to allow a member to exit. Valid values: Allow, Denied.
                     */
                    std::string m_isAllowQuit;
                    bool m_isAllowQuitHasBeenSet;

                    /**
                     * Payer UIN, which is required when pay-on-behalf mode is used.
                     */
                    std::string m_payUin;
                    bool m_payUinHasBeenSet;

                    /**
                     * Name of a mutual trust real-name entity.
                     */
                    std::string m_relationAuthName;
                    bool m_relationAuthNameHasBeenSet;

                    /**
                     * List of proof files of a mutual trust entity.
                     */
                    std::vector<AuthRelationFile> m_authFile;
                    bool m_authFileHasBeenSet;

                    /**
                     * Member tag list, with a maximum of 10.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_INVITEORGANIZATIONMEMBERREQUEST_H_
