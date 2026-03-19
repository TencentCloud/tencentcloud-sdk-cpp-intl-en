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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBER_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/OrgPermission.h>
#include <tencentcloud/organization/v20210331/model/MemberIdentity.h>
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
                * Organization member
                */
                class OrgMember : public AbstractModel
                {
                public:
                    OrgMember();
                    ~OrgMember() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Member UIN.
                     * @return MemberUin Member UIN.
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置Member UIN.
                     * @param _memberUin Member UIN.
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
                     * 获取Member name.
                     * @return Name Member name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Member name.
                     * @param _name Member name.
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
                     * 获取Member type. Invite: invited, Create: created.
                     * @return MemberType Member type. Invite: invited, Create: created.
                     * 
                     */
                    std::string GetMemberType() const;

                    /**
                     * 设置Member type. Invite: invited, Create: created.
                     * @param _memberType Member type. Invite: invited, Create: created.
                     * 
                     */
                    void SetMemberType(const std::string& _memberType);

                    /**
                     * 判断参数 MemberType 是否已赋值
                     * @return MemberType 是否已赋值
                     * 
                     */
                    bool MemberTypeHasBeenSet() const;

                    /**
                     * 获取Relationship policy type.
                     * @return OrgPolicyType Relationship policy type.
                     * 
                     */
                    std::string GetOrgPolicyType() const;

                    /**
                     * 设置Relationship policy type.
                     * @param _orgPolicyType Relationship policy type.
                     * 
                     */
                    void SetOrgPolicyType(const std::string& _orgPolicyType);

                    /**
                     * 判断参数 OrgPolicyType 是否已赋值
                     * @return OrgPolicyType 是否已赋值
                     * 
                     */
                    bool OrgPolicyTypeHasBeenSet() const;

                    /**
                     * 获取Relational policy name.
                     * @return OrgPolicyName Relational policy name.
                     * 
                     */
                    std::string GetOrgPolicyName() const;

                    /**
                     * 设置Relational policy name.
                     * @param _orgPolicyName Relational policy name.
                     * 
                     */
                    void SetOrgPolicyName(const std::string& _orgPolicyName);

                    /**
                     * 判断参数 OrgPolicyName 是否已赋值
                     * @return OrgPolicyName 是否已赋值
                     * 
                     */
                    bool OrgPolicyNameHasBeenSet() const;

                    /**
                     * 获取Relationship policy permission.
                     * @return OrgPermission Relationship policy permission.
                     * 
                     */
                    std::vector<OrgPermission> GetOrgPermission() const;

                    /**
                     * 设置Relationship policy permission.
                     * @param _orgPermission Relationship policy permission.
                     * 
                     */
                    void SetOrgPermission(const std::vector<OrgPermission>& _orgPermission);

                    /**
                     * 判断参数 OrgPermission 是否已赋值
                     * @return OrgPermission 是否已赋值
                     * 
                     */
                    bool OrgPermissionHasBeenSet() const;

                    /**
                     * 获取Node ID.
                     * @return NodeId Node ID.
                     * 
                     */
                    int64_t GetNodeId() const;

                    /**
                     * 设置Node ID.
                     * @param _nodeId Node ID.
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
                     * 获取Node name.
                     * @return NodeName Node name.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node name.
                     * @param _nodeName Node name.
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
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
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update date
                     * @return UpdateTime Update date
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update date
                     * @param _updateTime Update date
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

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
                     * 获取Proxy payer UIN.
                     * @return PayUin Proxy payer UIN.
                     * 
                     */
                    std::string GetPayUin() const;

                    /**
                     * 设置Proxy payer UIN.
                     * @param _payUin Proxy payer UIN.
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
                     * 获取Proxy payer name.
                     * @return PayName Proxy payer name.
                     * 
                     */
                    std::string GetPayName() const;

                    /**
                     * 设置Proxy payer name.
                     * @param _payName Proxy payer name.
                     * 
                     */
                    void SetPayName(const std::string& _payName);

                    /**
                     * 判断参数 PayName 是否已赋值
                     * @return PayName 是否已赋值
                     * 
                     */
                    bool PayNameHasBeenSet() const;

                    /**
                     * 获取Admin identity.
                     * @return OrgIdentity Admin identity.
                     * 
                     */
                    std::vector<MemberIdentity> GetOrgIdentity() const;

                    /**
                     * 设置Admin identity.
                     * @param _orgIdentity Admin identity.
                     * 
                     */
                    void SetOrgIdentity(const std::vector<MemberIdentity>& _orgIdentity);

                    /**
                     * 判断参数 OrgIdentity 是否已赋值
                     * @return OrgIdentity 是否已赋值
                     * 
                     */
                    bool OrgIdentityHasBeenSet() const;

                    /**
                     * 获取Security information binding status  Unbound: Unbound, to be activated: Valid, binding succeeded: Success, binding Failed: Failed.
                     * @return BindStatus Security information binding status  Unbound: Unbound, to be activated: Valid, binding succeeded: Success, binding Failed: Failed.
                     * 
                     */
                    std::string GetBindStatus() const;

                    /**
                     * 设置Security information binding status  Unbound: Unbound, to be activated: Valid, binding succeeded: Success, binding Failed: Failed.
                     * @param _bindStatus Security information binding status  Unbound: Unbound, to be activated: Valid, binding succeeded: Success, binding Failed: Failed.
                     * 
                     */
                    void SetBindStatus(const std::string& _bindStatus);

                    /**
                     * 判断参数 BindStatus 是否已赋值
                     * @return BindStatus 是否已赋值
                     * 
                     */
                    bool BindStatusHasBeenSet() const;

                    /**
                     * 获取Member's permission status. Valid values: Confirmed, UnConfirmed.
                     * @return PermissionStatus Member's permission status. Valid values: Confirmed, UnConfirmed.
                     * 
                     */
                    std::string GetPermissionStatus() const;

                    /**
                     * 设置Member's permission status. Valid values: Confirmed, UnConfirmed.
                     * @param _permissionStatus Member's permission status. Valid values: Confirmed, UnConfirmed.
                     * 
                     */
                    void SetPermissionStatus(const std::string& _permissionStatus);

                    /**
                     * 判断参数 PermissionStatus 是否已赋值
                     * @return PermissionStatus 是否已赋值
                     * 
                     */
                    bool PermissionStatusHasBeenSet() const;

                    /**
                     * 获取Member tag list.
                     * @return Tags Member tag list.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Member tag list.
                     * @param _tags Member tag list.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Tencent cloud nickname.
                     * @return NickName Tencent cloud nickname.
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置Tencent cloud nickname.
                     * @param _nickName Tencent cloud nickname.
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                private:

                    /**
                     * Member UIN.
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * Member name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Member type. Invite: invited, Create: created.
                     */
                    std::string m_memberType;
                    bool m_memberTypeHasBeenSet;

                    /**
                     * Relationship policy type.
                     */
                    std::string m_orgPolicyType;
                    bool m_orgPolicyTypeHasBeenSet;

                    /**
                     * Relational policy name.
                     */
                    std::string m_orgPolicyName;
                    bool m_orgPolicyNameHasBeenSet;

                    /**
                     * Relationship policy permission.
                     */
                    std::vector<OrgPermission> m_orgPermission;
                    bool m_orgPermissionHasBeenSet;

                    /**
                     * Node ID.
                     */
                    int64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Node name.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update date
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Whether to allow a member to exit. Valid values: Allow, Denied.
                     */
                    std::string m_isAllowQuit;
                    bool m_isAllowQuitHasBeenSet;

                    /**
                     * Proxy payer UIN.
                     */
                    std::string m_payUin;
                    bool m_payUinHasBeenSet;

                    /**
                     * Proxy payer name.
                     */
                    std::string m_payName;
                    bool m_payNameHasBeenSet;

                    /**
                     * Admin identity.
                     */
                    std::vector<MemberIdentity> m_orgIdentity;
                    bool m_orgIdentityHasBeenSet;

                    /**
                     * Security information binding status  Unbound: Unbound, to be activated: Valid, binding succeeded: Success, binding Failed: Failed.
                     */
                    std::string m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                    /**
                     * Member's permission status. Valid values: Confirmed, UnConfirmed.
                     */
                    std::string m_permissionStatus;
                    bool m_permissionStatusHasBeenSet;

                    /**
                     * Member tag list.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Tencent cloud nickname.
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBER_H_
