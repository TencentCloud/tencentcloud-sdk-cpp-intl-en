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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_FLOWLOGINFO_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_FLOWLOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * Transmit streaming log information.
                */
                class FlowLogInfo : public AbstractModel
                {
                public:
                    FlowLogInfo();
                    ~FlowLogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Timestamp in seconds.
                     * @return Timestamp Timestamp in seconds.
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置Timestamp in seconds.
                     * @param _timestamp Timestamp in seconds.
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Input/output type. Valid values: `input`, `output`.
                     * @return Type Input/output type. Valid values: `input`, `output`.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Input/output type. Valid values: `input`, `output`.
                     * @param _type Input/output type. Valid values: `input`, `output`.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Input or output Id.
                     * @return InputOutputId Input or output Id.
                     * 
                     */
                    std::string GetInputOutputId() const;

                    /**
                     * 设置Input or output Id.
                     * @param _inputOutputId Input or output Id.
                     * 
                     */
                    void SetInputOutputId(const std::string& _inputOutputId);

                    /**
                     * 判断参数 InputOutputId 是否已赋值
                     * @return InputOutputId 是否已赋值
                     * 
                     */
                    bool InputOutputIdHasBeenSet() const;

                    /**
                     * 获取Protocol.
                     * @return Protocol Protocol.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol.
                     * @param _protocol Protocol.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Event code.
                     * @return EventCode Event code.
                     * 
                     */
                    std::string GetEventCode() const;

                    /**
                     * 设置Event code.
                     * @param _eventCode Event code.
                     * 
                     */
                    void SetEventCode(const std::string& _eventCode);

                    /**
                     * 判断参数 EventCode 是否已赋值
                     * @return EventCode 是否已赋值
                     * 
                     */
                    bool EventCodeHasBeenSet() const;

                    /**
                     * 获取Event information.
                     * @return EventMessage Event information.
                     * 
                     */
                    std::string GetEventMessage() const;

                    /**
                     * 设置Event information.
                     * @param _eventMessage Event information.
                     * 
                     */
                    void SetEventMessage(const std::string& _eventMessage);

                    /**
                     * 判断参数 EventMessage 是否已赋值
                     * @return EventMessage 是否已赋值
                     * 
                     */
                    bool EventMessageHasBeenSet() const;

                    /**
                     * 获取Peer IP.
                     * @return RemoteIp Peer IP.
                     * 
                     */
                    std::string GetRemoteIp() const;

                    /**
                     * 设置Peer IP.
                     * @param _remoteIp Peer IP.
                     * 
                     */
                    void SetRemoteIp(const std::string& _remoteIp);

                    /**
                     * 判断参数 RemoteIp 是否已赋值
                     * @return RemoteIp 是否已赋值
                     * 
                     */
                    bool RemoteIpHasBeenSet() const;

                    /**
                     * 获取Peer port.
                     * @return RemotePort Peer port.
                     * 
                     */
                    std::string GetRemotePort() const;

                    /**
                     * 设置Peer port.
                     * @param _remotePort Peer port.
                     * 
                     */
                    void SetRemotePort(const std::string& _remotePort);

                    /**
                     * 判断参数 RemotePort 是否已赋值
                     * @return RemotePort 是否已赋值
                     * 
                     */
                    bool RemotePortHasBeenSet() const;

                    /**
                     * 获取Primary/secondary tunnel. 0: primary, 1: backup.
                     * @return Pipeline Primary/secondary tunnel. 0: primary, 1: backup.
                     * 
                     */
                    std::string GetPipeline() const;

                    /**
                     * 设置Primary/secondary tunnel. 0: primary, 1: backup.
                     * @param _pipeline Primary/secondary tunnel. 0: primary, 1: backup.
                     * 
                     */
                    void SetPipeline(const std::string& _pipeline);

                    /**
                     * 判断参数 Pipeline 是否已赋值
                     * @return Pipeline 是否已赋值
                     * 
                     */
                    bool PipelineHasBeenSet() const;

                    /**
                     * 获取Input or output name.
                     * @return InputOutputName Input or output name.
                     * 
                     */
                    std::string GetInputOutputName() const;

                    /**
                     * 设置Input or output name.
                     * @param _inputOutputName Input or output name.
                     * 
                     */
                    void SetInputOutputName(const std::string& _inputOutputName);

                    /**
                     * 判断参数 InputOutputName 是否已赋值
                     * @return InputOutputName 是否已赋值
                     * 
                     */
                    bool InputOutputNameHasBeenSet() const;

                private:

                    /**
                     * Timestamp in seconds.
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Input/output type. Valid values: `input`, `output`.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Input or output Id.
                     */
                    std::string m_inputOutputId;
                    bool m_inputOutputIdHasBeenSet;

                    /**
                     * Protocol.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Event code.
                     */
                    std::string m_eventCode;
                    bool m_eventCodeHasBeenSet;

                    /**
                     * Event information.
                     */
                    std::string m_eventMessage;
                    bool m_eventMessageHasBeenSet;

                    /**
                     * Peer IP.
                     */
                    std::string m_remoteIp;
                    bool m_remoteIpHasBeenSet;

                    /**
                     * Peer port.
                     */
                    std::string m_remotePort;
                    bool m_remotePortHasBeenSet;

                    /**
                     * Primary/secondary tunnel. 0: primary, 1: backup.
                     */
                    std::string m_pipeline;
                    bool m_pipelineHasBeenSet;

                    /**
                     * Input or output name.
                     */
                    std::string m_inputOutputName;
                    bool m_inputOutputNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_FLOWLOGINFO_H_
