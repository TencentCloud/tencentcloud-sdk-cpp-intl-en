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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RegistryConnDetectResult.h>
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
                * Image repository information.
                */
                class ImageRegistryInfo : public AbstractModel
                {
                public:
                    ImageRegistryInfo();
                    ~ImageRegistryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Repository id</p>
                     * @return RegistryId <p>Repository id</p>
                     * 
                     */
                    uint64_t GetRegistryId() const;

                    /**
                     * 设置<p>Repository id</p>
                     * @param _registryId <p>Repository id</p>
                     * 
                     */
                    void SetRegistryId(const uint64_t& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取<p>Repository name.</p>
                     * @return Name <p>Repository name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Repository name.</p>
                     * @param _name <p>Repository name.</p>
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
                     * 获取<p>Repository type</p>
                     * @return RegistryType <p>Repository type</p>
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置<p>Repository type</p>
                     * @param _registryType <p>Repository type</p>
                     * 
                     */
                    void SetRegistryType(const std::string& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取<p>Warehouse url</p>
                     * @return Url <p>Warehouse url</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Warehouse url</p>
                     * @param _url <p>Warehouse url</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>Network connection type</p>
                     * @return NetType <p>Network connection type</p>
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置<p>Network connection type</p>
                     * @param _netType <p>Network connection type</p>
                     * 
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取<p>Repository region</p>
                     * @return RegistryRegion <p>Repository region</p>
                     * 
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 设置<p>Repository region</p>
                     * @param _registryRegion <p>Repository region</p>
                     * 
                     */
                    void SetRegistryRegion(const std::string& _registryRegion);

                    /**
                     * 判断参数 RegistryRegion 是否已赋值
                     * @return RegistryRegion 是否已赋值
                     * 
                     */
                    bool RegistryRegionHasBeenSet() const;

                    /**
                     * 获取<p>Warehouse version</p>
                     * @return RegistryVersion <p>Warehouse version</p>
                     * 
                     */
                    std::string GetRegistryVersion() const;

                    /**
                     * 设置<p>Warehouse version</p>
                     * @param _registryVersion <p>Warehouse version</p>
                     * 
                     */
                    void SetRegistryVersion(const std::string& _registryVersion);

                    /**
                     * 判断参数 RegistryVersion 是否已赋值
                     * @return RegistryVersion 是否已赋值
                     * 
                     */
                    bool RegistryVersionHasBeenSet() const;

                    /**
                     * 获取<p>Repository instance id.</p>
                     * @return InstanceID <p>Repository instance id.</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>Repository instance id.</p>
                     * @param _instanceID <p>Repository instance id.</p>
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
                     * 获取<p>Last sync time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return LatestSyncTime <p>Last sync time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetLatestSyncTime() const;

                    /**
                     * 设置<p>Last sync time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _latestSyncTime <p>Last sync time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetLatestSyncTime(const std::string& _latestSyncTime);

                    /**
                     * 判断参数 LatestSyncTime 是否已赋值
                     * @return LatestSyncTime 是否已赋值
                     * 
                     */
                    bool LatestSyncTimeHasBeenSet() const;

                    /**
                     * 获取<p>Solution to synchronization failure</p>
                     * @return SyncSolution <p>Solution to synchronization failure</p>
                     * 
                     */
                    std::string GetSyncSolution() const;

                    /**
                     * 设置<p>Solution to synchronization failure</p>
                     * @param _syncSolution <p>Solution to synchronization failure</p>
                     * 
                     */
                    void SetSyncSolution(const std::string& _syncSolution);

                    /**
                     * 判断参数 SyncSolution 是否已赋值
                     * @return SyncSolution 是否已赋值
                     * 
                     */
                    bool SyncSolutionHasBeenSet() const;

                    /**
                     * 获取<p>Synchronization method</p>
                     * @return SyncMode <p>Synchronization method</p>
                     * 
                     */
                    uint64_t GetSyncMode() const;

                    /**
                     * 设置<p>Synchronization method</p>
                     * @param _syncMode <p>Synchronization method</p>
                     * 
                     */
                    void SetSyncMode(const uint64_t& _syncMode);

                    /**
                     * 判断参数 SyncMode 是否已赋值
                     * @return SyncMode 是否已赋值
                     * 
                     */
                    bool SyncModeHasBeenSet() const;

                    /**
                     * 获取<p>Connection check description</p>
                     * @return ConnDetectDetail <p>Connection check description</p>
                     * 
                     */
                    std::vector<RegistryConnDetectResult> GetConnDetectDetail() const;

                    /**
                     * 设置<p>Connection check description</p>
                     * @param _connDetectDetail <p>Connection check description</p>
                     * 
                     */
                    void SetConnDetectDetail(const std::vector<RegistryConnDetectResult>& _connDetectDetail);

                    /**
                     * 判断参数 ConnDetectDetail 是否已赋值
                     * @return ConnDetectDetail 是否已赋值
                     * 
                     */
                    bool ConnDetectDetailHasBeenSet() const;

                    /**
                     * 获取<p>Connection type</p>
                     * @return ConnDetectType <p>Connection type</p>
                     * 
                     */
                    std::string GetConnDetectType() const;

                    /**
                     * 设置<p>Connection type</p>
                     * @param _connDetectType <p>Connection type</p>
                     * 
                     */
                    void SetConnDetectType(const std::string& _connDetectType);

                    /**
                     * 判断参数 ConnDetectType 是否已赋值
                     * @return ConnDetectType 是否已赋值
                     * 
                     */
                    bool ConnDetectTypeHasBeenSet() const;

                    /**
                     * 获取<p>Account name of the repository</p>
                     * @return OwnerAccountName <p>Account name of the repository</p>
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置<p>Account name of the repository</p>
                     * @param _ownerAccountName <p>Account name of the repository</p>
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
                     * 获取<p>appid of the account associated with the repository</p>
                     * @return OwnerAppId <p>appid of the account associated with the repository</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>appid of the account associated with the repository</p>
                     * @param _ownerAppId <p>appid of the account associated with the repository</p>
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
                     * 获取<p>Account uin associated with the repository</p>
                     * @return OwnerUin <p>Account uin associated with the repository</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>Account uin associated with the repository</p>
                     * @param _ownerUin <p>Account uin associated with the repository</p>
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
                     * 获取<p>Synchronization status</p><p>Enumeration values:</p><ul><li>doing: Syncing</li><li>success: Synchronization successful</li><li>failed: Synchronization failed</li></ul>
                     * @return SyncStatus <p>Synchronization status</p><p>Enumeration values:</p><ul><li>doing: Syncing</li><li>success: Synchronization successful</li><li>failed: Synchronization failed</li></ul>
                     * 
                     */
                    std::string GetSyncStatus() const;

                    /**
                     * 设置<p>Synchronization status</p><p>Enumeration values:</p><ul><li>doing: Syncing</li><li>success: Synchronization successful</li><li>failed: Synchronization failed</li></ul>
                     * @param _syncStatus <p>Synchronization status</p><p>Enumeration values:</p><ul><li>doing: Syncing</li><li>success: Synchronization successful</li><li>failed: Synchronization failed</li></ul>
                     * 
                     */
                    void SetSyncStatus(const std::string& _syncStatus);

                    /**
                     * 判断参数 SyncStatus 是否已赋值
                     * @return SyncStatus 是否已赋值
                     * 
                     */
                    bool SyncStatusHasBeenSet() const;

                    /**
                     * 获取<p>Reason for synchronization failure.</p>
                     * @return SyncFailReason <p>Reason for synchronization failure.</p>
                     * 
                     */
                    std::string GetSyncFailReason() const;

                    /**
                     * 设置<p>Reason for synchronization failure.</p>
                     * @param _syncFailReason <p>Reason for synchronization failure.</p>
                     * 
                     */
                    void SetSyncFailReason(const std::string& _syncFailReason);

                    /**
                     * 判断参数 SyncFailReason 是否已赋值
                     * @return SyncFailReason 是否已赋值
                     * 
                     */
                    bool SyncFailReasonHasBeenSet() const;

                    /**
                     * 获取<p>Region information.</p>
                     * @return RegionInfo <p>Region information.</p>
                     * 
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置<p>Region information.</p>
                     * @param _regionInfo <p>Region information.</p>
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
                     * 获取<p>Mirror warehouse username</p>
                     * @return UserName <p>Mirror warehouse username</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>Mirror warehouse username</p>
                     * @param _userName <p>Mirror warehouse username</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                private:

                    /**
                     * <p>Repository id</p>
                     */
                    uint64_t m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>Repository name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Repository type</p>
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * <p>Warehouse url</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>Network connection type</p>
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * <p>Repository region</p>
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * <p>Warehouse version</p>
                     */
                    std::string m_registryVersion;
                    bool m_registryVersionHasBeenSet;

                    /**
                     * <p>Repository instance id.</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>Last sync time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_latestSyncTime;
                    bool m_latestSyncTimeHasBeenSet;

                    /**
                     * <p>Solution to synchronization failure</p>
                     */
                    std::string m_syncSolution;
                    bool m_syncSolutionHasBeenSet;

                    /**
                     * <p>Synchronization method</p>
                     */
                    uint64_t m_syncMode;
                    bool m_syncModeHasBeenSet;

                    /**
                     * <p>Connection check description</p>
                     */
                    std::vector<RegistryConnDetectResult> m_connDetectDetail;
                    bool m_connDetectDetailHasBeenSet;

                    /**
                     * <p>Connection type</p>
                     */
                    std::string m_connDetectType;
                    bool m_connDetectTypeHasBeenSet;

                    /**
                     * <p>Account name of the repository</p>
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * <p>appid of the account associated with the repository</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>Account uin associated with the repository</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>Synchronization status</p><p>Enumeration values:</p><ul><li>doing: Syncing</li><li>success: Synchronization successful</li><li>failed: Synchronization failed</li></ul>
                     */
                    std::string m_syncStatus;
                    bool m_syncStatusHasBeenSet;

                    /**
                     * <p>Reason for synchronization failure.</p>
                     */
                    std::string m_syncFailReason;
                    bool m_syncFailReasonHasBeenSet;

                    /**
                     * <p>Region information.</p>
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                    /**
                     * <p>Mirror warehouse username</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYINFO_H_
