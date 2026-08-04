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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCECONTAINERCONFIGFORMODIFY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCECONTAINERCONFIGFORMODIFY_H_

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
                * Parameter modification of the configured inference service container.
                */
                class InferenceContainerConfigForModify : public AbstractModel
                {
                public:
                    InferenceContainerConfigForModify();
                    ~InferenceContainerConfigForModify() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image type. Valid values: <li>TCR: a Tencent Cloud container mirroring service mirror.</li>
                     * @return ImageType Image type. Valid values: <li>TCR: a Tencent Cloud container mirroring service mirror.</li>
                     * 
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置Image type. Valid values: <li>TCR: a Tencent Cloud container mirroring service mirror.</li>
                     * @param _imageType Image type. Valid values: <li>TCR: a Tencent Cloud container mirroring service mirror.</li>
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
                     * 获取TCR image repository information. Required when ImageType is TCR.
                     * @return TcrRepositoryConfig TCR image repository information. Required when ImageType is TCR.
                     * 
                     */
                    InferenceTCRRepositoryConfig GetTcrRepositoryConfig() const;

                    /**
                     * 设置TCR image repository information. Required when ImageType is TCR.
                     * @param _tcrRepositoryConfig TCR image repository information. Required when ImageType is TCR.
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
                     * 获取Command executed at container startup. Uses the mirror's Entrypoint/CMD by default when left empty. Supports up to 1024 characters.
                     * @return StartupCommand Command executed at container startup. Uses the mirror's Entrypoint/CMD by default when left empty. Supports up to 1024 characters.
                     * 
                     */
                    std::string GetStartupCommand() const;

                    /**
                     * 设置Command executed at container startup. Uses the mirror's Entrypoint/CMD by default when left empty. Supports up to 1024 characters.
                     * @param _startupCommand Command executed at container startup. Uses the mirror's Entrypoint/CMD by default when left empty. Supports up to 1024 characters.
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
                     * 获取Environment variables of the container runtime. Supports up to 10 variables.
                     * @return EnvironmentVariables Environment variables of the container runtime. Supports up to 10 variables.
                     * 
                     */
                    std::vector<InferenceEnvironmentVariable> GetEnvironmentVariables() const;

                    /**
                     * 设置Environment variables of the container runtime. Supports up to 10 variables.
                     * @param _environmentVariables Environment variables of the container runtime. Supports up to 10 variables.
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
                     * Image type. Valid values: <li>TCR: a Tencent Cloud container mirroring service mirror.</li>
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * TCR image repository information. Required when ImageType is TCR.
                     */
                    InferenceTCRRepositoryConfig m_tcrRepositoryConfig;
                    bool m_tcrRepositoryConfigHasBeenSet;

                    /**
                     * Command executed at container startup. Uses the mirror's Entrypoint/CMD by default when left empty. Supports up to 1024 characters.
                     */
                    std::string m_startupCommand;
                    bool m_startupCommandHasBeenSet;

                    /**
                     * Environment variables of the container runtime. Supports up to 10 variables.
                     */
                    std::vector<InferenceEnvironmentVariable> m_environmentVariables;
                    bool m_environmentVariablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCECONTAINERCONFIGFORMODIFY_H_
