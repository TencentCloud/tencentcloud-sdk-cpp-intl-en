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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBERECORDINFOREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBERECORDINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DescribeRecordInfo request structure.
                */
                class DescribeRecordInfoRequest : public AbstractModel
                {
                public:
                    DescribeRecordInfoRequest();
                    ~DescribeRecordInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the ongoing task, which is returned from the `StartRecord` API.
                     * @return TaskId ID of the ongoing task, which is returned from the `StartRecord` API.
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置ID of the ongoing task, which is returned from the `StartRecord` API.
                     * @param _taskId ID of the ongoing task, which is returned from the `StartRecord` API.
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Application ID.
                     * @return BizId Application ID.
                     * 
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置Application ID.
                     * @param _bizId Application ID.
                     * 
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                private:

                    /**
                     * ID of the ongoing task, which is returned from the `StartRecord` API.
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Application ID.
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBERECORDINFOREQUEST_H_
