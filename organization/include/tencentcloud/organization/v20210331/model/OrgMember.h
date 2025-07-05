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
                     * 获取Member UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MemberUin Member UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置Member UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memberUin Member UIN
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Member name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Member name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Member name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Member name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Member type. Valid values: `Invite` (invited); `Create` (created).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MemberType Member type. Valid values: `Invite` (invited); `Create` (created).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMemberType() const;

                    /**
                     * 设置Member type. Valid values: `Invite` (invited); `Create` (created).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memberType Member type. Valid values: `Invite` (invited); `Create` (created).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Relationship policy type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OrgPolicyType Relationship policy type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOrgPolicyType() const;

                    /**
                     * 设置Relationship policy type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _orgPolicyType Relationship policy type
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Relationship policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OrgPolicyName Relationship policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOrgPolicyName() const;

                    /**
                     * 设置Relationship policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _orgPolicyName Relationship policy name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Relationship policy permission
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OrgPermission Relationship policy permission
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<OrgPermission> GetOrgPermission() const;

                    /**
                     * 设置Relationship policy permission
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _orgPermission Relationship policy permission
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Node ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeId Node ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNodeId() const;

                    /**
                     * 设置Node ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodeId Node ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Node name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeName Node name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodeName Node name
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remark Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remark Remarks
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether the member is allowed to leave. Valid values: `Allow`, `Denied`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsAllowQuit Whether the member is allowed to leave. Valid values: `Allow`, `Denied`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIsAllowQuit() const;

                    /**
                     * 设置Whether the member is allowed to leave. Valid values: `Allow`, `Denied`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isAllowQuit Whether the member is allowed to leave. Valid values: `Allow`, `Denied`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Payer UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayUin Payer UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPayUin() const;

                    /**
                     * 设置Payer UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _payUin Payer UIN
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Payer name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayName Payer name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPayName() const;

                    /**
                     * 设置Payer name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _payName Payer name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Management identity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OrgIdentity Management identity
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MemberIdentity> GetOrgIdentity() const;

                    /**
                     * 设置Management identity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _orgIdentity Management identity
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Security information binding status. Valid values: `Unbound`, `Valid`, `Success`, `Failed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BindStatus Security information binding status. Valid values: `Unbound`, `Valid`, `Success`, `Failed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBindStatus() const;

                    /**
                     * 设置Security information binding status. Valid values: `Unbound`, `Valid`, `Success`, `Failed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bindStatus Security information binding status. Valid values: `Unbound`, `Valid`, `Success`, `Failed`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Member permission status. Valid values: `Confirmed`, `UnConfirmed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PermissionStatus Member permission status. Valid values: `Confirmed`, `UnConfirmed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPermissionStatus() const;

                    /**
                     * 设置Member permission status. Valid values: `Confirmed`, `UnConfirmed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _permissionStatus Member permission status. Valid values: `Confirmed`, `UnConfirmed`.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Member tag list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Member tag list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Member tag list.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Member UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * Member name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Member type. Valid values: `Invite` (invited); `Create` (created).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_memberType;
                    bool m_memberTypeHasBeenSet;

                    /**
                     * Relationship policy type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_orgPolicyType;
                    bool m_orgPolicyTypeHasBeenSet;

                    /**
                     * Relationship policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_orgPolicyName;
                    bool m_orgPolicyNameHasBeenSet;

                    /**
                     * Relationship policy permission
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<OrgPermission> m_orgPermission;
                    bool m_orgPermissionHasBeenSet;

                    /**
                     * Node ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Node name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Whether the member is allowed to leave. Valid values: `Allow`, `Denied`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isAllowQuit;
                    bool m_isAllowQuitHasBeenSet;

                    /**
                     * Payer UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_payUin;
                    bool m_payUinHasBeenSet;

                    /**
                     * Payer name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_payName;
                    bool m_payNameHasBeenSet;

                    /**
                     * Management identity
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MemberIdentity> m_orgIdentity;
                    bool m_orgIdentityHasBeenSet;

                    /**
                     * Security information binding status. Valid values: `Unbound`, `Valid`, `Success`, `Failed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                    /**
                     * Member permission status. Valid values: `Confirmed`, `UnConfirmed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_permissionStatus;
                    bool m_permissionStatusHasBeenSet;

                    /**
                     * Member tag list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGMEMBER_H_
