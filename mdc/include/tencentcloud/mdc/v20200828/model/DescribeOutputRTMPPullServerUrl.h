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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEOUTPUTRTMPPULLSERVERURL_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEOUTPUTRTMPPULLSERVERURL_H_

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
                * RTMP pull URL of the output
                */
                class DescribeOutputRTMPPullServerUrl : public AbstractModel
                {
                public:
                    DescribeOutputRTMPPullServerUrl();
                    ~DescribeOutputRTMPPullServerUrl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`tcUrl` of the RTMP pull URL
                     * @return TcUrl `tcUrl` of the RTMP pull URL
                     * 
                     */
                    std::string GetTcUrl() const;

                    /**
                     * 设置`tcUrl` of the RTMP pull URL
                     * @param _tcUrl `tcUrl` of the RTMP pull URL
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
                     * 获取Stream key of the RTMP pull URL
                     * @return StreamKey Stream key of the RTMP pull URL
                     * 
                     */
                    std::string GetStreamKey() const;

                    /**
                     * 设置Stream key of the RTMP pull URL
                     * @param _streamKey Stream key of the RTMP pull URL
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
                     * `tcUrl` of the RTMP pull URL
                     */
                    std::string m_tcUrl;
                    bool m_tcUrlHasBeenSet;

                    /**
                     * Stream key of the RTMP pull URL
                     */
                    std::string m_streamKey;
                    bool m_streamKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEOUTPUTRTMPPULLSERVERURL_H_
