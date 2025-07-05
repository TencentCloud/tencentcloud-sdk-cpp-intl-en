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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBERECORDTASKRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBERECORDTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/RecordTask.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeRecordTask response structure.
                */
                class DescribeRecordTaskResponse : public AbstractModel
                {
                public:
                    DescribeRecordTaskResponse();
                    ~DescribeRecordTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Page token: When the request does not return all data, this field indicates the token of the next record. When this field is empty, it means there is no more data.
                     * @return ScrollToken Page token: When the request does not return all data, this field indicates the token of the next record. When this field is empty, it means there is no more data.
                     * 
                     */
                    std::string GetScrollToken() const;

                    /**
                     * 判断参数 ScrollToken 是否已赋值
                     * @return ScrollToken 是否已赋值
                     * 
                     */
                    bool ScrollTokenHasBeenSet() const;

                    /**
                     * 获取List of recording tasks. When this field is empty, it means all data has been returned.
                     * @return TaskList List of recording tasks. When this field is empty, it means all data has been returned.
                     * 
                     */
                    std::vector<RecordTask> GetTaskList() const;

                    /**
                     * 判断参数 TaskList 是否已赋值
                     * @return TaskList 是否已赋值
                     * 
                     */
                    bool TaskListHasBeenSet() const;

                private:

                    /**
                     * Page token: When the request does not return all data, this field indicates the token of the next record. When this field is empty, it means there is no more data.
                     */
                    std::string m_scrollToken;
                    bool m_scrollTokenHasBeenSet;

                    /**
                     * List of recording tasks. When this field is empty, it means all data has been returned.
                     */
                    std::vector<RecordTask> m_taskList;
                    bool m_taskListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBERECORDTASKRESPONSE_H_
