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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_ENDPOINTINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_ENDPOINTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/EndpointAuthInfo.h>
#include <tencentcloud/mdp/v20200527/model/SSAIConf.h>
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
                * Channel endpoint information.
                */
                class EndpointInfo : public AbstractModel
                {
                public:
                    EndpointInfo();
                    ~EndpointInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Endpoint name.
                     * @return Name Endpoint name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Endpoint name.
                     * @param _name Endpoint name.
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
                     * 获取Endpoint URL.
                     * @return Url Endpoint URL.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Endpoint URL.
                     * @param _url Endpoint URL.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Endpoint authentication information.
                     * @return AuthInfo Endpoint authentication information.
                     * 
                     */
                    EndpointAuthInfo GetAuthInfo() const;

                    /**
                     * 设置Endpoint authentication information.
                     * @param _authInfo Endpoint authentication information.
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
                     * 获取Endpoint protocol, supports `HLS`, `CMAF`, `CMAF-HLS`.
                     * @return Protocol Endpoint protocol, supports `HLS`, `CMAF`, `CMAF-HLS`.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Endpoint protocol, supports `HLS`, `CMAF`, `CMAF-HLS`.
                     * @param _protocol Endpoint protocol, supports `HLS`, `CMAF`, `CMAF-HLS`.
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
                     * 获取Manifest name, default is main.
                     * @return Manifest Manifest name, default is main.
                     * 
                     */
                    std::string GetManifest() const;

                    /**
                     * 设置Manifest name, default is main.
                     * @param _manifest Manifest name, default is main.
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
                     * 获取Whether to turn on the time shift function, true: on, false: off, the default is off.
                     * @return TimeShiftEnable Whether to turn on the time shift function, true: on, false: off, the default is off.
                     * 
                     */
                    bool GetTimeShiftEnable() const;

                    /**
                     * 设置Whether to turn on the time shift function, true: on, false: off, the default is off.
                     * @param _timeShiftEnable Whether to turn on the time shift function, true: on, false: off, the default is off.
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
                     * 获取The number of days in the time shift window, up to 30 days. Valid when TimeShiftEnable is turned on.
                     * @return TimeShiftDuration The number of days in the time shift window, up to 30 days. Valid when TimeShiftEnable is turned on.
                     * 
                     */
                    uint64_t GetTimeShiftDuration() const;

                    /**
                     * 设置The number of days in the time shift window, up to 30 days. Valid when TimeShiftEnable is turned on.
                     * @param _timeShiftDuration The number of days in the time shift window, up to 30 days. Valid when TimeShiftEnable is turned on.
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
                     * 获取Advertising insertion function switch.
                     * @return SSAIEnable Advertising insertion function switch.
                     * 
                     */
                    bool GetSSAIEnable() const;

                    /**
                     * 设置Advertising insertion function switch.
                     * @param _sSAIEnable Advertising insertion function switch.
                     * 
                     */
                    void SetSSAIEnable(const bool& _sSAIEnable);

                    /**
                     * 判断参数 SSAIEnable 是否已赋值
                     * @return SSAIEnable 是否已赋值
                     * 
                     */
                    bool SSAIEnableHasBeenSet() const;

                    /**
                     * 获取Ad insertion function configuration information.
                     * @return SSAIInfo Ad insertion function configuration information.
                     * 
                     */
                    SSAIConf GetSSAIInfo() const;

                    /**
                     * 设置Ad insertion function configuration information.
                     * @param _sSAIInfo Ad insertion function configuration information.
                     * 
                     */
                    void SetSSAIInfo(const SSAIConf& _sSAIInfo);

                    /**
                     * 判断参数 SSAIInfo 是否已赋值
                     * @return SSAIInfo 是否已赋值
                     * 
                     */
                    bool SSAIInfoHasBeenSet() const;

                    /**
                     * 获取The customer-defined url parameter is inserted into the subscript at the specified position of the Endpoint url. The optional range of the subscript is: [0,3].
                     * @return CustomUrlParamIndex The customer-defined url parameter is inserted into the subscript at the specified position of the Endpoint url. The optional range of the subscript is: [0,3].
                     * 
                     */
                    uint64_t GetCustomUrlParamIndex() const;

                    /**
                     * 设置The customer-defined url parameter is inserted into the subscript at the specified position of the Endpoint url. The optional range of the subscript is: [0,3].
                     * @param _customUrlParamIndex The customer-defined url parameter is inserted into the subscript at the specified position of the Endpoint url. The optional range of the subscript is: [0,3].
                     * 
                     */
                    void SetCustomUrlParamIndex(const uint64_t& _customUrlParamIndex);

                    /**
                     * 判断参数 CustomUrlParamIndex 是否已赋值
                     * @return CustomUrlParamIndex 是否已赋值
                     * 
                     */
                    bool CustomUrlParamIndexHasBeenSet() const;

                    /**
                     * 获取Customer-defined url parameters are inserted into the specified position of the Endpoint url based on the CustomUrlParamIndex.
The parameters can only contain digits, letters, underscores (_), and hyphens (-), with a length of 1 to 64 chars.
                     * @return CustomUrlParam Customer-defined url parameters are inserted into the specified position of the Endpoint url based on the CustomUrlParamIndex.
The parameters can only contain digits, letters, underscores (_), and hyphens (-), with a length of 1 to 64 chars.
                     * 
                     */
                    std::string GetCustomUrlParam() const;

                    /**
                     * 设置Customer-defined url parameters are inserted into the specified position of the Endpoint url based on the CustomUrlParamIndex.
The parameters can only contain digits, letters, underscores (_), and hyphens (-), with a length of 1 to 64 chars.
                     * @param _customUrlParam Customer-defined url parameters are inserted into the specified position of the Endpoint url based on the CustomUrlParamIndex.
The parameters can only contain digits, letters, underscores (_), and hyphens (-), with a length of 1 to 64 chars.
                     * 
                     */
                    void SetCustomUrlParam(const std::string& _customUrlParam);

                    /**
                     * 判断参数 CustomUrlParam 是否已赋值
                     * @return CustomUrlParam 是否已赋值
                     * 
                     */
                    bool CustomUrlParamHasBeenSet() const;

                    /**
                     * 获取DRM switch. If it is turned on, only CMAF will take effect.
                     * @return DRMEnabled DRM switch. If it is turned on, only CMAF will take effect.
                     * 
                     */
                    bool GetDRMEnabled() const;

                    /**
                     * 设置DRM switch. If it is turned on, only CMAF will take effect.
                     * @param _dRMEnabled DRM switch. If it is turned on, only CMAF will take effect.
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
                     * Endpoint name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Endpoint URL.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Endpoint authentication information.
                     */
                    EndpointAuthInfo m_authInfo;
                    bool m_authInfoHasBeenSet;

                    /**
                     * Endpoint protocol, supports `HLS`, `CMAF`, `CMAF-HLS`.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Manifest name, default is main.
                     */
                    std::string m_manifest;
                    bool m_manifestHasBeenSet;

                    /**
                     * Whether to turn on the time shift function, true: on, false: off, the default is off.
                     */
                    bool m_timeShiftEnable;
                    bool m_timeShiftEnableHasBeenSet;

                    /**
                     * The number of days in the time shift window, up to 30 days. Valid when TimeShiftEnable is turned on.
                     */
                    uint64_t m_timeShiftDuration;
                    bool m_timeShiftDurationHasBeenSet;

                    /**
                     * Advertising insertion function switch.
                     */
                    bool m_sSAIEnable;
                    bool m_sSAIEnableHasBeenSet;

                    /**
                     * Ad insertion function configuration information.
                     */
                    SSAIConf m_sSAIInfo;
                    bool m_sSAIInfoHasBeenSet;

                    /**
                     * The customer-defined url parameter is inserted into the subscript at the specified position of the Endpoint url. The optional range of the subscript is: [0,3].
                     */
                    uint64_t m_customUrlParamIndex;
                    bool m_customUrlParamIndexHasBeenSet;

                    /**
                     * Customer-defined url parameters are inserted into the specified position of the Endpoint url based on the CustomUrlParamIndex.
The parameters can only contain digits, letters, underscores (_), and hyphens (-), with a length of 1 to 64 chars.
                     */
                    std::string m_customUrlParam;
                    bool m_customUrlParamHasBeenSet;

                    /**
                     * DRM switch. If it is turned on, only CMAF will take effect.
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

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_ENDPOINTINFO_H_
