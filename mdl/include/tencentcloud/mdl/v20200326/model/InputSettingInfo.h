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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_INPUTSETTINGINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_INPUTSETTINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * The input settings.
The format of an RTMP_PUSH/RTMPS_PUSH address is ${InputAddress}/${AppName}/${StreamName}.
The format of an SRT_PUSH address is ${InputAddress}?streamid=${StreamName},h=${InputDomain}.
                */
                class InputSettingInfo : public AbstractModel
                {
                public:
                    InputSettingInfo();
                    ~InputSettingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application name, which is valid if `Type` is `RTMP_PUSH` or `RTMPS_PUSH`, and can contain 1-32 letters and digits
Note: This field may return `null`, indicating that no valid value was found.
                     * @return AppName Application name, which is valid if `Type` is `RTMP_PUSH` or `RTMPS_PUSH`, and can contain 1-32 letters and digits
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Application name, which is valid if `Type` is `RTMP_PUSH` or `RTMPS_PUSH`, and can contain 1-32 letters and digits
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _appName Application name, which is valid if `Type` is `RTMP_PUSH` or `RTMPS_PUSH`, and can contain 1-32 letters and digits
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Stream name, which is valid if `Type` is `RTMP_PUSH` or `RTMPS_PUSH`, and can contain 1-32 letters and digits
Note: This field may return `null`, indicating that no valid value was found.
                     * @return StreamName Stream name, which is valid if `Type` is `RTMP_PUSH` or `RTMPS_PUSH`, and can contain 1-32 letters and digits
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name, which is valid if `Type` is `RTMP_PUSH` or `RTMPS_PUSH`, and can contain 1-32 letters and digits
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _streamName Stream name, which is valid if `Type` is `RTMP_PUSH` or `RTMPS_PUSH`, and can contain 1-32 letters and digits
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取Source URL, which is valid if `Type` is `RTMP_PULL`, `HLS_PULL`,  `MP4_PULL`, `RTSP_PULL` or `SRT_PULL`, and can contain 1-512 characters
Note: This field may return `null`, indicating that no valid value was found.
                     * @return SourceUrl Source URL, which is valid if `Type` is `RTMP_PULL`, `HLS_PULL`,  `MP4_PULL`, `RTSP_PULL` or `SRT_PULL`, and can contain 1-512 characters
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetSourceUrl() const;

                    /**
                     * 设置Source URL, which is valid if `Type` is `RTMP_PULL`, `HLS_PULL`,  `MP4_PULL`, `RTSP_PULL` or `SRT_PULL`, and can contain 1-512 characters
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _sourceUrl Source URL, which is valid if `Type` is `RTMP_PULL`, `HLS_PULL`,  `MP4_PULL`, `RTSP_PULL` or `SRT_PULL`, and can contain 1-512 characters
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetSourceUrl(const std::string& _sourceUrl);

                    /**
                     * 判断参数 SourceUrl 是否已赋值
                     * @return SourceUrl 是否已赋值
                     * 
                     */
                    bool SourceUrlHasBeenSet() const;

                    /**
                     * 获取RTP/UDP input address, which does not need to be entered for the input parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InputAddress RTP/UDP input address, which does not need to be entered for the input parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInputAddress() const;

                    /**
                     * 设置RTP/UDP input address, which does not need to be entered for the input parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _inputAddress RTP/UDP input address, which does not need to be entered for the input parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInputAddress(const std::string& _inputAddress);

                    /**
                     * 判断参数 InputAddress 是否已赋值
                     * @return InputAddress 是否已赋值
                     * 
                     */
                    bool InputAddressHasBeenSet() const;

                    /**
                     * 获取Source type for stream pulling and relaying. To pull content from private-read COS buckets under the current account, set this parameter to `TencentCOS`; otherwise, leave it empty.
Note: this field may return `null`, indicating that no valid value was found.
                     * @return SourceType Source type for stream pulling and relaying. To pull content from private-read COS buckets under the current account, set this parameter to `TencentCOS`; otherwise, leave it empty.
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置Source type for stream pulling and relaying. To pull content from private-read COS buckets under the current account, set this parameter to `TencentCOS`; otherwise, leave it empty.
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _sourceType Source type for stream pulling and relaying. To pull content from private-read COS buckets under the current account, set this parameter to `TencentCOS`; otherwise, leave it empty.
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取Delayed time (ms) for playback, which is valid if `Type` is `RTMP_PUSH` or `RTMPS_PUSH`.
Value range: 0 (default) or 10000-600000.
The value must be a multiple of 1,000.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return DelayTime Delayed time (ms) for playback, which is valid if `Type` is `RTMP_PUSH` or `RTMPS_PUSH`.
Value range: 0 (default) or 10000-600000.
The value must be a multiple of 1,000.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetDelayTime() const;

                    /**
                     * 设置Delayed time (ms) for playback, which is valid if `Type` is `RTMP_PUSH` or `RTMPS_PUSH`.
Value range: 0 (default) or 10000-600000.
The value must be a multiple of 1,000.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _delayTime Delayed time (ms) for playback, which is valid if `Type` is `RTMP_PUSH` or `RTMPS_PUSH`.
Value range: 0 (default) or 10000-600000.
The value must be a multiple of 1,000.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetDelayTime(const int64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取The domain name of the SRT_PUSH push address. No need to fill in the input parameter.
                     * @return InputDomain The domain name of the SRT_PUSH push address. No need to fill in the input parameter.
                     * 
                     */
                    std::string GetInputDomain() const;

                    /**
                     * 设置The domain name of the SRT_PUSH push address. No need to fill in the input parameter.
                     * @param _inputDomain The domain name of the SRT_PUSH push address. No need to fill in the input parameter.
                     * 
                     */
                    void SetInputDomain(const std::string& _inputDomain);

                    /**
                     * 判断参数 InputDomain 是否已赋值
                     * @return InputDomain 是否已赋值
                     * 
                     */
                    bool InputDomainHasBeenSet() const;

                    /**
                     * 获取The username, which is used for authentication.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return UserName The username, which is used for authentication.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置The username, which is used for authentication.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _userName The username, which is used for authentication.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取The password, which is used for authentication.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Password The password, which is used for authentication.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置The password, which is used for authentication.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _password The password, which is used for authentication.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取This parameter is valid when the input source is HLS_PULL and MP4_PULL. It indicates the type of file the source is. The optional values are: LIVE, VOD. Please note that if you do not enter this parameter, the system will take the default input value VOD.
                     * @return ContentType This parameter is valid when the input source is HLS_PULL and MP4_PULL. It indicates the type of file the source is. The optional values are: LIVE, VOD. Please note that if you do not enter this parameter, the system will take the default input value VOD.
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置This parameter is valid when the input source is HLS_PULL and MP4_PULL. It indicates the type of file the source is. The optional values are: LIVE, VOD. Please note that if you do not enter this parameter, the system will take the default input value VOD.
                     * @param _contentType This parameter is valid when the input source is HLS_PULL and MP4_PULL. It indicates the type of file the source is. The optional values are: LIVE, VOD. Please note that if you do not enter this parameter, the system will take the default input value VOD.
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                private:

                    /**
                     * Application name, which is valid if `Type` is `RTMP_PUSH` or `RTMPS_PUSH`, and can contain 1-32 letters and digits
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Stream name, which is valid if `Type` is `RTMP_PUSH` or `RTMPS_PUSH`, and can contain 1-32 letters and digits
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * Source URL, which is valid if `Type` is `RTMP_PULL`, `HLS_PULL`,  `MP4_PULL`, `RTSP_PULL` or `SRT_PULL`, and can contain 1-512 characters
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_sourceUrl;
                    bool m_sourceUrlHasBeenSet;

                    /**
                     * RTP/UDP input address, which does not need to be entered for the input parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_inputAddress;
                    bool m_inputAddressHasBeenSet;

                    /**
                     * Source type for stream pulling and relaying. To pull content from private-read COS buckets under the current account, set this parameter to `TencentCOS`; otherwise, leave it empty.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Delayed time (ms) for playback, which is valid if `Type` is `RTMP_PUSH` or `RTMPS_PUSH`.
Value range: 0 (default) or 10000-600000.
The value must be a multiple of 1,000.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * The domain name of the SRT_PUSH push address. No need to fill in the input parameter.
                     */
                    std::string m_inputDomain;
                    bool m_inputDomainHasBeenSet;

                    /**
                     * The username, which is used for authentication.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * The password, which is used for authentication.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * This parameter is valid when the input source is HLS_PULL and MP4_PULL. It indicates the type of file the source is. The optional values are: LIVE, VOD. Please note that if you do not enter this parameter, the system will take the default input value VOD.
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_INPUTSETTINGINFO_H_
