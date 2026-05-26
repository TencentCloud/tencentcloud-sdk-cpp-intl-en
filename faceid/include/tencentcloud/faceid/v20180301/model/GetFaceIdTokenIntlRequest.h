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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDTOKENINTLREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDTOKENINTLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetFaceIdTokenIntl request structure.
                */
                class GetFaceIdTokenIntlRequest : public AbstractModel
                {
                public:
                    GetFaceIdTokenIntlRequest();
                    ~GetFaceIdTokenIntlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Indicates the detection mode. Parameter values as follows:<br>"liveness": liveness detection only;<br>"compare": liveness detection + face comparison;<br>Default value: "liveness".</p>
                     * @return CheckMode <p>Indicates the detection mode. Parameter values as follows:<br>"liveness": liveness detection only;<br>"compare": liveness detection + face comparison;<br>Default value: "liveness".</p>
                     * 
                     */
                    std::string GetCheckMode() const;

                    /**
                     * 设置<p>Indicates the detection mode. Parameter values as follows:<br>"liveness": liveness detection only;<br>"compare": liveness detection + face comparison;<br>Default value: "liveness".</p>
                     * @param _checkMode <p>Indicates the detection mode. Parameter values as follows:<br>"liveness": liveness detection only;<br>"compare": liveness detection + face comparison;<br>Default value: "liveness".</p>
                     * 
                     */
                    void SetCheckMode(const std::string& _checkMode);

                    /**
                     * 判断参数 CheckMode 是否已赋值
                     * @return CheckMode 是否已赋值
                     * 
                     */
                    bool CheckModeHasBeenSet() const;

                    /**
                     * 获取<p>Indicates the security level of authentication. Security levels are divided into:<br>"1": silent liveness;<br>"2": action liveness detection;<br>"3": light liveness;<br>"4": action + light liveness;<br>Default value is "4".</p>
**Note:** Security level increases from `1` to `4`, with `4` providing the highest security.
                     * @return SecureLevel <p>Indicates the security level of authentication. Security levels are divided into:<br>"1": silent liveness;<br>"2": action liveness detection;<br>"3": light liveness;<br>"4": action + light liveness;<br>Default value is "4".</p>
**Note:** Security level increases from `1` to `4`, with `4` providing the highest security.
                     * 
                     */
                    std::string GetSecureLevel() const;

                    /**
                     * 设置<p>Indicates the security level of authentication. Security levels are divided into:<br>"1": silent liveness;<br>"2": action liveness detection;<br>"3": light liveness;<br>"4": action + light liveness;<br>Default value is "4".</p>
**Note:** Security level increases from `1` to `4`, with `4` providing the highest security.
                     * @param _secureLevel <p>Indicates the security level of authentication. Security levels are divided into:<br>"1": silent liveness;<br>"2": action liveness detection;<br>"3": light liveness;<br>"4": action + light liveness;<br>Default value is "4".</p>
**Note:** Security level increases from `1` to `4`, with `4` providing the highest security.
                     * 
                     */
                    void SetSecureLevel(const std::string& _secureLevel);

                    /**
                     * 判断参数 SecureLevel 是否已赋值
                     * @return SecureLevel 是否已赋值
                     * 
                     */
                    bool SecureLevelHasBeenSet() const;

                    /**
                     * 获取<p>The base64 code of the image for comparison, used for the "liveness comparison" mode. This parameter is required when CheckMode is "compare".</p>
                     * @return Image <p>The base64 code of the image for comparison, used for the "liveness comparison" mode. This parameter is required when CheckMode is "compare".</p>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>The base64 code of the image for comparison, used for the "liveness comparison" mode. This parameter is required when CheckMode is "compare".</p>
                     * @param _image <p>The base64 code of the image for comparison, used for the "liveness comparison" mode. This parameter is required when CheckMode is "compare".</p>
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取<p>This parameter is a business passthrough parameter and can be omitted unless otherwise needed.</p>
                     * @return Extra <p>This parameter is a business passthrough parameter and can be omitted unless otherwise needed.</p>
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置<p>This parameter is a business passthrough parameter and can be omitted unless otherwise needed.</p>
                     * @param _extra <p>This parameter is a business passthrough parameter and can be omitted unless otherwise needed.</p>
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取<p>This API is used to control the sequence of actions. The action types are as follows:<br>"blink"<br>"mouth"<br>"nod"<br>"shake"<br>Choose 1-2 actions from the four.<br>Single action example: "blink"<br>Multi-action example: "blink,mouth".<br>Default value is blink.<br>Input this parameter only when SecureLevel is 2 or 4 for different action types to take effect; otherwise, the API returns an error.</p>
                     * @return ActionList <p>This API is used to control the sequence of actions. The action types are as follows:<br>"blink"<br>"mouth"<br>"nod"<br>"shake"<br>Choose 1-2 actions from the four.<br>Single action example: "blink"<br>Multi-action example: "blink,mouth".<br>Default value is blink.<br>Input this parameter only when SecureLevel is 2 or 4 for different action types to take effect; otherwise, the API returns an error.</p>
                     * 
                     */
                    std::string GetActionList() const;

                    /**
                     * 设置<p>This API is used to control the sequence of actions. The action types are as follows:<br>"blink"<br>"mouth"<br>"nod"<br>"shake"<br>Choose 1-2 actions from the four.<br>Single action example: "blink"<br>Multi-action example: "blink,mouth".<br>Default value is blink.<br>Input this parameter only when SecureLevel is 2 or 4 for different action types to take effect; otherwise, the API returns an error.</p>
                     * @param _actionList <p>This API is used to control the sequence of actions. The action types are as follows:<br>"blink"<br>"mouth"<br>"nod"<br>"shake"<br>Choose 1-2 actions from the four.<br>Single action example: "blink"<br>Multi-action example: "blink,mouth".<br>Default value is blink.<br>Input this parameter only when SecureLevel is 2 or 4 for different action types to take effect; otherwise, the API returns an error.</p>
                     * 
                     */
                    void SetActionList(const std::string& _actionList);

                    /**
                     * 判断参数 ActionList 是否已赋值
                     * @return ActionList 是否已赋值
                     * 
                     */
                    bool ActionListHasBeenSet() const;

                    /**
                     * 获取<p>PLUS: PLUS version, PRO: PRO version, ENHANCED: enhanced, BASIC: basic (default)</p>
                     * @return SdkVersion <p>PLUS: PLUS version, PRO: PRO version, ENHANCED: enhanced, BASIC: basic (default)</p>
                     * 
                     */
                    std::string GetSdkVersion() const;

                    /**
                     * 设置<p>PLUS: PLUS version, PRO: PRO version, ENHANCED: enhanced, BASIC: basic (default)</p>
                     * @param _sdkVersion <p>PLUS: PLUS version, PRO: PRO version, ENHANCED: enhanced, BASIC: basic (default)</p>
                     * 
                     */
                    void SetSdkVersion(const std::string& _sdkVersion);

                    /**
                     * 判断参数 SdkVersion 是否已赋值
                     * @return SdkVersion 是否已赋值
                     * 
                     */
                    bool SdkVersionHasBeenSet() const;

                    /**
                     * 获取<p>Liveness retry count</p><p>Value ranges from 1 to 5</p><p>Default value: 5</p>
                     * @return RetryLimit <p>Liveness retry count</p><p>Value ranges from 1 to 5</p><p>Default value: 5</p>
                     * 
                     */
                    int64_t GetRetryLimit() const;

                    /**
                     * 设置<p>Liveness retry count</p><p>Value ranges from 1 to 5</p><p>Default value: 5</p>
                     * @param _retryLimit <p>Liveness retry count</p><p>Value ranges from 1 to 5</p><p>Default value: 5</p>
                     * 
                     */
                    void SetRetryLimit(const int64_t& _retryLimit);

                    /**
                     * 判断参数 RetryLimit 是否已赋值
                     * @return RetryLimit 是否已赋值
                     * 
                     */
                    bool RetryLimitHasBeenSet() const;

                private:

                    /**
                     * <p>Indicates the detection mode. Parameter values as follows:<br>"liveness": liveness detection only;<br>"compare": liveness detection + face comparison;<br>Default value: "liveness".</p>
                     */
                    std::string m_checkMode;
                    bool m_checkModeHasBeenSet;

                    /**
                     * <p>Indicates the security level of authentication. Security levels are divided into:<br>"1": silent liveness;<br>"2": action liveness detection;<br>"3": light liveness;<br>"4": action + light liveness;<br>Default value is "4".</p>
**Note:** Security level increases from `1` to `4`, with `4` providing the highest security.
                     */
                    std::string m_secureLevel;
                    bool m_secureLevelHasBeenSet;

                    /**
                     * <p>The base64 code of the image for comparison, used for the "liveness comparison" mode. This parameter is required when CheckMode is "compare".</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>This parameter is a business passthrough parameter and can be omitted unless otherwise needed.</p>
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * <p>This API is used to control the sequence of actions. The action types are as follows:<br>"blink"<br>"mouth"<br>"nod"<br>"shake"<br>Choose 1-2 actions from the four.<br>Single action example: "blink"<br>Multi-action example: "blink,mouth".<br>Default value is blink.<br>Input this parameter only when SecureLevel is 2 or 4 for different action types to take effect; otherwise, the API returns an error.</p>
                     */
                    std::string m_actionList;
                    bool m_actionListHasBeenSet;

                    /**
                     * <p>PLUS: PLUS version, PRO: PRO version, ENHANCED: enhanced, BASIC: basic (default)</p>
                     */
                    std::string m_sdkVersion;
                    bool m_sdkVersionHasBeenSet;

                    /**
                     * <p>Liveness retry count</p><p>Value ranges from 1 to 5</p><p>Default value: 5</p>
                     */
                    int64_t m_retryLimit;
                    bool m_retryLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDTOKENINTLREQUEST_H_
