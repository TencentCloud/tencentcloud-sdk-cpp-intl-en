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
The format of an RTMP_PUSH address is ${InputAddress}/${AppName}/${StreamName}.
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
                     * 获取Application name, which is valid if `Type` is `RTMP_PUSH` and can contain 1-32 letters and digits
Note: This field may return `null`, indicating that no valid value was found.
                     * @return AppName Application name, which is valid if `Type` is `RTMP_PUSH` and can contain 1-32 letters and digits
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Application name, which is valid if `Type` is `RTMP_PUSH` and can contain 1-32 letters and digits
Note: This field may return `null`, indicating that no valid value was found.
                     * @param AppName Application name, which is valid if `Type` is `RTMP_PUSH` and can contain 1-32 letters and digits
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Stream name, which is valid if `Type` is `RTMP_PUSH` and can contain 1-32 letters and digits
Note: This field may return `null`, indicating that no valid value was found.
                     * @return StreamName Stream name, which is valid if `Type` is `RTMP_PUSH` and can contain 1-32 letters and digits
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name, which is valid if `Type` is `RTMP_PUSH` and can contain 1-32 letters and digits
Note: This field may return `null`, indicating that no valid value was found.
                     * @param StreamName Stream name, which is valid if `Type` is `RTMP_PUSH` and can contain 1-32 letters and digits
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取Source URL, which is valid if `Type` is `RTMP_PULL`, `HLS_PULL`, or `MP4_PULL` and can contain 1-512 characters
Note: This field may return `null`, indicating that no valid value was found.
                     * @return SourceUrl Source URL, which is valid if `Type` is `RTMP_PULL`, `HLS_PULL`, or `MP4_PULL` and can contain 1-512 characters
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetSourceUrl() const;

                    /**
                     * 设置Source URL, which is valid if `Type` is `RTMP_PULL`, `HLS_PULL`, or `MP4_PULL` and can contain 1-512 characters
Note: This field may return `null`, indicating that no valid value was found.
                     * @param SourceUrl Source URL, which is valid if `Type` is `RTMP_PULL`, `HLS_PULL`, or `MP4_PULL` and can contain 1-512 characters
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetSourceUrl(const std::string& _sourceUrl);

                    /**
                     * 判断参数 SourceUrl 是否已赋值
                     * @return SourceUrl 是否已赋值
                     */
                    bool SourceUrlHasBeenSet() const;

                    /**
                     * 获取RTP/UDP input address, which does not need to be entered for the input parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InputAddress RTP/UDP input address, which does not need to be entered for the input parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInputAddress() const;

                    /**
                     * 设置RTP/UDP input address, which does not need to be entered for the input parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param InputAddress RTP/UDP input address, which does not need to be entered for the input parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInputAddress(const std::string& _inputAddress);

                    /**
                     * 判断参数 InputAddress 是否已赋值
                     * @return InputAddress 是否已赋值
                     */
                    bool InputAddressHasBeenSet() const;

                    /**
                     * 获取Source type for stream pulling and relaying. To pull content from private-read COS buckets under the current account, set this parameter to `TencentCOS`; otherwise, leave it empty.
Note: this field may return `null`, indicating that no valid value was found.
                     * @return SourceType Source type for stream pulling and relaying. To pull content from private-read COS buckets under the current account, set this parameter to `TencentCOS`; otherwise, leave it empty.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置Source type for stream pulling and relaying. To pull content from private-read COS buckets under the current account, set this parameter to `TencentCOS`; otherwise, leave it empty.
Note: this field may return `null`, indicating that no valid value was found.
                     * @param SourceType Source type for stream pulling and relaying. To pull content from private-read COS buckets under the current account, set this parameter to `TencentCOS`; otherwise, leave it empty.
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取Delayed time (ms) for playback, which is valid if `Type` is `RTMP_PUSH`
Value range: 0 (default) or 10000-600000
The value must be a multiple of 1,000.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return DelayTime Delayed time (ms) for playback, which is valid if `Type` is `RTMP_PUSH`
Value range: 0 (default) or 10000-600000
The value must be a multiple of 1,000.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t GetDelayTime() const;

                    /**
                     * 设置Delayed time (ms) for playback, which is valid if `Type` is `RTMP_PUSH`
Value range: 0 (default) or 10000-600000
The value must be a multiple of 1,000.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param DelayTime Delayed time (ms) for playback, which is valid if `Type` is `RTMP_PUSH`
Value range: 0 (default) or 10000-600000
The value must be a multiple of 1,000.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetDelayTime(const int64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取The domain of an SRT_PUSH address. If this is a request parameter, you don’t need to specify it.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return InputDomain The domain of an SRT_PUSH address. If this is a request parameter, you don’t need to specify it.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetInputDomain() const;

                    /**
                     * 设置The domain of an SRT_PUSH address. If this is a request parameter, you don’t need to specify it.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param InputDomain The domain of an SRT_PUSH address. If this is a request parameter, you don’t need to specify it.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetInputDomain(const std::string& _inputDomain);

                    /**
                     * 判断参数 InputDomain 是否已赋值
                     * @return InputDomain 是否已赋值
                     */
                    bool InputDomainHasBeenSet() const;

                    /**
                     * 获取The username, which is used for authentication.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return UserName The username, which is used for authentication.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置The username, which is used for authentication.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param UserName The username, which is used for authentication.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取The password, which is used for authentication.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Password The password, which is used for authentication.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置The password, which is used for authentication.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Password The password, which is used for authentication.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * Application name, which is valid if `Type` is `RTMP_PUSH` and can contain 1-32 letters and digits
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Stream name, which is valid if `Type` is `RTMP_PUSH` and can contain 1-32 letters and digits
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * Source URL, which is valid if `Type` is `RTMP_PULL`, `HLS_PULL`, or `MP4_PULL` and can contain 1-512 characters
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
                     * Delayed time (ms) for playback, which is valid if `Type` is `RTMP_PUSH`
Value range: 0 (default) or 10000-600000
The value must be a multiple of 1,000.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * The domain of an SRT_PUSH address. If this is a request parameter, you don’t need to specify it.
Note: This field may return `null`, indicating that no valid value was found.
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_INPUTSETTINGINFO_H_
