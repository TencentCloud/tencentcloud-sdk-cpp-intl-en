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

#ifndef TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_ORGINVITATION_H_
#define TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_ORGINVITATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20181225
        {
            namespace Model
            {
                /**
                * Information on an invitation to an organization.
                */
                class OrgInvitation : public AbstractModel
                {
                public:
                    OrgInvitation();
                    ~OrgInvitation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Invitation ID
                     * @return Id Invitation ID
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Invitation ID
                     * @param Id Invitation ID
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取UIN of the invitee
                     * @return Uin UIN of the invitee
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置UIN of the invitee
                     * @param Uin UIN of the invitee
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Creator UIN
                     * @return HostUin Creator UIN
                     */
                    uint64_t GetHostUin() const;

                    /**
                     * 设置Creator UIN
                     * @param HostUin Creator UIN
                     */
                    void SetHostUin(const uint64_t& _hostUin);

                    /**
                     * 判断参数 HostUin 是否已赋值
                     * @return HostUin 是否已赋值
                     */
                    bool HostUinHasBeenSet() const;

                    /**
                     * 获取Creator's name
                     * @return HostName Creator's name
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Creator's name
                     * @param HostName Creator's name
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Creator's email address
                     * @return HostMail Creator's email address
                     */
                    std::string GetHostMail() const;

                    /**
                     * 设置Creator's email address
                     * @param HostMail Creator's email address
                     */
                    void SetHostMail(const std::string& _hostMail);

                    /**
                     * 判断参数 HostMail 是否已赋值
                     * @return HostMail 是否已赋值
                     */
                    bool HostMailHasBeenSet() const;

                    /**
                     * 获取Invitation status. `-1`: expired; `0`: normal; `1`: accepted; `2`: invalid; `3`: cancelled
                     * @return Status Invitation status. `-1`: expired; `0`: normal; `1`: accepted; `2`: invalid; `3`: cancelled
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Invitation status. `-1`: expired; `0`: normal; `1`: accepted; `2`: invalid; `3`: cancelled
                     * @param Status Invitation status. `-1`: expired; `0`: normal; `1`: accepted; `2`: invalid; `3`: cancelled
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Name
                     * @return Name Name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param Name Name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Notes
                     * @return Remark Notes
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Notes
                     * @param Remark Notes
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Organization type
                     * @return OrgType Organization type
                     */
                    uint64_t GetOrgType() const;

                    /**
                     * 设置Organization type
                     * @param OrgType Organization type
                     */
                    void SetOrgType(const uint64_t& _orgType);

                    /**
                     * 判断参数 OrgType 是否已赋值
                     * @return OrgType 是否已赋值
                     */
                    bool OrgTypeHasBeenSet() const;

                    /**
                     * 获取Time of invitation
                     * @return InviteTime Time of invitation
                     */
                    std::string GetInviteTime() const;

                    /**
                     * 设置Time of invitation
                     * @param InviteTime Time of invitation
                     */
                    void SetInviteTime(const std::string& _inviteTime);

                    /**
                     * 判断参数 InviteTime 是否已赋值
                     * @return InviteTime 是否已赋值
                     */
                    bool InviteTimeHasBeenSet() const;

                    /**
                     * 获取Expiration time
                     * @return ExpireTime Expiration time
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time
                     * @param ExpireTime Expiration time
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * Invitation ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * UIN of the invitee
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Creator UIN
                     */
                    uint64_t m_hostUin;
                    bool m_hostUinHasBeenSet;

                    /**
                     * Creator's name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Creator's email address
                     */
                    std::string m_hostMail;
                    bool m_hostMailHasBeenSet;

                    /**
                     * Invitation status. `-1`: expired; `0`: normal; `1`: accepted; `2`: invalid; `3`: cancelled
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Notes
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Organization type
                     */
                    uint64_t m_orgType;
                    bool m_orgTypeHasBeenSet;

                    /**
                     * Time of invitation
                     */
                    std::string m_inviteTime;
                    bool m_inviteTimeHasBeenSet;

                    /**
                     * Expiration time
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_ORGINVITATION_H_
