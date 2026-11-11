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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LOGINWHITEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LOGINWHITEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LoginWhitePlace.h>
#include <tencentcloud/csip/v20221121/model/EDRRuleTagItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Abnormal login allowlist rule item (shared by custom and self-learning, distinguished by Type)
                */
                class LoginWhiteItem : public AbstractModel
                {
                public:
                    LoginWhiteItem();
                    ~LoginWhiteItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Allowlist type: Custom - custom allowlist; Learn - self-learning allowlist</p>
                     * @return Type <p>Allowlist type: Custom - custom allowlist; Learn - self-learning allowlist</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Allowlist type: Custom - custom allowlist; Learn - self-learning allowlist</p>
                     * @param _type <p>Allowlist type: Custom - custom allowlist; Learn - self-learning allowlist</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>AppId of the account associated with the policy, used to distinguish and locate for subsequent editing in multi-account scenarios</p>
                     * @return AppId <p>AppId of the account associated with the policy, used to distinguish and locate for subsequent editing in multi-account scenarios</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>AppId of the account associated with the policy, used to distinguish and locate for subsequent editing in multi-account scenarios</p>
                     * @param _appId <p>AppId of the account associated with the policy, used to distinguish and locate for subsequent editing in multi-account scenarios</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Rule ID; for self-learning, it is the rule group ID (minimum line ID in the group)</p>
                     * @return Id <p>Rule ID; for self-learning, it is the rule group ID (minimum line ID in the group)</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>Rule ID; for self-learning, it is the rule group ID (minimum line ID in the group)</p>
                     * @param _id <p>Rule ID; for self-learning, it is the rule group ID (minimum line ID in the group)</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Login source IP (comma-separated); self-learning allowlist is always empty</p>
                     * @return SrcIp <p>Login source IP (comma-separated); self-learning allowlist is always empty</p>
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置<p>Login source IP (comma-separated); self-learning allowlist is always empty</p>
                     * @param _srcIp <p>Login source IP (comma-separated); self-learning allowlist is always empty</p>
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取<p>Login usernames (separate with commas); self-learning allowlist is always empty</p>
                     * @return UserName <p>Login usernames (separate with commas); self-learning allowlist is always empty</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>Login usernames (separate with commas); self-learning allowlist is always empty</p>
                     * @param _userName <p>Login usernames (separate with commas); self-learning allowlist is always empty</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>Starting HH:MM when logging in; the self-learning allowlist is always empty</p>
                     * @return StartTime <p>Starting HH:MM when logging in; the self-learning allowlist is always empty</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Starting HH:MM when logging in; the self-learning allowlist is always empty</p>
                     * @param _startTime <p>Starting HH:MM when logging in; the self-learning allowlist is always empty</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Login period ends at HH:MM; self-learning allowlist is always empty</p>
                     * @return EndTime <p>Login period ends at HH:MM; self-learning allowlist is always empty</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>Login period ends at HH:MM; self-learning allowlist is always empty</p>
                     * @param _endTime <p>Login period ends at HH:MM; self-learning allowlist is always empty</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Common login location list</p>
                     * @return Places <p>Common login location list</p>
                     * 
                     */
                    std::vector<LoginWhitePlace> GetPlaces() const;

                    /**
                     * 设置<p>Common login location list</p>
                     * @param _places <p>Common login location list</p>
                     * 
                     */
                    void SetPlaces(const std::vector<LoginWhitePlace>& _places);

                    /**
                     * 判断参数 Places 是否已赋值
                     * @return Places 是否已赋值
                     * 
                     */
                    bool PlacesHasBeenSet() const;

                    /**
                     * 获取<p>Common login location display copy (comma-separated) for direct display in the list</p>
                     * @return Locations <p>Common login location display copy (comma-separated) for direct display in the list</p>
                     * 
                     */
                    std::string GetLocations() const;

                    /**
                     * 设置<p>Common login location display copy (comma-separated) for direct display in the list</p>
                     * @param _locations <p>Common login location display copy (comma-separated) for direct display in the list</p>
                     * 
                     */
                    void SetLocations(const std::string& _locations);

                    /**
                     * 判断参数 Locations 是否已赋值
                     * @return Locations 是否已赋值
                     * 
                     */
                    bool LocationsHasBeenSet() const;

                    /**
                     * 获取<p>Effective asset scope: 0-specified hosts (host or tag hit) 1-all hosts</p>
                     * @return Scope <p>Effective asset scope: 0-specified hosts (host or tag hit) 1-all hosts</p>
                     * 
                     */
                    int64_t GetScope() const;

                    /**
                     * 设置<p>Effective asset scope: 0-specified hosts (host or tag hit) 1-all hosts</p>
                     * @param _scope <p>Effective asset scope: 0-specified hosts (host or tag hit) 1-all hosts</p>
                     * 
                     */
                    void SetScope(const int64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>Effective host QUUID list (one-to-one correspondence with InstanceIDs)</p>
                     * @return QUUIDS <p>Effective host QUUID list (one-to-one correspondence with InstanceIDs)</p>
                     * 
                     */
                    std::vector<std::string> GetQUUIDS() const;

                    /**
                     * 设置<p>Effective host QUUID list (one-to-one correspondence with InstanceIDs)</p>
                     * @param _qUUIDS <p>Effective host QUUID list (one-to-one correspondence with InstanceIDs)</p>
                     * 
                     */
                    void SetQUUIDS(const std::vector<std::string>& _qUUIDS);

                    /**
                     * 判断参数 QUUIDS 是否已赋值
                     * @return QUUIDS 是否已赋值
                     * 
                     */
                    bool QUUIDSHasBeenSet() const;

                    /**
                     * 获取<p>List of host instance IDs that take effect (one-to-one correspondence with QUUIDS)</p>
                     * @return InstanceIDs <p>List of host instance IDs that take effect (one-to-one correspondence with QUUIDS)</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIDs() const;

                    /**
                     * 设置<p>List of host instance IDs that take effect (one-to-one correspondence with QUUIDS)</p>
                     * @param _instanceIDs <p>List of host instance IDs that take effect (one-to-one correspondence with QUUIDS)</p>
                     * 
                     */
                    void SetInstanceIDs(const std::vector<std::string>& _instanceIDs);

                    /**
                     * 判断参数 InstanceIDs 是否已赋值
                     * @return InstanceIDs 是否已赋值
                     * 
                     */
                    bool InstanceIDsHasBeenSet() const;

                    /**
                     * 获取<p>Remove host QUUID list</p>
                     * @return ExcludeQUUIDS <p>Remove host QUUID list</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeQUUIDS() const;

                    /**
                     * 设置<p>Remove host QUUID list</p>
                     * @param _excludeQUUIDS <p>Remove host QUUID list</p>
                     * 
                     */
                    void SetExcludeQUUIDS(const std::vector<std::string>& _excludeQUUIDS);

                    /**
                     * 判断参数 ExcludeQUUIDS 是否已赋值
                     * @return ExcludeQUUIDS 是否已赋值
                     * 
                     */
                    bool ExcludeQUUIDSHasBeenSet() const;

                    /**
                     * 获取<p>Host instance ID list for removal</p>
                     * @return ExcludeInstanceIDs <p>Host instance ID list for removal</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeInstanceIDs() const;

                    /**
                     * 设置<p>Host instance ID list for removal</p>
                     * @param _excludeInstanceIDs <p>Host instance ID list for removal</p>
                     * 
                     */
                    void SetExcludeInstanceIDs(const std::vector<std::string>& _excludeInstanceIDs);

                    /**
                     * 判断参数 ExcludeInstanceIDs 是否已赋值
                     * @return ExcludeInstanceIDs 是否已赋值
                     * 
                     */
                    bool ExcludeInstanceIDsHasBeenSet() const;

                    /**
                     * 获取<p>List of effective tag details.</p>
                     * @return TagItems <p>List of effective tag details.</p>
                     * 
                     */
                    std::vector<EDRRuleTagItem> GetTagItems() const;

                    /**
                     * 设置<p>List of effective tag details.</p>
                     * @param _tagItems <p>List of effective tag details.</p>
                     * 
                     */
                    void SetTagItems(const std::vector<EDRRuleTagItem>& _tagItems);

                    /**
                     * 判断参数 TagItems 是否已赋值
                     * @return TagItems 是否已赋值
                     * 
                     */
                    bool TagItemsHasBeenSet() const;

                    /**
                     * 获取<p>Hosts: custom to the specified number of hosts (0 when Scope=1, all hosts displayed on the front-end); self-learning is the number of deduplicated hosts in the group</p>
                     * @return HostCount <p>Hosts: custom to the specified number of hosts (0 when Scope=1, all hosts displayed on the front-end); self-learning is the number of deduplicated hosts in the group</p>
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 设置<p>Hosts: custom to the specified number of hosts (0 when Scope=1, all hosts displayed on the front-end); self-learning is the number of deduplicated hosts in the group</p>
                     * @param _hostCount <p>Hosts: custom to the specified number of hosts (0 when Scope=1, all hosts displayed on the front-end); self-learning is the number of deduplicated hosts in the group</p>
                     * 
                     */
                    void SetHostCount(const int64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取<p>Remarks.</p>
                     * @return Remark <p>Remarks.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Remarks.</p>
                     * @param _remark <p>Remarks.</p>
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
                     * 获取<p>Creation time, format 2006-01-02 15:04:05</p>
                     * @return CreateTime <p>Creation time, format 2006-01-02 15:04:05</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time, format 2006-01-02 15:04:05</p>
                     * @param _createTime <p>Creation time, format 2006-01-02 15:04:05</p>
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
                     * 获取<p>Last modification time, format 2006-01-02 15:04:05</p>
                     * @return ModifyTime <p>Last modification time, format 2006-01-02 15:04:05</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>Last modification time, format 2006-01-02 15:04:05</p>
                     * @param _modifyTime <p>Last modification time, format 2006-01-02 15:04:05</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Allowlist type: Custom - custom allowlist; Learn - self-learning allowlist</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>AppId of the account associated with the policy, used to distinguish and locate for subsequent editing in multi-account scenarios</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Rule ID; for self-learning, it is the rule group ID (minimum line ID in the group)</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Login source IP (comma-separated); self-learning allowlist is always empty</p>
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * <p>Login usernames (separate with commas); self-learning allowlist is always empty</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>Starting HH:MM when logging in; the self-learning allowlist is always empty</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Login period ends at HH:MM; self-learning allowlist is always empty</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Common login location list</p>
                     */
                    std::vector<LoginWhitePlace> m_places;
                    bool m_placesHasBeenSet;

                    /**
                     * <p>Common login location display copy (comma-separated) for direct display in the list</p>
                     */
                    std::string m_locations;
                    bool m_locationsHasBeenSet;

                    /**
                     * <p>Effective asset scope: 0-specified hosts (host or tag hit) 1-all hosts</p>
                     */
                    int64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>Effective host QUUID list (one-to-one correspondence with InstanceIDs)</p>
                     */
                    std::vector<std::string> m_qUUIDS;
                    bool m_qUUIDSHasBeenSet;

                    /**
                     * <p>List of host instance IDs that take effect (one-to-one correspondence with QUUIDS)</p>
                     */
                    std::vector<std::string> m_instanceIDs;
                    bool m_instanceIDsHasBeenSet;

                    /**
                     * <p>Remove host QUUID list</p>
                     */
                    std::vector<std::string> m_excludeQUUIDS;
                    bool m_excludeQUUIDSHasBeenSet;

                    /**
                     * <p>Host instance ID list for removal</p>
                     */
                    std::vector<std::string> m_excludeInstanceIDs;
                    bool m_excludeInstanceIDsHasBeenSet;

                    /**
                     * <p>List of effective tag details.</p>
                     */
                    std::vector<EDRRuleTagItem> m_tagItems;
                    bool m_tagItemsHasBeenSet;

                    /**
                     * <p>Hosts: custom to the specified number of hosts (0 when Scope=1, all hosts displayed on the front-end); self-learning is the number of deduplicated hosts in the group</p>
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * <p>Remarks.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Creation time, format 2006-01-02 15:04:05</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Last modification time, format 2006-01-02 15:04:05</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LOGINWHITEITEM_H_
