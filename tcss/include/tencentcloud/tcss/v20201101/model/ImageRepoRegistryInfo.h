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
                * Container Security Image Repository List
                */
                class ImageRepoRegistryInfo : public AbstractModel
                {
                public:
                    ImageRepoRegistryInfo();
                    ~ImageRepoRegistryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Repository id
                     * @return RegistryId Repository id
                     * 
                     */
                    uint64_t GetRegistryId() const;

                    /**
                     * 设置Repository id
                     * @param _registryId Repository id
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
                     * 获取Repository Name
                     * @return Name Repository Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Repository Name
                     * @param _name Repository Name
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
                     * 获取Repository Type, list: harbor, tcr
                     * @return RegistryType Repository Type, list: harbor, tcr
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置Repository Type, list: harbor, tcr
                     * @param _registryType Repository Type, list: harbor, tcr
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
                     * 获取Repository url
                     * @return Url Repository url
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Repository url
                     * @param _url Repository url
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
                     * 获取Network Type, list: public
                     * @return NetType Network Type, list: public
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置Network Type, list: public
                     * @param _netType Network Type, list: public
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
                     * 获取Region, list: default
                     * @return RegistryRegion Region, list: default
                     * 
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 设置Region, list: default
                     * @param _registryRegion Region, list: default
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
                     * 获取Repository Version
                     * @return RegistryVersion Repository Version
                     * 
                     */
                    std::string GetRegistryVersion() const;

                    /**
                     * 设置Repository Version
                     * @param _registryVersion Repository Version
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
                     * 获取Repository connection error message (to be deprecated, use ConnDetectException instead)
                     * @return ConnectMsg Repository connection error message (to be deprecated, use ConnDetectException instead)
                     * 
                     */
                    std::string GetConnectMsg() const;

                    /**
                     * 设置Repository connection error message (to be deprecated, use ConnDetectException instead)
                     * @param _connectMsg Repository connection error message (to be deprecated, use ConnDetectException instead)
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
                     * 获取Connectivity Detection Method
                     * @return ConnDetectType Connectivity Detection Method
                     * 
                     */
                    std::string GetConnDetectType() const;

                    /**
                     * 设置Connectivity Detection Method
                     * @param _connDetectType Connectivity Detection Method
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
                     * 获取Connectivity Detection Host Count
                     * @return ConnDetectHostCount Connectivity Detection Host Count
                     * 
                     */
                    uint64_t GetConnDetectHostCount() const;

                    /**
                     * 设置Connectivity Detection Host Count
                     * @param _connDetectHostCount Connectivity Detection Host Count
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
                     * 获取Connectivity Detection Details
                     * @return ConnDetectDetail Connectivity Detection Details
                     * 
                     */
                    std::vector<RegistryConnDetectResult> GetConnDetectDetail() const;

                    /**
                     * 设置Connectivity Detection Details
                     * @param _connDetectDetail Connectivity Detection Details
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
                     * 获取instance_id in tcr
                     * @return InstanceID instance_id in tcr
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置instance_id in tcr
                     * @param _instanceID instance_id in tcr
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
                     * 获取Latest Successful Synchronization Time
                     * @return LatestSyncTime Latest Successful Synchronization Time
                     * 
                     */
                    std::string GetLatestSyncTime() const;

                    /**
                     * 设置Latest Successful Synchronization Time
                     * @param _latestSyncTime Latest Successful Synchronization Time
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
                     * 获取Synchronization Status
                     * @return SyncStatus Synchronization Status
                     * 
                     */
                    std::string GetSyncStatus() const;

                    /**
                     * 设置Synchronization Status
                     * @param _syncStatus Synchronization Status
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
                     * 获取Synchronization Failure Reason
                     * @return SyncFailReason Synchronization Failure Reason
                     * 
                     */
                    std::string GetSyncFailReason() const;

                    /**
                     * 设置Synchronization Failure Reason
                     * @param _syncFailReason Synchronization Failure Reason
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
                     * 获取Synchronization Failure Solution
                     * @return SyncSolution Synchronization Failure Solution
                     * 
                     */
                    std::string GetSyncSolution() const;

                    /**
                     * 设置Synchronization Failure Solution
                     * @param _syncSolution Synchronization Failure Solution
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
                     * 获取Synchronization Failure Message
                     * @return SyncMessage Synchronization Failure Message
                     * 
                     */
                    std::string GetSyncMessage() const;

                    /**
                     * 设置Synchronization Failure Message
                     * @param _syncMessage Synchronization Failure Message
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
                     * Repository id
                     */
                    uint64_t m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Repository Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Repository Type, list: harbor, tcr
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * Repository url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Network Type, list: public
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * Region, list: default
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * Repository Version
                     */
                    std::string m_registryVersion;
                    bool m_registryVersionHasBeenSet;

                    /**
                     * Repository connection error message (to be deprecated, use ConnDetectException instead)
                     */
                    std::string m_connectMsg;
                    bool m_connectMsgHasBeenSet;

                    /**
                     * Connectivity Detection Method
                     */
                    std::string m_connDetectType;
                    bool m_connDetectTypeHasBeenSet;

                    /**
                     * Connectivity Detection Host Count
                     */
                    uint64_t m_connDetectHostCount;
                    bool m_connDetectHostCountHasBeenSet;

                    /**
                     * Connectivity Detection Details
                     */
                    std::vector<RegistryConnDetectResult> m_connDetectDetail;
                    bool m_connDetectDetailHasBeenSet;

                    /**
                     * instance_id in tcr
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Latest Successful Synchronization Time
                     */
                    std::string m_latestSyncTime;
                    bool m_latestSyncTimeHasBeenSet;

                    /**
                     * Synchronization Status
                     */
                    std::string m_syncStatus;
                    bool m_syncStatusHasBeenSet;

                    /**
                     * Synchronization Failure Reason
                     */
                    std::string m_syncFailReason;
                    bool m_syncFailReasonHasBeenSet;

                    /**
                     * Synchronization Failure Solution
                     */
                    std::string m_syncSolution;
                    bool m_syncSolutionHasBeenSet;

                    /**
                     * Synchronization Failure Message
                     */
                    std::string m_syncMessage;
                    bool m_syncMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEREPOREGISTRYINFO_H_
