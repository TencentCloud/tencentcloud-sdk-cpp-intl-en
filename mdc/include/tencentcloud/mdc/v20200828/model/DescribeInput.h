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
                * Configuration information of the queried input.
                */
                class DescribeInput : public AbstractModel
                {
                public:
                    DescribeInput();
                    ~DescribeInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input ID.
                     * @return InputId Input ID.
                     * 
                     */
                    std::string GetInputId() const;

                    /**
                     * 设置Input ID.
                     * @param _inputId Input ID.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Description Input description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Input description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _description Input description.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Input address list.
                     * @return InputAddressList Input address list.
                     * 
                     */
                    std::vector<InputAddress> GetInputAddressList() const;

                    /**
                     * 设置Input address list.
                     * @param _inputAddressList Input address list.
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
                     * 获取Input IP allowlist.
                     * @return AllowIpList Input IP allowlist.
                     * 
                     */
                    std::vector<std::string> GetAllowIpList() const;

                    /**
                     * 设置Input IP allowlist.
                     * @param _allowIpList Input IP allowlist.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SRTSettings SRT configuration information of input.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DescribeInputSRTSettings GetSRTSettings() const;

                    /**
                     * 设置SRT configuration information of input.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _sRTSettings SRT configuration information of input.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取RTP configuration information of input.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RTPSettings RTP configuration information of input.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DescribeInputRTPSettings GetRTPSettings() const;

                    /**
                     * 设置RTP configuration information of input.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _rTPSettings RTP configuration information of input.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取RTMP configuration information of an input
                     * @return RTMPSettings RTMP configuration information of an input
                     * 
                     */
                    DescribeInputRTMPSettings GetRTMPSettings() const;

                    /**
                     * 设置RTMP configuration information of an input
                     * @param _rTMPSettings RTMP configuration information of an input
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
                     * 获取Input failover
Note: this field may return `null`, indicating that no valid value was found.
                     * @return FailOver Input failover
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置Input failover
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _failOver Input failover
Note: this field may return `null`, indicating that no valid value was found.
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
                     * 获取Available Zone Configuration: Under disaster recovery conditions, up to two are supported, corresponding to pipeline 0 and 1 in order. Otherwise, only one available zone is allowed.
                     * @return Zones Available Zone Configuration: Under disaster recovery conditions, up to two are supported, corresponding to pipeline 0 and 1 in order. Otherwise, only one available zone is allowed.
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置Available Zone Configuration: Under disaster recovery conditions, up to two are supported, corresponding to pipeline 0 and 1 in order. Otherwise, only one available zone is allowed.
                     * @param _zones Available Zone Configuration: Under disaster recovery conditions, up to two are supported, corresponding to pipeline 0 and 1 in order. Otherwise, only one available zone is allowed.
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
                     * 获取The input RTMP_PULL configuration information.
                     * @return RTMPPullSettings The input RTMP_PULL configuration information.
                     * 
                     */
                    DescribeInputRTMPPullSettings GetRTMPPullSettings() const;

                    /**
                     * 设置The input RTMP_PULL configuration information.
                     * @param _rTMPPullSettings The input RTMP_PULL configuration information.
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
                     * 获取The RTSP_PULL configuration information entered.
                     * @return RTSPPullSettings The RTSP_PULL configuration information entered.
                     * 
                     */
                    DescribeInputRTSPPullSettings GetRTSPPullSettings() const;

                    /**
                     * 设置The RTSP_PULL configuration information entered.
                     * @param _rTSPPullSettings The RTSP_PULL configuration information entered.
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
                     * 获取The input HLS-PULL configuration information.
                     * @return HLSPullSettings The input HLS-PULL configuration information.
                     * 
                     */
                    DescribeInputHLSPullSettings GetHLSPullSettings() const;

                    /**
                     * 设置The input HLS-PULL configuration information.
                     * @param _hLSPullSettings The input HLS-PULL configuration information.
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
                     * 获取Extended smooth streaming configuration information.
                     * @return ResilientStream Extended smooth streaming configuration information.
                     * 
                     */
                    ResilientStreamConf GetResilientStream() const;

                    /**
                     * 设置Extended smooth streaming configuration information.
                     * @param _resilientStream Extended smooth streaming configuration information.
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
                     * 获取The bound security group ID.
                     * @return SecurityGroupIds The bound security group ID.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置The bound security group ID.
                     * @param _securityGroupIds The bound security group ID.
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
                     * 获取The input RIST configuration information.
                     * @return RISTSettings The input RIST configuration information.
                     * 
                     */
                    DescribeInputRISTSettings GetRISTSettings() const;

                    /**
                     * 设置The input RIST configuration information.
                     * @param _rISTSettings The input RIST configuration information.
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
                     * 获取Enter URL information related to module configuration, including the provided streaming address or the configured third-party source address
                     * @return StreamUrls Enter URL information related to module configuration, including the provided streaming address or the configured third-party source address
                     * 
                     */
                    std::vector<StreamUrlDetail> GetStreamUrls() const;

                    /**
                     * 设置Enter URL information related to module configuration, including the provided streaming address or the configured third-party source address
                     * @param _streamUrls Enter URL information related to module configuration, including the provided streaming address or the configured third-party source address
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
                     * 获取Disaster recovery configuration items
                     * @return FailOverOption Disaster recovery configuration items
                     * 
                     */
                    FailOverOption GetFailOverOption() const;

                    /**
                     * 设置Disaster recovery configuration items
                     * @param _failOverOption Disaster recovery configuration items
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
                     * Input ID.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Input protocol.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Input address list.
                     */
                    std::vector<InputAddress> m_inputAddressList;
                    bool m_inputAddressListHasBeenSet;

                    /**
                     * Input IP allowlist.
                     */
                    std::vector<std::string> m_allowIpList;
                    bool m_allowIpListHasBeenSet;

                    /**
                     * SRT configuration information of input.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    DescribeInputSRTSettings m_sRTSettings;
                    bool m_sRTSettingsHasBeenSet;

                    /**
                     * RTP configuration information of input.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    DescribeInputRTPSettings m_rTPSettings;
                    bool m_rTPSettingsHasBeenSet;

                    /**
                     * Input region.
                     */
                    std::string m_inputRegion;
                    bool m_inputRegionHasBeenSet;

                    /**
                     * RTMP configuration information of an input
                     */
                    DescribeInputRTMPSettings m_rTMPSettings;
                    bool m_rTMPSettingsHasBeenSet;

                    /**
                     * Input failover
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * Available Zone Configuration: Under disaster recovery conditions, up to two are supported, corresponding to pipeline 0 and 1 in order. Otherwise, only one available zone is allowed.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * The input RTMP_PULL configuration information.
                     */
                    DescribeInputRTMPPullSettings m_rTMPPullSettings;
                    bool m_rTMPPullSettingsHasBeenSet;

                    /**
                     * The RTSP_PULL configuration information entered.
                     */
                    DescribeInputRTSPPullSettings m_rTSPPullSettings;
                    bool m_rTSPPullSettingsHasBeenSet;

                    /**
                     * The input HLS-PULL configuration information.
                     */
                    DescribeInputHLSPullSettings m_hLSPullSettings;
                    bool m_hLSPullSettingsHasBeenSet;

                    /**
                     * Extended smooth streaming configuration information.
                     */
                    ResilientStreamConf m_resilientStream;
                    bool m_resilientStreamHasBeenSet;

                    /**
                     * The bound security group ID.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * The input RIST configuration information.
                     */
                    DescribeInputRISTSettings m_rISTSettings;
                    bool m_rISTSettingsHasBeenSet;

                    /**
                     * Enter URL information related to module configuration, including the provided streaming address or the configured third-party source address
                     */
                    std::vector<StreamUrlDetail> m_streamUrls;
                    bool m_streamUrlsHasBeenSet;

                    /**
                     * Disaster recovery configuration items
                     */
                    FailOverOption m_failOverOption;
                    bool m_failOverOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEINPUT_H_
