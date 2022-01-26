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
                     */
                    std::string GetInputId() const;

                    /**
                     * 设置Input ID.
                     * @param InputId Input ID.
                     */
                    void SetInputId(const std::string& _inputId);

                    /**
                     * 判断参数 InputId 是否已赋值
                     * @return InputId 是否已赋值
                     */
                    bool InputIdHasBeenSet() const;

                    /**
                     * 获取Input name.
                     * @return InputName Input name.
                     */
                    std::string GetInputName() const;

                    /**
                     * 设置Input name.
                     * @param InputName Input name.
                     */
                    void SetInputName(const std::string& _inputName);

                    /**
                     * 判断参数 InputName 是否已赋值
                     * @return InputName 是否已赋值
                     */
                    bool InputNameHasBeenSet() const;

                    /**
                     * 获取Input description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Description Input description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Input description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Description Input description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Input protocol.
                     * @return Protocol Input protocol.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Input protocol.
                     * @param Protocol Input protocol.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Input address list.
                     * @return InputAddressList Input address list.
                     */
                    std::vector<InputAddress> GetInputAddressList() const;

                    /**
                     * 设置Input address list.
                     * @param InputAddressList Input address list.
                     */
                    void SetInputAddressList(const std::vector<InputAddress>& _inputAddressList);

                    /**
                     * 判断参数 InputAddressList 是否已赋值
                     * @return InputAddressList 是否已赋值
                     */
                    bool InputAddressListHasBeenSet() const;

                    /**
                     * 获取Input IP allowlist.
                     * @return AllowIpList Input IP allowlist.
                     */
                    std::vector<std::string> GetAllowIpList() const;

                    /**
                     * 设置Input IP allowlist.
                     * @param AllowIpList Input IP allowlist.
                     */
                    void SetAllowIpList(const std::vector<std::string>& _allowIpList);

                    /**
                     * 判断参数 AllowIpList 是否已赋值
                     * @return AllowIpList 是否已赋值
                     */
                    bool AllowIpListHasBeenSet() const;

                    /**
                     * 获取SRT configuration information of input.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SRTSettings SRT configuration information of input.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    DescribeInputSRTSettings GetSRTSettings() const;

                    /**
                     * 设置SRT configuration information of input.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SRTSettings SRT configuration information of input.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSRTSettings(const DescribeInputSRTSettings& _sRTSettings);

                    /**
                     * 判断参数 SRTSettings 是否已赋值
                     * @return SRTSettings 是否已赋值
                     */
                    bool SRTSettingsHasBeenSet() const;

                    /**
                     * 获取RTP configuration information of input.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RTPSettings RTP configuration information of input.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    DescribeInputRTPSettings GetRTPSettings() const;

                    /**
                     * 设置RTP configuration information of input.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RTPSettings RTP configuration information of input.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRTPSettings(const DescribeInputRTPSettings& _rTPSettings);

                    /**
                     * 判断参数 RTPSettings 是否已赋值
                     * @return RTPSettings 是否已赋值
                     */
                    bool RTPSettingsHasBeenSet() const;

                    /**
                     * 获取Input region.
                     * @return InputRegion Input region.
                     */
                    std::string GetInputRegion() const;

                    /**
                     * 设置Input region.
                     * @param InputRegion Input region.
                     */
                    void SetInputRegion(const std::string& _inputRegion);

                    /**
                     * 判断参数 InputRegion 是否已赋值
                     * @return InputRegion 是否已赋值
                     */
                    bool InputRegionHasBeenSet() const;

                    /**
                     * 获取RTMP configuration information of an input
                     * @return RTMPSettings RTMP configuration information of an input
                     */
                    DescribeInputRTMPSettings GetRTMPSettings() const;

                    /**
                     * 设置RTMP configuration information of an input
                     * @param RTMPSettings RTMP configuration information of an input
                     */
                    void SetRTMPSettings(const DescribeInputRTMPSettings& _rTMPSettings);

                    /**
                     * 判断参数 RTMPSettings 是否已赋值
                     * @return RTMPSettings 是否已赋值
                     */
                    bool RTMPSettingsHasBeenSet() const;

                    /**
                     * 获取Input failover
Note: this field may return `null`, indicating that no valid value was found.
                     * @return FailOver Input failover
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置Input failover
Note: this field may return `null`, indicating that no valid value was found.
                     * @param FailOver Input failover
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    void SetFailOver(const std::string& _failOver);

                    /**
                     * 判断参数 FailOver 是否已赋值
                     * @return FailOver 是否已赋值
                     */
                    bool FailOverHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEINPUT_H_
