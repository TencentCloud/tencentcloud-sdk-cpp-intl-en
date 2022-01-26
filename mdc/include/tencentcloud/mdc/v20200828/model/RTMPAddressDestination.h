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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_RTMPADDRESSDESTINATION_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_RTMPADDRESSDESTINATION_H_

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
                * Destination address information of RTMP push.
                */
                class RTMPAddressDestination : public AbstractModel
                {
                public:
                    RTMPAddressDestination();
                    ~RTMPAddressDestination() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Destination URL of RTMP push in the format of 'rtmp://domain/live'.
                     * @return Url Destination URL of RTMP push in the format of 'rtmp://domain/live'.
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Destination URL of RTMP push in the format of 'rtmp://domain/live'.
                     * @param Url Destination URL of RTMP push in the format of 'rtmp://domain/live'.
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Destination `StreamKey` of RTMP push in the format of 'streamid?key=value'.
                     * @return StreamKey Destination `StreamKey` of RTMP push in the format of 'streamid?key=value'.
                     */
                    std::string GetStreamKey() const;

                    /**
                     * 设置Destination `StreamKey` of RTMP push in the format of 'streamid?key=value'.
                     * @param StreamKey Destination `StreamKey` of RTMP push in the format of 'streamid?key=value'.
                     */
                    void SetStreamKey(const std::string& _streamKey);

                    /**
                     * 判断参数 StreamKey 是否已赋值
                     * @return StreamKey 是否已赋值
                     */
                    bool StreamKeyHasBeenSet() const;

                private:

                    /**
                     * Destination URL of RTMP push in the format of 'rtmp://domain/live'.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Destination `StreamKey` of RTMP push in the format of 'streamid?key=value'.
                     */
                    std::string m_streamKey;
                    bool m_streamKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_RTMPADDRESSDESTINATION_H_
