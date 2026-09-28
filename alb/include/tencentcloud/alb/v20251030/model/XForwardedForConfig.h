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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_XFORWARDEDFORCONFIG_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_XFORWARDEDFORCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Forwarding configuration
                */
                class XForwardedForConfig : public AbstractModel
                {
                public:
                    XForwardedForConfig();
                    ~XForwardedForConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to get the CLB instance ID through the ALB-ID header field.
- **true**: Yes.
- **false**: No.
                     * @return XForwardedForAlbIdEnabled Whether to get the CLB instance ID through the ALB-ID header field.
- **true**: Yes.
- **false**: No.
                     * 
                     */
                    bool GetXForwardedForAlbIdEnabled() const;

                    /**
                     * 设置Whether to get the CLB instance ID through the ALB-ID header field.
- **true**: Yes.
- **false**: No.
                     * @param _xForwardedForAlbIdEnabled Whether to get the CLB instance ID through the ALB-ID header field.
- **true**: Yes.
- **false**: No.
                     * 
                     */
                    void SetXForwardedForAlbIdEnabled(const bool& _xForwardedForAlbIdEnabled);

                    /**
                     * 判断参数 XForwardedForAlbIdEnabled 是否已赋值
                     * @return XForwardedForAlbIdEnabled 是否已赋值
                     * 
                     */
                    bool XForwardedForAlbIdEnabledHasBeenSet() const;

                    /**
                     * 获取Whether to obtain the port of the client accessing the load balancing instance through the X-Forwarded-Client-srcport header field.
- **true**: Yes.
- **false**: No.
                     * @return XForwardedForClientSrcPortEnabled Whether to obtain the port of the client accessing the load balancing instance through the X-Forwarded-Client-srcport header field.
- **true**: Yes.
- **false**: No.
                     * 
                     */
                    bool GetXForwardedForClientSrcPortEnabled() const;

                    /**
                     * 设置Whether to obtain the port of the client accessing the load balancing instance through the X-Forwarded-Client-srcport header field.
- **true**: Yes.
- **false**: No.
                     * @param _xForwardedForClientSrcPortEnabled Whether to obtain the port of the client accessing the load balancing instance through the X-Forwarded-Client-srcport header field.
- **true**: Yes.
- **false**: No.
                     * 
                     */
                    void SetXForwardedForClientSrcPortEnabled(const bool& _xForwardedForClientSrcPortEnabled);

                    /**
                     * 判断参数 XForwardedForClientSrcPortEnabled 是否已赋值
                     * @return XForwardedForClientSrcPortEnabled 是否已赋值
                     * 
                     */
                    bool XForwardedForClientSrcPortEnabledHasBeenSet() const;

                    /**
                     * 获取Whether to enable obtaining the client domain name that accesses the load balancing instance through the X-Forwarded-Host header field.
- **true**: yes.
- **false**: No.
                     * @return XForwardedForHostEnabled Whether to enable obtaining the client domain name that accesses the load balancing instance through the X-Forwarded-Host header field.
- **true**: yes.
- **false**: No.
                     * 
                     */
                    bool GetXForwardedForHostEnabled() const;

                    /**
                     * 设置Whether to enable obtaining the client domain name that accesses the load balancing instance through the X-Forwarded-Host header field.
- **true**: yes.
- **false**: No.
                     * @param _xForwardedForHostEnabled Whether to enable obtaining the client domain name that accesses the load balancing instance through the X-Forwarded-Host header field.
- **true**: yes.
- **false**: No.
                     * 
                     */
                    void SetXForwardedForHostEnabled(const bool& _xForwardedForHostEnabled);

                    /**
                     * 判断参数 XForwardedForHostEnabled 是否已赋值
                     * @return XForwardedForHostEnabled 是否已赋值
                     * 
                     */
                    bool XForwardedForHostEnabledHasBeenSet() const;

                    /**
                     * 获取Specify how to handle the X-Forwarded-For (XFF) HTTP header field.
- **append**: Append mode (default). Appends the real IP of the client to the end of the X-Forwarded-For header, retaining the original XFF link information.
-**remove**: Deletion mode. Remove the X-Forwarded-For header field and do not pass this header to the real server.
- **passthrough**: Passthrough mode. The X-Forwarded-For header remains unchanged and is directly passed through to the real server without any modification.

                     * @return XForwardedForMode Specify how to handle the X-Forwarded-For (XFF) HTTP header field.
- **append**: Append mode (default). Appends the real IP of the client to the end of the X-Forwarded-For header, retaining the original XFF link information.
-**remove**: Deletion mode. Remove the X-Forwarded-For header field and do not pass this header to the real server.
- **passthrough**: Passthrough mode. The X-Forwarded-For header remains unchanged and is directly passed through to the real server without any modification.

                     * 
                     */
                    std::string GetXForwardedForMode() const;

                    /**
                     * 设置Specify how to handle the X-Forwarded-For (XFF) HTTP header field.
- **append**: Append mode (default). Appends the real IP of the client to the end of the X-Forwarded-For header, retaining the original XFF link information.
-**remove**: Deletion mode. Remove the X-Forwarded-For header field and do not pass this header to the real server.
- **passthrough**: Passthrough mode. The X-Forwarded-For header remains unchanged and is directly passed through to the real server without any modification.

                     * @param _xForwardedForMode Specify how to handle the X-Forwarded-For (XFF) HTTP header field.
- **append**: Append mode (default). Appends the real IP of the client to the end of the X-Forwarded-For header, retaining the original XFF link information.
-**remove**: Deletion mode. Remove the X-Forwarded-For header field and do not pass this header to the real server.
- **passthrough**: Passthrough mode. The X-Forwarded-For header remains unchanged and is directly passed through to the real server without any modification.

                     * 
                     */
                    void SetXForwardedForMode(const std::string& _xForwardedForMode);

                    /**
                     * 判断参数 XForwardedForMode 是否已赋值
                     * @return XForwardedForMode 是否已赋值
                     * 
                     */
                    bool XForwardedForModeHasBeenSet() const;

                    /**
                     * 获取Whether to obtain the listening port of the load balancing instance through the X-Forwarded-Port header field.
- **true**: yes.
- **false**: No.
                     * @return XForwardedForPortEnabled Whether to obtain the listening port of the load balancing instance through the X-Forwarded-Port header field.
- **true**: yes.
- **false**: No.
                     * 
                     */
                    bool GetXForwardedForPortEnabled() const;

                    /**
                     * 设置Whether to obtain the listening port of the load balancing instance through the X-Forwarded-Port header field.
- **true**: yes.
- **false**: No.
                     * @param _xForwardedForPortEnabled Whether to obtain the listening port of the load balancing instance through the X-Forwarded-Port header field.
- **true**: yes.
- **false**: No.
                     * 
                     */
                    void SetXForwardedForPortEnabled(const bool& _xForwardedForPortEnabled);

                    /**
                     * 判断参数 XForwardedForPortEnabled 是否已赋值
                     * @return XForwardedForPortEnabled 是否已赋值
                     * 
                     */
                    bool XForwardedForPortEnabledHasBeenSet() const;

                    /**
                     * 获取Whether to obtain the listening protocol of the load balancing instance through the X-Forwarded-Proto header field.
- **true**: yes.
- **false**: No.

                     * @return XForwardedForProtoEnabled Whether to obtain the listening protocol of the load balancing instance through the X-Forwarded-Proto header field.
- **true**: yes.
- **false**: No.

                     * 
                     */
                    bool GetXForwardedForProtoEnabled() const;

                    /**
                     * 设置Whether to obtain the listening protocol of the load balancing instance through the X-Forwarded-Proto header field.
- **true**: yes.
- **false**: No.

                     * @param _xForwardedForProtoEnabled Whether to obtain the listening protocol of the load balancing instance through the X-Forwarded-Proto header field.
- **true**: yes.
- **false**: No.

                     * 
                     */
                    void SetXForwardedForProtoEnabled(const bool& _xForwardedForProtoEnabled);

                    /**
                     * 判断参数 XForwardedForProtoEnabled 是否已赋值
                     * @return XForwardedForProtoEnabled 是否已赋值
                     * 
                     */
                    bool XForwardedForProtoEnabledHasBeenSet() const;

                    /**
                     * 获取Whether to access the issuer of the client certificate $ssl_client_i_dn through the X-Tencent-Client-IDN header.
- **true**: yes.
- **false**: No.

                     * @return XTencentClientIDNEnabled Whether to access the issuer of the client certificate $ssl_client_i_dn through the X-Tencent-Client-IDN header.
- **true**: yes.
- **false**: No.

                     * 
                     */
                    bool GetXTencentClientIDNEnabled() const;

                    /**
                     * 设置Whether to access the issuer of the client certificate $ssl_client_i_dn through the X-Tencent-Client-IDN header.
- **true**: yes.
- **false**: No.

                     * @param _xTencentClientIDNEnabled Whether to access the issuer of the client certificate $ssl_client_i_dn through the X-Tencent-Client-IDN header.
- **true**: yes.
- **false**: No.

                     * 
                     */
                    void SetXTencentClientIDNEnabled(const bool& _xTencentClientIDNEnabled);

                    /**
                     * 判断参数 XTencentClientIDNEnabled 是否已赋值
                     * @return XTencentClientIDNEnabled 是否已赋值
                     * 
                     */
                    bool XTencentClientIDNEnabledHasBeenSet() const;

                    /**
                     * 获取Whether to access the subject of the client certificate $ssl_client_s_dn through the X-Tencent-Client-SDN header.
- **true**: yes.
- **false**: No.

                     * @return XTencentClientSDNEnabled Whether to access the subject of the client certificate $ssl_client_s_dn through the X-Tencent-Client-SDN header.
- **true**: yes.
- **false**: No.

                     * 
                     */
                    bool GetXTencentClientSDNEnabled() const;

                    /**
                     * 设置Whether to access the subject of the client certificate $ssl_client_s_dn through the X-Tencent-Client-SDN header.
- **true**: yes.
- **false**: No.

                     * @param _xTencentClientSDNEnabled Whether to access the subject of the client certificate $ssl_client_s_dn through the X-Tencent-Client-SDN header.
- **true**: yes.
- **false**: No.

                     * 
                     */
                    void SetXTencentClientSDNEnabled(const bool& _xTencentClientSDNEnabled);

                    /**
                     * 判断参数 XTencentClientSDNEnabled 是否已赋值
                     * @return XTencentClientSDNEnabled 是否已赋值
                     * 
                     */
                    bool XTencentClientSDNEnabledHasBeenSet() const;

                    /**
                     * 获取Whether to access the serial number $ssl_client_serial of the client certificate through the X-Tencent-Client-Serial header.
- **true**: yes.
- **false**: No.

                     * @return XTencentClientSerialEnabled Whether to access the serial number $ssl_client_serial of the client certificate through the X-Tencent-Client-Serial header.
- **true**: yes.
- **false**: No.

                     * 
                     */
                    bool GetXTencentClientSerialEnabled() const;

                    /**
                     * 设置Whether to access the serial number $ssl_client_serial of the client certificate through the X-Tencent-Client-Serial header.
- **true**: yes.
- **false**: No.

                     * @param _xTencentClientSerialEnabled Whether to access the serial number $ssl_client_serial of the client certificate through the X-Tencent-Client-Serial header.
- **true**: yes.
- **false**: No.

                     * 
                     */
                    void SetXTencentClientSerialEnabled(const bool& _xTencentClientSerialEnabled);

                    /**
                     * 判断参数 XTencentClientSerialEnabled 是否已赋值
                     * @return XTencentClientSerialEnabled 是否已赋值
                     * 
                     */
                    bool XTencentClientSerialEnabledHasBeenSet() const;

                    /**
                     * 获取Access the verification result $ssl_client_verify of the client certificate through the X-Tencent-Client-Verify header.
- **true**: yes.
- **false**: No.

                     * @return XTencentClientVerifyEnabled Access the verification result $ssl_client_verify of the client certificate through the X-Tencent-Client-Verify header.
- **true**: yes.
- **false**: No.

                     * 
                     */
                    bool GetXTencentClientVerifyEnabled() const;

                    /**
                     * 设置Access the verification result $ssl_client_verify of the client certificate through the X-Tencent-Client-Verify header.
- **true**: yes.
- **false**: No.

                     * @param _xTencentClientVerifyEnabled Access the verification result $ssl_client_verify of the client certificate through the X-Tencent-Client-Verify header.
- **true**: yes.
- **false**: No.

                     * 
                     */
                    void SetXTencentClientVerifyEnabled(const bool& _xTencentClientVerifyEnabled);

                    /**
                     * 判断参数 XTencentClientVerifyEnabled 是否已赋值
                     * @return XTencentClientVerifyEnabled 是否已赋值
                     * 
                     */
                    bool XTencentClientVerifyEnabledHasBeenSet() const;

                private:

                    /**
                     * Whether to get the CLB instance ID through the ALB-ID header field.
- **true**: Yes.
- **false**: No.
                     */
                    bool m_xForwardedForAlbIdEnabled;
                    bool m_xForwardedForAlbIdEnabledHasBeenSet;

                    /**
                     * Whether to obtain the port of the client accessing the load balancing instance through the X-Forwarded-Client-srcport header field.
- **true**: Yes.
- **false**: No.
                     */
                    bool m_xForwardedForClientSrcPortEnabled;
                    bool m_xForwardedForClientSrcPortEnabledHasBeenSet;

                    /**
                     * Whether to enable obtaining the client domain name that accesses the load balancing instance through the X-Forwarded-Host header field.
- **true**: yes.
- **false**: No.
                     */
                    bool m_xForwardedForHostEnabled;
                    bool m_xForwardedForHostEnabledHasBeenSet;

                    /**
                     * Specify how to handle the X-Forwarded-For (XFF) HTTP header field.
- **append**: Append mode (default). Appends the real IP of the client to the end of the X-Forwarded-For header, retaining the original XFF link information.
-**remove**: Deletion mode. Remove the X-Forwarded-For header field and do not pass this header to the real server.
- **passthrough**: Passthrough mode. The X-Forwarded-For header remains unchanged and is directly passed through to the real server without any modification.

                     */
                    std::string m_xForwardedForMode;
                    bool m_xForwardedForModeHasBeenSet;

                    /**
                     * Whether to obtain the listening port of the load balancing instance through the X-Forwarded-Port header field.
- **true**: yes.
- **false**: No.
                     */
                    bool m_xForwardedForPortEnabled;
                    bool m_xForwardedForPortEnabledHasBeenSet;

                    /**
                     * Whether to obtain the listening protocol of the load balancing instance through the X-Forwarded-Proto header field.
- **true**: yes.
- **false**: No.

                     */
                    bool m_xForwardedForProtoEnabled;
                    bool m_xForwardedForProtoEnabledHasBeenSet;

                    /**
                     * Whether to access the issuer of the client certificate $ssl_client_i_dn through the X-Tencent-Client-IDN header.
- **true**: yes.
- **false**: No.

                     */
                    bool m_xTencentClientIDNEnabled;
                    bool m_xTencentClientIDNEnabledHasBeenSet;

                    /**
                     * Whether to access the subject of the client certificate $ssl_client_s_dn through the X-Tencent-Client-SDN header.
- **true**: yes.
- **false**: No.

                     */
                    bool m_xTencentClientSDNEnabled;
                    bool m_xTencentClientSDNEnabledHasBeenSet;

                    /**
                     * Whether to access the serial number $ssl_client_serial of the client certificate through the X-Tencent-Client-Serial header.
- **true**: yes.
- **false**: No.

                     */
                    bool m_xTencentClientSerialEnabled;
                    bool m_xTencentClientSerialEnabledHasBeenSet;

                    /**
                     * Access the verification result $ssl_client_verify of the client certificate through the X-Tencent-Client-Verify header.
- **true**: yes.
- **false**: No.

                     */
                    bool m_xTencentClientVerifyEnabled;
                    bool m_xTencentClientVerifyEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_XFORWARDEDFORCONFIG_H_
