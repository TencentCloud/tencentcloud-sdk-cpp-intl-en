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
                * The real-time status information of a flow.
                */
                class FlowRealtimeStatusItem : public AbstractModel
                {
                public:
                    FlowRealtimeStatusItem();
                    ~FlowRealtimeStatusItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether it is an input or output. Valid values: Input, Output.
                     * @return Type Whether it is an input or output. Valid values: Input, Output.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Whether it is an input or output. Valid values: Input, Output.
                     * @param _type Whether it is an input or output. Valid values: Input, Output.
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
                     * 获取The input ID, which is not empty if `Type` is `Input`.
                     * @return InputId The input ID, which is not empty if `Type` is `Input`.
                     * 
                     */
                    std::string GetInputId() const;

                    /**
                     * 设置The input ID, which is not empty if `Type` is `Input`.
                     * @param _inputId The input ID, which is not empty if `Type` is `Input`.
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
                     * 获取The output ID, which is not empty if `Type` is `Output`.
                     * @return OutputId The output ID, which is not empty if `Type` is `Output`.
                     * 
                     */
                    std::string GetOutputId() const;

                    /**
                     * 设置The output ID, which is not empty if `Type` is `Output`.
                     * @param _outputId The output ID, which is not empty if `Type` is `Output`.
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
                     * 获取The flow ID.
                     * @return FlowId The flow ID.
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置The flow ID.
                     * @param _flowId The flow ID.
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
                     * 获取The protocol used. Valid values: SRT, RTP, RTMP.
                     * @return Protocol The protocol used. Valid values: SRT, RTP, RTMP.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置The protocol used. Valid values: SRT, RTP, RTMP.
                     * @param _protocol The protocol used. Valid values: SRT, RTP, RTMP.
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
                     * 获取The common status information.
                     * @return CommonStatus The common status information.
                     * 
                     */
                    FlowRealtimeStatusCommon GetCommonStatus() const;

                    /**
                     * 设置The common status information.
                     * @param _commonStatus The common status information.
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
                     * 获取This parameter is returned if `Protocol` is `SRT`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SRTStatus This parameter is returned if `Protocol` is `SRT`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    FlowRealtimeStatusSRT GetSRTStatus() const;

                    /**
                     * 设置This parameter is returned if `Protocol` is `SRT`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _sRTStatus This parameter is returned if `Protocol` is `SRT`.
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取This parameter is returned if `Protocol` is `RTMP`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RTMPStatus This parameter is returned if `Protocol` is `RTMP`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    FlowRealtimeStatusRTMP GetRTMPStatus() const;

                    /**
                     * 设置This parameter is returned if `Protocol` is `RTMP`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _rTMPStatus This parameter is returned if `Protocol` is `RTMP`.
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取The server IP.
                     * @return ConnectServerIP The server IP.
                     * 
                     */
                    std::string GetConnectServerIP() const;

                    /**
                     * 设置The server IP.
                     * @param _connectServerIP The server IP.
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
                     * 获取This parameter is returned if the RTP protocol is used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RTPStatus This parameter is returned if the RTP protocol is used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    FlowRealtimeStatusRTP GetRTPStatus() const;

                    /**
                     * 设置This parameter is returned if the RTP protocol is used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _rTPStatus This parameter is returned if the RTP protocol is used.
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * Whether it is an input or output. Valid values: Input, Output.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The input ID, which is not empty if `Type` is `Input`.
                     */
                    std::string m_inputId;
                    bool m_inputIdHasBeenSet;

                    /**
                     * The output ID, which is not empty if `Type` is `Output`.
                     */
                    std::string m_outputId;
                    bool m_outputIdHasBeenSet;

                    /**
                     * The flow ID.
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * The protocol used. Valid values: SRT, RTP, RTMP.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * The common status information.
                     */
                    FlowRealtimeStatusCommon m_commonStatus;
                    bool m_commonStatusHasBeenSet;

                    /**
                     * This parameter is returned if `Protocol` is `SRT`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    FlowRealtimeStatusSRT m_sRTStatus;
                    bool m_sRTStatusHasBeenSet;

                    /**
                     * This parameter is returned if `Protocol` is `RTMP`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    FlowRealtimeStatusRTMP m_rTMPStatus;
                    bool m_rTMPStatusHasBeenSet;

                    /**
                     * The server IP.
                     */
                    std::string m_connectServerIP;
                    bool m_connectServerIPHasBeenSet;

                    /**
                     * This parameter is returned if the RTP protocol is used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    FlowRealtimeStatusRTP m_rTPStatus;
                    bool m_rTPStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_FLOWREALTIMESTATUSITEM_H_
