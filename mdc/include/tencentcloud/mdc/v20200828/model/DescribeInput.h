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
                     * 获取
                     * @return RTMPPullSettings 
                     * 
                     */
                    DescribeInputRTMPPullSettings GetRTMPPullSettings() const;

                    /**
                     * 设置
                     * @param _rTMPPullSettings 
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
                     * 获取
                     * @return RTSPPullSettings 
                     * 
                     */
                    DescribeInputRTSPPullSettings GetRTSPPullSettings() const;

                    /**
                     * 设置
                     * @param _rTSPPullSettings 
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
                     * 获取
                     * @return HLSPullSettings 
                     * 
                     */
                    DescribeInputHLSPullSettings GetHLSPullSettings() const;

                    /**
                     * 设置
                     * @param _hLSPullSettings 
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
                     * 获取
                     * @return ResilientStream 
                     * 
                     */
                    ResilientStreamConf GetResilientStream() const;

                    /**
                     * 设置
                     * @param _resilientStream 
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
                     * 
                     */
                    DescribeInputRTMPPullSettings m_rTMPPullSettings;
                    bool m_rTMPPullSettingsHasBeenSet;

                    /**
                     * 
                     */
                    DescribeInputRTSPPullSettings m_rTSPPullSettings;
                    bool m_rTSPPullSettingsHasBeenSet;

                    /**
                     * 
                     */
                    DescribeInputHLSPullSettings m_hLSPullSettings;
                    bool m_hLSPullSettingsHasBeenSet;

                    /**
                     * 
                     */
                    ResilientStreamConf m_resilientStream;
                    bool m_resilientStreamHasBeenSet;

                    /**
                     * The bound security group ID.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEINPUT_H_
