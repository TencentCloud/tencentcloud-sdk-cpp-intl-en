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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTMANAGERCONFIG_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTMANAGERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Self-built AlertManager configuration used by the alert channel
                */
                class PrometheusAlertManagerConfig : public AbstractModel
                {
                public:
                    PrometheusAlertManagerConfig();
                    ~PrometheusAlertManagerConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AlertManager URL
                     * @return Url AlertManager URL
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置AlertManager URL
                     * @param _url AlertManager URL
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
                     * 获取Type of the cluster where AlertManager is deployed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterType Type of the cluster where AlertManager is deployed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Type of the cluster where AlertManager is deployed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterType Type of the cluster where AlertManager is deployed
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取ID of the cluster where AlertManager is deployed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterId ID of the cluster where AlertManager is deployed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ID of the cluster where AlertManager is deployed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterId ID of the cluster where AlertManager is deployed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * AlertManager URL
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Type of the cluster where AlertManager is deployed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * ID of the cluster where AlertManager is deployed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTMANAGERCONFIG_H_
