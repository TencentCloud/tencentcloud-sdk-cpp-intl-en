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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_PROGRAMSCHEDULEINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_PROGRAMSCHEDULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * The scheduling information of the Program under this channel.
                */
                class ProgramScheduleInfo : public AbstractModel
                {
                public:
                    ProgramScheduleInfo();
                    ~ProgramScheduleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取program name.
                     * @return ProgramName program name.
                     * 
                     */
                    std::string GetProgramName() const;

                    /**
                     * 设置program name.
                     * @param _programName program name.
                     * 
                     */
                    void SetProgramName(const std::string& _programName);

                    /**
                     * 判断参数 ProgramName 是否已赋值
                     * @return ProgramName 是否已赋值
                     * 
                     */
                    bool ProgramNameHasBeenSet() const;

                    /**
                     * 获取program id.
                     * @return ProgramId program id.
                     * 
                     */
                    std::string GetProgramId() const;

                    /**
                     * 设置program id.
                     * @param _programId program id.
                     * 
                     */
                    void SetProgramId(const std::string& _programId);

                    /**
                     * 判断参数 ProgramId 是否已赋值
                     * @return ProgramId 是否已赋值
                     * 
                     */
                    bool ProgramIdHasBeenSet() const;

                    /**
                     * 获取source type.
                     * @return SourceType source type.
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置source type.
                     * @param _sourceType source type.
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取source id.
                     * @return SourceId source id.
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置source id.
                     * @param _sourceId source id.
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取The id of the source location.
                     * @return SourceLocationId The id of the source location.
                     * 
                     */
                    std::string GetSourceLocationId() const;

                    /**
                     * 设置The id of the source location.
                     * @param _sourceLocationId The id of the source location.
                     * 
                     */
                    void SetSourceLocationId(const std::string& _sourceLocationId);

                    /**
                     * 判断参数 SourceLocationId 是否已赋值
                     * @return SourceLocationId 是否已赋值
                     * 
                     */
                    bool SourceLocationIdHasBeenSet() const;

                    /**
                     * 获取Start timestamp.
                     * @return StartTime Start timestamp.
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Start timestamp.
                     * @param _startTime Start timestamp.
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
                     * 获取Duration.
                     * @return Duration Duration.
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置Duration.
                     * @param _duration Duration.
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * program name.
                     */
                    std::string m_programName;
                    bool m_programNameHasBeenSet;

                    /**
                     * program id.
                     */
                    std::string m_programId;
                    bool m_programIdHasBeenSet;

                    /**
                     * source type.
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * source id.
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * The id of the source location.
                     */
                    std::string m_sourceLocationId;
                    bool m_sourceLocationIdHasBeenSet;

                    /**
                     * Start timestamp.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Duration.
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_PROGRAMSCHEDULEINFO_H_
