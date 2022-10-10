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


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Information of workflow task in instance operation history
                */
                class TaskDetail : public AbstractModel
                {
                public:
                    TaskDetail();
                    ~TaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task name
                     * @return Name Task name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Task name
                     * @param Name Task name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Task progress
                     * @return Progress Task progress
                     */
                    double GetProgress() const;

                    /**
                     * 设置Task progress
                     * @param Progress Task progress
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Task completion time
                     * @return FinishTime Task completion time
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置Task completion time
                     * @param FinishTime Task completion time
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取Subtask
                     * @return SubTasks Subtask
                     */
                    std::vector<SubTaskDetail> GetSubTasks() const;

                    /**
                     * 设置Subtask
                     * @param SubTasks Subtask
                     */
                    void SetSubTasks(const std::vector<SubTaskDetail>& _subTasks);

                    /**
                     * 判断参数 SubTasks 是否已赋值
                     * @return SubTasks 是否已赋值
                     */
                    bool SubTasksHasBeenSet() const;

                    /**
                     * 获取The task time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ElapsedTime The task time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetElapsedTime() const;

                    /**
                     * 设置The task time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ElapsedTime The task time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetElapsedTime(const int64_t& _elapsedTime);

                    /**
                     * 判断参数 ElapsedTime 是否已赋值
                     * @return ElapsedTime 是否已赋值
                     */
                    bool ElapsedTimeHasBeenSet() const;

                private:

                    /**
                     * Task name
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
                     * The task time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_elapsedTime;
                    bool m_elapsedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_TASKDETAIL_H_
