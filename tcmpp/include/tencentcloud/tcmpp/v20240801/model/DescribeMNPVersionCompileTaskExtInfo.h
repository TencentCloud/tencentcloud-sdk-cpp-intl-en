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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPVERSIONCOMPILETASKEXTINFO_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPVERSIONCOMPILETASKEXTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * Additional compilation task info
                */
                class DescribeMNPVersionCompileTaskExtInfo : public AbstractModel
                {
                public:
                    DescribeMNPVersionCompileTaskExtInfo();
                    ~DescribeMNPVersionCompileTaskExtInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TCMPP error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TCMPPErrMsg TCMPP error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTCMPPErrMsg() const;

                    /**
                     * 设置TCMPP error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tCMPPErrMsg TCMPP error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTCMPPErrMsg(const std::string& _tCMPPErrMsg);

                    /**
                     * 判断参数 TCMPPErrMsg 是否已赋值
                     * @return TCMPPErrMsg 是否已赋值
                     * 
                     */
                    bool TCMPPErrMsgHasBeenSet() const;

                    /**
                     * 获取WX Error Message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WXErrMsg WX Error Message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWXErrMsg() const;

                    /**
                     * 设置WX Error Message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _wXErrMsg WX Error Message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWXErrMsg(const std::string& _wXErrMsg);

                    /**
                     * 判断参数 WXErrMsg 是否已赋值
                     * @return WXErrMsg 是否已赋值
                     * 
                     */
                    bool WXErrMsgHasBeenSet() const;

                    /**
                     * 获取WeChat QR code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WXQrCode WeChat QR code
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWXQrCode() const;

                    /**
                     * 设置WeChat QR code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _wXQrCode WeChat QR code
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWXQrCode(const std::string& _wXQrCode);

                    /**
                     * 判断参数 WXQrCode 是否已赋值
                     * @return WXQrCode 是否已赋值
                     * 
                     */
                    bool WXQrCodeHasBeenSet() const;

                    /**
                     * 获取Compile size Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SizeInfo Compile size Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSizeInfo() const;

                    /**
                     * 设置Compile size Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sizeInfo Compile size Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSizeInfo(const std::string& _sizeInfo);

                    /**
                     * 判断参数 SizeInfo 是否已赋值
                     * @return SizeInfo 是否已赋值
                     * 
                     */
                    bool SizeInfoHasBeenSet() const;

                private:

                    /**
                     * TCMPP error message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tCMPPErrMsg;
                    bool m_tCMPPErrMsgHasBeenSet;

                    /**
                     * WX Error Message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_wXErrMsg;
                    bool m_wXErrMsgHasBeenSet;

                    /**
                     * WeChat QR code
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_wXQrCode;
                    bool m_wXQrCodeHasBeenSet;

                    /**
                     * Compile size Information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sizeInfo;
                    bool m_sizeInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPVERSIONCOMPILETASKEXTINFO_H_
