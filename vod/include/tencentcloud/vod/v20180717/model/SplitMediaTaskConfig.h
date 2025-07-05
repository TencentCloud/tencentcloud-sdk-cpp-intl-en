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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SPLITMEDIATASKCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SPLITMEDIATASKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SplitMediaOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Video stripping task configuration information.
                */
                class SplitMediaTaskConfig : public AbstractModel
                {
                public:
                    SplitMediaTaskConfig();
                    ~SplitMediaTaskConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The offset time of the start of video stripping, unit: seconds. 
<li>Leave it blank or fill in 0, which means that the transcoded video starts from the starting position of the original video;</li>
<li>When the value is greater than 0 (assumed to be n), it means that after transcoding The video starts from the n-th second position of the original video;</li>
<li>When the value is less than 0 (assumed to be -n), it means that the transcoded video starts from the position n seconds before the end of the original video. </li>
                     * @return StartTimeOffset The offset time of the start of video stripping, unit: seconds. 
<li>Leave it blank or fill in 0, which means that the transcoded video starts from the starting position of the original video;</li>
<li>When the value is greater than 0 (assumed to be n), it means that after transcoding The video starts from the n-th second position of the original video;</li>
<li>When the value is less than 0 (assumed to be -n), it means that the transcoded video starts from the position n seconds before the end of the original video. </li>
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置The offset time of the start of video stripping, unit: seconds. 
<li>Leave it blank or fill in 0, which means that the transcoded video starts from the starting position of the original video;</li>
<li>When the value is greater than 0 (assumed to be n), it means that after transcoding The video starts from the n-th second position of the original video;</li>
<li>When the value is less than 0 (assumed to be -n), it means that the transcoded video starts from the position n seconds before the end of the original video. </li>
                     * @param _startTimeOffset The offset time of the start of video stripping, unit: seconds. 
<li>Leave it blank or fill in 0, which means that the transcoded video starts from the starting position of the original video;</li>
<li>When the value is greater than 0 (assumed to be n), it means that after transcoding The video starts from the n-th second position of the original video;</li>
<li>When the value is less than 0 (assumed to be -n), it means that the transcoded video starts from the position n seconds before the end of the original video. </li>
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取Offset time at the end of video stripping, unit: seconds. 
<li>Leave it blank or fill it in with 0, which means that the transcoded video will continue until the end of the original video;</li>
<li>When the value is greater than 0 (assumed to be n), it means that the transcoded video will continue until the end of the original video. The video continues until the nth second of the original video and terminates;</li>
<li>When the value is less than 0 (assumed to be -n), it means that the transcoded video continues until n seconds before the end of the original video. </li>
                     * @return EndTimeOffset Offset time at the end of video stripping, unit: seconds. 
<li>Leave it blank or fill it in with 0, which means that the transcoded video will continue until the end of the original video;</li>
<li>When the value is greater than 0 (assumed to be n), it means that the transcoded video will continue until the end of the original video. The video continues until the nth second of the original video and terminates;</li>
<li>When the value is less than 0 (assumed to be -n), it means that the transcoded video continues until n seconds before the end of the original video. </li>
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置Offset time at the end of video stripping, unit: seconds. 
<li>Leave it blank or fill it in with 0, which means that the transcoded video will continue until the end of the original video;</li>
<li>When the value is greater than 0 (assumed to be n), it means that the transcoded video will continue until the end of the original video. The video continues until the nth second of the original video and terminates;</li>
<li>When the value is less than 0 (assumed to be -n), it means that the transcoded video continues until n seconds before the end of the original video. </li>
                     * @param _endTimeOffset Offset time at the end of video stripping, unit: seconds. 
<li>Leave it blank or fill it in with 0, which means that the transcoded video will continue until the end of the original video;</li>
<li>When the value is greater than 0 (assumed to be n), it means that the transcoded video will continue until the end of the original video. The video continues until the nth second of the original video and terminates;</li>
<li>When the value is less than 0 (assumed to be -n), it means that the transcoded video continues until n seconds before the end of the original video. </li>
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取Task flow template name, if you want Fill in when executing the task flow on the generated new video.
                     * @return ProcedureName Task flow template name, if you want Fill in when executing the task flow on the generated new video.
                     * 
                     */
                    std::string GetProcedureName() const;

                    /**
                     * 设置Task flow template name, if you want Fill in when executing the task flow on the generated new video.
                     * @param _procedureName Task flow template name, if you want Fill in when executing the task flow on the generated new video.
                     * 
                     */
                    void SetProcedureName(const std::string& _procedureName);

                    /**
                     * 判断参数 ProcedureName 是否已赋值
                     * @return ProcedureName 是否已赋值
                     * 
                     */
                    bool ProcedureNameHasBeenSet() const;

                    /**
                     * 获取The video is split into strips to output information.
                     * @return OutputConfig The video is split into strips to output information.
                     * 
                     */
                    SplitMediaOutputConfig GetOutputConfig() const;

                    /**
                     * 设置The video is split into strips to output information.
                     * @param _outputConfig The video is split into strips to output information.
                     * 
                     */
                    void SetOutputConfig(const SplitMediaOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                private:

                    /**
                     * The offset time of the start of video stripping, unit: seconds. 
<li>Leave it blank or fill in 0, which means that the transcoded video starts from the starting position of the original video;</li>
<li>When the value is greater than 0 (assumed to be n), it means that after transcoding The video starts from the n-th second position of the original video;</li>
<li>When the value is less than 0 (assumed to be -n), it means that the transcoded video starts from the position n seconds before the end of the original video. </li>
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * Offset time at the end of video stripping, unit: seconds. 
<li>Leave it blank or fill it in with 0, which means that the transcoded video will continue until the end of the original video;</li>
<li>When the value is greater than 0 (assumed to be n), it means that the transcoded video will continue until the end of the original video. The video continues until the nth second of the original video and terminates;</li>
<li>When the value is less than 0 (assumed to be -n), it means that the transcoded video continues until n seconds before the end of the original video. </li>
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * Task flow template name, if you want Fill in when executing the task flow on the generated new video.
                     */
                    std::string m_procedureName;
                    bool m_procedureNameHasBeenSet;

                    /**
                     * The video is split into strips to output information.
                     */
                    SplitMediaOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SPLITMEDIATASKCONFIG_H_
