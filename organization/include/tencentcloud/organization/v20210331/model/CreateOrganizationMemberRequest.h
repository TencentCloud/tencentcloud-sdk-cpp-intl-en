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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * CreateOrganizationMember request structure.
                */
                class CreateOrganizationMemberRequest : public AbstractModel
                {
                public:
                    CreateOrganizationMemberRequest();
                    ~CreateOrganizationMemberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Member name, which can contain up to 25 letters, digits, and symbols `+@&._[]-:,`.
                     * @return Name Member name, which can contain up to 25 letters, digits, and symbols `+@&._[]-:,`.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Member name, which can contain up to 25 letters, digits, and symbols `+@&._[]-:,`.
                     * @param _name Member name, which can contain up to 25 letters, digits, and symbols `+@&._[]-:,`.
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
                     * 获取List of member financial permission IDs. `7` indicates paying, which is the default value.
                     * @return PermissionIds List of member financial permission IDs. `7` indicates paying, which is the default value.
                     * 
                     */
                    std::vector<uint64_t> GetPermissionIds() const;

                    /**
                     * 设置List of member financial permission IDs. `7` indicates paying, which is the default value.
                     * @param _permissionIds List of member financial permission IDs. `7` indicates paying, which is the default value.
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
                     * 获取ID of the node of the member's department, which can be obtained through the `DescribeOrganizationNodes` API.
                     * @return NodeId ID of the node of the member's department, which can be obtained through the `DescribeOrganizationNodes` API.
                     * 
                     */
                    int64_t GetNodeId() const;

                    /**
                     * 设置ID of the node of the member's department, which can be obtained through the `DescribeOrganizationNodes` API.
                     * @param _nodeId ID of the node of the member's department, which can be obtained through the `DescribeOrganizationNodes` API.
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
                     * 获取Account name, which can contain up to 25 letters, digits, and symbols `+@&._[]-:,`.
                     * @return AccountName Account name, which can contain up to 25 letters, digits, and symbols `+@&._[]-:,`.
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置Account name, which can contain up to 25 letters, digits, and symbols `+@&._[]-:,`.
                     * @param _accountName Account name, which can contain up to 25 letters, digits, and symbols `+@&._[]-:,`.
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

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
                     * 获取Member creation record ID, which is required during retry upon creation exception.
                     * @return RecordId Member creation record ID, which is required during retry upon creation exception.
                     * 
                     */
                    int64_t GetRecordId() const;

                    /**
                     * 设置Member creation record ID, which is required during retry upon creation exception.
                     * @param _recordId Member creation record ID, which is required during retry upon creation exception.
                     * 
                     */
                    void SetRecordId(const int64_t& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取Payer UIN, which is required during paying for a member.
                     * @return PayUin Payer UIN, which is required during paying for a member.
                     * 
                     */
                    std::string GetPayUin() const;

                    /**
                     * 设置Payer UIN, which is required during paying for a member.
                     * @param _payUin Payer UIN, which is required during paying for a member.
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
                     * 获取List of member access identity IDs, which can be obtained through the `ListOrganizationIdentity` API. `1` indicates supported, which is the default value.
                     * @return IdentityRoleID List of member access identity IDs, which can be obtained through the `ListOrganizationIdentity` API. `1` indicates supported, which is the default value.
                     * 
                     */
                    std::vector<uint64_t> GetIdentityRoleID() const;

                    /**
                     * 设置List of member access identity IDs, which can be obtained through the `ListOrganizationIdentity` API. `1` indicates supported, which is the default value.
                     * @param _identityRoleID List of member access identity IDs, which can be obtained through the `ListOrganizationIdentity` API. `1` indicates supported, which is the default value.
                     * 
                     */
                    void SetIdentityRoleID(const std::vector<uint64_t>& _identityRoleID);

                    /**
                     * 判断参数 IdentityRoleID 是否已赋值
                     * @return IdentityRoleID 是否已赋值
                     * 
                     */
                    bool IdentityRoleIDHasBeenSet() const;

                    /**
                     * 获取Verified entity relationship ID, which is required during creating members for different entities.
                     * @return AuthRelationId Verified entity relationship ID, which is required during creating members for different entities.
                     * 
                     */
                    int64_t GetAuthRelationId() const;

                    /**
                     * 设置Verified entity relationship ID, which is required during creating members for different entities.
                     * @param _authRelationId Verified entity relationship ID, which is required during creating members for different entities.
                     * 
                     */
                    void SetAuthRelationId(const int64_t& _authRelationId);

                    /**
                     * 判断参数 AuthRelationId 是否已赋值
                     * @return AuthRelationId 是否已赋值
                     * 
                     */
                    bool AuthRelationIdHasBeenSet() const;

                private:

                    /**
                     * Member name, which can contain up to 25 letters, digits, and symbols `+@&._[]-:,`.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Relationship policy. Valid value: `Financial`.
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * List of member financial permission IDs. `7` indicates paying, which is the default value.
                     */
                    std::vector<uint64_t> m_permissionIds;
                    bool m_permissionIdsHasBeenSet;

                    /**
                     * ID of the node of the member's department, which can be obtained through the `DescribeOrganizationNodes` API.
                     */
                    int64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Account name, which can contain up to 25 letters, digits, and symbols `+@&._[]-:,`.
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Member creation record ID, which is required during retry upon creation exception.
                     */
                    int64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * Payer UIN, which is required during paying for a member.
                     */
                    std::string m_payUin;
                    bool m_payUinHasBeenSet;

                    /**
                     * List of member access identity IDs, which can be obtained through the `ListOrganizationIdentity` API. `1` indicates supported, which is the default value.
                     */
                    std::vector<uint64_t> m_identityRoleID;
                    bool m_identityRoleIDHasBeenSet;

                    /**
                     * Verified entity relationship ID, which is required during creating members for different entities.
                     */
                    int64_t m_authRelationId;
                    bool m_authRelationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERREQUEST_H_
