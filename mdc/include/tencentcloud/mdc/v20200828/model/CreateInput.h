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


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * Configuration information of the created input.
                */
                class CreateInput : public AbstractModel
                {
                public:
                    CreateInput();
                    ~CreateInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input name, which can contain 1 to 32 letters, digits, and underscores.
                     * @return InputName Input name, which can contain 1 to 32 letters, digits, and underscores.
                     * 
                     */
                    std::string GetInputName() const;

                    /**
                     * 设置Input name, which can contain 1 to 32 letters, digits, and underscores.
                     * @param _inputName Input name, which can contain 1 to 32 letters, digits, and underscores.
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
                     * 获取Input protocol. Valid values: `SRT`, `RTP`, `RTMP`, `RTMP_PULL`, `RTSP_PULL `, `HLS_PULL`.
                     * @return Protocol Input protocol. Valid values: `SRT`, `RTP`, `RTMP`, `RTMP_PULL`, `RTSP_PULL `, `HLS_PULL`.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Input protocol. Valid values: `SRT`, `RTP`, `RTMP`, `RTMP_PULL`, `RTSP_PULL `, `HLS_PULL`.
                     * @param _protocol Input protocol. Valid values: `SRT`, `RTP`, `RTMP`, `RTMP_PULL`, `RTSP_PULL `, `HLS_PULL`.
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
                     * 获取Input description. Length: [0, 255].
                     * @return Description Input description. Length: [0, 255].
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Input description. Length: [0, 255].
                     * @param _description Input description. Length: [0, 255].
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
                     * 获取Allowlist of input IPs in CIDR format.
                     * @return AllowIpList Allowlist of input IPs in CIDR format.
                     * 
                     */
                    std::vector<std::string> GetAllowIpList() const;

                    /**
                     * 设置Allowlist of input IPs in CIDR format.
                     * @param _allowIpList Allowlist of input IPs in CIDR format.
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
                     * 获取SRT configuration information of input.
                     * @return SRTSettings SRT configuration information of input.
                     * 
                     */
                    CreateInputSRTSettings GetSRTSettings() const;

                    /**
                     * 设置SRT configuration information of input.
                     * @param _sRTSettings SRT configuration information of input.
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
                     * 获取RTP configuration information of input.
                     * @return RTPSettings RTP configuration information of input.
                     * 
                     */
                    CreateInputRTPSettings GetRTPSettings() const;

                    /**
                     * 设置RTP configuration information of input.
                     * @param _rTPSettings RTP configuration information of input.
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
                     * 获取Input failover. Valid values: `OPEN`, `CLOSE` (default)
                     * @return FailOver Input failover. Valid values: `OPEN`, `CLOSE` (default)
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置Input failover. Valid values: `OPEN`, `CLOSE` (default)
                     * @param _failOver Input failover. Valid values: `OPEN`, `CLOSE` (default)
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
                     * 获取Input RTMP_PULL configuration information.
                     * @return RTMPPullSettings Input RTMP_PULL configuration information.
                     * 
                     */
                    CreateInputRTMPPullSettings GetRTMPPullSettings() const;

                    /**
                     * 设置Input RTMP_PULL configuration information.
                     * @param _rTMPPullSettings Input RTMP_PULL configuration information.
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
                     * 获取Input RTSP_PULL configuration information.
                     * @return RTSPPullSettings Input RTSP_PULL configuration information.
                     * 
                     */
                    CreateInputRTSPPullSettings GetRTSPPullSettings() const;

                    /**
                     * 设置Input RTSP_PULL configuration information.
                     * @param _rTSPPullSettings Input RTSP_PULL configuration information.
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
                     * 获取Input HLS_PULL configuration information.
                     * @return HLSPullSettings Input HLS_PULL configuration information.
                     * 
                     */
                    CreateInputHLSPullSettings GetHLSPullSettings() const;

                    /**
                     * 设置Input HLS_PULL configuration information.
                     * @param _hLSPullSettings Input HLS_PULL configuration information.
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
                     * 获取Delayed broadcast smooth streaming configuration information.
                     * @return ResilientStream Delayed broadcast smooth streaming configuration information.
                     * 
                     */
                    ResilientStreamConf GetResilientStream() const;

                    /**
                     * 设置Delayed broadcast smooth streaming configuration information.
                     * @param _resilientStream Delayed broadcast smooth streaming configuration information.
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
                     * 获取The bound security group IDs.
                     * @return SecurityGroupIds The bound security group IDs.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置The bound security group IDs.
                     * @param _securityGroupIds The bound security group IDs.
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
                     * 获取Availability zone, optional. If disaster recovery is enabled, you must enter two different availability zones. Otherwise, you can only enter one availability zone at most.
                     * @return Zones Availability zone, optional. If disaster recovery is enabled, you must enter two different availability zones. Otherwise, you can only enter one availability zone at most.
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置Availability zone, optional. If disaster recovery is enabled, you must enter two different availability zones. Otherwise, you can only enter one availability zone at most.
                     * @param _zones Availability zone, optional. If disaster recovery is enabled, you must enter two different availability zones. Otherwise, you can only enter one availability zone at most.
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                private:

                    /**
                     * Input name, which can contain 1 to 32 letters, digits, and underscores.
                     */
                    std::string m_inputName;
                    bool m_inputNameHasBeenSet;

                    /**
                     * Input protocol. Valid values: `SRT`, `RTP`, `RTMP`, `RTMP_PULL`, `RTSP_PULL `, `HLS_PULL`.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Input description. Length: [0, 255].
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Allowlist of input IPs in CIDR format.
                     */
                    std::vector<std::string> m_allowIpList;
                    bool m_allowIpListHasBeenSet;

                    /**
                     * SRT configuration information of input.
                     */
                    CreateInputSRTSettings m_sRTSettings;
                    bool m_sRTSettingsHasBeenSet;

                    /**
                     * RTP configuration information of input.
                     */
                    CreateInputRTPSettings m_rTPSettings;
                    bool m_rTPSettingsHasBeenSet;

                    /**
                     * Input failover. Valid values: `OPEN`, `CLOSE` (default)
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * Input RTMP_PULL configuration information.
                     */
                    CreateInputRTMPPullSettings m_rTMPPullSettings;
                    bool m_rTMPPullSettingsHasBeenSet;

                    /**
                     * Input RTSP_PULL configuration information.
                     */
                    CreateInputRTSPPullSettings m_rTSPPullSettings;
                    bool m_rTSPPullSettingsHasBeenSet;

                    /**
                     * Input HLS_PULL configuration information.
                     */
                    CreateInputHLSPullSettings m_hLSPullSettings;
                    bool m_hLSPullSettingsHasBeenSet;

                    /**
                     * Delayed broadcast smooth streaming configuration information.
                     */
                    ResilientStreamConf m_resilientStream;
                    bool m_resilientStreamHasBeenSet;

                    /**
                     * The bound security group IDs.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Availability zone, optional. If disaster recovery is enabled, you must enter two different availability zones. Otherwise, you can only enter one availability zone at most.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_CREATEINPUT_H_
