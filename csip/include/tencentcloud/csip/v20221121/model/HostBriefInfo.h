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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTBRIEFINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTBRIEFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AccountBriefInfo.h>
#include <tencentcloud/csip/v20221121/model/MiniTagItem.h>
#include <tencentcloud/csip/v20221121/model/Tag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Host brief information
                */
                class HostBriefInfo : public AbstractModel
                {
                public:
                    HostBriefInfo();
                    ~HostBriefInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cloud host instance ID
Parameter format: such as ins-instance
                     * @return InstanceID Cloud host instance ID
Parameter format: such as ins-instance
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Cloud host instance ID
Parameter format: such as ins-instance
                     * @param _instanceID Cloud host instance ID
Parameter format: such as ins-instance
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Host QUUID (CWP internal unique identifier)
                     * @return QUUID Host QUUID (CWP internal unique identifier)
                     * 
                     */
                    std::string GetQUUID() const;

                    /**
                     * 设置Host QUUID (CWP internal unique identifier)
                     * @param _qUUID Host QUUID (CWP internal unique identifier)
                     * 
                     */
                    void SetQUUID(const std::string& _qUUID);

                    /**
                     * 判断参数 QUUID 是否已赋值
                     * @return QUUID 是否已赋值
                     * 
                     */
                    bool QUUIDHasBeenSet() const;

                    /**
                     * 获取Host UUID
                     * @return UUID Host UUID
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置Host UUID
                     * @param _uUID Host UUID
                     * 
                     */
                    void SetUUID(const std::string& _uUID);

                    /**
                     * 判断参数 UUID 是否已赋值
                     * @return UUID 是否已赋值
                     * 
                     */
                    bool UUIDHasBeenSet() const;

                    /**
                     * 获取Public network IP address
                     * @return PublicIP Public network IP address
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置Public network IP address
                     * @param _publicIP Public network IP address
                     * 
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     * 
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取Private IP address
                     * @return PrivateIP Private IP address
                     * 
                     */
                    std::string GetPrivateIP() const;

                    /**
                     * 设置Private IP address
                     * @param _privateIP Private IP address
                     * 
                     */
                    void SetPrivateIP(const std::string& _privateIP);

                    /**
                     * 判断参数 PrivateIP 是否已赋值
                     * @return PrivateIP 是否已赋值
                     * 
                     */
                    bool PrivateIPHasBeenSet() const;

                    /**
                     * 获取CWP Agent status
Enumeration value:
ONLINE: Online
OFFLINE: Offline
UNINSTALLED: Not installed
                     * @return AgentStatus CWP Agent status
Enumeration value:
ONLINE: Online
OFFLINE: Offline
UNINSTALLED: Not installed
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置CWP Agent status
Enumeration value:
ONLINE: Online
OFFLINE: Offline
UNINSTALLED: Not installed
                     * @param _agentStatus CWP Agent status
Enumeration value:
ONLINE: Online
OFFLINE: Offline
UNINSTALLED: Not installed
                     * 
                     */
                    void SetAgentStatus(const std::string& _agentStatus);

                    /**
                     * 判断参数 AgentStatus 是否已赋值
                     * @return AgentStatus 是否已赋值
                     * 
                     */
                    bool AgentStatusHasBeenSet() const;

                    /**
                     * 获取CVM instance status
Enumeration value:
RUNNING: running.
STOPPED: Stopped
UNKNOWN: unknown
                     * @return InstanceStatus CVM instance status
Enumeration value:
RUNNING: running.
STOPPED: Stopped
UNKNOWN: unknown
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置CVM instance status
Enumeration value:
RUNNING: running.
STOPPED: Stopped
UNKNOWN: unknown
                     * @param _instanceStatus CVM instance status
Enumeration value:
RUNNING: running.
STOPPED: Stopped
UNKNOWN: unknown
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Host name
                     * @return Name Host name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Host name
                     * @param _name Host name
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
                     * 获取Account information belonging to
                     * @return Account Account information belonging to
                     * 
                     */
                    AccountBriefInfo GetAccount() const;

                    /**
                     * 设置Account information belonging to
                     * @param _account Account information belonging to
                     * 
                     */
                    void SetAccount(const AccountBriefInfo& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取Asset tag list (CSIP internal assets)
                     * @return TagItem Asset tag list (CSIP internal assets)
                     * 
                     */
                    std::vector<MiniTagItem> GetTagItem() const;

                    /**
                     * 设置Asset tag list (CSIP internal assets)
                     * @param _tagItem Asset tag list (CSIP internal assets)
                     * 
                     */
                    void SetTagItem(const std::vector<MiniTagItem>& _tagItem);

                    /**
                     * 判断参数 TagItem 是否已赋值
                     * @return TagItem 是否已赋值
                     * 
                     */
                    bool TagItemHasBeenSet() const;

                    /**
                     * 获取Tag list on cloud (Tag on cloud asset)
                     * @return CloudTag Tag list on cloud (Tag on cloud asset)
                     * 
                     */
                    std::vector<Tag> GetCloudTag() const;

                    /**
                     * 设置Tag list on cloud (Tag on cloud asset)
                     * @param _cloudTag Tag list on cloud (Tag on cloud asset)
                     * 
                     */
                    void SetCloudTag(const std::vector<Tag>& _cloudTag);

                    /**
                     * 判断参数 CloudTag 是否已赋值
                     * @return CloudTag 是否已赋值
                     * 
                     */
                    bool CloudTagHasBeenSet() const;

                private:

                    /**
                     * Cloud host instance ID
Parameter format: such as ins-instance
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Host QUUID (CWP internal unique identifier)
                     */
                    std::string m_qUUID;
                    bool m_qUUIDHasBeenSet;

                    /**
                     * Host UUID
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * Public network IP address
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * Private IP address
                     */
                    std::string m_privateIP;
                    bool m_privateIPHasBeenSet;

                    /**
                     * CWP Agent status
Enumeration value:
ONLINE: Online
OFFLINE: Offline
UNINSTALLED: Not installed
                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * CVM instance status
Enumeration value:
RUNNING: running.
STOPPED: Stopped
UNKNOWN: unknown
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Host name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Account information belonging to
                     */
                    AccountBriefInfo m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * Asset tag list (CSIP internal assets)
                     */
                    std::vector<MiniTagItem> m_tagItem;
                    bool m_tagItemHasBeenSet;

                    /**
                     * Tag list on cloud (Tag on cloud asset)
                     */
                    std::vector<Tag> m_cloudTag;
                    bool m_cloudTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTBRIEFINFO_H_
