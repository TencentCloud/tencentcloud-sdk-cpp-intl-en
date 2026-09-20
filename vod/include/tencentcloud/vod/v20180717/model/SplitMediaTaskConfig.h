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
                * Video splitting task configuration information.
                */
                class SplitMediaTaskConfig : public AbstractModel
                {
                public:
                    SplitMediaTaskConfig();
                    ~SplitMediaTaskConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start time offset of video splitting, in seconds.
<li>Leave it empty or set it to 0, indicating that the transcoded video starts from the start position of the original video;</li>
<li>When the value is greater than 0 (assuming n), the transcoded video starts from the nth second of the original video;</li>
<li>When the value is less than 0 (assuming -n), it means the transcoded video starts from the position n seconds before the end of the original video.</li>
                     * @return StartTimeOffset Start time offset of video splitting, in seconds.
<li>Leave it empty or set it to 0, indicating that the transcoded video starts from the start position of the original video;</li>
<li>When the value is greater than 0 (assuming n), the transcoded video starts from the nth second of the original video;</li>
<li>When the value is less than 0 (assuming -n), it means the transcoded video starts from the position n seconds before the end of the original video.</li>
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time offset of video splitting, in seconds.
<li>Leave it empty or set it to 0, indicating that the transcoded video starts from the start position of the original video;</li>
<li>When the value is greater than 0 (assuming n), the transcoded video starts from the nth second of the original video;</li>
<li>When the value is less than 0 (assuming -n), it means the transcoded video starts from the position n seconds before the end of the original video.</li>
                     * @param _startTimeOffset Start time offset of video splitting, in seconds.
<li>Leave it empty or set it to 0, indicating that the transcoded video starts from the start position of the original video;</li>
<li>When the value is greater than 0 (assuming n), the transcoded video starts from the nth second of the original video;</li>
<li>When the value is less than 0 (assuming -n), it means the transcoded video starts from the position n seconds before the end of the original video.</li>
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
                     * 获取End time offset of video splitting, in seconds.
<li>If not set or set to 0, the transcoded video will last until the end of the original video.</li>
<li>When the value is greater than 0 (assuming n), it means the transcoded video lasts until the nth second of the original video and then ends;</li>
<li>When the value is less than 0 (assuming -n), it means the transcoded video ends n seconds before the original video ends.</li>
                     * @return EndTimeOffset End time offset of video splitting, in seconds.
<li>If not set or set to 0, the transcoded video will last until the end of the original video.</li>
<li>When the value is greater than 0 (assuming n), it means the transcoded video lasts until the nth second of the original video and then ends;</li>
<li>When the value is less than 0 (assuming -n), it means the transcoded video ends n seconds before the original video ends.</li>
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of video splitting, in seconds.
<li>If not set or set to 0, the transcoded video will last until the end of the original video.</li>
<li>When the value is greater than 0 (assuming n), it means the transcoded video lasts until the nth second of the original video and then ends;</li>
<li>When the value is less than 0 (assuming -n), it means the transcoded video ends n seconds before the original video ends.</li>
                     * @param _endTimeOffset End time offset of video splitting, in seconds.
<li>If not set or set to 0, the transcoded video will last until the end of the original video.</li>
<li>When the value is greater than 0 (assuming n), it means the transcoded video lasts until the nth second of the original video and then ends;</li>
<li>When the value is less than 0 (assuming -n), it means the transcoded video ends n seconds before the original video ends.</li>
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
                     * 获取[Task flow](https://www.tencentcloud.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E6.B5.81) name. Fill in when you want to automatically execute a task flow on the generated new video.
                     * @return ProcedureName [Task flow](https://www.tencentcloud.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E6.B5.81) name. Fill in when you want to automatically execute a task flow on the generated new video.
                     * 
                     */
                    std::string GetProcedureName() const;

                    /**
                     * 设置[Task flow](https://www.tencentcloud.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E6.B5.81) name. Fill in when you want to automatically execute a task flow on the generated new video.
                     * @param _procedureName [Task flow](https://www.tencentcloud.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E6.B5.81) name. Fill in when you want to automatically execute a task flow on the generated new video.
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
                     * 获取Video splitting output information.
                     * @return OutputConfig Video splitting output information.
                     * 
                     */
                    SplitMediaOutputConfig GetOutputConfig() const;

                    /**
                     * 设置Video splitting output information.
                     * @param _outputConfig Video splitting output information.
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
                     * Start time offset of video splitting, in seconds.
<li>Leave it empty or set it to 0, indicating that the transcoded video starts from the start position of the original video;</li>
<li>When the value is greater than 0 (assuming n), the transcoded video starts from the nth second of the original video;</li>
<li>When the value is less than 0 (assuming -n), it means the transcoded video starts from the position n seconds before the end of the original video.</li>
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time offset of video splitting, in seconds.
<li>If not set or set to 0, the transcoded video will last until the end of the original video.</li>
<li>When the value is greater than 0 (assuming n), it means the transcoded video lasts until the nth second of the original video and then ends;</li>
<li>When the value is less than 0 (assuming -n), it means the transcoded video ends n seconds before the original video ends.</li>
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * [Task flow](https://www.tencentcloud.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E6.B5.81) name. Fill in when you want to automatically execute a task flow on the generated new video.
                     */
                    std::string m_procedureName;
                    bool m_procedureNameHasBeenSet;

                    /**
                     * Video splitting output information.
                     */
                    SplitMediaOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SPLITMEDIATASKCONFIG_H_
