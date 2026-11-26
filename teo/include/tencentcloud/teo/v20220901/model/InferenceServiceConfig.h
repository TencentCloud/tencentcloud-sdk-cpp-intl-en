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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICECONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/InferenceContainerConfig.h>
#include <tencentcloud/teo/v20220901/model/InferenceResourceConfig.h>
#include <tencentcloud/teo/v20220901/model/InferenceAffinityConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Deployment configuration of a single inference service.
                */
                class InferenceServiceConfig : public AbstractModel
                {
                public:
                    InferenceServiceConfig();
                    ~InferenceServiceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Ports monitored by the model service.</p>
                     * @return ListenPort <p>Ports monitored by the model service.</p>
                     * 
                     */
                    int64_t GetListenPort() const;

                    /**
                     * 设置<p>Ports monitored by the model service.</p>
                     * @param _listenPort <p>Ports monitored by the model service.</p>
                     * 
                     */
                    void SetListenPort(const int64_t& _listenPort);

                    /**
                     * 判断参数 ListenPort 是否已赋值
                     * @return ListenPort 是否已赋值
                     * 
                     */
                    bool ListenPortHasBeenSet() const;

                    /**
                     * 获取<p>Request path list of the inference service.</p>
                     * @return RequestPaths <p>Request path list of the inference service.</p>
                     * 
                     */
                    std::vector<std::string> GetRequestPaths() const;

                    /**
                     * 设置<p>Request path list of the inference service.</p>
                     * @param _requestPaths <p>Request path list of the inference service.</p>
                     * 
                     */
                    void SetRequestPaths(const std::vector<std::string>& _requestPaths);

                    /**
                     * 判断参数 RequestPaths 是否已赋值
                     * @return RequestPaths 是否已赋值
                     * 
                     */
                    bool RequestPathsHasBeenSet() const;

                    /**
                     * 获取<p>Container configuration for the inference service.</p>
                     * @return Containers <p>Container configuration for the inference service.</p>
                     * 
                     */
                    std::vector<InferenceContainerConfig> GetContainers() const;

                    /**
                     * 设置<p>Container configuration for the inference service.</p>
                     * @param _containers <p>Container configuration for the inference service.</p>
                     * 
                     */
                    void SetContainers(const std::vector<InferenceContainerConfig>& _containers);

                    /**
                     * 判断参数 Containers 是否已赋值
                     * @return Containers 是否已赋值
                     * 
                     */
                    bool ContainersHasBeenSet() const;

                    /**
                     * 获取<p>Resource configuration of the inference service.</p>
                     * @return ResourceConfig <p>Resource configuration of the inference service.</p>
                     * 
                     */
                    InferenceResourceConfig GetResourceConfig() const;

                    /**
                     * 设置<p>Resource configuration of the inference service.</p>
                     * @param _resourceConfig <p>Resource configuration of the inference service.</p>
                     * 
                     */
                    void SetResourceConfig(const InferenceResourceConfig& _resourceConfig);

                    /**
                     * 判断参数 ResourceConfig 是否已赋值
                     * @return ResourceConfig 是否已赋值
                     * 
                     */
                    bool ResourceConfigHasBeenSet() const;

                    /**
                     * 获取<p>Inference service affinity configuration.</p>
                     * @return AffinityConfig <p>Inference service affinity configuration.</p>
                     * 
                     */
                    InferenceAffinityConfig GetAffinityConfig() const;

                    /**
                     * 设置<p>Inference service affinity configuration.</p>
                     * @param _affinityConfig <p>Inference service affinity configuration.</p>
                     * 
                     */
                    void SetAffinityConfig(const InferenceAffinityConfig& _affinityConfig);

                    /**
                     * 判断参数 AffinityConfig 是否已赋值
                     * @return AffinityConfig 是否已赋值
                     * 
                     */
                    bool AffinityConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Ports monitored by the model service.</p>
                     */
                    int64_t m_listenPort;
                    bool m_listenPortHasBeenSet;

                    /**
                     * <p>Request path list of the inference service.</p>
                     */
                    std::vector<std::string> m_requestPaths;
                    bool m_requestPathsHasBeenSet;

                    /**
                     * <p>Container configuration for the inference service.</p>
                     */
                    std::vector<InferenceContainerConfig> m_containers;
                    bool m_containersHasBeenSet;

                    /**
                     * <p>Resource configuration of the inference service.</p>
                     */
                    InferenceResourceConfig m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * <p>Inference service affinity configuration.</p>
                     */
                    InferenceAffinityConfig m_affinityConfig;
                    bool m_affinityConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICECONFIG_H_
