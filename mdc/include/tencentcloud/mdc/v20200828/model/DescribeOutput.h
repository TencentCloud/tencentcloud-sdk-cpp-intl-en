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


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * Configuration information of the queried output.
                */
                class DescribeOutput : public AbstractModel
                {
                public:
                    DescribeOutput();
                    ~DescribeOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Output ID.
                     * @return OutputId Output ID.
                     * 
                     */
                    std::string GetOutputId() const;

                    /**
                     * 设置Output ID.
                     * @param _outputId Output ID.
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
                     * 获取Output type.
                     * @return OutputType Output type.
                     * 
                     */
                    std::string GetOutputType() const;

                    /**
                     * 设置Output type.
                     * @param _outputType Output type.
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
                     * 获取Output description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Description Output description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Output description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _description Output description.
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
                     * 获取Output protocol.
                     * @return Protocol Output protocol.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Output protocol.
                     * @param _protocol Output protocol.
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
                     * 获取Output destination address information list.
                     * @return OutputAddressList Output destination address information list.
                     * 
                     */
                    std::vector<OutputAddress> GetOutputAddressList() const;

                    /**
                     * 设置Output destination address information list.
                     * @param _outputAddressList Output destination address information list.
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
                     * 获取Output region.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OutputRegion Output region.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOutputRegion() const;

                    /**
                     * 设置Output region.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _outputRegion Output region.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取SRT configuration information of output.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SRTSettings SRT configuration information of output.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DescribeOutputSRTSettings GetSRTSettings() const;

                    /**
                     * 设置SRT configuration information of output.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _sRTSettings SRT configuration information of output.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取RTP configuration information of output.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RTPSettings RTP configuration information of output.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DescribeOutputRTPSettings GetRTPSettings() const;

                    /**
                     * 设置RTP configuration information of output.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _rTPSettings RTP configuration information of output.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取RTMP configuration information of output.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RTMPSettings RTMP configuration information of output.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DescribeOutputRTMPSettings GetRTMPSettings() const;

                    /**
                     * 设置RTMP configuration information of output.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _rTMPSettings RTMP configuration information of output.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取RTMP pull configuration of the output
Note: This field may return `null`, indicating that no valid value was found.
                     * @return RTMPPullSettings RTMP pull configuration of the output
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    DescribeOutputRTMPPullSettings GetRTMPPullSettings() const;

                    /**
                     * 设置RTMP pull configuration of the output
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _rTMPPullSettings RTMP pull configuration of the output
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取CIDR allowlist
This parameter is valid if `Protocol` is set to `RTMP_PULL`. If this parameter is left empty, there is no restriction on clients’ IP addresses.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return AllowIpList CIDR allowlist
This parameter is valid if `Protocol` is set to `RTMP_PULL`. If this parameter is left empty, there is no restriction on clients’ IP addresses.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<std::string> GetAllowIpList() const;

                    /**
                     * 设置CIDR allowlist
This parameter is valid if `Protocol` is set to `RTMP_PULL`. If this parameter is left empty, there is no restriction on clients’ IP addresses.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _allowIpList CIDR allowlist
This parameter is valid if `Protocol` is set to `RTMP_PULL`. If this parameter is left empty, there is no restriction on clients’ IP addresses.
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取
                     * @return RTSPPullSettings 
                     * 
                     */
                    DescribeOutputRTSPPullSettings GetRTSPPullSettings() const;

                    /**
                     * 设置
                     * @param _rTSPPullSettings 
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
                     * 获取
                     * @return HLSPullSettings 
                     * 
                     */
                    DescribeOutputHLSPullSettings GetHLSPullSettings() const;

                    /**
                     * 设置
                     * @param _hLSPullSettings 
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
                     * 获取
                     * @return MaxConcurrent 
                     * 
                     */
                    uint64_t GetMaxConcurrent() const;

                    /**
                     * 设置
                     * @param _maxConcurrent 
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

                private:

                    /**
                     * Output ID.
                     */
                    std::string m_outputId;
                    bool m_outputIdHasBeenSet;

                    /**
                     * Output name.
                     */
                    std::string m_outputName;
                    bool m_outputNameHasBeenSet;

                    /**
                     * Output type.
                     */
                    std::string m_outputType;
                    bool m_outputTypeHasBeenSet;

                    /**
                     * Output description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Output protocol.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Output destination address information list.
                     */
                    std::vector<OutputAddress> m_outputAddressList;
                    bool m_outputAddressListHasBeenSet;

                    /**
                     * Output region.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_outputRegion;
                    bool m_outputRegionHasBeenSet;

                    /**
                     * SRT configuration information of output.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    DescribeOutputSRTSettings m_sRTSettings;
                    bool m_sRTSettingsHasBeenSet;

                    /**
                     * RTP configuration information of output.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    DescribeOutputRTPSettings m_rTPSettings;
                    bool m_rTPSettingsHasBeenSet;

                    /**
                     * RTMP configuration information of output.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    DescribeOutputRTMPSettings m_rTMPSettings;
                    bool m_rTMPSettingsHasBeenSet;

                    /**
                     * RTMP pull configuration of the output
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    DescribeOutputRTMPPullSettings m_rTMPPullSettings;
                    bool m_rTMPPullSettingsHasBeenSet;

                    /**
                     * CIDR allowlist
This parameter is valid if `Protocol` is set to `RTMP_PULL`. If this parameter is left empty, there is no restriction on clients’ IP addresses.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_allowIpList;
                    bool m_allowIpListHasBeenSet;

                    /**
                     * 
                     */
                    DescribeOutputRTSPPullSettings m_rTSPPullSettings;
                    bool m_rTSPPullSettingsHasBeenSet;

                    /**
                     * 
                     */
                    DescribeOutputHLSPullSettings m_hLSPullSettings;
                    bool m_hLSPullSettingsHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_maxConcurrent;
                    bool m_maxConcurrentHasBeenSet;

                    /**
                     * The bound security group IDs.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEOUTPUT_H_
