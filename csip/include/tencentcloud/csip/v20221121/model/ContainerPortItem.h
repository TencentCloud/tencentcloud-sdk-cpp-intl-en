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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERPORTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERPORTITEM_H_

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
                * Container Port Information
                */
                class ContainerPortItem : public AbstractModel
                {
                public:
                    ContainerPortItem();
                    ~ContainerPortItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of the listening process
                     * @return ProcessName Name of the listening process
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置Name of the listening process
                     * @param _processName Name of the listening process
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取Listening port in container
                     * @return ContainerPort Listening port in container
                     * 
                     */
                    int64_t GetContainerPort() const;

                    /**
                     * 设置Listening port in container
                     * @param _containerPort Listening port in container
                     * 
                     */
                    void SetContainerPort(const int64_t& _containerPort);

                    /**
                     * 判断参数 ContainerPort 是否已赋值
                     * @return ContainerPort 是否已赋值
                     * 
                     */
                    bool ContainerPortHasBeenSet() const;

                    /**
                     * 获取Process running user
                     * @return RunAs Process running user
                     * 
                     */
                    std::string GetRunAs() const;

                    /**
                     * 设置Process running user
                     * @param _runAs Process running user
                     * 
                     */
                    void SetRunAs(const std::string& _runAs);

                    /**
                     * 判断参数 RunAs 是否已赋值
                     * @return RunAs 是否已赋值
                     * 
                     */
                    bool RunAsHasBeenSet() const;

                    /**
                     * 获取Containerized process ID
                     * @return ContainerPID Containerized process ID
                     * 
                     */
                    int64_t GetContainerPID() const;

                    /**
                     * 设置Containerized process ID
                     * @param _containerPID Containerized process ID
                     * 
                     */
                    void SetContainerPID(const int64_t& _containerPID);

                    /**
                     * 判断参数 ContainerPID 是否已赋值
                     * @return ContainerPID 是否已赋值
                     * 
                     */
                    bool ContainerPIDHasBeenSet() const;

                    /**
                     * 获取Host private IP address
                     * @return HostInnerIP Host private IP address
                     * 
                     */
                    std::string GetHostInnerIP() const;

                    /**
                     * 设置Host private IP address
                     * @param _hostInnerIP Host private IP address
                     * 
                     */
                    void SetHostInnerIP(const std::string& _hostInnerIP);

                    /**
                     * 判断参数 HostInnerIP 是否已赋值
                     * @return HostInnerIP 是否已赋值
                     * 
                     */
                    bool HostInnerIPHasBeenSet() const;

                    /**
                     * 获取Public network IP address of the host machine.
                     * @return HostPublicIP Public network IP address of the host machine.
                     * 
                     */
                    std::string GetHostPublicIP() const;

                    /**
                     * 设置Public network IP address of the host machine.
                     * @param _hostPublicIP Public network IP address of the host machine.
                     * 
                     */
                    void SetHostPublicIP(const std::string& _hostPublicIP);

                    /**
                     * 判断参数 HostPublicIP 是否已赋值
                     * @return HostPublicIP 是否已赋值
                     * 
                     */
                    bool HostPublicIPHasBeenSet() const;

                    /**
                     * 获取Host machine mapping port
                     * @return PublicPort Host machine mapping port
                     * 
                     */
                    int64_t GetPublicPort() const;

                    /**
                     * 设置Host machine mapping port
                     * @param _publicPort Host machine mapping port
                     * 
                     */
                    void SetPublicPort(const int64_t& _publicPort);

                    /**
                     * 判断参数 PublicPort 是否已赋值
                     * @return PublicPort 是否已赋值
                     * 
                     */
                    bool PublicPortHasBeenSet() const;

                    /**
                     * 获取Network protocol type.
                     * @return ProtocolType Network protocol type.
                     * 
                     */
                    std::string GetProtocolType() const;

                    /**
                     * 设置Network protocol type.
                     * @param _protocolType Network protocol type.
                     * 
                     */
                    void SetProtocolType(const std::string& _protocolType);

                    /**
                     * 判断参数 ProtocolType 是否已赋值
                     * @return ProtocolType 是否已赋值
                     * 
                     */
                    bool ProtocolTypeHasBeenSet() const;

                private:

                    /**
                     * Name of the listening process
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * Listening port in container
                     */
                    int64_t m_containerPort;
                    bool m_containerPortHasBeenSet;

                    /**
                     * Process running user
                     */
                    std::string m_runAs;
                    bool m_runAsHasBeenSet;

                    /**
                     * Containerized process ID
                     */
                    int64_t m_containerPID;
                    bool m_containerPIDHasBeenSet;

                    /**
                     * Host private IP address
                     */
                    std::string m_hostInnerIP;
                    bool m_hostInnerIPHasBeenSet;

                    /**
                     * Public network IP address of the host machine.
                     */
                    std::string m_hostPublicIP;
                    bool m_hostPublicIPHasBeenSet;

                    /**
                     * Host machine mapping port
                     */
                    int64_t m_publicPort;
                    bool m_publicPortHasBeenSet;

                    /**
                     * Network protocol type.
                     */
                    std::string m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERPORTITEM_H_
