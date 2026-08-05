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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGETASKINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGETASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Task overview for image processing.
                */
                class ImageTaskInfo : public AbstractModel
                {
                public:
                    ImageTaskInfo();
                    ~ImageTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>TaskId of the image processing task.</p>
                     * @return TaskId <p>TaskId of the image processing task.</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>TaskId of the image processing task.</p>
                     * @param _taskId <p>TaskId of the image processing task.</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Task status.</p><p>Enumeration values: </p><ul><li>FINISH: Task completion</li><li>PROCESSING: Task processing</li></ul>
                     * @return Status <p>Task status.</p><p>Enumeration values: </p><ul><li>FINISH: Task completion</li><li>PROCESSING: Task processing</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Task status.</p><p>Enumeration values: </p><ul><li>FINISH: Task completion</li><li>PROCESSING: Task processing</li></ul>
                     * @param _status <p>Task status.</p><p>Enumeration values: </p><ul><li>FINISH: Task completion</li><li>PROCESSING: Task processing</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Input file.</p>
                     * @return Input <p>Input file.</p>
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置<p>Input file.</p>
                     * @param _input <p>Input file.</p>
                     * 
                     */
                    void SetInput(const std::string& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     * @return CreateTime <p>Creation time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     * @param _createTime <p>Creation time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Processing start time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     * @return BeginProcessTime <p>Processing start time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     * 
                     */
                    std::string GetBeginProcessTime() const;

                    /**
                     * 设置<p>Processing start time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     * @param _beginProcessTime <p>Processing start time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     * 
                     */
                    void SetBeginProcessTime(const std::string& _beginProcessTime);

                    /**
                     * 判断参数 BeginProcessTime 是否已赋值
                     * @return BeginProcessTime 是否已赋值
                     * 
                     */
                    bool BeginProcessTimeHasBeenSet() const;

                    /**
                     * 获取<p>End time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     * @return FinishTime <p>End time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置<p>End time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     * @param _finishTime <p>End time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取<p>Subtask failure identifier.</p>
                     * @return SubTaskHasFailed <p>Subtask failure identifier.</p>
                     * 
                     */
                    bool GetSubTaskHasFailed() const;

                    /**
                     * 设置<p>Subtask failure identifier.</p>
                     * @param _subTaskHasFailed <p>Subtask failure identifier.</p>
                     * 
                     */
                    void SetSubTaskHasFailed(const bool& _subTaskHasFailed);

                    /**
                     * 判断参数 SubTaskHasFailed 是否已赋值
                     * @return SubTaskHasFailed 是否已赋值
                     * 
                     */
                    bool SubTaskHasFailedHasBeenSet() const;

                private:

                    /**
                     * <p>TaskId of the image processing task.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Task status.</p><p>Enumeration values: </p><ul><li>FINISH: Task completion</li><li>PROCESSING: Task processing</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Input file.</p>
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * <p>Creation time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Processing start time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * <p>End time.</p><p>Parameter format: YYYY-MM-DDThh:mm:ssZ</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>Subtask failure identifier.</p>
                     */
                    bool m_subTaskHasFailed;
                    bool m_subTaskHasFailedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGETASKINFO_H_
