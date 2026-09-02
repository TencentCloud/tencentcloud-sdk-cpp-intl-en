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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEHOSTASSET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEHOSTASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/MiniTagItem.h>
#include <tencentcloud/csip/v20221121/model/Tag.h>
#include <tencentcloud/csip/v20221121/model/RegionInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Baseline host asset, which hosts the host details associated with subtasks and risk records.
                */
                class BaselineHostAsset : public AbstractModel
                {
                public:
                    BaselineHostAsset();
                    ~BaselineHostAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Cloud host instance ID, e.g. ins-instanceid.</p>
                     * @return InstanceID <p>Cloud host instance ID, e.g. ins-instanceid.</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>Cloud host instance ID, e.g. ins-instanceid.</p>
                     * @param _instanceID <p>Cloud host instance ID, e.g. ins-instanceid.</p>
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
                     * 获取<p>Host unique identifier QUUID.</p>
                     * @return QUUID <p>Host unique identifier QUUID.</p>
                     * 
                     */
                    std::string GetQUUID() const;

                    /**
                     * 设置<p>Host unique identifier QUUID.</p>
                     * @param _qUUID <p>Host unique identifier QUUID.</p>
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
                     * 获取<p>UUID submitted by the Host Agent.</p>
                     * @return UUID <p>UUID submitted by the Host Agent.</p>
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置<p>UUID submitted by the Host Agent.</p>
                     * @param _uUID <p>UUID submitted by the Host Agent.</p>
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
                     * 获取<p>Public IP address of the host.</p>
                     * @return PublicIP <p>Public IP address of the host.</p>
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置<p>Public IP address of the host.</p>
                     * @param _publicIP <p>Public IP address of the host.</p>
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
                     * 获取<p>Private IP of the host.</p>
                     * @return PrivateIP <p>Private IP of the host.</p>
                     * 
                     */
                    std::string GetPrivateIP() const;

                    /**
                     * 设置<p>Private IP of the host.</p>
                     * @param _privateIP <p>Private IP of the host.</p>
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
                     * 获取<p>CWP Agent status. Valid values:</p><ul><li>ONLINE: ONLINE</li><li>OFFLINE: OFFLINE</li><li>UNINSTALLED: not installed</li></ul>
                     * @return AgentStatus <p>CWP Agent status. Valid values:</p><ul><li>ONLINE: ONLINE</li><li>OFFLINE: OFFLINE</li><li>UNINSTALLED: not installed</li></ul>
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置<p>CWP Agent status. Valid values:</p><ul><li>ONLINE: ONLINE</li><li>OFFLINE: OFFLINE</li><li>UNINSTALLED: not installed</li></ul>
                     * @param _agentStatus <p>CWP Agent status. Valid values:</p><ul><li>ONLINE: ONLINE</li><li>OFFLINE: OFFLINE</li><li>UNINSTALLED: not installed</li></ul>
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
                     * 获取<p>Cloud virtual machine instance running status. Parameter values:</p><ul><li>RUNNING: running</li><li>STOPPED: stopped</li><li>UNKNOWN: unknown</li></ul>
                     * @return InstanceStatus <p>Cloud virtual machine instance running status. Parameter values:</p><ul><li>RUNNING: running</li><li>STOPPED: stopped</li><li>UNKNOWN: unknown</li></ul>
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置<p>Cloud virtual machine instance running status. Parameter values:</p><ul><li>RUNNING: running</li><li>STOPPED: stopped</li><li>UNKNOWN: unknown</li></ul>
                     * @param _instanceStatus <p>Cloud virtual machine instance running status. Parameter values:</p><ul><li>RUNNING: running</li><li>STOPPED: stopped</li><li>UNKNOWN: unknown</li></ul>
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
                     * 获取<p>Host name.</p>
                     * @return Name <p>Host name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Host name.</p>
                     * @param _name <p>Host name.</p>
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
                     * 获取<p>Appid of the tenant associated with the host.</p>
                     * @return Appid <p>Appid of the tenant associated with the host.</p>
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置<p>Appid of the tenant associated with the host.</p>
                     * @param _appid <p>Appid of the tenant associated with the host.</p>
                     * 
                     */
                    void SetAppid(const uint64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取<p>CSIP internal asset tag list.</p>
                     * @return TagItem <p>CSIP internal asset tag list.</p>
                     * 
                     */
                    std::vector<MiniTagItem> GetTagItem() const;

                    /**
                     * 设置<p>CSIP internal asset tag list.</p>
                     * @param _tagItem <p>CSIP internal asset tag list.</p>
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
                     * 获取<p>Cloud natively asset Tag list.</p>
                     * @return CloudTag <p>Cloud natively asset Tag list.</p>
                     * 
                     */
                    std::vector<Tag> GetCloudTag() const;

                    /**
                     * 设置<p>Cloud natively asset Tag list.</p>
                     * @param _cloudTag <p>Cloud natively asset Tag list.</p>
                     * 
                     */
                    void SetCloudTag(const std::vector<Tag>& _cloudTag);

                    /**
                     * 判断参数 CloudTag 是否已赋值
                     * @return CloudTag 是否已赋值
                     * 
                     */
                    bool CloudTagHasBeenSet() const;

                    /**
                     * 获取<p>Region information of the host.</p>
                     * @return RegionInfo <p>Region information of the host.</p>
                     * 
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置<p>Region information of the host.</p>
                     * @param _regionInfo <p>Region information of the host.</p>
                     * 
                     */
                    void SetRegionInfo(const RegionInfo& _regionInfo);

                    /**
                     * 判断参数 RegionInfo 是否已赋值
                     * @return RegionInfo 是否已赋值
                     * 
                     */
                    bool RegionInfoHasBeenSet() const;

                    /**
                     * 获取<p>Host operating system information (including distro and version number).</p>
                     * @return OsInfo <p>Host operating system information (including distro and version number).</p>
                     * 
                     */
                    std::string GetOsInfo() const;

                    /**
                     * 设置<p>Host operating system information (including distro and version number).</p>
                     * @param _osInfo <p>Host operating system information (including distro and version number).</p>
                     * 
                     */
                    void SetOsInfo(const std::string& _osInfo);

                    /**
                     * 判断参数 OsInfo 是否已赋值
                     * @return OsInfo 是否已赋值
                     * 
                     */
                    bool OsInfoHasBeenSet() const;

                    /**
                     * 获取<p>Host protection version. Value: NONE (no protection), BASIC (basic version), PRO (pro edition), ULTIMATE (flagship edition), PRO_LH (lite edition).</p>
                     * @return ProtectVersion <p>Host protection version. Value: NONE (no protection), BASIC (basic version), PRO (pro edition), ULTIMATE (flagship edition), PRO_LH (lite edition).</p>
                     * 
                     */
                    std::string GetProtectVersion() const;

                    /**
                     * 设置<p>Host protection version. Value: NONE (no protection), BASIC (basic version), PRO (pro edition), ULTIMATE (flagship edition), PRO_LH (lite edition).</p>
                     * @param _protectVersion <p>Host protection version. Value: NONE (no protection), BASIC (basic version), PRO (pro edition), ULTIMATE (flagship edition), PRO_LH (lite edition).</p>
                     * 
                     */
                    void SetProtectVersion(const std::string& _protectVersion);

                    /**
                     * 判断参数 ProtectVersion 是否已赋值
                     * @return ProtectVersion 是否已赋值
                     * 
                     */
                    bool ProtectVersionHasBeenSet() const;

                private:

                    /**
                     * <p>Cloud host instance ID, e.g. ins-instanceid.</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>Host unique identifier QUUID.</p>
                     */
                    std::string m_qUUID;
                    bool m_qUUIDHasBeenSet;

                    /**
                     * <p>UUID submitted by the Host Agent.</p>
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * <p>Public IP address of the host.</p>
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * <p>Private IP of the host.</p>
                     */
                    std::string m_privateIP;
                    bool m_privateIPHasBeenSet;

                    /**
                     * <p>CWP Agent status. Valid values:</p><ul><li>ONLINE: ONLINE</li><li>OFFLINE: OFFLINE</li><li>UNINSTALLED: not installed</li></ul>
                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * <p>Cloud virtual machine instance running status. Parameter values:</p><ul><li>RUNNING: running</li><li>STOPPED: stopped</li><li>UNKNOWN: unknown</li></ul>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>Host name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Appid of the tenant associated with the host.</p>
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * <p>CSIP internal asset tag list.</p>
                     */
                    std::vector<MiniTagItem> m_tagItem;
                    bool m_tagItemHasBeenSet;

                    /**
                     * <p>Cloud natively asset Tag list.</p>
                     */
                    std::vector<Tag> m_cloudTag;
                    bool m_cloudTagHasBeenSet;

                    /**
                     * <p>Region information of the host.</p>
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                    /**
                     * <p>Host operating system information (including distro and version number).</p>
                     */
                    std::string m_osInfo;
                    bool m_osInfoHasBeenSet;

                    /**
                     * <p>Host protection version. Value: NONE (no protection), BASIC (basic version), PRO (pro edition), ULTIMATE (flagship edition), PRO_LH (lite edition).</p>
                     */
                    std::string m_protectVersion;
                    bool m_protectVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEHOSTASSET_H_
