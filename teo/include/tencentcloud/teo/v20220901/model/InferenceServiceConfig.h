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


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Deployment configuration for a single inference service.
                */
                class InferenceServiceConfig : public AbstractModel
                {
                public:
                    InferenceServiceConfig();
                    ~InferenceServiceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Ports monitored by the model service.
                     * @return ListenPort Ports monitored by the model service.
                     * 
                     */
                    int64_t GetListenPort() const;

                    /**
                     * 设置Ports monitored by the model service.
                     * @param _listenPort Ports monitored by the model service.
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
                     * 获取Request path list for inference service.
                     * @return RequestPaths Request path list for inference service.
                     * 
                     */
                    std::vector<std::string> GetRequestPaths() const;

                    /**
                     * 设置Request path list for inference service.
                     * @param _requestPaths Request path list for inference service.
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
                     * 获取Container configuration of the inference service.
                     * @return Containers Container configuration of the inference service.
                     * 
                     */
                    std::vector<InferenceContainerConfig> GetContainers() const;

                    /**
                     * 设置Container configuration of the inference service.
                     * @param _containers Container configuration of the inference service.
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
                     * 获取Resource configuration of the inference service.
                     * @return ResourceConfig Resource configuration of the inference service.
                     * 
                     */
                    InferenceResourceConfig GetResourceConfig() const;

                    /**
                     * 设置Resource configuration of the inference service.
                     * @param _resourceConfig Resource configuration of the inference service.
                     * 
                     */
                    void SetResourceConfig(const InferenceResourceConfig& _resourceConfig);

                    /**
                     * 判断参数 ResourceConfig 是否已赋值
                     * @return ResourceConfig 是否已赋值
                     * 
                     */
                    bool ResourceConfigHasBeenSet() const;

                private:

                    /**
                     * Ports monitored by the model service.
                     */
                    int64_t m_listenPort;
                    bool m_listenPortHasBeenSet;

                    /**
                     * Request path list for inference service.
                     */
                    std::vector<std::string> m_requestPaths;
                    bool m_requestPathsHasBeenSet;

                    /**
                     * Container configuration of the inference service.
                     */
                    std::vector<InferenceContainerConfig> m_containers;
                    bool m_containersHasBeenSet;

                    /**
                     * Resource configuration of the inference service.
                     */
                    InferenceResourceConfig m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICECONFIG_H_
