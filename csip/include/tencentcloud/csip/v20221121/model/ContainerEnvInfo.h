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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERENVINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERENVINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Container environment info
                */
                class ContainerEnvInfo : public AbstractModel
                {
                public:
                    ContainerEnvInfo();
                    ~ContainerEnvInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Node type</p>
                     * @return NodeType <p>Node type</p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>Node type</p>
                     * @param _nodeType <p>Node type</p>
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>docker version</p>
                     * @return DockerVersion <p>docker version</p>
                     * 
                     */
                    std::string GetDockerVersion() const;

                    /**
                     * 设置<p>docker version</p>
                     * @param _dockerVersion <p>docker version</p>
                     * 
                     */
                    void SetDockerVersion(const std::string& _dockerVersion);

                    /**
                     * 判断参数 DockerVersion 是否已赋值
                     * @return DockerVersion 是否已赋值
                     * 
                     */
                    bool DockerVersionHasBeenSet() const;

                    /**
                     * 获取<p>containerd version</p>
                     * @return ContainerdVersion <p>containerd version</p>
                     * 
                     */
                    std::string GetContainerdVersion() const;

                    /**
                     * 设置<p>containerd version</p>
                     * @param _containerdVersion <p>containerd version</p>
                     * 
                     */
                    void SetContainerdVersion(const std::string& _containerdVersion);

                    /**
                     * 判断参数 ContainerdVersion 是否已赋值
                     * @return ContainerdVersion 是否已赋值
                     * 
                     */
                    bool ContainerdVersionHasBeenSet() const;

                    /**
                     * 获取<p>File System Type</p>
                     * @return FileSystemType <p>File System Type</p>
                     * 
                     */
                    std::string GetFileSystemType() const;

                    /**
                     * 设置<p>File System Type</p>
                     * @param _fileSystemType <p>File System Type</p>
                     * 
                     */
                    void SetFileSystemType(const std::string& _fileSystemType);

                    /**
                     * 判断参数 FileSystemType 是否已赋值
                     * @return FileSystemType 是否已赋值
                     * 
                     */
                    bool FileSystemTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Node type</p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>docker version</p>
                     */
                    std::string m_dockerVersion;
                    bool m_dockerVersionHasBeenSet;

                    /**
                     * <p>containerd version</p>
                     */
                    std::string m_containerdVersion;
                    bool m_containerdVersionHasBeenSet;

                    /**
                     * <p>File System Type</p>
                     */
                    std::string m_fileSystemType;
                    bool m_fileSystemTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERENVINFO_H_
