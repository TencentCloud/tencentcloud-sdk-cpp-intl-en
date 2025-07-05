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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_OMITTEDDURATION_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_OMITTEDDURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * Duration to be ignored in the spliced video
                */
                class OmittedDuration : public AbstractModel
                {
                public:
                    OmittedDuration();
                    ~OmittedDuration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Offset of the paused time in the spliced video, in milliseconds
                     * @return VideoTime Offset of the paused time in the spliced video, in milliseconds
                     * 
                     */
                    int64_t GetVideoTime() const;

                    /**
                     * 设置Offset of the paused time in the spliced video, in milliseconds
                     * @param _videoTime Offset of the paused time in the spliced video, in milliseconds
                     * 
                     */
                    void SetVideoTime(const int64_t& _videoTime);

                    /**
                     * 判断参数 VideoTime 是否已赋值
                     * @return VideoTime 是否已赋值
                     * 
                     */
                    bool VideoTimeHasBeenSet() const;

                    /**
                     * 获取Recording pause timestamp, in milliseconds
                     * @return PauseTime Recording pause timestamp, in milliseconds
                     * 
                     */
                    int64_t GetPauseTime() const;

                    /**
                     * 设置Recording pause timestamp, in milliseconds
                     * @param _pauseTime Recording pause timestamp, in milliseconds
                     * 
                     */
                    void SetPauseTime(const int64_t& _pauseTime);

                    /**
                     * 判断参数 PauseTime 是否已赋值
                     * @return PauseTime 是否已赋值
                     * 
                     */
                    bool PauseTimeHasBeenSet() const;

                    /**
                     * 获取Recording resumption timestamp, in milliseconds
                     * @return ResumeTime Recording resumption timestamp, in milliseconds
                     * 
                     */
                    int64_t GetResumeTime() const;

                    /**
                     * 设置Recording resumption timestamp, in milliseconds
                     * @param _resumeTime Recording resumption timestamp, in milliseconds
                     * 
                     */
                    void SetResumeTime(const int64_t& _resumeTime);

                    /**
                     * 判断参数 ResumeTime 是否已赋值
                     * @return ResumeTime 是否已赋值
                     * 
                     */
                    bool ResumeTimeHasBeenSet() const;

                private:

                    /**
                     * Offset of the paused time in the spliced video, in milliseconds
                     */
                    int64_t m_videoTime;
                    bool m_videoTimeHasBeenSet;

                    /**
                     * Recording pause timestamp, in milliseconds
                     */
                    int64_t m_pauseTime;
                    bool m_pauseTimeHasBeenSet;

                    /**
                     * Recording resumption timestamp, in milliseconds
                     */
                    int64_t m_resumeTime;
                    bool m_resumeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_OMITTEDDURATION_H_
