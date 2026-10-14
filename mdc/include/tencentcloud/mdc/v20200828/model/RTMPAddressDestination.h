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
                * Target address information for RTMP repush.
                */
                class RTMPAddressDestination : public AbstractModel
                {
                public:
                    RTMPAddressDestination();
                    ~RTMPAddressDestination() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Destination Url for RTMP repush, in the format of 'RTMP://domain/live'.
                     * @return Url Destination Url for RTMP repush, in the format of 'RTMP://domain/live'.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Destination Url for RTMP repush, in the format of 'RTMP://domain/live'.
                     * @param _url Destination Url for RTMP repush, in the format of 'RTMP://domain/live'.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Target StreamKey for RTMP republishing, in the format of 'steamid?key=value'.
                     * @return StreamKey Target StreamKey for RTMP republishing, in the format of 'steamid?key=value'.
                     * 
                     */
                    std::string GetStreamKey() const;

                    /**
                     * 设置Target StreamKey for RTMP republishing, in the format of 'steamid?key=value'.
                     * @param _streamKey Target StreamKey for RTMP republishing, in the format of 'steamid?key=value'.
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
                     * Destination Url for RTMP repush, in the format of 'RTMP://domain/live'.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Target StreamKey for RTMP republishing, in the format of 'steamid?key=value'.
                     */
                    std::string m_streamKey;
                    bool m_streamKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_RTMPADDRESSDESTINATION_H_
