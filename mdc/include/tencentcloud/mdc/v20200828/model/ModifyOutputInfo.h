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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_MODIFYOUTPUTINFO_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_MODIFYOUTPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/CreateOutputSrtSettings.h>
#include <tencentcloud/mdc/v20200828/model/CreateOutputInfoRTPSettings.h>
#include <tencentcloud/mdc/v20200828/model/CreateOutputRTMPSettings.h>
#include <tencentcloud/mdc/v20200828/model/CreateOutputRistSettings.h>
#include <tencentcloud/mdc/v20200828/model/PidSelector.h>
#include <tencentcloud/mdc/v20200828/model/StreamSelector.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * Modify the Output configuration.
                */
                class ModifyOutputInfo : public AbstractModel
                {
                public:
                    ModifyOutputInfo();
                    ~ModifyOutputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Id of the Output to be modified.
                     * @return OutputId Id of the Output to be modified.
                     * 
                     */
                    std::string GetOutputId() const;

                    /**
                     * 设置Id of the Output to be modified.
                     * @param _outputId Id of the Output to be modified.
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
                     * 获取Output name.
                     * @return OutputName Output name.
                     * 
                     */
                    std::string GetOutputName() const;

                    /**
                     * 设置Output name.
                     * @param _outputName Output name.
                     * 
                     */
                    void SetOutputName(const std::string& _outputName);

                    /**
                     * 判断参数 OutputName 是否已赋值
                     * @return OutputName 是否已赋值
                     * 
                     */
                    bool OutputNameHasBeenSet() const;

                    /**
                     * 获取Output description.
                     * @return Description Output description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Output description.
                     * @param _description Output description.
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
                     * 获取Output relay protocol. Supports SRT, RTP, RTMP, RTMP_PULL, RTSP_PULL, and RIST.
                     * @return Protocol Output relay protocol. Supports SRT, RTP, RTMP, RTMP_PULL, RTSP_PULL, and RIST.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Output relay protocol. Supports SRT, RTP, RTMP, RTMP_PULL, RTSP_PULL, and RIST.
                     * @param _protocol Output relay protocol. Supports SRT, RTP, RTMP, RTMP_PULL, RTSP_PULL, and RIST.
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
                     * 获取Output type: Internet/TencentCSS/StreamLive
                     * @return OutputType Output type: Internet/TencentCSS/StreamLive
                     * 
                     */
                    std::string GetOutputType() const;

                    /**
                     * 设置Output type: Internet/TencentCSS/StreamLive
                     * @param _outputType Output type: Internet/TencentCSS/StreamLive
                     * 
                     */
                    void SetOutputType(const std::string& _outputType);

                    /**
                     * 判断参数 OutputType 是否已赋值
                     * @return OutputType 是否已赋值
                     * 
                     */
                    bool OutputTypeHasBeenSet() const;

                    /**
                     * 获取Output module type, including Pinpoint (single-point output, supports up to four concurrent outputs); MultiMesh (multiple outputs, supports more than four concurrent outputs, currently up to 200). The default type is Pinpoint output. For a single Flow, only one MultiMesh output is allowed in one zone.
                     * @return OutputKind Output module type, including Pinpoint (single-point output, supports up to four concurrent outputs); MultiMesh (multiple outputs, supports more than four concurrent outputs, currently up to 200). The default type is Pinpoint output. For a single Flow, only one MultiMesh output is allowed in one zone.
                     * 
                     */
                    std::string GetOutputKind() const;

                    /**
                     * 设置Output module type, including Pinpoint (single-point output, supports up to four concurrent outputs); MultiMesh (multiple outputs, supports more than four concurrent outputs, currently up to 200). The default type is Pinpoint output. For a single Flow, only one MultiMesh output is allowed in one zone.
                     * @param _outputKind Output module type, including Pinpoint (single-point output, supports up to four concurrent outputs); MultiMesh (multiple outputs, supports more than four concurrent outputs, currently up to 200). The default type is Pinpoint output. For a single Flow, only one MultiMesh output is allowed in one zone.
                     * 
                     */
                    void SetOutputKind(const std::string& _outputKind);

                    /**
                     * 判断参数 OutputKind 是否已赋值
                     * @return OutputKind 是否已赋值
                     * 
                     */
                    bool OutputKindHasBeenSet() const;

                    /**
                     * 获取Configuration of the relayed SRT.
                     * @return SRTSettings Configuration of the relayed SRT.
                     * 
                     */
                    CreateOutputSrtSettings GetSRTSettings() const;

                    /**
                     * 设置Configuration of the relayed SRT.
                     * @param _sRTSettings Configuration of the relayed SRT.
                     * 
                     */
                    void SetSRTSettings(const CreateOutputSrtSettings& _sRTSettings);

                    /**
                     * 判断参数 SRTSettings 是否已赋值
                     * @return SRTSettings 是否已赋值
                     * 
                     */
                    bool SRTSettingsHasBeenSet() const;

                    /**
                     * 获取Configuration of the relayed RTP.
                     * @return RTPSettings Configuration of the relayed RTP.
                     * 
                     */
                    CreateOutputInfoRTPSettings GetRTPSettings() const;

                    /**
                     * 设置Configuration of the relayed RTP.
                     * @param _rTPSettings Configuration of the relayed RTP.
                     * 
                     */
                    void SetRTPSettings(const CreateOutputInfoRTPSettings& _rTPSettings);

                    /**
                     * 判断参数 RTPSettings 是否已赋值
                     * @return RTPSettings 是否已赋值
                     * 
                     */
                    bool RTPSettingsHasBeenSet() const;

                    /**
                     * 获取Configuration for relaying RTMP.
                     * @return RTMPSettings Configuration for relaying RTMP.
                     * 
                     */
                    CreateOutputRTMPSettings GetRTMPSettings() const;

                    /**
                     * 设置Configuration for relaying RTMP.
                     * @param _rTMPSettings Configuration for relaying RTMP.
                     * 
                     */
                    void SetRTMPSettings(const CreateOutputRTMPSettings& _rTMPSettings);

                    /**
                     * 判断参数 RTMPSettings 是否已赋值
                     * @return RTMPSettings 是否已赋值
                     * 
                     */
                    bool RTMPSettingsHasBeenSet() const;

                    /**
                     * 获取IP whitelist list in CIDR format, for example, 0.0.0.0/0.
Valid when Protocol is RTMP_PULL. If empty, it represents no limit on client IP.
                     * @return AllowIpList IP whitelist list in CIDR format, for example, 0.0.0.0/0.
Valid when Protocol is RTMP_PULL. If empty, it represents no limit on client IP.
                     * 
                     */
                    std::vector<std::string> GetAllowIpList() const;

                    /**
                     * 设置IP whitelist list in CIDR format, for example, 0.0.0.0/0.
Valid when Protocol is RTMP_PULL. If empty, it represents no limit on client IP.
                     * @param _allowIpList IP whitelist list in CIDR format, for example, 0.0.0.0/0.
Valid when Protocol is RTMP_PULL. If empty, it represents no limit on client IP.
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
                     * 获取Maximum number of concurrent stream pulls. Maximum value: 4. Default value: 4.
                     * @return MaxConcurrent Maximum number of concurrent stream pulls. Maximum value: 4. Default value: 4.
                     * 
                     */
                    uint64_t GetMaxConcurrent() const;

                    /**
                     * 设置Maximum number of concurrent stream pulls. Maximum value: 4. Default value: 4.
                     * @param _maxConcurrent Maximum number of concurrent stream pulls. Maximum value: 4. Default value: 4.
                     * 
                     */
                    void SetMaxConcurrent(const uint64_t& _maxConcurrent);

                    /**
                     * 判断参数 MaxConcurrent 是否已赋值
                     * @return MaxConcurrent 是否已赋值
                     * 
                     */
                    bool MaxConcurrentHasBeenSet() const;

                    /**
                     * 获取ID of the bound security group. Only one security group can be associated.	
                     * @return SecurityGroupIds ID of the bound security group. Only one security group can be associated.	
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置ID of the bound security group. Only one security group can be associated.	
                     * @param _securityGroupIds ID of the bound security group. Only one security group can be associated.	
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
                     * 获取AZ.
                     * @return Zones AZ.
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置AZ.
                     * @param _zones AZ.
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
                     * 获取Relay RIST configuration.
                     * @return RISTSettings Relay RIST configuration.
                     * 
                     */
                    CreateOutputRistSettings GetRISTSettings() const;

                    /**
                     * 设置Relay RIST configuration.
                     * @param _rISTSettings Relay RIST configuration.
                     * 
                     */
                    void SetRISTSettings(const CreateOutputRistSettings& _rISTSettings);

                    /**
                     * 判断参数 RISTSettings 是否已赋值
                     * @return RISTSettings 是否已赋值
                     * 
                     */
                    bool RISTSettingsHasBeenSet() const;

                    /**
                     * 获取For streams with multiple audio/video tracks, you can specify the track to be used.
                     * @return PidSelector For streams with multiple audio/video tracks, you can specify the track to be used.
                     * @deprecated
                     */
                    PidSelector GetPidSelector() const;

                    /**
                     * 设置For streams with multiple audio/video tracks, you can specify the track to be used.
                     * @param _pidSelector For streams with multiple audio/video tracks, you can specify the track to be used.
                     * @deprecated
                     */
                    void SetPidSelector(const PidSelector& _pidSelector);

                    /**
                     * 判断参数 PidSelector 是否已赋值
                     * @return PidSelector 是否已赋值
                     * @deprecated
                     */
                    bool PidSelectorHasBeenSet() const;

                    /**
                     * 获取For streams with multiple audio/video tracks, you can specify the track to be used.
                     * @return StreamSelector For streams with multiple audio/video tracks, you can specify the track to be used.
                     * 
                     */
                    StreamSelector GetStreamSelector() const;

                    /**
                     * 设置For streams with multiple audio/video tracks, you can specify the track to be used.
                     * @param _streamSelector For streams with multiple audio/video tracks, you can specify the track to be used.
                     * 
                     */
                    void SetStreamSelector(const StreamSelector& _streamSelector);

                    /**
                     * 判断参数 StreamSelector 是否已赋值
                     * @return StreamSelector 是否已赋值
                     * 
                     */
                    bool StreamSelectorHasBeenSet() const;

                private:

                    /**
                     * Id of the Output to be modified.
                     */
                    std::string m_outputId;
                    bool m_outputIdHasBeenSet;

                    /**
                     * Output name.
                     */
                    std::string m_outputName;
                    bool m_outputNameHasBeenSet;

                    /**
                     * Output description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Output relay protocol. Supports SRT, RTP, RTMP, RTMP_PULL, RTSP_PULL, and RIST.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Output type: Internet/TencentCSS/StreamLive
                     */
                    std::string m_outputType;
                    bool m_outputTypeHasBeenSet;

                    /**
                     * Output module type, including Pinpoint (single-point output, supports up to four concurrent outputs); MultiMesh (multiple outputs, supports more than four concurrent outputs, currently up to 200). The default type is Pinpoint output. For a single Flow, only one MultiMesh output is allowed in one zone.
                     */
                    std::string m_outputKind;
                    bool m_outputKindHasBeenSet;

                    /**
                     * Configuration of the relayed SRT.
                     */
                    CreateOutputSrtSettings m_sRTSettings;
                    bool m_sRTSettingsHasBeenSet;

                    /**
                     * Configuration of the relayed RTP.
                     */
                    CreateOutputInfoRTPSettings m_rTPSettings;
                    bool m_rTPSettingsHasBeenSet;

                    /**
                     * Configuration for relaying RTMP.
                     */
                    CreateOutputRTMPSettings m_rTMPSettings;
                    bool m_rTMPSettingsHasBeenSet;

                    /**
                     * IP whitelist list in CIDR format, for example, 0.0.0.0/0.
Valid when Protocol is RTMP_PULL. If empty, it represents no limit on client IP.
                     */
                    std::vector<std::string> m_allowIpList;
                    bool m_allowIpListHasBeenSet;

                    /**
                     * Maximum number of concurrent stream pulls. Maximum value: 4. Default value: 4.
                     */
                    uint64_t m_maxConcurrent;
                    bool m_maxConcurrentHasBeenSet;

                    /**
                     * ID of the bound security group. Only one security group can be associated.	
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * AZ.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Relay RIST configuration.
                     */
                    CreateOutputRistSettings m_rISTSettings;
                    bool m_rISTSettingsHasBeenSet;

                    /**
                     * For streams with multiple audio/video tracks, you can specify the track to be used.
                     */
                    PidSelector m_pidSelector;
                    bool m_pidSelectorHasBeenSet;

                    /**
                     * For streams with multiple audio/video tracks, you can specify the track to be used.
                     */
                    StreamSelector m_streamSelector;
                    bool m_streamSelectorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_MODIFYOUTPUTINFO_H_
