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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGECHANNELENDPOINTREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGECHANNELENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/EndpointAuthInfo.h>
#include <tencentcloud/mdp/v20200527/model/SSAIConf.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * ModifyStreamPackageChannelEndpoint request structure.
                */
                class ModifyStreamPackageChannelEndpointRequest : public AbstractModel
                {
                public:
                    ModifyStreamPackageChannelEndpointRequest();
                    ~ModifyStreamPackageChannelEndpointRequest() = default;
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
                     * 获取Channel endpoint URL
                     * @return Url Channel endpoint URL
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Channel endpoint URL
                     * @param _url Channel endpoint URL
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
                     * 获取New endpoint name
                     * @return Name New endpoint name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置New endpoint name
                     * @param _name New endpoint name
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
                     * 获取New channel authentication information
                     * @return AuthInfo New channel authentication information
                     * 
                     */
                    EndpointAuthInfo GetAuthInfo() const;

                    /**
                     * 设置New channel authentication information
                     * @param _authInfo New channel authentication information
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
                     * 获取Endpoint protocol.
                     * @return Protocol Endpoint protocol.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Endpoint protocol.
                     * @param _protocol Endpoint protocol.
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
                     * 获取Ad insertion function configuration information. Valid when SSAIEnable is turned on.
                     * @return SSAIInfo Ad insertion function configuration information. Valid when SSAIEnable is turned on.
                     * 
                     */
                    SSAIConf GetSSAIInfo() const;

                    /**
                     * 设置Ad insertion function configuration information. Valid when SSAIEnable is turned on.
                     * @param _sSAIInfo Ad insertion function configuration information. Valid when SSAIEnable is turned on.
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
                     * 获取The customer-defined url parameter is inserted into the subscript at the specified position of the Endpoint url. 
Calculation starts from the first '/' in the url path, and the subscript starts from 0, the optional range of the subscript is: [0,3].
                     * @return CustomUrlParamIndex The customer-defined url parameter is inserted into the subscript at the specified position of the Endpoint url. 
Calculation starts from the first '/' in the url path, and the subscript starts from 0, the optional range of the subscript is: [0,3].
                     * 
                     */
                    uint64_t GetCustomUrlParamIndex() const;

                    /**
                     * 设置The customer-defined url parameter is inserted into the subscript at the specified position of the Endpoint url. 
Calculation starts from the first '/' in the url path, and the subscript starts from 0, the optional range of the subscript is: [0,3].
                     * @param _customUrlParamIndex The customer-defined url parameter is inserted into the subscript at the specified position of the Endpoint url. 
Calculation starts from the first '/' in the url path, and the subscript starts from 0, the optional range of the subscript is: [0,3].
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

                private:

                    /**
                     * Channel ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Channel endpoint URL
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * New endpoint name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * New channel authentication information
                     */
                    EndpointAuthInfo m_authInfo;
                    bool m_authInfoHasBeenSet;

                    /**
                     * Endpoint protocol.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

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
                     * Ad insertion function configuration information. Valid when SSAIEnable is turned on.
                     */
                    SSAIConf m_sSAIInfo;
                    bool m_sSAIInfoHasBeenSet;

                    /**
                     * The customer-defined url parameter is inserted into the subscript at the specified position of the Endpoint url. 
Calculation starts from the first '/' in the url path, and the subscript starts from 0, the optional range of the subscript is: [0,3].
                     */
                    uint64_t m_customUrlParamIndex;
                    bool m_customUrlParamIndexHasBeenSet;

                    /**
                     * Customer-defined url parameters are inserted into the specified position of the Endpoint url based on the CustomUrlParamIndex.
The parameters can only contain digits, letters, underscores (_), and hyphens (-), with a length of 1 to 64 chars.
                     */
                    std::string m_customUrlParam;
                    bool m_customUrlParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGECHANNELENDPOINTREQUEST_H_
