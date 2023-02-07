/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSTEMPLATESYNCTARGET_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSTEMPLATESYNCTARGET_H_

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
                * Sync target of the TMP template
                */
                class PrometheusTemplateSyncTarget : public AbstractModel
                {
                public:
                    PrometheusTemplateSyncTarget();
                    ~PrometheusTemplateSyncTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Target region
                     * @return Region Target region
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Target region
                     * @param Region Target region
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Target instance
                     * @return InstanceId Target instance
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Target instance
                     * @param InstanceId Target instance
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Cluster ID, which is required only if the `Level` of the collection template is `cluster`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterId Cluster ID, which is required only if the `Level` of the collection template is `cluster`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID, which is required only if the `Level` of the collection template is `cluster`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ClusterId Cluster ID, which is required only if the `Level` of the collection template is `cluster`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Last sync time, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SyncTime Last sync time, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSyncTime() const;

                    /**
                     * 设置Last sync time, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SyncTime Last sync time, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSyncTime(const std::string& _syncTime);

                    /**
                     * 判断参数 SyncTime 是否已赋值
                     * @return SyncTime 是否已赋值
                     */
                    bool SyncTimeHasBeenSet() const;

                    /**
                     * 获取The currently used template version, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Version The currently used template version, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置The currently used template version, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Version The currently used template version, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Cluster type, which is required only if the `Level` of the collection template is `cluster`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterType Cluster type, which is required only if the `Level` of the collection template is `cluster`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Cluster type, which is required only if the `Level` of the collection template is `cluster`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ClusterType Cluster type, which is required only if the `Level` of the collection template is `cluster`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取Instance name, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName Instance name, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InstanceName Instance name, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Cluster name, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterName Cluster name, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ClusterName Cluster name, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                private:

                    /**
                     * Target region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Target instance
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Cluster ID, which is required only if the `Level` of the collection template is `cluster`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Last sync time, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_syncTime;
                    bool m_syncTimeHasBeenSet;

                    /**
                     * The currently used template version, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Cluster type, which is required only if the `Level` of the collection template is `cluster`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Instance name, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Cluster name, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSTEMPLATESYNCTARGET_H_
