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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEINFERENCESERVICEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEINFERENCESERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateInferenceService request structure.
                */
                class CreateInferenceServiceRequest : public AbstractModel
                {
                public:
                    CreateInferenceServiceRequest();
                    ~CreateInferenceServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Site ID.</p>
                     * @return ZoneId <p>Site ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Site ID.</p>
                     * @param _zoneId <p>Site ID.</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>Service name. Length limit is no more than 30 characters, only lowercase letters, digits, and hyphens are supported, must start with a letter, ends with a digit or letter, duplicates are not supported.</p>
                     * @return Name <p>Service name. Length limit is no more than 30 characters, only lowercase letters, digits, and hyphens are supported, must start with a letter, ends with a digit or letter, duplicates are not supported.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Service name. Length limit is no more than 30 characters, only lowercase letters, digits, and hyphens are supported, must start with a letter, ends with a digit or letter, duplicates are not supported.</p>
                     * @param _name <p>Service name. Length limit is no more than 30 characters, only lowercase letters, digits, and hyphens are supported, must start with a letter, ends with a digit or letter, duplicates are not supported.</p>
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
                     * 获取<p>Ports monitored by the model service. Only integers between 1 and 65535 are supported.</p>
                     * @return ListenPort <p>Ports monitored by the model service. Only integers between 1 and 65535 are supported.</p>
                     * 
                     */
                    int64_t GetListenPort() const;

                    /**
                     * 设置<p>Ports monitored by the model service. Only integers between 1 and 65535 are supported.</p>
                     * @param _listenPort <p>Ports monitored by the model service. Only integers between 1 and 65535 are supported.</p>
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
                     * 获取<p>Container configuration of the inference service. Currently only support setting 1 container.</p>
                     * @return Containers <p>Container configuration of the inference service. Currently only support setting 1 container.</p>
                     * 
                     */
                    std::vector<InferenceContainerConfig> GetContainers() const;

                    /**
                     * 设置<p>Container configuration of the inference service. Currently only support setting 1 container.</p>
                     * @param _containers <p>Container configuration of the inference service. Currently only support setting 1 container.</p>
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
                     * 获取<p>Request path list for inference service. Supports up to 20 paths.</p>
                     * @return RequestPaths <p>Request path list for inference service. Supports up to 20 paths.</p>
                     * 
                     */
                    std::vector<std::string> GetRequestPaths() const;

                    /**
                     * 设置<p>Request path list for inference service. Supports up to 20 paths.</p>
                     * @param _requestPaths <p>Request path list for inference service. Supports up to 20 paths.</p>
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
                     * 获取<p>Description. Length limit: no more than 60 characters.</p>
                     * @return Description <p>Description. Length limit: no more than 60 characters.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description. Length limit: no more than 60 characters.</p>
                     * @param _description <p>Description. Length limit: no more than 60 characters.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>Site ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Service name. Length limit is no more than 30 characters, only lowercase letters, digits, and hyphens are supported, must start with a letter, ends with a digit or letter, duplicates are not supported.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Ports monitored by the model service. Only integers between 1 and 65535 are supported.</p>
                     */
                    int64_t m_listenPort;
                    bool m_listenPortHasBeenSet;

                    /**
                     * <p>Container configuration of the inference service. Currently only support setting 1 container.</p>
                     */
                    std::vector<InferenceContainerConfig> m_containers;
                    bool m_containersHasBeenSet;

                    /**
                     * <p>Resource configuration of the inference service.</p>
                     */
                    InferenceResourceConfig m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * <p>Request path list for inference service. Supports up to 20 paths.</p>
                     */
                    std::vector<std::string> m_requestPaths;
                    bool m_requestPathsHasBeenSet;

                    /**
                     * <p>Description. Length limit: no more than 60 characters.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEINFERENCESERVICEREQUEST_H_
