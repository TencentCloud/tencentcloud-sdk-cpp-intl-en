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


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * The new output configuration.
                */
                class ModifyOutputInfo : public AbstractModel
                {
                public:
                    ModifyOutputInfo();
                    ~ModifyOutputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of the output to modify.
                     * @return OutputId The ID of the output to modify.
                     * 
                     */
                    std::string GetOutputId() const;

                    /**
                     * 设置The ID of the output to modify.
                     * @param _outputId The ID of the output to modify.
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
                     * 获取The description of the output.
                     * @return Description The description of the output.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置The description of the output.
                     * @param _description The description of the output.
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
                     * 获取The output protocol. Valid values: SRT, RTP, RTMP.
                     * @return Protocol The output protocol. Valid values: SRT, RTP, RTMP.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置The output protocol. Valid values: SRT, RTP, RTMP.
                     * @param _protocol The output protocol. Valid values: SRT, RTP, RTMP.
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
                     * 获取The SRT relay configuration.
                     * @return SRTSettings The SRT relay configuration.
                     * 
                     */
                    CreateOutputSrtSettings GetSRTSettings() const;

                    /**
                     * 设置The SRT relay configuration.
                     * @param _sRTSettings The SRT relay configuration.
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
                     * 获取The RTP relay configuration.
                     * @return RTPSettings The RTP relay configuration.
                     * 
                     */
                    CreateOutputInfoRTPSettings GetRTPSettings() const;

                    /**
                     * 设置The RTP relay configuration.
                     * @param _rTPSettings The RTP relay configuration.
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
                     * 获取The RTMP relay configuration.
                     * @return RTMPSettings The RTMP relay configuration.
                     * 
                     */
                    CreateOutputRTMPSettings GetRTMPSettings() const;

                    /**
                     * 设置The RTMP relay configuration.
                     * @param _rTMPSettings The RTMP relay configuration.
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
                     * The ID of the output to modify.
                     */
                    std::string m_outputId;
                    bool m_outputIdHasBeenSet;

                    /**
                     * The output name.
                     */
                    std::string m_outputName;
                    bool m_outputNameHasBeenSet;

                    /**
                     * The description of the output.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * The output protocol. Valid values: SRT, RTP, RTMP.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * The SRT relay configuration.
                     */
                    CreateOutputSrtSettings m_sRTSettings;
                    bool m_sRTSettingsHasBeenSet;

                    /**
                     * The RTP relay configuration.
                     */
                    CreateOutputInfoRTPSettings m_rTPSettings;
                    bool m_rTPSettingsHasBeenSet;

                    /**
                     * The RTMP relay configuration.
                     */
                    CreateOutputRTMPSettings m_rTMPSettings;
                    bool m_rTMPSettingsHasBeenSet;

                    /**
                     * The IP allowlist. The address must be in CIDR format, such as `0.0.0.0/0`.
This parameter is valid if `Protocol` is set to `RTMP_PULL`. If it is left empty, there is no restriction on clients’ IP addresses.
                     */
                    std::vector<std::string> m_allowIpList;
                    bool m_allowIpListHasBeenSet;

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

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_MODIFYOUTPUTINFO_H_
