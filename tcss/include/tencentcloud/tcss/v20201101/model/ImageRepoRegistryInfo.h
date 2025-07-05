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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEREPOREGISTRYINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEREPOREGISTRYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RegistryConnDetectResult.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 
                */
                class ImageRepoRegistryInfo : public AbstractModel
                {
                public:
                    ImageRepoRegistryInfo();
                    ~ImageRepoRegistryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return RegistryId 
                     * 
                     */
                    uint64_t GetRegistryId() const;

                    /**
                     * 设置
                     * @param _registryId 
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
                     * 获取
                     * @return Name 
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置
                     * @param _name 
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
                     * 获取
                     * @return RegistryType 
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置
                     * @param _registryType 
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
                     * 获取
                     * @return Url 
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置
                     * @param _url 
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
                     * 获取
                     * @return NetType 
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置
                     * @param _netType 
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
                     * 获取
                     * @return RegistryRegion 
                     * 
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 设置
                     * @param _registryRegion 
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
                     * 获取
                     * @return RegistryVersion 
                     * 
                     */
                    std::string GetRegistryVersion() const;

                    /**
                     * 设置
                     * @param _registryVersion 
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
                     * 获取
                     * @return ConnectMsg 
                     * 
                     */
                    std::string GetConnectMsg() const;

                    /**
                     * 设置
                     * @param _connectMsg 
                     * 
                     */
                    void SetConnectMsg(const std::string& _connectMsg);

                    /**
                     * 判断参数 ConnectMsg 是否已赋值
                     * @return ConnectMsg 是否已赋值
                     * 
                     */
                    bool ConnectMsgHasBeenSet() const;

                    /**
                     * 获取
                     * @return ConnDetectType 
                     * 
                     */
                    std::string GetConnDetectType() const;

                    /**
                     * 设置
                     * @param _connDetectType 
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
                     * 获取
                     * @return ConnDetectHostCount 
                     * 
                     */
                    uint64_t GetConnDetectHostCount() const;

                    /**
                     * 设置
                     * @param _connDetectHostCount 
                     * 
                     */
                    void SetConnDetectHostCount(const uint64_t& _connDetectHostCount);

                    /**
                     * 判断参数 ConnDetectHostCount 是否已赋值
                     * @return ConnDetectHostCount 是否已赋值
                     * 
                     */
                    bool ConnDetectHostCountHasBeenSet() const;

                    /**
                     * 获取
                     * @return ConnDetectDetail 
                     * 
                     */
                    std::vector<RegistryConnDetectResult> GetConnDetectDetail() const;

                    /**
                     * 设置
                     * @param _connDetectDetail 
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
                     * 获取
                     * @return InstanceID 
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置
                     * @param _instanceID 
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
                     * 获取
                     * @return LatestSyncTime 
                     * 
                     */
                    std::string GetLatestSyncTime() const;

                    /**
                     * 设置
                     * @param _latestSyncTime 
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
                     * 获取
                     * @return SyncStatus 
                     * 
                     */
                    std::string GetSyncStatus() const;

                    /**
                     * 设置
                     * @param _syncStatus 
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
                     * 获取
                     * @return SyncFailReason 
                     * 
                     */
                    std::string GetSyncFailReason() const;

                    /**
                     * 设置
                     * @param _syncFailReason 
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
                     * 获取
                     * @return SyncSolution 
                     * 
                     */
                    std::string GetSyncSolution() const;

                    /**
                     * 设置
                     * @param _syncSolution 
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
                     * 获取
                     * @return SyncMessage 
                     * 
                     */
                    std::string GetSyncMessage() const;

                    /**
                     * 设置
                     * @param _syncMessage 
                     * 
                     */
                    void SetSyncMessage(const std::string& _syncMessage);

                    /**
                     * 判断参数 SyncMessage 是否已赋值
                     * @return SyncMessage 是否已赋值
                     * 
                     */
                    bool SyncMessageHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    uint64_t m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_registryVersion;
                    bool m_registryVersionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_connectMsg;
                    bool m_connectMsgHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_connDetectType;
                    bool m_connDetectTypeHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_connDetectHostCount;
                    bool m_connDetectHostCountHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<RegistryConnDetectResult> m_connDetectDetail;
                    bool m_connDetectDetailHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_latestSyncTime;
                    bool m_latestSyncTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_syncStatus;
                    bool m_syncStatusHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_syncFailReason;
                    bool m_syncFailReasonHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_syncSolution;
                    bool m_syncSolutionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_syncMessage;
                    bool m_syncMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEREPOREGISTRYINFO_H_
