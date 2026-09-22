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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PLAYSTATFILEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PLAYSTATFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Playback statistics file information
                */
                class PlayStatFileInfo : public AbstractModel
                {
                public:
                    PlayStatFileInfo();
                    ~PlayStatFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Date of the playback statistics in ISO date format (https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return Date Date of the playback statistics in ISO date format (https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Date of the playback statistics in ISO date format (https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _date Date of the playback statistics in ISO date format (https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取URL address of the playback statistics file. The playback statistics file contains:
<li> date: Playback date.</li>
<li> file_id: Video file ID.</li>
<li> ip_count: Number of client IPs after deduplication.</li>
<li> flux: playback traffic volume, unit: byte.</li>
<li> play_times: total number of plays.</li>
<li> pc_play_times: Number of plays on PC.</li>
<li> mobile_play_times: Mobile playback count.</li>
<li> iphone_play_times: Number of plays on iPhone.</li>
<li> android_play_times: Number of plays on Android.</li>
<li> host_name	Domain name.</li>
                     * @return Url URL address of the playback statistics file. The playback statistics file contains:
<li> date: Playback date.</li>
<li> file_id: Video file ID.</li>
<li> ip_count: Number of client IPs after deduplication.</li>
<li> flux: playback traffic volume, unit: byte.</li>
<li> play_times: total number of plays.</li>
<li> pc_play_times: Number of plays on PC.</li>
<li> mobile_play_times: Mobile playback count.</li>
<li> iphone_play_times: Number of plays on iPhone.</li>
<li> android_play_times: Number of plays on Android.</li>
<li> host_name	Domain name.</li>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置URL address of the playback statistics file. The playback statistics file contains:
<li> date: Playback date.</li>
<li> file_id: Video file ID.</li>
<li> ip_count: Number of client IPs after deduplication.</li>
<li> flux: playback traffic volume, unit: byte.</li>
<li> play_times: total number of plays.</li>
<li> pc_play_times: Number of plays on PC.</li>
<li> mobile_play_times: Mobile playback count.</li>
<li> iphone_play_times: Number of plays on iPhone.</li>
<li> android_play_times: Number of plays on Android.</li>
<li> host_name	Domain name.</li>
                     * @param _url URL address of the playback statistics file. The playback statistics file contains:
<li> date: Playback date.</li>
<li> file_id: Video file ID.</li>
<li> ip_count: Number of client IPs after deduplication.</li>
<li> flux: playback traffic volume, unit: byte.</li>
<li> play_times: total number of plays.</li>
<li> pc_play_times: Number of plays on PC.</li>
<li> mobile_play_times: Mobile playback count.</li>
<li> iphone_play_times: Number of plays on iPhone.</li>
<li> android_play_times: Number of plays on Android.</li>
<li> host_name	Domain name.</li>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * Date of the playback statistics in ISO date format (https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * URL address of the playback statistics file. The playback statistics file contains:
<li> date: Playback date.</li>
<li> file_id: Video file ID.</li>
<li> ip_count: Number of client IPs after deduplication.</li>
<li> flux: playback traffic volume, unit: byte.</li>
<li> play_times: total number of plays.</li>
<li> pc_play_times: Number of plays on PC.</li>
<li> mobile_play_times: Mobile playback count.</li>
<li> iphone_play_times: Number of plays on iPhone.</li>
<li> android_play_times: Number of plays on Android.</li>
<li> host_name	Domain name.</li>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PLAYSTATFILEINFO_H_
