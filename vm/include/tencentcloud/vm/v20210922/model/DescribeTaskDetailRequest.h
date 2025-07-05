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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_DESCRIBETASKDETAILREQUEST_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_DESCRIBETASKDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * DescribeTaskDetail request structure.
                */
                class DescribeTaskDetailRequest : public AbstractModel
                {
                public:
                    DescribeTaskDetailRequest();
                    ~DescribeTaskDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID, which is returned after a task is created
                     * @return TaskId Task ID, which is returned after a task is created
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID, which is returned after a task is created
                     * @param _taskId Task ID, which is returned after a task is created
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
                     * 获取Whether to show all segments. If it’s not specified, only hit segments are shown.
                     * @return ShowAllSegments Whether to show all segments. If it’s not specified, only hit segments are shown.
                     * 
                     */
                    bool GetShowAllSegments() const;

                    /**
                     * 设置Whether to show all segments. If it’s not specified, only hit segments are shown.
                     * @param _showAllSegments Whether to show all segments. If it’s not specified, only hit segments are shown.
                     * 
                     */
                    void SetShowAllSegments(const bool& _showAllSegments);

                    /**
                     * 判断参数 ShowAllSegments 是否已赋值
                     * @return ShowAllSegments 是否已赋值
                     * 
                     */
                    bool ShowAllSegmentsHasBeenSet() const;

                private:

                    /**
                     * Task ID, which is returned after a task is created
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Whether to show all segments. If it’s not specified, only hit segments are shown.
                     */
                    bool m_showAllSegments;
                    bool m_showAllSegmentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_DESCRIBETASKDETAILREQUEST_H_
