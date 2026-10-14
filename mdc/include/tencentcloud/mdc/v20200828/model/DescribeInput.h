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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEINPUT_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/InputAddress.h>
#include <tencentcloud/mdc/v20200828/model/DescribeInputSRTSettings.h>
#include <tencentcloud/mdc/v20200828/model/DescribeInputRTPSettings.h>
#include <tencentcloud/mdc/v20200828/model/DescribeInputRTMPSettings.h>
#include <tencentcloud/mdc/v20200828/model/DescribeInputRTMPPullSettings.h>
#include <tencentcloud/mdc/v20200828/model/DescribeInputRTSPPullSettings.h>
#include <tencentcloud/mdc/v20200828/model/DescribeInputHLSPullSettings.h>
#include <tencentcloud/mdc/v20200828/model/ResilientStreamConf.h>
#include <tencentcloud/mdc/v20200828/model/DescribeInputRISTSettings.h>
#include <tencentcloud/mdc/v20200828/model/StreamUrlDetail.h>
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
                * Query input configuration message.
                */
                class DescribeInput : public AbstractModel
                {
                public:
                    DescribeInput();
                    ~DescribeInput() = default;
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
                     * 获取Input name.
                     * @return InputName Input name.
                     * 
                     */
                    std::string GetInputName() const;

                    /**
                     * 设置Input name.
                     * @param _inputName Input name.
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
                     * 获取Input protocol.
                     * @return Protocol Input protocol.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Input protocol.
                     * @param _protocol Input protocol.
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
                     * 获取Input the address list.
                     * @return InputAddressList Input the address list.
                     * 
                     */
                    std::vector<InputAddress> GetInputAddressList() const;

                    /**
                     * 设置Input the address list.
                     * @param _inputAddressList Input the address list.
                     * 
                     */
                    void SetInputAddressList(const std::vector<InputAddress>& _inputAddressList);

                    /**
                     * 判断参数 InputAddressList 是否已赋值
                     * @return InputAddressList 是否已赋值
                     * 
                     */
                    bool InputAddressListHasBeenSet() const;

                    /**
                     * 获取Input the IP whitelist list.
                     * @return AllowIpList Input the IP whitelist list.
                     * 
                     */
                    std::vector<std::string> GetAllowIpList() const;

                    /**
                     * 设置Input the IP whitelist list.
                     * @param _allowIpList Input the IP whitelist list.
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
                    DescribeInputSRTSettings GetSRTSettings() const;

                    /**
                     * 设置SRT configuration information of the input.
                     * @param _sRTSettings SRT configuration information of the input.
                     * 
                     */
                    void SetSRTSettings(const DescribeInputSRTSettings& _sRTSettings);

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
                    DescribeInputRTPSettings GetRTPSettings() const;

                    /**
                     * 设置Input RTP configuration message.
                     * @param _rTPSettings Input RTP configuration message.
                     * 
                     */
                    void SetRTPSettings(const DescribeInputRTPSettings& _rTPSettings);

                    /**
                     * 判断参数 RTPSettings 是否已赋值
                     * @return RTPSettings 是否已赋值
                     * 
                     */
                    bool RTPSettingsHasBeenSet() const;

                    /**
                     * 获取Input region.
                     * @return InputRegion Input region.
                     * 
                     */
                    std::string GetInputRegion() const;

                    /**
                     * 设置Input region.
                     * @param _inputRegion Input region.
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
                     * 获取Input RTMP configuration message.
                     * @return RTMPSettings Input RTMP configuration message.
                     * 
                     */
                    DescribeInputRTMPSettings GetRTMPSettings() const;

                    /**
                     * 设置Input RTMP configuration message.
                     * @param _rTMPSettings Input RTMP configuration message.
                     * 
                     */
                    void SetRTMPSettings(const DescribeInputRTMPSettings& _rTMPSettings);

                    /**
                     * 判断参数 RTMPSettings 是否已赋值
                     * @return RTMPSettings 是否已赋值
                     * 
                     */
                    bool RTMPSettingsHasBeenSet() const;

                    /**
                     * 获取Primary/replica switch input.
                     * @return FailOver Primary/replica switch input.
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置Primary/replica switch input.
                     * @param _failOver Primary/replica switch input.
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
                     * 获取Availability zone configuration. In the current situation with disaster recovery enabled, there can be up to two, corresponding to pipeline 0 and 1 in sequence. Otherwise, there is only one availability zone.
                     * @return Zones Availability zone configuration. In the current situation with disaster recovery enabled, there can be up to two, corresponding to pipeline 0 and 1 in sequence. Otherwise, there is only one availability zone.
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置Availability zone configuration. In the current situation with disaster recovery enabled, there can be up to two, corresponding to pipeline 0 and 1 in sequence. Otherwise, there is only one availability zone.
                     * @param _zones Availability zone configuration. In the current situation with disaster recovery enabled, there can be up to two, corresponding to pipeline 0 and 1 in sequence. Otherwise, there is only one availability zone.
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
                     * 获取Input RTMP_PULL configuration message.
                     * @return RTMPPullSettings Input RTMP_PULL configuration message.
                     * 
                     */
                    DescribeInputRTMPPullSettings GetRTMPPullSettings() const;

                    /**
                     * 设置Input RTMP_PULL configuration message.
                     * @param _rTMPPullSettings Input RTMP_PULL configuration message.
                     * 
                     */
                    void SetRTMPPullSettings(const DescribeInputRTMPPullSettings& _rTMPPullSettings);

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
                    DescribeInputRTSPPullSettings GetRTSPPullSettings() const;

                    /**
                     * 设置Input RTSP_PULL configuration message.
                     * @param _rTSPPullSettings Input RTSP_PULL configuration message.
                     * 
                     */
                    void SetRTSPPullSettings(const DescribeInputRTSPPullSettings& _rTSPPullSettings);

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
                    DescribeInputHLSPullSettings GetHLSPullSettings() const;

                    /**
                     * 设置Input HLS_PULL configuration message.
                     * @param _hLSPullSettings Input HLS_PULL configuration message.
                     * 
                     */
                    void SetHLSPullSettings(const DescribeInputHLSPullSettings& _hLSPullSettings);

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
                     * 获取Input RIST configuration message.
                     * @return RISTSettings Input RIST configuration message.
                     * 
                     */
                    DescribeInputRISTSettings GetRISTSettings() const;

                    /**
                     * 设置Input RIST configuration message.
                     * @param _rISTSettings Input RIST configuration message.
                     * 
                     */
                    void SetRISTSettings(const DescribeInputRISTSettings& _rISTSettings);

                    /**
                     * 判断参数 RISTSettings 是否已赋值
                     * @return RISTSettings 是否已赋值
                     * 
                     */
                    bool RISTSettingsHasBeenSet() const;

                    /**
                     * 获取Input URL information related to module settings, including the provided streaming address or the configured third-party source stream URL.
                     * @return StreamUrls Input URL information related to module settings, including the provided streaming address or the configured third-party source stream URL.
                     * 
                     */
                    std::vector<StreamUrlDetail> GetStreamUrls() const;

                    /**
                     * 设置Input URL information related to module settings, including the provided streaming address or the configured third-party source stream URL.
                     * @param _streamUrls Input URL information related to module settings, including the provided streaming address or the configured third-party source stream URL.
                     * 
                     */
                    void SetStreamUrls(const std::vector<StreamUrlDetail>& _streamUrls);

                    /**
                     * 判断参数 StreamUrls 是否已赋值
                     * @return StreamUrls 是否已赋值
                     * 
                     */
                    bool StreamUrlsHasBeenSet() const;

                    /**
                     * 获取Disaster recovery configuration item
                     * @return FailOverOption Disaster recovery configuration item
                     * 
                     */
                    FailOverOption GetFailOverOption() const;

                    /**
                     * 设置Disaster recovery configuration item
                     * @param _failOverOption Disaster recovery configuration item
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
                     * Input name.
                     */
                    std::string m_inputName;
                    bool m_inputNameHasBeenSet;

                    /**
                     * Input description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Input protocol.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Input the address list.
                     */
                    std::vector<InputAddress> m_inputAddressList;
                    bool m_inputAddressListHasBeenSet;

                    /**
                     * Input the IP whitelist list.
                     */
                    std::vector<std::string> m_allowIpList;
                    bool m_allowIpListHasBeenSet;

                    /**
                     * SRT configuration information of the input.
                     */
                    DescribeInputSRTSettings m_sRTSettings;
                    bool m_sRTSettingsHasBeenSet;

                    /**
                     * Input RTP configuration message.
                     */
                    DescribeInputRTPSettings m_rTPSettings;
                    bool m_rTPSettingsHasBeenSet;

                    /**
                     * Input region.
                     */
                    std::string m_inputRegion;
                    bool m_inputRegionHasBeenSet;

                    /**
                     * Input RTMP configuration message.
                     */
                    DescribeInputRTMPSettings m_rTMPSettings;
                    bool m_rTMPSettingsHasBeenSet;

                    /**
                     * Primary/replica switch input.
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * Availability zone configuration. In the current situation with disaster recovery enabled, there can be up to two, corresponding to pipeline 0 and 1 in sequence. Otherwise, there is only one availability zone.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Input RTMP_PULL configuration message.
                     */
                    DescribeInputRTMPPullSettings m_rTMPPullSettings;
                    bool m_rTMPPullSettingsHasBeenSet;

                    /**
                     * Input RTSP_PULL configuration message.
                     */
                    DescribeInputRTSPPullSettings m_rTSPPullSettings;
                    bool m_rTSPPullSettingsHasBeenSet;

                    /**
                     * Input HLS_PULL configuration message.
                     */
                    DescribeInputHLSPullSettings m_hLSPullSettings;
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
                     * Input RIST configuration message.
                     */
                    DescribeInputRISTSettings m_rISTSettings;
                    bool m_rISTSettingsHasBeenSet;

                    /**
                     * Input URL information related to module settings, including the provided streaming address or the configured third-party source stream URL.
                     */
                    std::vector<StreamUrlDetail> m_streamUrls;
                    bool m_streamUrlsHasBeenSet;

                    /**
                     * Disaster recovery configuration item
                     */
                    FailOverOption m_failOverOption;
                    bool m_failOverOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEINPUT_H_
