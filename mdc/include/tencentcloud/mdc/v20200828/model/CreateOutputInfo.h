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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_CREATEOUTPUTINFO_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_CREATEOUTPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/CreateOutputSrtSettings.h>
#include <tencentcloud/mdc/v20200828/model/CreateOutputRTMPSettings.h>
#include <tencentcloud/mdc/v20200828/model/CreateOutputInfoRTPSettings.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * The information of the output to create.
                */
                class CreateOutputInfo : public AbstractModel
                {
                public:
                    CreateOutputInfo();
                    ~CreateOutputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The output name.
                     * @return OutputName The output name.
                     * 
                     */
                    std::string GetOutputName() const;

                    /**
                     * 设置The output name.
                     * @param _outputName The output name.
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
                     * 获取Description of the output.
                     * @return Description Description of the output.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of the output.
                     * @param _description Description of the output.
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
                     * 获取The output protocol. Valid values: SRT, RTP, RTMP, RTMP_PULL.
                     * @return Protocol The output protocol. Valid values: SRT, RTP, RTMP, RTMP_PULL.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置The output protocol. Valid values: SRT, RTP, RTMP, RTMP_PULL.
                     * @param _protocol The output protocol. Valid values: SRT, RTP, RTMP, RTMP_PULL.
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
                     * 获取The output region.
                     * @return OutputRegion The output region.
                     * 
                     */
                    std::string GetOutputRegion() const;

                    /**
                     * 设置The output region.
                     * @param _outputRegion The output region.
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
                     * 获取The SRT configuration.
                     * @return SRTSettings The SRT configuration.
                     * 
                     */
                    CreateOutputSrtSettings GetSRTSettings() const;

                    /**
                     * 设置The SRT configuration.
                     * @param _sRTSettings The SRT configuration.
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
                     * 获取The RTMP configuration.
                     * @return RTMPSettings The RTMP configuration.
                     * 
                     */
                    CreateOutputRTMPSettings GetRTMPSettings() const;

                    /**
                     * 设置The RTMP configuration.
                     * @param _rTMPSettings The RTMP configuration.
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
                     * 获取The RTP configuration.
                     * @return RTPSettings The RTP configuration.
                     * 
                     */
                    CreateOutputInfoRTPSettings GetRTPSettings() const;

                    /**
                     * 设置The RTP configuration.
                     * @param _rTPSettings The RTP configuration.
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
                     * 获取The IP allowlist. The address must be in CIDR format, such as `0.0.0.0/0`.
This parameter is valid if `Protocol` is set to `RTMP_PULL`. If it is left empty, there is no restriction on clients’ IP addresses.
                     * @return AllowIpList The IP allowlist. The address must be in CIDR format, such as `0.0.0.0/0`.
This parameter is valid if `Protocol` is set to `RTMP_PULL`. If it is left empty, there is no restriction on clients’ IP addresses.
                     * 
                     */
                    std::vector<std::string> GetAllowIpList() const;

                    /**
                     * 设置The IP allowlist. The address must be in CIDR format, such as `0.0.0.0/0`.
This parameter is valid if `Protocol` is set to `RTMP_PULL`. If it is left empty, there is no restriction on clients’ IP addresses.
                     * @param _allowIpList The IP allowlist. The address must be in CIDR format, such as `0.0.0.0/0`.
This parameter is valid if `Protocol` is set to `RTMP_PULL`. If it is left empty, there is no restriction on clients’ IP addresses.
                     * 
                     */
                    void SetAllowIpList(const std::vector<std::string>& _allowIpList);

                    /**
                     * 判断参数 AllowIpList 是否已赋值
                     * @return AllowIpList 是否已赋值
                     * 
                     */
                    bool AllowIpListHasBeenSet() const;

                private:

                    /**
                     * The output name.
                     */
                    std::string m_outputName;
                    bool m_outputNameHasBeenSet;

                    /**
                     * Description of the output.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * The output protocol. Valid values: SRT, RTP, RTMP, RTMP_PULL.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * The output region.
                     */
                    std::string m_outputRegion;
                    bool m_outputRegionHasBeenSet;

                    /**
                     * The SRT configuration.
                     */
                    CreateOutputSrtSettings m_sRTSettings;
                    bool m_sRTSettingsHasBeenSet;

                    /**
                     * The RTMP configuration.
                     */
                    CreateOutputRTMPSettings m_rTMPSettings;
                    bool m_rTMPSettingsHasBeenSet;

                    /**
                     * The RTP configuration.
                     */
                    CreateOutputInfoRTPSettings m_rTPSettings;
                    bool m_rTPSettingsHasBeenSet;

                    /**
                     * The IP allowlist. The address must be in CIDR format, such as `0.0.0.0/0`.
This parameter is valid if `Protocol` is set to `RTMP_PULL`. If it is left empty, there is no restriction on clients’ IP addresses.
                     */
                    std::vector<std::string> m_allowIpList;
                    bool m_allowIpListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_CREATEOUTPUTINFO_H_
