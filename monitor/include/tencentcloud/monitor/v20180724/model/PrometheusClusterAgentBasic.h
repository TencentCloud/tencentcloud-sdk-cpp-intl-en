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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSCLUSTERAGENTBASIC_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSCLUSTERAGENTBASIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusClusterAgentPodConfig.h>
#include <tencentcloud/monitor/v20180724/model/Label.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Basic information of the cluster associated with a Tencent Cloud Observability Platform (TCOP)-integrated TMP instance.
                */
                class PrometheusClusterAgentBasic : public AbstractModel
                {
                public:
                    PrometheusClusterAgentBasic();
                    ~PrometheusClusterAgentBasic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster ID
                     * @return Region Cluster ID
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Cluster ID
                     * @param _region Cluster ID
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Cluster type
                     * @return ClusterType Cluster type
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Cluster type
                     * @param _clusterType Cluster type
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
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable public network CLB
                     * @return EnableExternal Whether to enable public network CLB
                     * 
                     */
                    bool GetEnableExternal() const;

                    /**
                     * 设置Whether to enable public network CLB
                     * @param _enableExternal Whether to enable public network CLB
                     * 
                     */
                    void SetEnableExternal(const bool& _enableExternal);

                    /**
                     * 判断参数 EnableExternal 是否已赋值
                     * @return EnableExternal 是否已赋值
                     * 
                     */
                    bool EnableExternalHasBeenSet() const;

                    /**
                     * 获取Pod configurations of components deployed in the cluster
                     * @return InClusterPodConfig Pod configurations of components deployed in the cluster
                     * 
                     */
                    PrometheusClusterAgentPodConfig GetInClusterPodConfig() const;

                    /**
                     * 设置Pod configurations of components deployed in the cluster
                     * @param _inClusterPodConfig Pod configurations of components deployed in the cluster
                     * 
                     */
                    void SetInClusterPodConfig(const PrometheusClusterAgentPodConfig& _inClusterPodConfig);

                    /**
                     * 判断参数 InClusterPodConfig 是否已赋值
                     * @return InClusterPodConfig 是否已赋值
                     * 
                     */
                    bool InClusterPodConfigHasBeenSet() const;

                    /**
                     * 获取External labels, which will be attached to all metrics collected by this cluster
                     * @return ExternalLabels External labels, which will be attached to all metrics collected by this cluster
                     * 
                     */
                    std::vector<Label> GetExternalLabels() const;

                    /**
                     * 设置External labels, which will be attached to all metrics collected by this cluster
                     * @param _externalLabels External labels, which will be attached to all metrics collected by this cluster
                     * 
                     */
                    void SetExternalLabels(const std::vector<Label>& _externalLabels);

                    /**
                     * 判断参数 ExternalLabels 是否已赋值
                     * @return ExternalLabels 是否已赋值
                     * 
                     */
                    bool ExternalLabelsHasBeenSet() const;

                    /**
                     * 获取Whether to install the default collection configuration.
                     * @return NotInstallBasicScrape Whether to install the default collection configuration.
                     * 
                     */
                    bool GetNotInstallBasicScrape() const;

                    /**
                     * 设置Whether to install the default collection configuration.
                     * @param _notInstallBasicScrape Whether to install the default collection configuration.
                     * 
                     */
                    void SetNotInstallBasicScrape(const bool& _notInstallBasicScrape);

                    /**
                     * 判断参数 NotInstallBasicScrape 是否已赋值
                     * @return NotInstallBasicScrape 是否已赋值
                     * 
                     */
                    bool NotInstallBasicScrapeHasBeenSet() const;

                    /**
                     * 获取Whether to collect metrics (`true`: Drop all metrics; `false`: Collect default metrics)
                     * @return NotScrape Whether to collect metrics (`true`: Drop all metrics; `false`: Collect default metrics)
                     * 
                     */
                    bool GetNotScrape() const;

                    /**
                     * 设置Whether to collect metrics (`true`: Drop all metrics; `false`: Collect default metrics)
                     * @param _notScrape Whether to collect metrics (`true`: Drop all metrics; `false`: Collect default metrics)
                     * 
                     */
                    void SetNotScrape(const bool& _notScrape);

                    /**
                     * 判断参数 NotScrape 是否已赋值
                     * @return NotScrape 是否已赋值
                     * 
                     */
                    bool NotScrapeHasBeenSet() const;

                    /**
                     * 获取Whether to enable the default recording rule
                     * @return OpenDefaultRecord Whether to enable the default recording rule
                     * 
                     */
                    bool GetOpenDefaultRecord() const;

                    /**
                     * 设置Whether to enable the default recording rule
                     * @param _openDefaultRecord Whether to enable the default recording rule
                     * 
                     */
                    void SetOpenDefaultRecord(const bool& _openDefaultRecord);

                    /**
                     * 判断参数 OpenDefaultRecord 是否已赋值
                     * @return OpenDefaultRecord 是否已赋值
                     * 
                     */
                    bool OpenDefaultRecordHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Cluster type
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Whether to enable public network CLB
                     */
                    bool m_enableExternal;
                    bool m_enableExternalHasBeenSet;

                    /**
                     * Pod configurations of components deployed in the cluster
                     */
                    PrometheusClusterAgentPodConfig m_inClusterPodConfig;
                    bool m_inClusterPodConfigHasBeenSet;

                    /**
                     * External labels, which will be attached to all metrics collected by this cluster
                     */
                    std::vector<Label> m_externalLabels;
                    bool m_externalLabelsHasBeenSet;

                    /**
                     * Whether to install the default collection configuration.
                     */
                    bool m_notInstallBasicScrape;
                    bool m_notInstallBasicScrapeHasBeenSet;

                    /**
                     * Whether to collect metrics (`true`: Drop all metrics; `false`: Collect default metrics)
                     */
                    bool m_notScrape;
                    bool m_notScrapeHasBeenSet;

                    /**
                     * Whether to enable the default recording rule
                     */
                    bool m_openDefaultRecord;
                    bool m_openDefaultRecordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSCLUSTERAGENTBASIC_H_
