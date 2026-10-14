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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_CREATEINPUT_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_CREATEINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/CreateInputSRTSettings.h>
#include <tencentcloud/mdc/v20200828/model/CreateInputRTPSettings.h>
#include <tencentcloud/mdc/v20200828/model/CreateInputRTMPPullSettings.h>
#include <tencentcloud/mdc/v20200828/model/CreateInputRTSPPullSettings.h>
#include <tencentcloud/mdc/v20200828/model/CreateInputHLSPullSettings.h>
#include <tencentcloud/mdc/v20200828/model/ResilientStreamConf.h>
#include <tencentcloud/mdc/v20200828/model/CreateInputRISTSettings.h>
#include <tencentcloud/mdc/v20200828/model/FailOverOption.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * Create input configuration message.
                */
                class CreateInput : public AbstractModel
                {
                public:
                    CreateInput();
                    ~CreateInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Enter a name. It can contain uppercase letters, lowercase letters, digits, and underscores. Length: [1, 32].
                     * @return InputName Enter a name. It can contain uppercase letters, lowercase letters, digits, and underscores. Length: [1, 32].
                     * 
                     */
                    std::string GetInputName() const;

                    /**
                     * 设置Enter a name. It can contain uppercase letters, lowercase letters, digits, and underscores. Length: [1, 32].
                     * @param _inputName Enter a name. It can contain uppercase letters, lowercase letters, digits, and underscores. Length: [1, 32].
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
                     * 获取Input protocol. Selectable: [SRT|RTP|RTMP|RTMP_PULL|RTSP_PULL|RIST].
                     * @return Protocol Input protocol. Selectable: [SRT|RTP|RTMP|RTMP_PULL|RTSP_PULL|RIST].
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Input protocol. Selectable: [SRT|RTP|RTMP|RTMP_PULL|RTSP_PULL|RIST].
                     * @param _protocol Input protocol. Selectable: [SRT|RTP|RTMP|RTMP_PULL|RTSP_PULL|RIST].
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
                     * 获取Enter description. Length: [0, 255].
                     * @return Description Enter description. Length: [0, 255].
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Enter description. Length: [0, 255].
                     * @param _description Enter description. Length: [0, 255].
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
                     * 获取Input IP allowlist in CIDR format.
                     * @return AllowIpList Input IP allowlist in CIDR format.
                     * 
                     */
                    std::vector<std::string> GetAllowIpList() const;

                    /**
                     * 设置Input IP allowlist in CIDR format.
                     * @param _allowIpList Input IP allowlist in CIDR format.
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
                     * 获取SRT configuration information of the input.
                     * @return SRTSettings SRT configuration information of the input.
                     * 
                     */
                    CreateInputSRTSettings GetSRTSettings() const;

                    /**
                     * 设置SRT configuration information of the input.
                     * @param _sRTSettings SRT configuration information of the input.
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
                     * 获取Input RTP configuration message.
                     * @return RTPSettings Input RTP configuration message.
                     * 
                     */
                    CreateInputRTPSettings GetRTPSettings() const;

                    /**
                     * 设置Input RTP configuration message.
                     * @param _rTPSettings Input RTP configuration message.
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
                     * 获取Primary/replica switch input. Selectable values: `OPEN` and `CLOSE`. Default value: `CLOSE`.
                     * @return FailOver Primary/replica switch input. Selectable values: `OPEN` and `CLOSE`. Default value: `CLOSE`.
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置Primary/replica switch input. Selectable values: `OPEN` and `CLOSE`. Default value: `CLOSE`.
                     * @param _failOver Primary/replica switch input. Selectable values: `OPEN` and `CLOSE`. Default value: `CLOSE`.
                     * 
                     */
                    void SetFailOver(const std::string& _failOver);

                    /**
                     * 判断参数 FailOver 是否已赋值
                     * @return FailOver 是否已赋值
                     * 
                     */
                    bool FailOverHasBeenSet() const;

                    /**
                     * 获取Input RTMP_PULL configuration message.
                     * @return RTMPPullSettings Input RTMP_PULL configuration message.
                     * 
                     */
                    CreateInputRTMPPullSettings GetRTMPPullSettings() const;

                    /**
                     * 设置Input RTMP_PULL configuration message.
                     * @param _rTMPPullSettings Input RTMP_PULL configuration message.
                     * 
                     */
                    void SetRTMPPullSettings(const CreateInputRTMPPullSettings& _rTMPPullSettings);

                    /**
                     * 判断参数 RTMPPullSettings 是否已赋值
                     * @return RTMPPullSettings 是否已赋值
                     * 
                     */
                    bool RTMPPullSettingsHasBeenSet() const;

                    /**
                     * 获取Input RTSP_PULL configuration message.
                     * @return RTSPPullSettings Input RTSP_PULL configuration message.
                     * 
                     */
                    CreateInputRTSPPullSettings GetRTSPPullSettings() const;

                    /**
                     * 设置Input RTSP_PULL configuration message.
                     * @param _rTSPPullSettings Input RTSP_PULL configuration message.
                     * 
                     */
                    void SetRTSPPullSettings(const CreateInputRTSPPullSettings& _rTSPPullSettings);

                    /**
                     * 判断参数 RTSPPullSettings 是否已赋值
                     * @return RTSPPullSettings 是否已赋值
                     * 
                     */
                    bool RTSPPullSettingsHasBeenSet() const;

                    /**
                     * 获取Input HLS_PULL configuration message.
                     * @return HLSPullSettings Input HLS_PULL configuration message.
                     * 
                     */
                    CreateInputHLSPullSettings GetHLSPullSettings() const;

                    /**
                     * 设置Input HLS_PULL configuration message.
                     * @param _hLSPullSettings Input HLS_PULL configuration message.
                     * 
                     */
                    void SetHLSPullSettings(const CreateInputHLSPullSettings& _hLSPullSettings);

                    /**
                     * 判断参数 HLSPullSettings 是否已赋值
                     * @return HLSPullSettings 是否已赋值
                     * 
                     */
                    bool HLSPullSettingsHasBeenSet() const;

                    /**
                     * 获取Configuration message for smooth streaming during delayed broadcasting.
                     * @return ResilientStream Configuration message for smooth streaming during delayed broadcasting.
                     * 
                     */
                    ResilientStreamConf GetResilientStream() const;

                    /**
                     * 设置Configuration message for smooth streaming during delayed broadcasting.
                     * @param _resilientStream Configuration message for smooth streaming during delayed broadcasting.
                     * 
                     */
                    void SetResilientStream(const ResilientStreamConf& _resilientStream);

                    /**
                     * 判断参数 ResilientStream 是否已赋值
                     * @return ResilientStream 是否已赋值
                     * 
                     */
                    bool ResilientStreamHasBeenSet() const;

                    /**
                     * 获取Bound input security group ID.
                     * @return SecurityGroupIds Bound input security group ID.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Bound input security group ID.
                     * @param _securityGroupIds Bound input security group ID.
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Availability zone. This parameter is optional. If disaster recovery is enabled, two different availability zones must be input. Otherwise, only one availability zone can be input.
                     * @return Zones Availability zone. This parameter is optional. If disaster recovery is enabled, two different availability zones must be input. Otherwise, only one availability zone can be input.
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置Availability zone. This parameter is optional. If disaster recovery is enabled, two different availability zones must be input. Otherwise, only one availability zone can be input.
                     * @param _zones Availability zone. This parameter is optional. If disaster recovery is enabled, two different availability zones must be input. Otherwise, only one availability zone can be input.
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取Input RIST configuration message.
                     * @return RISTSettings Input RIST configuration message.
                     * 
                     */
                    CreateInputRISTSettings GetRISTSettings() const;

                    /**
                     * 设置Input RIST configuration message.
                     * @param _rISTSettings Input RIST configuration message.
                     * 
                     */
                    void SetRISTSettings(const CreateInputRISTSettings& _rISTSettings);

                    /**
                     * 判断参数 RISTSettings 是否已赋值
                     * @return RISTSettings 是否已赋值
                     * 
                     */
                    bool RISTSettingsHasBeenSet() const;

                    /**
                     * 获取Region of the input node
                     * @return InputRegion Region of the input node
                     * 
                     */
                    std::string GetInputRegion() const;

                    /**
                     * 设置Region of the input node
                     * @param _inputRegion Region of the input node
                     * 
                     */
                    void SetInputRegion(const std::string& _inputRegion);

                    /**
                     * 判断参数 InputRegion 是否已赋值
                     * @return InputRegion 是否已赋值
                     * 
                     */
                    bool InputRegionHasBeenSet() const;

                    /**
                     * 获取Hot/cold backup
                     * @return FailOverOption Hot/cold backup
                     * 
                     */
                    FailOverOption GetFailOverOption() const;

                    /**
                     * 设置Hot/cold backup
                     * @param _failOverOption Hot/cold backup
                     * 
                     */
                    void SetFailOverOption(const FailOverOption& _failOverOption);

                    /**
                     * 判断参数 FailOverOption 是否已赋值
                     * @return FailOverOption 是否已赋值
                     * 
                     */
                    bool FailOverOptionHasBeenSet() const;

                private:

                    /**
                     * Enter a name. It can contain uppercase letters, lowercase letters, digits, and underscores. Length: [1, 32].
                     */
                    std::string m_inputName;
                    bool m_inputNameHasBeenSet;

                    /**
                     * Input protocol. Selectable: [SRT|RTP|RTMP|RTMP_PULL|RTSP_PULL|RIST].
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Enter description. Length: [0, 255].
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Input IP allowlist in CIDR format.
                     */
                    std::vector<std::string> m_allowIpList;
                    bool m_allowIpListHasBeenSet;

                    /**
                     * SRT configuration information of the input.
                     */
                    CreateInputSRTSettings m_sRTSettings;
                    bool m_sRTSettingsHasBeenSet;

                    /**
                     * Input RTP configuration message.
                     */
                    CreateInputRTPSettings m_rTPSettings;
                    bool m_rTPSettingsHasBeenSet;

                    /**
                     * Primary/replica switch input. Selectable values: `OPEN` and `CLOSE`. Default value: `CLOSE`.
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * Input RTMP_PULL configuration message.
                     */
                    CreateInputRTMPPullSettings m_rTMPPullSettings;
                    bool m_rTMPPullSettingsHasBeenSet;

                    /**
                     * Input RTSP_PULL configuration message.
                     */
                    CreateInputRTSPPullSettings m_rTSPPullSettings;
                    bool m_rTSPPullSettingsHasBeenSet;

                    /**
                     * Input HLS_PULL configuration message.
                     */
                    CreateInputHLSPullSettings m_hLSPullSettings;
                    bool m_hLSPullSettingsHasBeenSet;

                    /**
                     * Configuration message for smooth streaming during delayed broadcasting.
                     */
                    ResilientStreamConf m_resilientStream;
                    bool m_resilientStreamHasBeenSet;

                    /**
                     * Bound input security group ID.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Availability zone. This parameter is optional. If disaster recovery is enabled, two different availability zones must be input. Otherwise, only one availability zone can be input.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Input RIST configuration message.
                     */
                    CreateInputRISTSettings m_rISTSettings;
                    bool m_rISTSettingsHasBeenSet;

                    /**
                     * Region of the input node
                     */
                    std::string m_inputRegion;
                    bool m_inputRegionHasBeenSet;

                    /**
                     * Hot/cold backup
                     */
                    FailOverOption m_failOverOption;
                    bool m_failOverOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_CREATEINPUT_H_
