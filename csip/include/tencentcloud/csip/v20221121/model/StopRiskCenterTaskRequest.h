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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_STOPRISKCENTERTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_STOPRISKCENTERTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TaskIdListKey.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * StopRiskCenterTask request structure.
                */
                class StopRiskCenterTaskRequest : public AbstractModel
                {
                public:
                    StopRiskCenterTaskRequest();
                    ~StopRiskCenterTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of task IDs
                     * @return TaskIdList List of task IDs
                     * 
                     */
                    std::vector<TaskIdListKey> GetTaskIdList() const;

                    /**
                     * 设置List of task IDs
                     * @param _taskIdList List of task IDs
                     * 
                     */
                    void SetTaskIdList(const std::vector<TaskIdListKey>& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     * 
                     */
                    bool TaskIdListHasBeenSet() const;

                private:

                    /**
                     * List of task IDs
                     */
                    std::vector<TaskIdListKey> m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_STOPRISKCENTERTASKREQUEST_H_
