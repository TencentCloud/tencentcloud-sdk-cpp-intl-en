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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEASSOCIATEDHOSTASSET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEASSOCIATEDHOSTASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Asset of the host associated with the mirror
                */
                class ImageAssociatedHostAsset : public AbstractModel
                {
                public:
                    ImageAssociatedHostAsset();
                    ~ImageAssociatedHostAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Host UUID.</p>
                     * @return Uuid <p>Host UUID.</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>Host UUID.</p>
                     * @param _uuid <p>Host UUID.</p>
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取<p>Host quuid</p>
                     * @return QUuid <p>Host quuid</p>
                     * 
                     */
                    std::string GetQUuid() const;

                    /**
                     * 设置<p>Host quuid</p>
                     * @param _qUuid <p>Host quuid</p>
                     * 
                     */
                    void SetQUuid(const std::string& _qUuid);

                    /**
                     * 判断参数 QUuid 是否已赋值
                     * @return QUuid 是否已赋值
                     * 
                     */
                    bool QUuidHasBeenSet() const;

                    /**
                     * 获取<p>host name</p>
                     * @return HostName <p>host name</p>
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置<p>host name</p>
                     * @param _hostName <p>host name</p>
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取<p>Account name associated with the host</p>
                     * @return OwnerAccountName <p>Account name associated with the host</p>
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置<p>Account name associated with the host</p>
                     * @param _ownerAccountName <p>Account name associated with the host</p>
                     * 
                     */
                    void SetOwnerAccountName(const std::string& _ownerAccountName);

                    /**
                     * 判断参数 OwnerAccountName 是否已赋值
                     * @return OwnerAccountName 是否已赋值
                     * 
                     */
                    bool OwnerAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>appid of the account associated with the host</p>
                     * @return OwnerAppId <p>appid of the account associated with the host</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>appid of the account associated with the host</p>
                     * @param _ownerAppId <p>appid of the account associated with the host</p>
                     * 
                     */
                    void SetOwnerAppId(const uint64_t& _ownerAppId);

                    /**
                     * 判断参数 OwnerAppId 是否已赋值
                     * @return OwnerAppId 是否已赋值
                     * 
                     */
                    bool OwnerAppIdHasBeenSet() const;

                    /**
                     * 获取<p>uin of the account associated with the host</p>
                     * @return OwnerUin <p>uin of the account associated with the host</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>uin of the account associated with the host</p>
                     * @param _ownerUin <p>uin of the account associated with the host</p>
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>Host private network address</p>
                     * @return InnerIp <p>Host private network address</p>
                     * 
                     */
                    std::string GetInnerIp() const;

                    /**
                     * 设置<p>Host private network address</p>
                     * @param _innerIp <p>Host private network address</p>
                     * 
                     */
                    void SetInnerIp(const std::string& _innerIp);

                    /**
                     * 判断参数 InnerIp 是否已赋值
                     * @return InnerIp 是否已赋值
                     * 
                     */
                    bool InnerIpHasBeenSet() const;

                    /**
                     * 获取<p>Host public network address</p>
                     * @return PublicIp <p>Host public network address</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>Host public network address</p>
                     * @param _publicIp <p>Host public network address</p>
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取<p>agent status on the host</p><p>Enumeration value:</p><ul><li>ONLINE: ONLINE</li><li>OFFLINE: OFFLINE</li><li>UNINSTALL: uninstalled</li></ul>
                     * @return AgentStatus <p>agent status on the host</p><p>Enumeration value:</p><ul><li>ONLINE: ONLINE</li><li>OFFLINE: OFFLINE</li><li>UNINSTALL: uninstalled</li></ul>
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置<p>agent status on the host</p><p>Enumeration value:</p><ul><li>ONLINE: ONLINE</li><li>OFFLINE: OFFLINE</li><li>UNINSTALL: uninstalled</li></ul>
                     * @param _agentStatus <p>agent status on the host</p><p>Enumeration value:</p><ul><li>ONLINE: ONLINE</li><li>OFFLINE: OFFLINE</li><li>UNINSTALL: uninstalled</li></ul>
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
                     * 获取<p>Host instance ID.</p>
                     * @return InstanceID <p>Host instance ID.</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>Host instance ID.</p>
                     * @param _instanceID <p>Host instance ID.</p>
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
                     * 获取<p>Host status</p>
                     * @return InstanceState <p>Host status</p>
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置<p>Host status</p>
                     * @param _instanceState <p>Host status</p>
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                private:

                    /**
                     * <p>Host UUID.</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>Host quuid</p>
                     */
                    std::string m_qUuid;
                    bool m_qUuidHasBeenSet;

                    /**
                     * <p>host name</p>
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * <p>Account name associated with the host</p>
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * <p>appid of the account associated with the host</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>uin of the account associated with the host</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>Host private network address</p>
                     */
                    std::string m_innerIp;
                    bool m_innerIpHasBeenSet;

                    /**
                     * <p>Host public network address</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>agent status on the host</p><p>Enumeration value:</p><ul><li>ONLINE: ONLINE</li><li>OFFLINE: OFFLINE</li><li>UNINSTALL: uninstalled</li></ul>
                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * <p>Host instance ID.</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>Host status</p>
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEASSOCIATEDHOSTASSET_H_
