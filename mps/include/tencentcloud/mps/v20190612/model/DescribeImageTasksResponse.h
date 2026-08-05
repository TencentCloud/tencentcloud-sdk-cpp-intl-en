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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEIMAGETASKSRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEIMAGETASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ImageTaskInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeImageTasks response structure.
                */
                class DescribeImageTasksResponse : public AbstractModel
                {
                public:
                    DescribeImageTasksResponse();
                    ~DescribeImageTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Total number of records that meet filter conditions.</p><p>Unit: entries</p>
                     * @return TotalCount <p>Total number of records that meet filter conditions.</p><p>Unit: entries</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>Scrolling identifier. If a request does not return all the data entries, this field indicates the ID of the next entry. If this field is an empty string, there is no more data.</p>
                     * @return ScrollToken <p>Scrolling identifier. If a request does not return all the data entries, this field indicates the ID of the next entry. If this field is an empty string, there is no more data.</p>
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
                     * 获取<p>Image task summary list.</p>
                     * @return TaskSet <p>Image task summary list.</p>
                     * 
                     */
                    std::vector<ImageTaskInfo> GetTaskSet() const;

                    /**
                     * 判断参数 TaskSet 是否已赋值
                     * @return TaskSet 是否已赋值
                     * 
                     */
                    bool TaskSetHasBeenSet() const;

                private:

                    /**
                     * <p>Total number of records that meet filter conditions.</p><p>Unit: entries</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Scrolling identifier. If a request does not return all the data entries, this field indicates the ID of the next entry. If this field is an empty string, there is no more data.</p>
                     */
                    std::string m_scrollToken;
                    bool m_scrollTokenHasBeenSet;

                    /**
                     * <p>Image task summary list.</p>
                     */
                    std::vector<ImageTaskInfo> m_taskSet;
                    bool m_taskSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEIMAGETASKSRESPONSE_H_
