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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_MODIFYINPUT_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_MODIFYINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/CreateInputSRTSettings.h>
#include <tencentcloud/mdc/v20200828/model/CreateInputRTPSettings.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * The new input configuration.
                */
                class ModifyInput : public AbstractModel
                {
                public:
                    ModifyInput();
                    ~ModifyInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The input ID.
                     * @return InputId The input ID.
                     * 
                     */
                    std::string GetInputId() const;

                    /**
                     * 设置The input ID.
                     * @param _inputId The input ID.
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
                     * 获取The input name.
                     * @return InputName The input name.
                     * 
                     */
                    std::string GetInputName() const;

                    /**
                     * 设置The input name.
                     * @param _inputName The input name.
                     * 
                     */
                    void SetInputName(const std::string& _inputName);

                    /**
                     * 判断参数 InputName 是否已赋值
                     * @return InputName 是否已赋值
                     * 
                     */
                    bool InputNameHasBeenSet() const;

                    /**
                     * 获取The description of the input.
                     * @return Description The description of the input.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置The description of the input.
                     * @param _description The description of the input.
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
                     * 获取The IP addresses (CIDR) allowed to push streams.
                     * @return AllowIpList The IP addresses (CIDR) allowed to push streams.
                     * 
                     */
                    std::vector<std::string> GetAllowIpList() const;

                    /**
                     * 设置The IP addresses (CIDR) allowed to push streams.
                     * @param _allowIpList The IP addresses (CIDR) allowed to push streams.
                     * 
                     */
                    void SetAllowIpList(const std::vector<std::string>& _allowIpList);

                    /**
                     * 判断参数 AllowIpList 是否已赋值
                     * @return AllowIpList 是否已赋值
                     * 
                     */
                    bool AllowIpListHasBeenSet() const;

                    /**
                     * 获取The SRT configuration information.
                     * @return SRTSettings The SRT configuration information.
                     * 
                     */
                    CreateInputSRTSettings GetSRTSettings() const;

                    /**
                     * 设置The SRT configuration information.
                     * @param _sRTSettings The SRT configuration information.
                     * 
                     */
                    void SetSRTSettings(const CreateInputSRTSettings& _sRTSettings);

                    /**
                     * 判断参数 SRTSettings 是否已赋值
                     * @return SRTSettings 是否已赋值
                     * 
                     */
                    bool SRTSettingsHasBeenSet() const;

                    /**
                     * 获取The RTP configuration information.
                     * @return RTPSettings The RTP configuration information.
                     * 
                     */
                    CreateInputRTPSettings GetRTPSettings() const;

                    /**
                     * 设置The RTP configuration information.
                     * @param _rTPSettings The RTP configuration information.
                     * 
                     */
                    void SetRTPSettings(const CreateInputRTPSettings& _rTPSettings);

                    /**
                     * 判断参数 RTPSettings 是否已赋值
                     * @return RTPSettings 是否已赋值
                     * 
                     */
                    bool RTPSettingsHasBeenSet() const;

                    /**
                     * 获取The input protocol. Valid values: SRT, RTP, RTMP.
If there is an RTP input, the output must be RTP.
If there is an RTMP input, the output must be SRT or RTMP.
If there is an SRT input, the output must be SRT.
                     * @return Protocol The input protocol. Valid values: SRT, RTP, RTMP.
If there is an RTP input, the output must be RTP.
If there is an RTMP input, the output must be SRT or RTMP.
If there is an SRT input, the output must be SRT.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置The input protocol. Valid values: SRT, RTP, RTMP.
If there is an RTP input, the output must be RTP.
If there is an RTMP input, the output must be SRT or RTMP.
If there is an SRT input, the output must be SRT.
                     * @param _protocol The input protocol. Valid values: SRT, RTP, RTMP.
If there is an RTP input, the output must be RTP.
If there is an RTMP input, the output must be SRT or RTMP.
If there is an SRT input, the output must be SRT.
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
                     * 获取Whether to enable input failover. Valid values: OPEN, CLOSE.
                     * @return FailOver Whether to enable input failover. Valid values: OPEN, CLOSE.
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置Whether to enable input failover. Valid values: OPEN, CLOSE.
                     * @param _failOver Whether to enable input failover. Valid values: OPEN, CLOSE.
                     * 
                     */
                    void SetFailOver(const std::string& _failOver);

                    /**
                     * 判断参数 FailOver 是否已赋值
                     * @return FailOver 是否已赋值
                     * 
                     */
                    bool FailOverHasBeenSet() const;

                private:

                    /**
                     * The input ID.
                     */
                    std::string m_inputId;
                    bool m_inputIdHasBeenSet;

                    /**
                     * The input name.
                     */
                    std::string m_inputName;
                    bool m_inputNameHasBeenSet;

                    /**
                     * The description of the input.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * The IP addresses (CIDR) allowed to push streams.
                     */
                    std::vector<std::string> m_allowIpList;
                    bool m_allowIpListHasBeenSet;

                    /**
                     * The SRT configuration information.
                     */
                    CreateInputSRTSettings m_sRTSettings;
                    bool m_sRTSettingsHasBeenSet;

                    /**
                     * The RTP configuration information.
                     */
                    CreateInputRTPSettings m_rTPSettings;
                    bool m_rTPSettingsHasBeenSet;

                    /**
                     * The input protocol. Valid values: SRT, RTP, RTMP.
If there is an RTP input, the output must be RTP.
If there is an RTMP input, the output must be SRT or RTMP.
If there is an SRT input, the output must be SRT.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Whether to enable input failover. Valid values: OPEN, CLOSE.
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_MODIFYINPUT_H_
