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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYINFERENCESERVICEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYINFERENCESERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/InferenceContainerConfigForModify.h>
#include <tencentcloud/teo/v20220901/model/InferenceResourceConfigForModify.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyInferenceService request structure.
                */
                class ModifyInferenceServiceRequest : public AbstractModel
                {
                public:
                    ModifyInferenceServiceRequest();
                    ~ModifyInferenceServiceRequest() = default;
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
                     * 获取<p>ID of the inference service.</p>
                     * @return ServiceId <p>ID of the inference service.</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>ID of the inference service.</p>
                     * @param _serviceId <p>ID of the inference service.</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

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
                     * 获取<p>Container configuration of the inference service. Currently only support setting 1 container.</p>
                     * @return Containers <p>Container configuration of the inference service. Currently only support setting 1 container.</p>
                     * 
                     */
                    std::vector<InferenceContainerConfigForModify> GetContainers() const;

                    /**
                     * 设置<p>Container configuration of the inference service. Currently only support setting 1 container.</p>
                     * @param _containers <p>Container configuration of the inference service. Currently only support setting 1 container.</p>
                     * 
                     */
                    void SetContainers(const std::vector<InferenceContainerConfigForModify>& _containers);

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
                    InferenceResourceConfigForModify GetResourceConfig() const;

                    /**
                     * 设置<p>Resource configuration of the inference service.</p>
                     * @param _resourceConfig <p>Resource configuration of the inference service.</p>
                     * 
                     */
                    void SetResourceConfig(const InferenceResourceConfigForModify& _resourceConfig);

                    /**
                     * 判断参数 ResourceConfig 是否已赋值
                     * @return ResourceConfig 是否已赋值
                     * 
                     */
                    bool ResourceConfigHasBeenSet() const;

                    /**
                     * 获取<p>Description. The length is limited to 60 characters.</p>
                     * @return Description <p>Description. The length is limited to 60 characters.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description. The length is limited to 60 characters.</p>
                     * @param _description <p>Description. The length is limited to 60 characters.</p>
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
                     * <p>ID of the inference service.</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>Ports monitored by the model service. Only integers between 1 and 65535 are supported.</p>
                     */
                    int64_t m_listenPort;
                    bool m_listenPortHasBeenSet;

                    /**
                     * <p>Request path list for inference service. Supports up to 20 paths.</p>
                     */
                    std::vector<std::string> m_requestPaths;
                    bool m_requestPathsHasBeenSet;

                    /**
                     * <p>Container configuration of the inference service. Currently only support setting 1 container.</p>
                     */
                    std::vector<InferenceContainerConfigForModify> m_containers;
                    bool m_containersHasBeenSet;

                    /**
                     * <p>Resource configuration of the inference service.</p>
                     */
                    InferenceResourceConfigForModify m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * <p>Description. The length is limited to 60 characters.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYINFERENCESERVICEREQUEST_H_
