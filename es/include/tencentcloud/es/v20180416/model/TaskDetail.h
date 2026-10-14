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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_TASKDETAIL_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_TASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/SubTaskDetail.h>
#include <tencentcloud/es/v20180416/model/ProcessDetail.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Process task information in the instance operation record
                */
                class TaskDetail : public AbstractModel
                {
                public:
                    TaskDetail();
                    ~TaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task Name
                     * @return Name Task Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Task Name
                     * @param _name Task Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Task progress
                     * @return Progress Task progress
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置Task progress
                     * @param _progress Task progress
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Task completion time
                     * @return FinishTime Task completion time
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置Task completion time
                     * @param _finishTime Task completion time
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
                     * 获取Subtask
                     * @return SubTasks Subtask
                     * 
                     */
                    std::vector<SubTaskDetail> GetSubTasks() const;

                    /**
                     * 设置Subtask
                     * @param _subTasks Subtask
                     * 
                     */
                    void SetSubTasks(const std::vector<SubTaskDetail>& _subTasks);

                    /**
                     * 判断参数 SubTasks 是否已赋值
                     * @return SubTasks 是否已赋值
                     * 
                     */
                    bool SubTasksHasBeenSet() const;

                    /**
                     * 获取Time taken by the task
                     * @return ElapsedTime Time taken by the task
                     * 
                     */
                    int64_t GetElapsedTime() const;

                    /**
                     * 设置Time taken by the task
                     * @param _elapsedTime Time taken by the task
                     * 
                     */
                    void SetElapsedTime(const int64_t& _elapsedTime);

                    /**
                     * 判断参数 ElapsedTime 是否已赋值
                     * @return ElapsedTime 是否已赋值
                     * 
                     */
                    bool ElapsedTimeHasBeenSet() const;

                    /**
                     * 获取Task progress details
                     * @return ProcessInfo Task progress details
                     * 
                     */
                    ProcessDetail GetProcessInfo() const;

                    /**
                     * 设置Task progress details
                     * @param _processInfo Task progress details
                     * 
                     */
                    void SetProcessInfo(const ProcessDetail& _processInfo);

                    /**
                     * 判断参数 ProcessInfo 是否已赋值
                     * @return ProcessInfo 是否已赋值
                     * 
                     */
                    bool ProcessInfoHasBeenSet() const;

                private:

                    /**
                     * Task Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Task progress
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Task completion time
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * Subtask
                     */
                    std::vector<SubTaskDetail> m_subTasks;
                    bool m_subTasksHasBeenSet;

                    /**
                     * Time taken by the task
                     */
                    int64_t m_elapsedTime;
                    bool m_elapsedTimeHasBeenSet;

                    /**
                     * Task progress details
                     */
                    ProcessDetail m_processInfo;
                    bool m_processInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_TASKDETAIL_H_
