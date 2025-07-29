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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGECHANNELENDPOINTREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGECHANNELENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/EndpointAuthInfo.h>
#include <tencentcloud/mdp/v20200527/model/DRMInfo.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * CreateStreamPackageChannelEndpoint request structure.
                */
                class CreateStreamPackageChannelEndpointRequest : public AbstractModel
                {
                public:
                    CreateStreamPackageChannelEndpointRequest();
                    ~CreateStreamPackageChannelEndpointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel ID
                     * @return Id Channel ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Channel ID
                     * @param _id Channel ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Endpoint name, which must contain 1 to 32 characters and supports digits, letters, and underscores
                     * @return Name Endpoint name, which must contain 1 to 32 characters and supports digits, letters, and underscores
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Endpoint name, which must contain 1 to 32 characters and supports digits, letters, and underscores
                     * @param _name Endpoint name, which must contain 1 to 32 characters and supports digits, letters, and underscores
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Authentication information
                     * @return AuthInfo Authentication information
                     * 
                     */
                    EndpointAuthInfo GetAuthInfo() const;

                    /**
                     * 设置Authentication information
                     * @param _authInfo Authentication information
                     * 
                     */
                    void SetAuthInfo(const EndpointAuthInfo& _authInfo);

                    /**
                     * 判断参数 AuthInfo 是否已赋值
                     * @return AuthInfo 是否已赋值
                     * 
                     */
                    bool AuthInfoHasBeenSet() const;

                    /**
                     * 获取Endpoint protocol type, supports HLS, DASH, CMAF (only HLS type input can create CMAF Endpoint).
                     * @return Protocol Endpoint protocol type, supports HLS, DASH, CMAF (only HLS type input can create CMAF Endpoint).
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Endpoint protocol type, supports HLS, DASH, CMAF (only HLS type input can create CMAF Endpoint).
                     * @param _protocol Endpoint protocol type, supports HLS, DASH, CMAF (only HLS type input can create CMAF Endpoint).
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
                     * 获取Mainifest name, default is main.
                     * @return Manifest Mainifest name, default is main.
                     * 
                     */
                    std::string GetManifest() const;

                    /**
                     * 设置Mainifest name, default is main.
                     * @param _manifest Mainifest name, default is main.
                     * 
                     */
                    void SetManifest(const std::string& _manifest);

                    /**
                     * 判断参数 Manifest 是否已赋值
                     * @return Manifest 是否已赋值
                     * 
                     */
                    bool ManifestHasBeenSet() const;

                    /**
                     * 获取Whether to turn on the TimeShift function, true: on, false: off, the default is off.
                     * @return TimeShiftEnable Whether to turn on the TimeShift function, true: on, false: off, the default is off.
                     * 
                     */
                    bool GetTimeShiftEnable() const;

                    /**
                     * 设置Whether to turn on the TimeShift function, true: on, false: off, the default is off.
                     * @param _timeShiftEnable Whether to turn on the TimeShift function, true: on, false: off, the default is off.
                     * 
                     */
                    void SetTimeShiftEnable(const bool& _timeShiftEnable);

                    /**
                     * 判断参数 TimeShiftEnable 是否已赋值
                     * @return TimeShiftEnable 是否已赋值
                     * 
                     */
                    bool TimeShiftEnableHasBeenSet() const;

                    /**
                     * 获取The number of days to look back in TimeShift, up to 30 days is supported.
                     * @return TimeShiftDuration The number of days to look back in TimeShift, up to 30 days is supported.
                     * 
                     */
                    uint64_t GetTimeShiftDuration() const;

                    /**
                     * 设置The number of days to look back in TimeShift, up to 30 days is supported.
                     * @param _timeShiftDuration The number of days to look back in TimeShift, up to 30 days is supported.
                     * 
                     */
                    void SetTimeShiftDuration(const uint64_t& _timeShiftDuration);

                    /**
                     * 判断参数 TimeShiftDuration 是否已赋值
                     * @return TimeShiftDuration 是否已赋值
                     * 
                     */
                    bool TimeShiftDurationHasBeenSet() const;

                    /**
                     * 获取Enable DRM. This is only effective for CMAF protocol.
                     * @return DRMEnabled Enable DRM. This is only effective for CMAF protocol.
                     * 
                     */
                    bool GetDRMEnabled() const;

                    /**
                     * 设置Enable DRM. This is only effective for CMAF protocol.
                     * @param _dRMEnabled Enable DRM. This is only effective for CMAF protocol.
                     * 
                     */
                    void SetDRMEnabled(const bool& _dRMEnabled);

                    /**
                     * 判断参数 DRMEnabled 是否已赋值
                     * @return DRMEnabled 是否已赋值
                     * 
                     */
                    bool DRMEnabledHasBeenSet() const;

                    /**
                     * 获取DRM configuration information.
                     * @return DRMInfo DRM configuration information.
                     * 
                     */
                    DRMInfo GetDRMInfo() const;

                    /**
                     * 设置DRM configuration information.
                     * @param _dRMInfo DRM configuration information.
                     * 
                     */
                    void SetDRMInfo(const DRMInfo& _dRMInfo);

                    /**
                     * 判断参数 DRMInfo 是否已赋值
                     * @return DRMInfo 是否已赋值
                     * 
                     */
                    bool DRMInfoHasBeenSet() const;

                private:

                    /**
                     * Channel ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Endpoint name, which must contain 1 to 32 characters and supports digits, letters, and underscores
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Authentication information
                     */
                    EndpointAuthInfo m_authInfo;
                    bool m_authInfoHasBeenSet;

                    /**
                     * Endpoint protocol type, supports HLS, DASH, CMAF (only HLS type input can create CMAF Endpoint).
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Mainifest name, default is main.
                     */
                    std::string m_manifest;
                    bool m_manifestHasBeenSet;

                    /**
                     * Whether to turn on the TimeShift function, true: on, false: off, the default is off.
                     */
                    bool m_timeShiftEnable;
                    bool m_timeShiftEnableHasBeenSet;

                    /**
                     * The number of days to look back in TimeShift, up to 30 days is supported.
                     */
                    uint64_t m_timeShiftDuration;
                    bool m_timeShiftDurationHasBeenSet;

                    /**
                     * Enable DRM. This is only effective for CMAF protocol.
                     */
                    bool m_dRMEnabled;
                    bool m_dRMEnabledHasBeenSet;

                    /**
                     * DRM configuration information.
                     */
                    DRMInfo m_dRMInfo;
                    bool m_dRMInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGECHANNELENDPOINTREQUEST_H_
