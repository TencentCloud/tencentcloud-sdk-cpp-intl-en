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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEOUTPUT_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/OutputAddress.h>
#include <tencentcloud/mdc/v20200828/model/DescribeOutputSRTSettings.h>
#include <tencentcloud/mdc/v20200828/model/DescribeOutputRTPSettings.h>
#include <tencentcloud/mdc/v20200828/model/DescribeOutputRTMPSettings.h>
#include <tencentcloud/mdc/v20200828/model/DescribeOutputRTMPPullSettings.h>
#include <tencentcloud/mdc/v20200828/model/DescribeOutputRTSPPullSettings.h>
#include <tencentcloud/mdc/v20200828/model/DescribeOutputHLSPullSettings.h>
#include <tencentcloud/mdc/v20200828/model/DescribeOutputRISTSettings.h>
#include <tencentcloud/mdc/v20200828/model/PidSelector.h>
#include <tencentcloud/mdc/v20200828/model/StreamUrlDetail.h>
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
                * Configuration message for querying an output.
                */
                class DescribeOutput : public AbstractModel
                {
                public:
                    DescribeOutput();
                    ~DescribeOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Output Id.</p>
                     * @return OutputId <p>Output Id.</p>
                     * 
                     */
                    std::string GetOutputId() const;

                    /**
                     * 设置<p>Output Id.</p>
                     * @param _outputId <p>Output Id.</p>
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
                     * 获取<p>Output name.</p>
                     * @return OutputName <p>Output name.</p>
                     * 
                     */
                    std::string GetOutputName() const;

                    /**
                     * 设置<p>Output name.</p>
                     * @param _outputName <p>Output name.</p>
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
                     * 获取<p>Output type.</p>
                     * @return OutputType <p>Output type.</p>
                     * 
                     */
                    std::string GetOutputType() const;

                    /**
                     * 设置<p>Output type.</p>
                     * @param _outputType <p>Output type.</p>
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
                     * 获取<p>Output description.</p>
                     * @return Description <p>Output description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Output description.</p>
                     * @param _description <p>Output description.</p>
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
                     * 获取<p>Output protocol.</p>
                     * @return Protocol <p>Output protocol.</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>Output protocol.</p>
                     * @param _protocol <p>Output protocol.</p>
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
                     * 获取<p>List of output egress address information.</p>
                     * @return OutputAddressList <p>List of output egress address information.</p>
                     * 
                     */
                    std::vector<OutputAddress> GetOutputAddressList() const;

                    /**
                     * 设置<p>List of output egress address information.</p>
                     * @param _outputAddressList <p>List of output egress address information.</p>
                     * 
                     */
                    void SetOutputAddressList(const std::vector<OutputAddress>& _outputAddressList);

                    /**
                     * 判断参数 OutputAddressList 是否已赋值
                     * @return OutputAddressList 是否已赋值
                     * 
                     */
                    bool OutputAddressListHasBeenSet() const;

                    /**
                     * 获取<p>Output region.</p>
                     * @return OutputRegion <p>Output region.</p>
                     * 
                     */
                    std::string GetOutputRegion() const;

                    /**
                     * 设置<p>Output region.</p>
                     * @param _outputRegion <p>Output region.</p>
                     * 
                     */
                    void SetOutputRegion(const std::string& _outputRegion);

                    /**
                     * 判断参数 OutputRegion 是否已赋值
                     * @return OutputRegion 是否已赋值
                     * 
                     */
                    bool OutputRegionHasBeenSet() const;

                    /**
                     * 获取<p>SRT configuration information of the output.</p>
                     * @return SRTSettings <p>SRT configuration information of the output.</p>
                     * 
                     */
                    DescribeOutputSRTSettings GetSRTSettings() const;

                    /**
                     * 设置<p>SRT configuration information of the output.</p>
                     * @param _sRTSettings <p>SRT configuration information of the output.</p>
                     * 
                     */
                    void SetSRTSettings(const DescribeOutputSRTSettings& _sRTSettings);

                    /**
                     * 判断参数 SRTSettings 是否已赋值
                     * @return SRTSettings 是否已赋值
                     * 
                     */
                    bool SRTSettingsHasBeenSet() const;

                    /**
                     * 获取<p>Output RTP configuration message.</p>
                     * @return RTPSettings <p>Output RTP configuration message.</p>
                     * 
                     */
                    DescribeOutputRTPSettings GetRTPSettings() const;

                    /**
                     * 设置<p>Output RTP configuration message.</p>
                     * @param _rTPSettings <p>Output RTP configuration message.</p>
                     * 
                     */
                    void SetRTPSettings(const DescribeOutputRTPSettings& _rTPSettings);

                    /**
                     * 判断参数 RTPSettings 是否已赋值
                     * @return RTPSettings 是否已赋值
                     * 
                     */
                    bool RTPSettingsHasBeenSet() const;

                    /**
                     * 获取<p>Output RTMP configuration message.</p>
                     * @return RTMPSettings <p>Output RTMP configuration message.</p>
                     * 
                     */
                    DescribeOutputRTMPSettings GetRTMPSettings() const;

                    /**
                     * 设置<p>Output RTMP configuration message.</p>
                     * @param _rTMPSettings <p>Output RTMP configuration message.</p>
                     * 
                     */
                    void SetRTMPSettings(const DescribeOutputRTMPSettings& _rTMPSettings);

                    /**
                     * 判断参数 RTMPSettings 是否已赋值
                     * @return RTMPSettings 是否已赋值
                     * 
                     */
                    bool RTMPSettingsHasBeenSet() const;

                    /**
                     * 获取<p>Output RTMP pull configuration message.</p>
                     * @return RTMPPullSettings <p>Output RTMP pull configuration message.</p>
                     * 
                     */
                    DescribeOutputRTMPPullSettings GetRTMPPullSettings() const;

                    /**
                     * 设置<p>Output RTMP pull configuration message.</p>
                     * @param _rTMPPullSettings <p>Output RTMP pull configuration message.</p>
                     * 
                     */
                    void SetRTMPPullSettings(const DescribeOutputRTMPPullSettings& _rTMPPullSettings);

                    /**
                     * 判断参数 RTMPPullSettings 是否已赋值
                     * @return RTMPPullSettings 是否已赋值
                     * 
                     */
                    bool RTMPPullSettingsHasBeenSet() const;

                    /**
                     * 获取<p>CIDR allowlist.<br>Valid when Protocol is RTMP_PULL. If empty, it represents no limit on client IP.</p>
                     * @return AllowIpList <p>CIDR allowlist.<br>Valid when Protocol is RTMP_PULL. If empty, it represents no limit on client IP.</p>
                     * 
                     */
                    std::vector<std::string> GetAllowIpList() const;

                    /**
                     * 设置<p>CIDR allowlist.<br>Valid when Protocol is RTMP_PULL. If empty, it represents no limit on client IP.</p>
                     * @param _allowIpList <p>CIDR allowlist.<br>Valid when Protocol is RTMP_PULL. If empty, it represents no limit on client IP.</p>
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
                     * 获取<p>Output RTSP pull stream configuration message.</p>
                     * @return RTSPPullSettings <p>Output RTSP pull stream configuration message.</p>
                     * 
                     */
                    DescribeOutputRTSPPullSettings GetRTSPPullSettings() const;

                    /**
                     * 设置<p>Output RTSP pull stream configuration message.</p>
                     * @param _rTSPPullSettings <p>Output RTSP pull stream configuration message.</p>
                     * 
                     */
                    void SetRTSPPullSettings(const DescribeOutputRTSPPullSettings& _rTSPPullSettings);

                    /**
                     * 判断参数 RTSPPullSettings 是否已赋值
                     * @return RTSPPullSettings 是否已赋值
                     * 
                     */
                    bool RTSPPullSettingsHasBeenSet() const;

                    /**
                     * 获取<p>Output HLS pull configuration message.</p>
                     * @return HLSPullSettings <p>Output HLS pull configuration message.</p>
                     * 
                     */
                    DescribeOutputHLSPullSettings GetHLSPullSettings() const;

                    /**
                     * 设置<p>Output HLS pull configuration message.</p>
                     * @param _hLSPullSettings <p>Output HLS pull configuration message.</p>
                     * 
                     */
                    void SetHLSPullSettings(const DescribeOutputHLSPullSettings& _hLSPullSettings);

                    /**
                     * 判断参数 HLSPullSettings 是否已赋值
                     * @return HLSPullSettings 是否已赋值
                     * 
                     */
                    bool HLSPullSettingsHasBeenSet() const;

                    /**
                     * 获取<p>Maximum number of concurrent stream pulls. Maximum value: 4. Default value: 4.</p>
                     * @return MaxConcurrent <p>Maximum number of concurrent stream pulls. Maximum value: 4. Default value: 4.</p>
                     * 
                     */
                    uint64_t GetMaxConcurrent() const;

                    /**
                     * 设置<p>Maximum number of concurrent stream pulls. Maximum value: 4. Default value: 4.</p>
                     * @param _maxConcurrent <p>Maximum number of concurrent stream pulls. Maximum value: 4. Default value: 4.</p>
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
                     * 获取<p>ID of the bound security group.</p>
                     * @return SecurityGroupIds <p>ID of the bound security group.</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>ID of the bound security group.</p>
                     * @param _securityGroupIds <p>ID of the bound security group.</p>
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
                     * 获取<p>Availability zone. output currently supports a maximum of one.</p>
                     * @return Zones <p>Availability zone. output currently supports a maximum of one.</p>
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置<p>Availability zone. output currently supports a maximum of one.</p>
                     * @param _zones <p>Availability zone. output currently supports a maximum of one.</p>
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
                     * 获取<p>Output RIST configuration message.</p>
                     * @return RISTSettings <p>Output RIST configuration message.</p>
                     * 
                     */
                    DescribeOutputRISTSettings GetRISTSettings() const;

                    /**
                     * 设置<p>Output RIST configuration message.</p>
                     * @param _rISTSettings <p>Output RIST configuration message.</p>
                     * 
                     */
                    void SetRISTSettings(const DescribeOutputRISTSettings& _rISTSettings);

                    /**
                     * 判断参数 RISTSettings 是否已赋值
                     * @return RISTSettings 是否已赋值
                     * 
                     */
                    bool RISTSettingsHasBeenSet() const;

                    /**
                     * 获取<p>For streams with multiple audio/video tracks, you can specify the track to be used</p>
                     * @return PidSelector <p>For streams with multiple audio/video tracks, you can specify the track to be used</p>
                     * @deprecated
                     */
                    PidSelector GetPidSelector() const;

                    /**
                     * 设置<p>For streams with multiple audio/video tracks, you can specify the track to be used</p>
                     * @param _pidSelector <p>For streams with multiple audio/video tracks, you can specify the track to be used</p>
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
                     * 获取<p>Output module type, including Pinpoint (single-point output, supports up to four concurrent outputs); MultiMesh (multiple streams output, supports more than four concurrent outputs, currently up to 200). The default type is Pinpoint output. For one Flow, only one MultiMesh output is allowed in one zone.</p>
                     * @return OutputKind <p>Output module type, including Pinpoint (single-point output, supports up to four concurrent outputs); MultiMesh (multiple streams output, supports more than four concurrent outputs, currently up to 200). The default type is Pinpoint output. For one Flow, only one MultiMesh output is allowed in one zone.</p>
                     * 
                     */
                    std::string GetOutputKind() const;

                    /**
                     * 设置<p>Output module type, including Pinpoint (single-point output, supports up to four concurrent outputs); MultiMesh (multiple streams output, supports more than four concurrent outputs, currently up to 200). The default type is Pinpoint output. For one Flow, only one MultiMesh output is allowed in one zone.</p>
                     * @param _outputKind <p>Output module type, including Pinpoint (single-point output, supports up to four concurrent outputs); MultiMesh (multiple streams output, supports more than four concurrent outputs, currently up to 200). The default type is Pinpoint output. For one Flow, only one MultiMesh output is allowed in one zone.</p>
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
                     * 获取<p>Output module configuration, related URLs, including the provided pull stream address or the configured relay address for output to a third party</p>
                     * @return StreamUrls <p>Output module configuration, related URLs, including the provided pull stream address or the configured relay address for output to a third party</p>
                     * 
                     */
                    std::vector<StreamUrlDetail> GetStreamUrls() const;

                    /**
                     * 设置<p>Output module configuration, related URLs, including the provided pull stream address or the configured relay address for output to a third party</p>
                     * @param _streamUrls <p>Output module configuration, related URLs, including the provided pull stream address or the configured relay address for output to a third party</p>
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
                     * 获取<p>For streams with multiple audio/video tracks, you can specify the track to be used</p>
                     * @return StreamSelector <p>For streams with multiple audio/video tracks, you can specify the track to be used</p>
                     * 
                     */
                    StreamSelector GetStreamSelector() const;

                    /**
                     * 设置<p>For streams with multiple audio/video tracks, you can specify the track to be used</p>
                     * @param _streamSelector <p>For streams with multiple audio/video tracks, you can specify the track to be used</p>
                     * 
                     */
                    void SetStreamSelector(const StreamSelector& _streamSelector);

                    /**
                     * 判断参数 StreamSelector 是否已赋值
                     * @return StreamSelector 是否已赋值
                     * 
                     */
                    bool StreamSelectorHasBeenSet() const;

                    /**
                     * 获取<p>Output status.</p><p>Enumeration values:</p><ul><li>DISABLED</li><li>ENABLED</li></ul>
                     * @return State <p>Output status.</p><p>Enumeration values:</p><ul><li>DISABLED</li><li>ENABLED</li></ul>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>Output status.</p><p>Enumeration values:</p><ul><li>DISABLED</li><li>ENABLED</li></ul>
                     * @param _state <p>Output status.</p><p>Enumeration values:</p><ul><li>DISABLED</li><li>ENABLED</li></ul>
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * <p>Output Id.</p>
                     */
                    std::string m_outputId;
                    bool m_outputIdHasBeenSet;

                    /**
                     * <p>Output name.</p>
                     */
                    std::string m_outputName;
                    bool m_outputNameHasBeenSet;

                    /**
                     * <p>Output type.</p>
                     */
                    std::string m_outputType;
                    bool m_outputTypeHasBeenSet;

                    /**
                     * <p>Output description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Output protocol.</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>List of output egress address information.</p>
                     */
                    std::vector<OutputAddress> m_outputAddressList;
                    bool m_outputAddressListHasBeenSet;

                    /**
                     * <p>Output region.</p>
                     */
                    std::string m_outputRegion;
                    bool m_outputRegionHasBeenSet;

                    /**
                     * <p>SRT configuration information of the output.</p>
                     */
                    DescribeOutputSRTSettings m_sRTSettings;
                    bool m_sRTSettingsHasBeenSet;

                    /**
                     * <p>Output RTP configuration message.</p>
                     */
                    DescribeOutputRTPSettings m_rTPSettings;
                    bool m_rTPSettingsHasBeenSet;

                    /**
                     * <p>Output RTMP configuration message.</p>
                     */
                    DescribeOutputRTMPSettings m_rTMPSettings;
                    bool m_rTMPSettingsHasBeenSet;

                    /**
                     * <p>Output RTMP pull configuration message.</p>
                     */
                    DescribeOutputRTMPPullSettings m_rTMPPullSettings;
                    bool m_rTMPPullSettingsHasBeenSet;

                    /**
                     * <p>CIDR allowlist.<br>Valid when Protocol is RTMP_PULL. If empty, it represents no limit on client IP.</p>
                     */
                    std::vector<std::string> m_allowIpList;
                    bool m_allowIpListHasBeenSet;

                    /**
                     * <p>Output RTSP pull stream configuration message.</p>
                     */
                    DescribeOutputRTSPPullSettings m_rTSPPullSettings;
                    bool m_rTSPPullSettingsHasBeenSet;

                    /**
                     * <p>Output HLS pull configuration message.</p>
                     */
                    DescribeOutputHLSPullSettings m_hLSPullSettings;
                    bool m_hLSPullSettingsHasBeenSet;

                    /**
                     * <p>Maximum number of concurrent stream pulls. Maximum value: 4. Default value: 4.</p>
                     */
                    uint64_t m_maxConcurrent;
                    bool m_maxConcurrentHasBeenSet;

                    /**
                     * <p>ID of the bound security group.</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>Availability zone. output currently supports a maximum of one.</p>
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * <p>Output RIST configuration message.</p>
                     */
                    DescribeOutputRISTSettings m_rISTSettings;
                    bool m_rISTSettingsHasBeenSet;

                    /**
                     * <p>For streams with multiple audio/video tracks, you can specify the track to be used</p>
                     */
                    PidSelector m_pidSelector;
                    bool m_pidSelectorHasBeenSet;

                    /**
                     * <p>Output module type, including Pinpoint (single-point output, supports up to four concurrent outputs); MultiMesh (multiple streams output, supports more than four concurrent outputs, currently up to 200). The default type is Pinpoint output. For one Flow, only one MultiMesh output is allowed in one zone.</p>
                     */
                    std::string m_outputKind;
                    bool m_outputKindHasBeenSet;

                    /**
                     * <p>Output module configuration, related URLs, including the provided pull stream address or the configured relay address for output to a third party</p>
                     */
                    std::vector<StreamUrlDetail> m_streamUrls;
                    bool m_streamUrlsHasBeenSet;

                    /**
                     * <p>For streams with multiple audio/video tracks, you can specify the track to be used</p>
                     */
                    StreamSelector m_streamSelector;
                    bool m_streamSelectorHasBeenSet;

                    /**
                     * <p>Output status.</p><p>Enumeration values:</p><ul><li>DISABLED</li><li>ENABLED</li></ul>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEOUTPUT_H_
