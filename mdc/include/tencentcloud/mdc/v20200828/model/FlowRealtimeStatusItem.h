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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_FLOWREALTIMESTATUSITEM_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_FLOWREALTIMESTATUSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/FlowRealtimeStatusCommon.h>
#include <tencentcloud/mdc/v20200828/model/FlowRealtimeStatusSRT.h>
#include <tencentcloud/mdc/v20200828/model/FlowRealtimeStatusRTMP.h>
#include <tencentcloud/mdc/v20200828/model/FlowRealtimeStatusRTP.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * Stream status information of the real-time stream status query API.
                */
                class FlowRealtimeStatusItem : public AbstractModel
                {
                public:
                    FlowRealtimeStatusItem();
                    ~FlowRealtimeStatusItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type. Valid values: `Input`, `Output`.
                     * @return Type Type. Valid values: `Input`, `Output`.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type. Valid values: `Input`, `Output`.
                     * @param _type Type. Valid values: `Input`, `Output`.
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
                     * 获取Input Id. If Type is Input, this field is not empty.
                     * @return InputId Input Id. If Type is Input, this field is not empty.
                     * 
                     */
                    std::string GetInputId() const;

                    /**
                     * 设置Input Id. If Type is Input, this field is not empty.
                     * @param _inputId Input Id. If Type is Input, this field is not empty.
                     * 
                     */
                    void SetInputId(const std::string& _inputId);

                    /**
                     * 判断参数 InputId 是否已赋值
                     * @return InputId 是否已赋值
                     * 
                     */
                    bool InputIdHasBeenSet() const;

                    /**
                     * 获取Output Id. If Type is Output, this field is not empty.
                     * @return OutputId Output Id. If Type is Output, this field is not empty.
                     * 
                     */
                    std::string GetOutputId() const;

                    /**
                     * 设置Output Id. If Type is Output, this field is not empty.
                     * @param _outputId Output Id. If Type is Output, this field is not empty.
                     * 
                     */
                    void SetOutputId(const std::string& _outputId);

                    /**
                     * 判断参数 OutputId 是否已赋值
                     * @return OutputId 是否已赋值
                     * 
                     */
                    bool OutputIdHasBeenSet() const;

                    /**
                     * 获取Stream Id.
                     * @return FlowId Stream Id.
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置Stream Id.
                     * @param _flowId Stream Id.
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取Protocol. SRT | RTMP.
                     * @return Protocol Protocol. SRT | RTMP.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol. SRT | RTMP.
                     * @param _protocol Protocol. SRT | RTMP.
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
                     * 获取Common status information.
                     * @return CommonStatus Common status information.
                     * 
                     */
                    FlowRealtimeStatusCommon GetCommonStatus() const;

                    /**
                     * 设置Common status information.
                     * @param _commonStatus Common status information.
                     * 
                     */
                    void SetCommonStatus(const FlowRealtimeStatusCommon& _commonStatus);

                    /**
                     * 判断参数 CommonStatus 是否已赋值
                     * @return CommonStatus 是否已赋值
                     * 
                     */
                    bool CommonStatusHasBeenSet() const;

                    /**
                     * 获取If it is the SRT Protocol, this field will be present.
                     * @return SRTStatus If it is the SRT Protocol, this field will be present.
                     * 
                     */
                    FlowRealtimeStatusSRT GetSRTStatus() const;

                    /**
                     * 设置If it is the SRT Protocol, this field will be present.
                     * @param _sRTStatus If it is the SRT Protocol, this field will be present.
                     * 
                     */
                    void SetSRTStatus(const FlowRealtimeStatusSRT& _sRTStatus);

                    /**
                     * 判断参数 SRTStatus 是否已赋值
                     * @return SRTStatus 是否已赋值
                     * 
                     */
                    bool SRTStatusHasBeenSet() const;

                    /**
                     * 获取If it is the RTMP protocol, this field exists.
                     * @return RTMPStatus If it is the RTMP protocol, this field exists.
                     * 
                     */
                    FlowRealtimeStatusRTMP GetRTMPStatus() const;

                    /**
                     * 设置If it is the RTMP protocol, this field exists.
                     * @param _rTMPStatus If it is the RTMP protocol, this field exists.
                     * 
                     */
                    void SetRTMPStatus(const FlowRealtimeStatusRTMP& _rTMPStatus);

                    /**
                     * 判断参数 RTMPStatus 是否已赋值
                     * @return RTMPStatus 是否已赋值
                     * 
                     */
                    bool RTMPStatusHasBeenSet() const;

                    /**
                     * 获取Server IP address.
                     * @return ConnectServerIP Server IP address.
                     * 
                     */
                    std::string GetConnectServerIP() const;

                    /**
                     * 设置Server IP address.
                     * @param _connectServerIP Server IP address.
                     * 
                     */
                    void SetConnectServerIP(const std::string& _connectServerIP);

                    /**
                     * 判断参数 ConnectServerIP 是否已赋值
                     * @return ConnectServerIP 是否已赋值
                     * 
                     */
                    bool ConnectServerIPHasBeenSet() const;

                    /**
                     * 获取If it is the RTP protocol, this field exists.
                     * @return RTPStatus If it is the RTP protocol, this field exists.
                     * 
                     */
                    FlowRealtimeStatusRTP GetRTPStatus() const;

                    /**
                     * 设置If it is the RTP protocol, this field exists.
                     * @param _rTPStatus If it is the RTP protocol, this field exists.
                     * 
                     */
                    void SetRTPStatus(const FlowRealtimeStatusRTP& _rTPStatus);

                    /**
                     * 判断参数 RTPStatus 是否已赋值
                     * @return RTPStatus 是否已赋值
                     * 
                     */
                    bool RTPStatusHasBeenSet() const;

                private:

                    /**
                     * Type. Valid values: `Input`, `Output`.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Input Id. If Type is Input, this field is not empty.
                     */
                    std::string m_inputId;
                    bool m_inputIdHasBeenSet;

                    /**
                     * Output Id. If Type is Output, this field is not empty.
                     */
                    std::string m_outputId;
                    bool m_outputIdHasBeenSet;

                    /**
                     * Stream Id.
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * Protocol. SRT | RTMP.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Common status information.
                     */
                    FlowRealtimeStatusCommon m_commonStatus;
                    bool m_commonStatusHasBeenSet;

                    /**
                     * If it is the SRT Protocol, this field will be present.
                     */
                    FlowRealtimeStatusSRT m_sRTStatus;
                    bool m_sRTStatusHasBeenSet;

                    /**
                     * If it is the RTMP protocol, this field exists.
                     */
                    FlowRealtimeStatusRTMP m_rTMPStatus;
                    bool m_rTMPStatusHasBeenSet;

                    /**
                     * Server IP address.
                     */
                    std::string m_connectServerIP;
                    bool m_connectServerIPHasBeenSet;

                    /**
                     * If it is the RTP protocol, this field exists.
                     */
                    FlowRealtimeStatusRTP m_rTPStatus;
                    bool m_rTPStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_FLOWREALTIMESTATUSITEM_H_
