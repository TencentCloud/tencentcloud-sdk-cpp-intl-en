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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_OPERATION_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_OPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/OperationDetail.h>
#include <tencentcloud/es/v20180416/model/TaskDetail.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ES cluster operation details
                */
                class Operation : public AbstractModel
                {
                public:
                    Operation();
                    ~Operation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique operation ID
                     * @return Id Unique operation ID
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Unique operation ID
                     * @param Id Unique operation ID
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Operation start time
                     * @return StartTime Operation start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Operation start time
                     * @param StartTime Operation start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Operation type
                     * @return Type Operation type
                     */
                    std::string GetType() const;

                    /**
                     * 设置Operation type
                     * @param Type Operation type
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Operation details
                     * @return Detail Operation details
                     */
                    OperationDetail GetDetail() const;

                    /**
                     * 设置Operation details
                     * @param Detail Operation details
                     */
                    void SetDetail(const OperationDetail& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取Operation result
                     * @return Result Operation result
                     */
                    std::string GetResult() const;

                    /**
                     * 设置Operation result
                     * @param Result Operation result
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Workflow task information
                     * @return Tasks Workflow task information
                     */
                    std::vector<TaskDetail> GetTasks() const;

                    /**
                     * 设置Workflow task information
                     * @param Tasks Workflow task information
                     */
                    void SetTasks(const std::vector<TaskDetail>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取Operation progress
                     * @return Progress Operation progress
                     */
                    double GetProgress() const;

                    /**
                     * 设置Operation progress
                     * @param Progress Operation progress
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * Unique operation ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Operation start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Operation type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Operation details
                     */
                    OperationDetail m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * Operation result
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Workflow task information
                     */
                    std::vector<TaskDetail> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * Operation progress
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_OPERATION_H_
