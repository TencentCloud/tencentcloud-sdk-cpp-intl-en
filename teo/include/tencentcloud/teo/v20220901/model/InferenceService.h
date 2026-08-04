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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICE_H_

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
                * Inference service info.
                */
                class InferenceService : public AbstractModel
                {
                public:
                    InferenceService();
                    ~InferenceService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the inference service.
                     * @return ServiceId ID of the inference service.
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置ID of the inference service.
                     * @param _serviceId ID of the inference service.
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
                     * 获取Reasoning service name.
                     * @return Name Reasoning service name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Reasoning service name.
                     * @param _name Reasoning service name.
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
                     * 获取Description information.
                     * @return Description Description information.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description information.
                     * @param _description Description information.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Ports monitored by the model service. Only integers between 1 and 65535 are supported.
                     * @return ListenPort Ports monitored by the model service. Only integers between 1 and 65535 are supported.
                     * 
                     */
                    int64_t GetListenPort() const;

                    /**
                     * 设置Ports monitored by the model service. Only integers between 1 and 65535 are supported.
                     * @param _listenPort Ports monitored by the model service. Only integers between 1 and 65535 are supported.
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
                     * 获取Request path list for inference service. Supports up to 20 paths.
                     * @return RequestPaths Request path list for inference service. Supports up to 20 paths.
                     * 
                     */
                    std::vector<std::string> GetRequestPaths() const;

                    /**
                     * 设置Request path list for inference service. Supports up to 20 paths.
                     * @param _requestPaths Request path list for inference service. Supports up to 20 paths.
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

                    /**
                     * 获取Reasoning service status, which includes the following status: <li>Deploying: deployment in progress;</li><li>Running: running;</li><li>Stopping: stopping;</li><li>Stopped: stopped;</li><li>Exception: exception;</li><li>Banned: banned.</li>
                     * @return Status Reasoning service status, which includes the following status: <li>Deploying: deployment in progress;</li><li>Running: running;</li><li>Stopping: stopping;</li><li>Stopped: stopped;</li><li>Exception: exception;</li><li>Banned: banned.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Reasoning service status, which includes the following status: <li>Deploying: deployment in progress;</li><li>Running: running;</li><li>Stopping: stopping;</li><li>Stopped: stopped;</li><li>Exception: exception;</li><li>Banned: banned.</li>
                     * @param _status Reasoning service status, which includes the following status: <li>Deploying: deployment in progress;</li><li>Running: running;</li><li>Stopping: stopping;</li><li>Stopped: stopped;</li><li>Exception: exception;</li><li>Banned: banned.</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Scaling status. Valid values: <li>Normal: Stable operation, no scaling operation in progress;</li><li>ScalingOut: Scaling out;</li><li>ScalingIn: Scaling in.</li>
                     * @return ScalingStatus Scaling status. Valid values: <li>Normal: Stable operation, no scaling operation in progress;</li><li>ScalingOut: Scaling out;</li><li>ScalingIn: Scaling in.</li>
                     * 
                     */
                    std::string GetScalingStatus() const;

                    /**
                     * 设置Scaling status. Valid values: <li>Normal: Stable operation, no scaling operation in progress;</li><li>ScalingOut: Scaling out;</li><li>ScalingIn: Scaling in.</li>
                     * @param _scalingStatus Scaling status. Valid values: <li>Normal: Stable operation, no scaling operation in progress;</li><li>ScalingOut: Scaling out;</li><li>ScalingIn: Scaling in.</li>
                     * 
                     */
                    void SetScalingStatus(const std::string& _scalingStatus);

                    /**
                     * 判断参数 ScalingStatus 是否已赋值
                     * @return ScalingStatus 是否已赋值
                     * 
                     */
                    bool ScalingStatusHasBeenSet() const;

                    /**
                     * 获取Number of running instances.
                     * @return CurrentInstanceCount Number of running instances.
                     * 
                     */
                    int64_t GetCurrentInstanceCount() const;

                    /**
                     * 设置Number of running instances.
                     * @param _currentInstanceCount Number of running instances.
                     * 
                     */
                    void SetCurrentInstanceCount(const int64_t& _currentInstanceCount);

                    /**
                     * 判断参数 CurrentInstanceCount 是否已赋值
                     * @return CurrentInstanceCount 是否已赋值
                     * 
                     */
                    bool CurrentInstanceCountHasBeenSet() const;

                    /**
                     * 获取Reasoning access address, perform reasoning via links to access the underlying model.
                     * @return InferenceURL Reasoning access address, perform reasoning via links to access the underlying model.
                     * 
                     */
                    std::string GetInferenceURL() const;

                    /**
                     * 设置Reasoning access address, perform reasoning via links to access the underlying model.
                     * @param _inferenceURL Reasoning access address, perform reasoning via links to access the underlying model.
                     * 
                     */
                    void SetInferenceURL(const std::string& _inferenceURL);

                    /**
                     * 判断参数 InferenceURL 是否已赋值
                     * @return InferenceURL 是否已赋值
                     * 
                     */
                    bool InferenceURLHasBeenSet() const;

                    /**
                     * 获取Creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return CreateTime Creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _createTime Creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modification time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return UpdateTime Last modification time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modification time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _updateTime Last modification time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * ID of the inference service.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Reasoning service name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description information.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Ports monitored by the model service. Only integers between 1 and 65535 are supported.
                     */
                    int64_t m_listenPort;
                    bool m_listenPortHasBeenSet;

                    /**
                     * Request path list for inference service. Supports up to 20 paths.
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

                    /**
                     * Reasoning service status, which includes the following status: <li>Deploying: deployment in progress;</li><li>Running: running;</li><li>Stopping: stopping;</li><li>Stopped: stopped;</li><li>Exception: exception;</li><li>Banned: banned.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Scaling status. Valid values: <li>Normal: Stable operation, no scaling operation in progress;</li><li>ScalingOut: Scaling out;</li><li>ScalingIn: Scaling in.</li>
                     */
                    std::string m_scalingStatus;
                    bool m_scalingStatusHasBeenSet;

                    /**
                     * Number of running instances.
                     */
                    int64_t m_currentInstanceCount;
                    bool m_currentInstanceCountHasBeenSet;

                    /**
                     * Reasoning access address, perform reasoning via links to access the underlying model.
                     */
                    std::string m_inferenceURL;
                    bool m_inferenceURLHasBeenSet;

                    /**
                     * Creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modification time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESERVICE_H_
