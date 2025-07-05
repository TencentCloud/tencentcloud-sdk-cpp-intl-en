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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_PLAYBACKINFOREQ_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_PLAYBACKINFOREQ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/ClipRangeInfo.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * program playback configuration request.
                */
                class PlaybackInfoReq : public AbstractModel
                {
                public:
                    PlaybackInfoReq();
                    ~PlaybackInfoReq() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Program startup method, live broadcast only supports Absolute, on-demand also supports Relative.
Optional values: Absolute, Relative.
                     * @return TransitionType Program startup method, live broadcast only supports Absolute, on-demand also supports Relative.
Optional values: Absolute, Relative.
                     * 
                     */
                    std::string GetTransitionType() const;

                    /**
                     * 设置Program startup method, live broadcast only supports Absolute, on-demand also supports Relative.
Optional values: Absolute, Relative.
                     * @param _transitionType Program startup method, live broadcast only supports Absolute, on-demand also supports Relative.
Optional values: Absolute, Relative.
                     * 
                     */
                    void SetTransitionType(const std::string& _transitionType);

                    /**
                     * 判断参数 TransitionType 是否已赋值
                     * @return TransitionType 是否已赋值
                     * 
                     */
                    bool TransitionTypeHasBeenSet() const;

                    /**
                     * 获取Unix timestamp, the start execution time of the program in absolute scenarios.
                     * @return StartTime Unix timestamp, the start execution time of the program in absolute scenarios.
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Unix timestamp, the start execution time of the program in absolute scenarios.
                     * @param _startTime Unix timestamp, the start execution time of the program in absolute scenarios.
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Program duration, in milliseconds, valid for live broadcast.
                     * @return Duration Program duration, in milliseconds, valid for live broadcast.
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置Program duration, in milliseconds, valid for live broadcast.
                     * @param _duration Program duration, in milliseconds, valid for live broadcast.
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取It is related to the insertion order of the selected program, divided into After and Before.
                     * @return RelativePosition It is related to the insertion order of the selected program, divided into After and Before.
                     * 
                     */
                    std::string GetRelativePosition() const;

                    /**
                     * 设置It is related to the insertion order of the selected program, divided into After and Before.
                     * @param _relativePosition It is related to the insertion order of the selected program, divided into After and Before.
                     * 
                     */
                    void SetRelativePosition(const std::string& _relativePosition);

                    /**
                     * 判断参数 RelativePosition 是否已赋值
                     * @return RelativePosition 是否已赋值
                     * 
                     */
                    bool RelativePositionHasBeenSet() const;

                    /**
                     * 获取The selected insertion reference program id.
                     * @return RelativeProgramId The selected insertion reference program id.
                     * 
                     */
                    std::string GetRelativeProgramId() const;

                    /**
                     * 设置The selected insertion reference program id.
                     * @param _relativeProgramId The selected insertion reference program id.
                     * 
                     */
                    void SetRelativeProgramId(const std::string& _relativeProgramId);

                    /**
                     * 判断参数 RelativeProgramId 是否已赋值
                     * @return RelativeProgramId 是否已赋值
                     * 
                     */
                    bool RelativeProgramIdHasBeenSet() const;

                    /**
                     * 获取Spacer configuration.
                     * @return ClipRangeConf Spacer configuration.
                     * 
                     */
                    ClipRangeInfo GetClipRangeConf() const;

                    /**
                     * 设置Spacer configuration.
                     * @param _clipRangeConf Spacer configuration.
                     * 
                     */
                    void SetClipRangeConf(const ClipRangeInfo& _clipRangeConf);

                    /**
                     * 判断参数 ClipRangeConf 是否已赋值
                     * @return ClipRangeConf 是否已赋值
                     * 
                     */
                    bool ClipRangeConfHasBeenSet() const;

                private:

                    /**
                     * Program startup method, live broadcast only supports Absolute, on-demand also supports Relative.
Optional values: Absolute, Relative.
                     */
                    std::string m_transitionType;
                    bool m_transitionTypeHasBeenSet;

                    /**
                     * Unix timestamp, the start execution time of the program in absolute scenarios.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Program duration, in milliseconds, valid for live broadcast.
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * It is related to the insertion order of the selected program, divided into After and Before.
                     */
                    std::string m_relativePosition;
                    bool m_relativePositionHasBeenSet;

                    /**
                     * The selected insertion reference program id.
                     */
                    std::string m_relativeProgramId;
                    bool m_relativeProgramIdHasBeenSet;

                    /**
                     * Spacer configuration.
                     */
                    ClipRangeInfo m_clipRangeConf;
                    bool m_clipRangeConfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_PLAYBACKINFOREQ_H_
