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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCECONTAINERCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCECONTAINERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/InferenceTCRRepositoryConfig.h>
#include <tencentcloud/teo/v20220901/model/InferenceEnvironmentVariable.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Container configuration for the inference service.
                */
                class InferenceContainerConfig : public AbstractModel
                {
                public:
                    InferenceContainerConfig();
                    ~InferenceContainerConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Image type. Valid values: <li>TCR: Image from Tencent Cloud container mirroring service.</li></p>
                     * @return ImageType <p>Image type. Valid values: <li>TCR: Image from Tencent Cloud container mirroring service.</li></p>
                     * 
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置<p>Image type. Valid values: <li>TCR: Image from Tencent Cloud container mirroring service.</li></p>
                     * @param _imageType <p>Image type. Valid values: <li>TCR: Image from Tencent Cloud container mirroring service.</li></p>
                     * 
                     */
                    void SetImageType(const std::string& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     * 
                     */
                    bool ImageTypeHasBeenSet() const;

                    /**
                     * 获取<p>TCR image repository info. Required when ImageType is TCR.</p>
                     * @return TcrRepositoryConfig <p>TCR image repository info. Required when ImageType is TCR.</p>
                     * 
                     */
                    InferenceTCRRepositoryConfig GetTcrRepositoryConfig() const;

                    /**
                     * 设置<p>TCR image repository info. Required when ImageType is TCR.</p>
                     * @param _tcrRepositoryConfig <p>TCR image repository info. Required when ImageType is TCR.</p>
                     * 
                     */
                    void SetTcrRepositoryConfig(const InferenceTCRRepositoryConfig& _tcrRepositoryConfig);

                    /**
                     * 判断参数 TcrRepositoryConfig 是否已赋值
                     * @return TcrRepositoryConfig 是否已赋值
                     * 
                     */
                    bool TcrRepositoryConfigHasBeenSet() const;

                    /**
                     * 获取<p>Command executed at container startup. If left empty, the image's Entrypoint/CMD is used by default. Supports up to 1024 characters.</p>
                     * @return StartupCommand <p>Command executed at container startup. If left empty, the image's Entrypoint/CMD is used by default. Supports up to 1024 characters.</p>
                     * 
                     */
                    std::string GetStartupCommand() const;

                    /**
                     * 设置<p>Command executed at container startup. If left empty, the image's Entrypoint/CMD is used by default. Supports up to 1024 characters.</p>
                     * @param _startupCommand <p>Command executed at container startup. If left empty, the image's Entrypoint/CMD is used by default. Supports up to 1024 characters.</p>
                     * 
                     */
                    void SetStartupCommand(const std::string& _startupCommand);

                    /**
                     * 判断参数 StartupCommand 是否已赋值
                     * @return StartupCommand 是否已赋值
                     * 
                     */
                    bool StartupCommandHasBeenSet() const;

                    /**
                     * 获取<p>Environment variables for the container runtime. Supports up to 10 variables.</p>
                     * @return EnvironmentVariables <p>Environment variables for the container runtime. Supports up to 10 variables.</p>
                     * 
                     */
                    std::vector<InferenceEnvironmentVariable> GetEnvironmentVariables() const;

                    /**
                     * 设置<p>Environment variables for the container runtime. Supports up to 10 variables.</p>
                     * @param _environmentVariables <p>Environment variables for the container runtime. Supports up to 10 variables.</p>
                     * 
                     */
                    void SetEnvironmentVariables(const std::vector<InferenceEnvironmentVariable>& _environmentVariables);

                    /**
                     * 判断参数 EnvironmentVariables 是否已赋值
                     * @return EnvironmentVariables 是否已赋值
                     * 
                     */
                    bool EnvironmentVariablesHasBeenSet() const;

                private:

                    /**
                     * <p>Image type. Valid values: <li>TCR: Image from Tencent Cloud container mirroring service.</li></p>
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * <p>TCR image repository info. Required when ImageType is TCR.</p>
                     */
                    InferenceTCRRepositoryConfig m_tcrRepositoryConfig;
                    bool m_tcrRepositoryConfigHasBeenSet;

                    /**
                     * <p>Command executed at container startup. If left empty, the image's Entrypoint/CMD is used by default. Supports up to 1024 characters.</p>
                     */
                    std::string m_startupCommand;
                    bool m_startupCommandHasBeenSet;

                    /**
                     * <p>Environment variables for the container runtime. Supports up to 10 variables.</p>
                     */
                    std::vector<InferenceEnvironmentVariable> m_environmentVariables;
                    bool m_environmentVariablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCECONTAINERCONFIG_H_
