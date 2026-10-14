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
                * Modify the parameters of the input.
                */
                class ModifyInput : public AbstractModel
                {
                public:
                    ModifyInput();
                    ~ModifyInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input Id.
                     * @return InputId Input Id.
                     * 
                     */
                    std::string GetInputId() const;

                    /**
                     * 设置Input Id.
                     * @param _inputId Input Id.
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
                     * 获取Enter a name.
                     * @return InputName Enter a name.
                     * 
                     */
                    std::string GetInputName() const;

                    /**
                     * 设置Enter a name.
                     * @param _inputName Enter a name.
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
                     * 获取Input description.
                     * @return Description Input description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Input description.
                     * @param _description Input description.
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
                     * 获取IPs allowed for push, in CIDR format.
                     * @return AllowIpList IPs allowed for push, in CIDR format.
                     * 
                     */
                    std::vector<std::string> GetAllowIpList() const;

                    /**
                     * 设置IPs allowed for push, in CIDR format.
                     * @param _allowIpList IPs allowed for push, in CIDR format.
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
                     * 获取Configuration of SRT.
                     * @return SRTSettings Configuration of SRT.
                     * 
                     */
                    CreateInputSRTSettings GetSRTSettings() const;

                    /**
                     * 设置Configuration of SRT.
                     * @param _sRTSettings Configuration of SRT.
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
                     * 获取Configuration message of RTP.
                     * @return RTPSettings Configuration message of RTP.
                     * 
                     */
                    CreateInputRTPSettings GetRTPSettings() const;

                    /**
                     * 设置Configuration message of RTP.
                     * @param _rTPSettings Configuration message of RTP.
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
                     * 获取Input protocol. Options: SRT, RTP, RTMP, RTMP_PULL, RTSP_PULL, RIST.
                     * @return Protocol Input protocol. Options: SRT, RTP, RTMP, RTMP_PULL, RTSP_PULL, RIST.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Input protocol. Options: SRT, RTP, RTMP, RTMP_PULL, RTSP_PULL, RIST.
                     * @param _protocol Input protocol. Options: SRT, RTP, RTMP, RTMP_PULL, RTSP_PULL, RIST.
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
                     * 获取Input primary/replica switch. Option: [OPEN|CLOSE].
                     * @return FailOver Input primary/replica switch. Option: [OPEN|CLOSE].
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置Input primary/replica switch. Option: [OPEN|CLOSE].
                     * @param _failOver Input primary/replica switch. Option: [OPEN|CLOSE].
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
                     * 获取Configuration message of RTMP_PULL.
                     * @return RTMPPullSettings Configuration message of RTMP_PULL.
                     * 
                     */
                    CreateInputRTMPPullSettings GetRTMPPullSettings() const;

                    /**
                     * 设置Configuration message of RTMP_PULL.
                     * @param _rTMPPullSettings Configuration message of RTMP_PULL.
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
                     * 获取Configuration message of RTSP_PULL.
                     * @return RTSPPullSettings Configuration message of RTSP_PULL.
                     * 
                     */
                    CreateInputRTSPPullSettings GetRTSPPullSettings() const;

                    /**
                     * 设置Configuration message of RTSP_PULL.
                     * @param _rTSPPullSettings Configuration message of RTSP_PULL.
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
                     * 获取Configuration message of HLS_PULL.
                     * @return HLSPullSettings Configuration message of HLS_PULL.
                     * 
                     */
                    CreateInputHLSPullSettings GetHLSPullSettings() const;

                    /**
                     * 设置Configuration message of HLS_PULL.
                     * @param _hLSPullSettings Configuration message of HLS_PULL.
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
                     * 获取Configuration message for smooth stream output during delayed playback.
                     * @return ResilientStream Configuration message for smooth stream output during delayed playback.
                     * 
                     */
                    ResilientStreamConf GetResilientStream() const;

                    /**
                     * 设置Configuration message for smooth stream output during delayed playback.
                     * @param _resilientStream Configuration message for smooth stream output during delayed playback.
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
                     * 获取ID of the bound input security group. Only one security group can be associated.
                     * @return SecurityGroupIds ID of the bound input security group. Only one security group can be associated.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置ID of the bound input security group. Only one security group can be associated.
                     * @param _securityGroupIds ID of the bound input security group. Only one security group can be associated.
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
                     * 获取Availability zone. Optional. input limit: two availability zones. For this API, only the second availability zone participates in resource allocation. It is valid if disaster recovery is enabled or the RTSP_PULL protocol is involved during switching. The address will be reallocated.	
                     * @return Zones Availability zone. Optional. input limit: two availability zones. For this API, only the second availability zone participates in resource allocation. It is valid if disaster recovery is enabled or the RTSP_PULL protocol is involved during switching. The address will be reallocated.	
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置Availability zone. Optional. input limit: two availability zones. For this API, only the second availability zone participates in resource allocation. It is valid if disaster recovery is enabled or the RTSP_PULL protocol is involved during switching. The address will be reallocated.	
                     * @param _zones Availability zone. Optional. input limit: two availability zones. For this API, only the second availability zone participates in resource allocation. It is valid if disaster recovery is enabled or the RTSP_PULL protocol is involved during switching. The address will be reallocated.	
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
                     * 获取Configuration information of RIST.
                     * @return RISTSettings Configuration information of RIST.
                     * 
                     */
                    CreateInputRISTSettings GetRISTSettings() const;

                    /**
                     * 设置Configuration information of RIST.
                     * @param _rISTSettings Configuration information of RIST.
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
                     * 获取Region of the input node.
                     * @return InputRegion Region of the input node.
                     * 
                     */
                    std::string GetInputRegion() const;

                    /**
                     * 设置Region of the input node.
                     * @param _inputRegion Region of the input node.
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
                     * 获取Hot/cold backup related
                     * @return FailOverOption Hot/cold backup related
                     * 
                     */
                    FailOverOption GetFailOverOption() const;

                    /**
                     * 设置Hot/cold backup related
                     * @param _failOverOption Hot/cold backup related
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
                     * Input Id.
                     */
                    std::string m_inputId;
                    bool m_inputIdHasBeenSet;

                    /**
                     * Enter a name.
                     */
                    std::string m_inputName;
                    bool m_inputNameHasBeenSet;

                    /**
                     * Input description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * IPs allowed for push, in CIDR format.
                     */
                    std::vector<std::string> m_allowIpList;
                    bool m_allowIpListHasBeenSet;

                    /**
                     * Configuration of SRT.
                     */
                    CreateInputSRTSettings m_sRTSettings;
                    bool m_sRTSettingsHasBeenSet;

                    /**
                     * Configuration message of RTP.
                     */
                    CreateInputRTPSettings m_rTPSettings;
                    bool m_rTPSettingsHasBeenSet;

                    /**
                     * Input protocol. Options: SRT, RTP, RTMP, RTMP_PULL, RTSP_PULL, RIST.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Input primary/replica switch. Option: [OPEN|CLOSE].
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * Configuration message of RTMP_PULL.
                     */
                    CreateInputRTMPPullSettings m_rTMPPullSettings;
                    bool m_rTMPPullSettingsHasBeenSet;

                    /**
                     * Configuration message of RTSP_PULL.
                     */
                    CreateInputRTSPPullSettings m_rTSPPullSettings;
                    bool m_rTSPPullSettingsHasBeenSet;

                    /**
                     * Configuration message of HLS_PULL.
                     */
                    CreateInputHLSPullSettings m_hLSPullSettings;
                    bool m_hLSPullSettingsHasBeenSet;

                    /**
                     * Configuration message for smooth stream output during delayed playback.
                     */
                    ResilientStreamConf m_resilientStream;
                    bool m_resilientStreamHasBeenSet;

                    /**
                     * ID of the bound input security group. Only one security group can be associated.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Availability zone. Optional. input limit: two availability zones. For this API, only the second availability zone participates in resource allocation. It is valid if disaster recovery is enabled or the RTSP_PULL protocol is involved during switching. The address will be reallocated.	
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Configuration information of RIST.
                     */
                    CreateInputRISTSettings m_rISTSettings;
                    bool m_rISTSettingsHasBeenSet;

                    /**
                     * Region of the input node.
                     */
                    std::string m_inputRegion;
                    bool m_inputRegionHasBeenSet;

                    /**
                     * Hot/cold backup related
                     */
                    FailOverOption m_failOverOption;
                    bool m_failOverOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_MODIFYINPUT_H_
