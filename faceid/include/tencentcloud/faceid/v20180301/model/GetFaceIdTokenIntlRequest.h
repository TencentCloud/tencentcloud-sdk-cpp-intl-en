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
                     * 获取The detection mode. Valid values:
`liveness`: Liveness detection only.
`compare`: Liveness detection and face comparison.
Default value: `liveness`.
                     * @return CheckMode The detection mode. Valid values:
`liveness`: Liveness detection only.
`compare`: Liveness detection and face comparison.
Default value: `liveness`.
                     */
                    std::string GetCheckMode() const;

                    /**
                     * 设置The detection mode. Valid values:
`liveness`: Liveness detection only.
`compare`: Liveness detection and face comparison.
Default value: `liveness`.
                     * @param CheckMode The detection mode. Valid values:
`liveness`: Liveness detection only.
`compare`: Liveness detection and face comparison.
Default value: `liveness`.
                     */
                    void SetCheckMode(const std::string& _checkMode);

                    /**
                     * 判断参数 CheckMode 是否已赋值
                     * @return CheckMode 是否已赋值
                     */
                    bool CheckModeHasBeenSet() const;

                    /**
                     * 获取The verification security level. Valid values:
`1`: Video-based liveness detection.
`2`: Motion-based liveness detection.
`3`: Reflection-based liveness detection.
`4`: Motion- and reflection-based liveness detection.
Default value: `4`.
                     * @return SecureLevel The verification security level. Valid values:
`1`: Video-based liveness detection.
`2`: Motion-based liveness detection.
`3`: Reflection-based liveness detection.
`4`: Motion- and reflection-based liveness detection.
Default value: `4`.
                     */
                    std::string GetSecureLevel() const;

                    /**
                     * 设置The verification security level. Valid values:
`1`: Video-based liveness detection.
`2`: Motion-based liveness detection.
`3`: Reflection-based liveness detection.
`4`: Motion- and reflection-based liveness detection.
Default value: `4`.
                     * @param SecureLevel The verification security level. Valid values:
`1`: Video-based liveness detection.
`2`: Motion-based liveness detection.
`3`: Reflection-based liveness detection.
`4`: Motion- and reflection-based liveness detection.
Default value: `4`.
                     */
                    void SetSecureLevel(const std::string& _secureLevel);

                    /**
                     * 判断参数 SecureLevel 是否已赋值
                     * @return SecureLevel 是否已赋值
                     */
                    bool SecureLevelHasBeenSet() const;

                    /**
                     * 获取The image for comparison in the `compare` (liveness detection and face comparison) mode. This parameter is required when the value of `CheckMode` is `compare`.
                     * @return Image The image for comparison in the `compare` (liveness detection and face comparison) mode. This parameter is required when the value of `CheckMode` is `compare`.
                     */
                    std::string GetImage() const;

                    /**
                     * 设置The image for comparison in the `compare` (liveness detection and face comparison) mode. This parameter is required when the value of `CheckMode` is `compare`.
                     * @param Image The image for comparison in the `compare` (liveness detection and face comparison) mode. This parameter is required when the value of `CheckMode` is `compare`.
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取The pass-through parameter.
                     * @return Extra The pass-through parameter.
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置The pass-through parameter.
                     * @param Extra The pass-through parameter.
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     */
                    bool ExtraHasBeenSet() const;

                private:

                    /**
                     * The detection mode. Valid values:
`liveness`: Liveness detection only.
`compare`: Liveness detection and face comparison.
Default value: `liveness`.
                     */
                    std::string m_checkMode;
                    bool m_checkModeHasBeenSet;

                    /**
                     * The verification security level. Valid values:
`1`: Video-based liveness detection.
`2`: Motion-based liveness detection.
`3`: Reflection-based liveness detection.
`4`: Motion- and reflection-based liveness detection.
Default value: `4`.
                     */
                    std::string m_secureLevel;
                    bool m_secureLevelHasBeenSet;

                    /**
                     * The image for comparison in the `compare` (liveness detection and face comparison) mode. This parameter is required when the value of `CheckMode` is `compare`.
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * The pass-through parameter.
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDTOKENINTLREQUEST_H_
