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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SPLITMEDIATASKSEGMENTINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SPLITMEDIATASKSEGMENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SplitMediaTaskInput.h>
#include <tencentcloud/vod/v20180717/model/TaskOutputMediaInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 
                */
                class SplitMediaTaskSegmentInfo : public AbstractModel
                {
                public:
                    SplitMediaTaskSegmentInfo();
                    ~SplitMediaTaskSegmentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Input 
                     * 
                     */
                    SplitMediaTaskInput GetInput() const;

                    /**
                     * 设置
                     * @param _input 
                     * 
                     */
                    void SetInput(const SplitMediaTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取
                     * @return Output 
                     * 
                     */
                    TaskOutputMediaInfo GetOutput() const;

                    /**
                     * 设置
                     * @param _output 
                     * 
                     */
                    void SetOutput(const TaskOutputMediaInfo& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取
                     * @return ProcedureTaskId 
                     * 
                     */
                    std::string GetProcedureTaskId() const;

                    /**
                     * 设置
                     * @param _procedureTaskId 
                     * 
                     */
                    void SetProcedureTaskId(const std::string& _procedureTaskId);

                    /**
                     * 判断参数 ProcedureTaskId 是否已赋值
                     * @return ProcedureTaskId 是否已赋值
                     * 
                     */
                    bool ProcedureTaskIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return ReviewAudioVideoTaskId 
                     * 
                     */
                    std::string GetReviewAudioVideoTaskId() const;

                    /**
                     * 设置
                     * @param _reviewAudioVideoTaskId 
                     * 
                     */
                    void SetReviewAudioVideoTaskId(const std::string& _reviewAudioVideoTaskId);

                    /**
                     * 判断参数 ReviewAudioVideoTaskId 是否已赋值
                     * @return ReviewAudioVideoTaskId 是否已赋值
                     * 
                     */
                    bool ReviewAudioVideoTaskIdHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    SplitMediaTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 
                     */
                    TaskOutputMediaInfo m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_procedureTaskId;
                    bool m_procedureTaskIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_reviewAudioVideoTaskId;
                    bool m_reviewAudioVideoTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SPLITMEDIATASKSEGMENTINFO_H_
