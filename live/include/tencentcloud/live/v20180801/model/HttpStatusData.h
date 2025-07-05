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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_HTTPSTATUSDATA_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_HTTPSTATUSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/HttpStatusInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * Playback error code information
                */
                class HttpStatusData : public AbstractModel
                {
                public:
                    HttpStatusData();
                    ~HttpStatusData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data point in time,
In the format of `yyyy-mm-dd HH:MM:SS`.
                     * @return Time Data point in time,
In the format of `yyyy-mm-dd HH:MM:SS`.
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Data point in time,
In the format of `yyyy-mm-dd HH:MM:SS`.
                     * @param _time Data point in time,
In the format of `yyyy-mm-dd HH:MM:SS`.
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Playback status code details.
                     * @return HttpStatusInfoList Playback status code details.
                     * 
                     */
                    std::vector<HttpStatusInfo> GetHttpStatusInfoList() const;

                    /**
                     * 设置Playback status code details.
                     * @param _httpStatusInfoList Playback status code details.
                     * 
                     */
                    void SetHttpStatusInfoList(const std::vector<HttpStatusInfo>& _httpStatusInfoList);

                    /**
                     * 判断参数 HttpStatusInfoList 是否已赋值
                     * @return HttpStatusInfoList 是否已赋值
                     * 
                     */
                    bool HttpStatusInfoListHasBeenSet() const;

                private:

                    /**
                     * Data point in time,
In the format of `yyyy-mm-dd HH:MM:SS`.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Playback status code details.
                     */
                    std::vector<HttpStatusInfo> m_httpStatusInfoList;
                    bool m_httpStatusInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_HTTPSTATUSDATA_H_
