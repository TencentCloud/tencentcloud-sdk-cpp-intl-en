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
                * The logs of a flow.
                */
                class FlowLogInfo : public AbstractModel
                {
                public:
                    FlowLogInfo();
                    ~FlowLogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The timestamp (seconds).
                     * @return Timestamp The timestamp (seconds).
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置The timestamp (seconds).
                     * @param _timestamp The timestamp (seconds).
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
                     * 获取Whether it is an input or output.
                     * @return Type Whether it is an input or output.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Whether it is an input or output.
                     * @param _type Whether it is an input or output.
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
                     * 获取The input or output ID.
                     * @return InputOutputId The input or output ID.
                     * 
                     */
                    std::string GetInputOutputId() const;

                    /**
                     * 设置The input or output ID.
                     * @param _inputOutputId The input or output ID.
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
                     * 获取The protocol.
                     * @return Protocol The protocol.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置The protocol.
                     * @param _protocol The protocol.
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
                     * 获取The event code.
                     * @return EventCode The event code.
                     * 
                     */
                    std::string GetEventCode() const;

                    /**
                     * 设置The event code.
                     * @param _eventCode The event code.
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
                     * 获取The event information.
                     * @return EventMessage The event information.
                     * 
                     */
                    std::string GetEventMessage() const;

                    /**
                     * 设置The event information.
                     * @param _eventMessage The event information.
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
                     * 获取The peer IP.
                     * @return RemoteIp The peer IP.
                     * 
                     */
                    std::string GetRemoteIp() const;

                    /**
                     * 设置The peer IP.
                     * @param _remoteIp The peer IP.
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
                     * 获取The peer port.
                     * @return RemotePort The peer port.
                     * 
                     */
                    std::string GetRemotePort() const;

                    /**
                     * 设置The peer port.
                     * @param _remotePort The peer port.
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
                     * 获取Whether it is a primary or backup pipeline. Valid values: 0 (primary), 1 (backup).
                     * @return Pipeline Whether it is a primary or backup pipeline. Valid values: 0 (primary), 1 (backup).
                     * 
                     */
                    std::string GetPipeline() const;

                    /**
                     * 设置Whether it is a primary or backup pipeline. Valid values: 0 (primary), 1 (backup).
                     * @param _pipeline Whether it is a primary or backup pipeline. Valid values: 0 (primary), 1 (backup).
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
                     * 获取The input or output name.
                     * @return InputOutputName The input or output name.
                     * 
                     */
                    std::string GetInputOutputName() const;

                    /**
                     * 设置The input or output name.
                     * @param _inputOutputName The input or output name.
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
                     * The timestamp (seconds).
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Whether it is an input or output.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The input or output ID.
                     */
                    std::string m_inputOutputId;
                    bool m_inputOutputIdHasBeenSet;

                    /**
                     * The protocol.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * The event code.
                     */
                    std::string m_eventCode;
                    bool m_eventCodeHasBeenSet;

                    /**
                     * The event information.
                     */
                    std::string m_eventMessage;
                    bool m_eventMessageHasBeenSet;

                    /**
                     * The peer IP.
                     */
                    std::string m_remoteIp;
                    bool m_remoteIpHasBeenSet;

                    /**
                     * The peer port.
                     */
                    std::string m_remotePort;
                    bool m_remotePortHasBeenSet;

                    /**
                     * Whether it is a primary or backup pipeline. Valid values: 0 (primary), 1 (backup).
                     */
                    std::string m_pipeline;
                    bool m_pipelineHasBeenSet;

                    /**
                     * The input or output name.
                     */
                    std::string m_inputOutputName;
                    bool m_inputOutputNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_FLOWLOGINFO_H_
