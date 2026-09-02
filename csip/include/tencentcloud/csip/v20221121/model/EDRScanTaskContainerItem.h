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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDRSCANTASKCONTAINERITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDRSCANTASKCONTAINERITEM_H_

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
                * Container asset scan details item
                */
                class EDRScanTaskContainerItem : public AbstractModel
                {
                public:
                    EDRScanTaskContainerItem();
                    ~EDRScanTaskContainerItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Container ID</p>
                     * @return ContainerID <p>Container ID</p>
                     * 
                     */
                    std::string GetContainerID() const;

                    /**
                     * 设置<p>Container ID</p>
                     * @param _containerID <p>Container ID</p>
                     * 
                     */
                    void SetContainerID(const std::string& _containerID);

                    /**
                     * 判断参数 ContainerID 是否已赋值
                     * @return ContainerID 是否已赋值
                     * 
                     */
                    bool ContainerIDHasBeenSet() const;

                    /**
                     * 获取<p>Container name</p>
                     * @return ContainerName <p>Container name</p>
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置<p>Container name</p>
                     * @param _containerName <p>Container name</p>
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取<p>Pod Name</p>
                     * @return PodName <p>Pod Name</p>
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置<p>Pod Name</p>
                     * @param _podName <p>Pod Name</p>
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterID <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterID <p>Cluster ID.</p>
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取<p>Cluster name.</p>
                     * @return ClusterName <p>Cluster name.</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>Cluster name.</p>
                     * @param _clusterName <p>Cluster name.</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>Cluster type.</p>
                     * @return ClusterType <p>Cluster type.</p>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>Cluster type.</p>
                     * @param _clusterType <p>Cluster type.</p>
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>Account name of asset ownership (enriched from the backend)</p>
                     * @return AccountName <p>Account name of asset ownership (enriched from the backend)</p>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>Account name of asset ownership (enriched from the backend)</p>
                     * @param _accountName <p>Account name of asset ownership (enriched from the backend)</p>
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取<p>AppId of the associated account</p>
                     * @return AppId <p>AppId of the associated account</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>AppId of the associated account</p>
                     * @param _appId <p>AppId of the associated account</p>
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
                     * 获取<p>Cloud type</p>
                     * @return CloudType <p>Cloud type</p>
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置<p>Cloud type</p>
                     * @param _cloudType <p>Cloud type</p>
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取<p>Scan status: WAIT/SCANNING/FINISHED/FAILED</p>
                     * @return Status <p>Scan status: WAIT/SCANNING/FINISHED/FAILED</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Scan status: WAIT/SCANNING/FINISHED/FAILED</p>
                     * @param _status <p>Scan status: WAIT/SCANNING/FINISHED/FAILED</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Alarm count</p>
                     * @return RiskCount <p>Alarm count</p>
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置<p>Alarm count</p>
                     * @param _riskCount <p>Alarm count</p>
                     * 
                     */
                    void SetRiskCount(const int64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取<p>Failure reason</p>
                     * @return FailReason <p>Failure reason</p>
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置<p>Failure reason</p>
                     * @param _failReason <p>Failure reason</p>
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取<p>Solution.</p>
                     * @return FixSuggestion <p>Solution.</p>
                     * 
                     */
                    std::string GetFixSuggestion() const;

                    /**
                     * 设置<p>Solution.</p>
                     * @param _fixSuggestion <p>Solution.</p>
                     * 
                     */
                    void SetFixSuggestion(const std::string& _fixSuggestion);

                    /**
                     * 判断参数 FixSuggestion 是否已赋值
                     * @return FixSuggestion 是否已赋值
                     * 
                     */
                    bool FixSuggestionHasBeenSet() const;

                private:

                    /**
                     * <p>Container ID</p>
                     */
                    std::string m_containerID;
                    bool m_containerIDHasBeenSet;

                    /**
                     * <p>Container name</p>
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * <p>Pod Name</p>
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * <p>Cluster name.</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>Cluster type.</p>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>Account name of asset ownership (enriched from the backend)</p>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>AppId of the associated account</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Cloud type</p>
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * <p>Scan status: WAIT/SCANNING/FINISHED/FAILED</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Alarm count</p>
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * <p>Failure reason</p>
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * <p>Solution.</p>
                     */
                    std::string m_fixSuggestion;
                    bool m_fixSuggestionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDRSCANTASKCONTAINERITEM_H_
