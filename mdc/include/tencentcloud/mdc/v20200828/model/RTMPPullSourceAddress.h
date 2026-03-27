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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_RTMPPULLSOURCEADDRESS_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_RTMPPULLSOURCEADDRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * Created input RTMP pull stream origin server configuration.
                */
                class RTMPPullSourceAddress : public AbstractModel
                {
                public:
                    RTMPPullSourceAddress();
                    ~RTMPPullSourceAddress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The TcUrl address of the RTMP origin server.
                     * @return TcUrl The TcUrl address of the RTMP origin server.
                     * 
                     */
                    std::string GetTcUrl() const;

                    /**
                     * 设置The TcUrl address of the RTMP origin server.
                     * @param _tcUrl The TcUrl address of the RTMP origin server.
                     * 
                     */
                    void SetTcUrl(const std::string& _tcUrl);

                    /**
                     * 判断参数 TcUrl 是否已赋值
                     * @return TcUrl 是否已赋值
                     * 
                     */
                    bool TcUrlHasBeenSet() const;

                    /**
                     * 获取The StreamKey of the RTMP origin server.
                     * @return StreamKey The StreamKey of the RTMP origin server.
                     * 
                     */
                    std::string GetStreamKey() const;

                    /**
                     * 设置The StreamKey of the RTMP origin server.
                     * @param _streamKey The StreamKey of the RTMP origin server.
                     * 
                     */
                    void SetStreamKey(const std::string& _streamKey);

                    /**
                     * 判断参数 StreamKey 是否已赋值
                     * @return StreamKey 是否已赋值
                     * 
                     */
                    bool StreamKeyHasBeenSet() const;

                private:

                    /**
                     * The TcUrl address of the RTMP origin server.
                     */
                    std::string m_tcUrl;
                    bool m_tcUrlHasBeenSet;

                    /**
                     * The StreamKey of the RTMP origin server.
                     */
                    std::string m_streamKey;
                    bool m_streamKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_RTMPPULLSOURCEADDRESS_H_
