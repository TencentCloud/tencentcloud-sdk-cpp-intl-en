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

#ifndef TENCENTCLOUD_VM_V20201229_MODEL_DESCRIBETASKDETAILREQUEST_H_
#define TENCENTCLOUD_VM_V20201229_MODEL_DESCRIBETASKDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20201229
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
                     * 获取This field indicates the task ID (in the `Results` parameter) returned after a video moderation task is created. It is used to identify the moderation task for which to query the details.
<br>Note: the query API can query up to **20 tasks at a time**.
                     * @return TaskId This field indicates the task ID (in the `Results` parameter) returned after a video moderation task is created. It is used to identify the moderation task for which to query the details.
<br>Note: the query API can query up to **20 tasks at a time**.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置This field indicates the task ID (in the `Results` parameter) returned after a video moderation task is created. It is used to identify the moderation task for which to query the details.
<br>Note: the query API can query up to **20 tasks at a time**.
                     * @param _taskId This field indicates the task ID (in the `Results` parameter) returned after a video moderation task is created. It is used to identify the moderation task for which to query the details.
<br>Note: the query API can query up to **20 tasks at a time**.
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
                     * 获取This boolean field indicates whether to display all video segments. Valid values: True (yes), False (display only video segments that hit the moderation rule). Default value: False.
                     * @return ShowAllSegments This boolean field indicates whether to display all video segments. Valid values: True (yes), False (display only video segments that hit the moderation rule). Default value: False.
                     * 
                     */
                    bool GetShowAllSegments() const;

                    /**
                     * 设置This boolean field indicates whether to display all video segments. Valid values: True (yes), False (display only video segments that hit the moderation rule). Default value: False.
                     * @param _showAllSegments This boolean field indicates whether to display all video segments. Valid values: True (yes), False (display only video segments that hit the moderation rule). Default value: False.
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
                     * This field indicates the task ID (in the `Results` parameter) returned after a video moderation task is created. It is used to identify the moderation task for which to query the details.
<br>Note: the query API can query up to **20 tasks at a time**.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * This boolean field indicates whether to display all video segments. Valid values: True (yes), False (display only video segments that hit the moderation rule). Default value: False.
                     */
                    bool m_showAllSegments;
                    bool m_showAllSegmentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20201229_MODEL_DESCRIBETASKDETAILREQUEST_H_
