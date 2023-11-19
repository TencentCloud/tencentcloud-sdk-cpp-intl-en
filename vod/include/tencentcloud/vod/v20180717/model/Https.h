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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_HTTPS_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_HTTPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/CDNCertInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Domain name HTTPS acceleration configuration. This is disabled by default.
                */
                class Https : public AbstractModel
                {
                public:
                    Https();
                    ~Https() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取https configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     * @return Switch https configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置https configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     * @param _switch https configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取http2 configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     * @return Http2 http2 configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     * 
                     */
                    std::string GetHttp2() const;

                    /**
                     * 设置http2 configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     * @param _http2 http2 configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     * 
                     */
                    void SetHttp2(const std::string& _http2);

                    /**
                     * 判断参数 Http2 是否已赋值
                     * @return Http2 是否已赋值
                     * 
                     */
                    bool Http2HasBeenSet() const;

                    /**
                     * 获取Server certificate configuration information
                     * @return CertInfo Server certificate configuration information
                     * 
                     */
                    CDNCertInfo GetCertInfo() const;

                    /**
                     * 设置Server certificate configuration information
                     * @param _certInfo Server certificate configuration information
                     * 
                     */
                    void SetCertInfo(const CDNCertInfo& _certInfo);

                    /**
                     * 判断参数 CertInfo 是否已赋值
                     * @return CertInfo 是否已赋值
                     * 
                     */
                    bool CertInfoHasBeenSet() const;

                private:

                    /**
                     * https configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * http2 configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     */
                    std::string m_http2;
                    bool m_http2HasBeenSet;

                    /**
                     * Server certificate configuration information
                     */
                    CDNCertInfo m_certInfo;
                    bool m_certInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_HTTPS_H_
