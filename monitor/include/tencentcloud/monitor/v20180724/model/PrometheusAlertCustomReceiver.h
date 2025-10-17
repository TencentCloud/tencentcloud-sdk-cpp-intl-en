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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTCUSTOMRECEIVER_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTCUSTOMRECEIVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusAlertAllowTimeRange.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Prometheus Alert custom notification template.
                */
                class PrometheusAlertCustomReceiver : public AbstractModel
                {
                public:
                    PrometheusAlertCustomReceiver();
                    ~PrometheusAlertCustomReceiver() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Notification customization type.
Alertmanager - self-built alertmanager in vpc.
webhook - webhook address in the vpc.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Notification customization type.
Alertmanager - self-built alertmanager in vpc.
webhook - webhook address in the vpc.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Notification customization type.
Alertmanager - self-built alertmanager in vpc.
webhook - webhook address in the vpc.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Notification customization type.
Alertmanager - self-built alertmanager in vpc.
webhook - webhook address in the vpc.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取alertmanager/webhook url (ip in the same vpc as the prometheus instance).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Url alertmanager/webhook url (ip in the same vpc as the prometheus instance).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置alertmanager/webhook url (ip in the same vpc as the prometheus instance).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _url alertmanager/webhook url (ip in the same vpc as the prometheus instance).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Specifies the time range for allowing Alert sending.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AllowedTimeRanges Specifies the time range for allowing Alert sending.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PrometheusAlertAllowTimeRange> GetAllowedTimeRanges() const;

                    /**
                     * 设置Specifies the time range for allowing Alert sending.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _allowedTimeRanges Specifies the time range for allowing Alert sending.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAllowedTimeRanges(const std::vector<PrometheusAlertAllowTimeRange>& _allowedTimeRanges);

                    /**
                     * 判断参数 AllowedTimeRanges 是否已赋值
                     * @return AllowedTimeRanges 是否已赋值
                     * 
                     */
                    bool AllowedTimeRangesHasBeenSet() const;

                    /**
                     * 获取alertmanager intranet cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterId alertmanager intranet cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置alertmanager intranet cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterId alertmanager intranet cluster ID.
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

                    /**
                     * 获取alertmanager resides in the private network cluster type (tke/eks/tdcc).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterType alertmanager resides in the private network cluster type (tke/eks/tdcc).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置alertmanager resides in the private network cluster type (tke/eks/tdcc).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterType alertmanager resides in the private network cluster type (tke/eks/tdcc).
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

                private:

                    /**
                     * Notification customization type.
Alertmanager - self-built alertmanager in vpc.
webhook - webhook address in the vpc.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * alertmanager/webhook url (ip in the same vpc as the prometheus instance).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Specifies the time range for allowing Alert sending.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusAlertAllowTimeRange> m_allowedTimeRanges;
                    bool m_allowedTimeRangesHasBeenSet;

                    /**
                     * alertmanager intranet cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * alertmanager resides in the private network cluster type (tke/eks/tdcc).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTCUSTOMRECEIVER_H_
