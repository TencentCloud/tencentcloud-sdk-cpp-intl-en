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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEPROMETHEUSCONFIGREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEPROMETHEUSCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DeletePrometheusConfig request structure.
                */
                class DeletePrometheusConfigRequest : public AbstractModel
                {
                public:
                    DeletePrometheusConfigRequest();
                    ~DeletePrometheusConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

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
                     * 获取List of names of the service monitors to be deleted
                     * @return ServiceMonitors List of names of the service monitors to be deleted
                     * 
                     */
                    std::vector<std::string> GetServiceMonitors() const;

                    /**
                     * 设置List of names of the service monitors to be deleted
                     * @param _serviceMonitors List of names of the service monitors to be deleted
                     * 
                     */
                    void SetServiceMonitors(const std::vector<std::string>& _serviceMonitors);

                    /**
                     * 判断参数 ServiceMonitors 是否已赋值
                     * @return ServiceMonitors 是否已赋值
                     * 
                     */
                    bool ServiceMonitorsHasBeenSet() const;

                    /**
                     * 获取List of names of the pod monitors to be deleted
                     * @return PodMonitors List of names of the pod monitors to be deleted
                     * 
                     */
                    std::vector<std::string> GetPodMonitors() const;

                    /**
                     * 设置List of names of the pod monitors to be deleted
                     * @param _podMonitors List of names of the pod monitors to be deleted
                     * 
                     */
                    void SetPodMonitors(const std::vector<std::string>& _podMonitors);

                    /**
                     * 判断参数 PodMonitors 是否已赋值
                     * @return PodMonitors 是否已赋值
                     * 
                     */
                    bool PodMonitorsHasBeenSet() const;

                    /**
                     * 获取List of names of the raw jobs to be deleted
                     * @return RawJobs List of names of the raw jobs to be deleted
                     * 
                     */
                    std::vector<std::string> GetRawJobs() const;

                    /**
                     * 设置List of names of the raw jobs to be deleted
                     * @param _rawJobs List of names of the raw jobs to be deleted
                     * 
                     */
                    void SetRawJobs(const std::vector<std::string>& _rawJobs);

                    /**
                     * 判断参数 RawJobs 是否已赋值
                     * @return RawJobs 是否已赋值
                     * 
                     */
                    bool RawJobsHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

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
                     * List of names of the service monitors to be deleted
                     */
                    std::vector<std::string> m_serviceMonitors;
                    bool m_serviceMonitorsHasBeenSet;

                    /**
                     * List of names of the pod monitors to be deleted
                     */
                    std::vector<std::string> m_podMonitors;
                    bool m_podMonitorsHasBeenSet;

                    /**
                     * List of names of the raw jobs to be deleted
                     */
                    std::vector<std::string> m_rawJobs;
                    bool m_rawJobsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEPROMETHEUSCONFIGREQUEST_H_
