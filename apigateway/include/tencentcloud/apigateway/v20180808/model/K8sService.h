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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_K8SSERVICE_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_K8SSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/K8sLabel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Configuration of K8s service
                */
                class K8sService : public AbstractModel
                {
                public:
                    K8sService();
                    ~K8sService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Weight
                     * @return Weight Weight
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Weight
                     * @param _weight Weight
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取K8s cluster ID
                     * @return ClusterId K8s cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置K8s cluster ID
                     * @param _clusterId K8s cluster ID
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
                     * 获取Namespace of the container
                     * @return Namespace Namespace of the container
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace of the container
                     * @param _namespace Namespace of the container
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Name of the service
                     * @return ServiceName Name of the service
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Name of the service
                     * @param _serviceName Name of the service
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Service port
                     * @return Port Service port
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Service port
                     * @param _port Service port
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取The additional Label of the Pod
                     * @return ExtraLabels The additional Label of the Pod
                     * 
                     */
                    std::vector<K8sLabel> GetExtraLabels() const;

                    /**
                     * 设置The additional Label of the Pod
                     * @param _extraLabels The additional Label of the Pod
                     * 
                     */
                    void SetExtraLabels(const std::vector<K8sLabel>& _extraLabels);

                    /**
                     * 判断参数 ExtraLabels 是否已赋值
                     * @return ExtraLabels 是否已赋值
                     * 
                     */
                    bool ExtraLabelsHasBeenSet() const;

                    /**
                     * 获取(Optional) Custom name of the service
                     * @return Name (Optional) Custom name of the service
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置(Optional) Custom name of the service
                     * @param _name (Optional) Custom name of the service
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Weight
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * K8s cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Namespace of the container
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Name of the service
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Service port
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * The additional Label of the Pod
                     */
                    std::vector<K8sLabel> m_extraLabels;
                    bool m_extraLabelsHasBeenSet;

                    /**
                     * (Optional) Custom name of the service
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_K8SSERVICE_H_
