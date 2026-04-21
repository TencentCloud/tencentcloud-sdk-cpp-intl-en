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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_MOTIONGRAPHICSACTIVATESETTING_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_MOTIONGRAPHICSACTIVATESETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * 
                */
                class MotionGraphicsActivateSetting : public AbstractModel
                {
                public:
                    MotionGraphicsActivateSetting();
                    ~MotionGraphicsActivateSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Duration in ms, valid when MOTION_Graphics_ACTIVATE, required; An integer in the range of 0-86400000, where 0 represents the duration until the end of the live stream.
                     * @return Duration Duration in ms, valid when MOTION_Graphics_ACTIVATE, required; An integer in the range of 0-86400000, where 0 represents the duration until the end of the live stream.
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Duration in ms, valid when MOTION_Graphics_ACTIVATE, required; An integer in the range of 0-86400000, where 0 represents the duration until the end of the live stream.
                     * @param _duration Duration in ms, valid when MOTION_Graphics_ACTIVATE, required; An integer in the range of 0-86400000, where 0 represents the duration until the end of the live stream.
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取The address of HTML5 needs to comply with the format specification of http/https.
                     * @return Url The address of HTML5 needs to comply with the format specification of http/https.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置The address of HTML5 needs to comply with the format specification of http/https.
                     * @param _url The address of HTML5 needs to comply with the format specification of http/https.
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
                     * Duration in ms, valid when MOTION_Graphics_ACTIVATE, required; An integer in the range of 0-86400000, where 0 represents the duration until the end of the live stream.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * The address of HTML5 needs to comply with the format specification of http/https.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_MOTIONGRAPHICSACTIVATESETTING_H_
