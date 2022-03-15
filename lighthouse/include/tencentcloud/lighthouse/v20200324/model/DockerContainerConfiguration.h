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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DOCKERCONTAINERCONFIGURATION_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DOCKERCONTAINERCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/ContainerEnv.h>
#include <tencentcloud/lighthouse/v20200324/model/DockerContainerPublishPort.h>
#include <tencentcloud/lighthouse/v20200324/model/DockerContainerVolume.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Configuration used to create Docker containers
                */
                class DockerContainerConfiguration : public AbstractModel
                {
                public:
                    DockerContainerConfiguration();
                    ~DockerContainerConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Container image address
                     * @return ContainerImage Container image address
                     */
                    std::string GetContainerImage() const;

                    /**
                     * 设置Container image address
                     * @param ContainerImage Container image address
                     */
                    void SetContainerImage(const std::string& _containerImage);

                    /**
                     * 判断参数 ContainerImage 是否已赋值
                     * @return ContainerImage 是否已赋值
                     */
                    bool ContainerImageHasBeenSet() const;

                    /**
                     * 获取Container name
                     * @return ContainerName Container name
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置Container name
                     * @param ContainerName Container name
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取List of environment variables
                     * @return Envs List of environment variables
                     */
                    std::vector<ContainerEnv> GetEnvs() const;

                    /**
                     * 设置List of environment variables
                     * @param Envs List of environment variables
                     */
                    void SetEnvs(const std::vector<ContainerEnv>& _envs);

                    /**
                     * 判断参数 Envs 是否已赋值
                     * @return Envs 是否已赋值
                     */
                    bool EnvsHasBeenSet() const;

                    /**
                     * 获取List of mappings of container ports and host ports
                     * @return PublishPorts List of mappings of container ports and host ports
                     */
                    std::vector<DockerContainerPublishPort> GetPublishPorts() const;

                    /**
                     * 设置List of mappings of container ports and host ports
                     * @param PublishPorts List of mappings of container ports and host ports
                     */
                    void SetPublishPorts(const std::vector<DockerContainerPublishPort>& _publishPorts);

                    /**
                     * 判断参数 PublishPorts 是否已赋值
                     * @return PublishPorts 是否已赋值
                     */
                    bool PublishPortsHasBeenSet() const;

                    /**
                     * 获取List of container mount volumes
                     * @return Volumes List of container mount volumes
                     */
                    std::vector<DockerContainerVolume> GetVolumes() const;

                    /**
                     * 设置List of container mount volumes
                     * @param Volumes List of container mount volumes
                     */
                    void SetVolumes(const std::vector<DockerContainerVolume>& _volumes);

                    /**
                     * 判断参数 Volumes 是否已赋值
                     * @return Volumes 是否已赋值
                     */
                    bool VolumesHasBeenSet() const;

                    /**
                     * 获取The command to run
                     * @return Command The command to run
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置The command to run
                     * @param Command The command to run
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     */
                    bool CommandHasBeenSet() const;

                private:

                    /**
                     * Container image address
                     */
                    std::string m_containerImage;
                    bool m_containerImageHasBeenSet;

                    /**
                     * Container name
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * List of environment variables
                     */
                    std::vector<ContainerEnv> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * List of mappings of container ports and host ports
                     */
                    std::vector<DockerContainerPublishPort> m_publishPorts;
                    bool m_publishPortsHasBeenSet;

                    /**
                     * List of container mount volumes
                     */
                    std::vector<DockerContainerVolume> m_volumes;
                    bool m_volumesHasBeenSet;

                    /**
                     * The command to run
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DOCKERCONTAINERCONFIGURATION_H_
