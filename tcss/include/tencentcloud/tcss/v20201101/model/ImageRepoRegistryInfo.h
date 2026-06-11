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
                * Container security image repository list
                */
                class ImageRepoRegistryInfo : public AbstractModel
                {
                public:
                    ImageRepoRegistryInfo();
                    ~ImageRepoRegistryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Repository ID
                     * @return RegistryId Repository ID
                     * 
                     */
                    uint64_t GetRegistryId() const;

                    /**
                     * 设置Repository ID
                     * @param _registryId Repository ID
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
                     * 获取Repository type, list: harbor, tcr
                     * @return RegistryType Repository type, list: harbor, tcr
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置Repository type, list: harbor, tcr
                     * @param _registryType Repository type, list: harbor, tcr
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
                     * 获取Warehouse url
                     * @return Url Warehouse url
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Warehouse url
                     * @param _url Warehouse url
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
                     * 获取Network type, list: public
                     * @return NetType Network type, list: public
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置Network type, list: public
                     * @param _netType Network type, list: public
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
                     * 获取warehouse version
                     * @return RegistryVersion warehouse version
                     * 
                     */
                    std::string GetRegistryVersion() const;

                    /**
                     * 设置warehouse version
                     * @param _registryVersion warehouse version
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
                     * 获取Repository connection error message (to be deprecated). Use ConnDetectException.
                     * @return ConnectMsg Repository connection error message (to be deprecated). Use ConnDetectException.
                     * 
                     */
                    std::string GetConnectMsg() const;

                    /**
                     * 设置Repository connection error message (to be deprecated). Use ConnDetectException.
                     * @param _connectMsg Repository connection error message (to be deprecated). Use ConnDetectException.
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
                     * 获取Connectivity Check Method
                     * @return ConnDetectType Connectivity Check Method
                     * 
                     */
                    std::string GetConnDetectType() const;

                    /**
                     * 设置Connectivity Check Method
                     * @param _connDetectType Connectivity Check Method
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
                     * 获取Connectivity Check Host Count
                     * @return ConnDetectHostCount Connectivity Check Host Count
                     * 
                     */
                    uint64_t GetConnDetectHostCount() const;

                    /**
                     * 设置Connectivity Check Host Count
                     * @param _connDetectHostCount Connectivity Check Host Count
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
                     * 获取Connectivity Check Details
                     * @return ConnDetectDetail Connectivity Check Details
                     * 
                     */
                    std::vector<RegistryConnDetectResult> GetConnDetectDetail() const;

                    /**
                     * 设置Connectivity Check Details
                     * @param _connDetectDetail Connectivity Check Details
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
                     * 获取Instance ID in TCR Scenario
                     * @return InstanceID Instance ID in TCR Scenario
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Instance ID in TCR Scenario
                     * @param _instanceID Instance ID in TCR Scenario
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
                     * 获取Most Recent Time for Successful Synchronization
                     * @return LatestSyncTime Most Recent Time for Successful Synchronization
                     * 
                     */
                    std::string GetLatestSyncTime() const;

                    /**
                     * 设置Most Recent Time for Successful Synchronization
                     * @param _latestSyncTime Most Recent Time for Successful Synchronization
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
                     * 获取Synchronization status
                     * @return SyncStatus Synchronization status
                     * 
                     */
                    std::string GetSyncStatus() const;

                    /**
                     * 设置Synchronization status
                     * @param _syncStatus Synchronization status
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
                     * 获取Synchronization Failure Information
                     * @return SyncMessage Synchronization Failure Information
                     * 
                     */
                    std::string GetSyncMessage() const;

                    /**
                     * 设置Synchronization Failure Information
                     * @param _syncMessage Synchronization Failure Information
                     * 
                     */
                    void SetSyncMessage(const std::string& _syncMessage);

                    /**
                     * 判断参数 SyncMessage 是否已赋值
                     * @return SyncMessage 是否已赋值
                     * 
                     */
                    bool SyncMessageHasBeenSet() const;

                    /**
                     * 获取Synchronization method. 0: full synchronization; 1: incremental synchronization.	
                     * @return SyncMode Synchronization method. 0: full synchronization; 1: incremental synchronization.	
                     * 
                     */
                    uint64_t GetSyncMode() const;

                    /**
                     * 设置Synchronization method. 0: full synchronization; 1: incremental synchronization.	
                     * @param _syncMode Synchronization method. 0: full synchronization; 1: incremental synchronization.	
                     * 
                     */
                    void SetSyncMode(const uint64_t& _syncMode);

                    /**
                     * 判断参数 SyncMode 是否已赋值
                     * @return SyncMode 是否已赋值
                     * 
                     */
                    bool SyncModeHasBeenSet() const;

                private:

                    /**
                     * Repository ID
                     */
                    uint64_t m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Repository Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Repository type, list: harbor, tcr
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * Warehouse url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Network type, list: public
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * Region, list: default
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * warehouse version
                     */
                    std::string m_registryVersion;
                    bool m_registryVersionHasBeenSet;

                    /**
                     * Repository connection error message (to be deprecated). Use ConnDetectException.
                     */
                    std::string m_connectMsg;
                    bool m_connectMsgHasBeenSet;

                    /**
                     * Connectivity Check Method
                     */
                    std::string m_connDetectType;
                    bool m_connDetectTypeHasBeenSet;

                    /**
                     * Connectivity Check Host Count
                     */
                    uint64_t m_connDetectHostCount;
                    bool m_connDetectHostCountHasBeenSet;

                    /**
                     * Connectivity Check Details
                     */
                    std::vector<RegistryConnDetectResult> m_connDetectDetail;
                    bool m_connDetectDetailHasBeenSet;

                    /**
                     * Instance ID in TCR Scenario
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Most Recent Time for Successful Synchronization
                     */
                    std::string m_latestSyncTime;
                    bool m_latestSyncTimeHasBeenSet;

                    /**
                     * Synchronization status
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
                     * Synchronization Failure Information
                     */
                    std::string m_syncMessage;
                    bool m_syncMessageHasBeenSet;

                    /**
                     * Synchronization method. 0: full synchronization; 1: incremental synchronization.	
                     */
                    uint64_t m_syncMode;
                    bool m_syncModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEREPOREGISTRYINFO_H_
