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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETASKRESULTREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETASKRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeTaskResult request structure.
                */
                class DescribeTaskResultRequest : public AbstractModel
                {
                public:
                    DescribeTaskResultRequest();
                    ~DescribeTaskResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Async task ID. Either TaskId or DealName must be entered.
                     * @return TaskId Async task ID. Either TaskId or DealName must be entered.
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置Async task ID. Either TaskId or DealName must be entered.
                     * @param _taskId Async task ID. Either TaskId or DealName must be entered.
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
                     * 获取Billing order No. Either TaskId or DealName must be entered.
                     * @return DealName Billing order No. Either TaskId or DealName must be entered.
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置Billing order No. Either TaskId or DealName must be entered.
                     * @param _dealName Billing order No. Either TaskId or DealName must be entered.
                     * 
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                private:

                    /**
                     * Async task ID. Either TaskId or DealName must be entered.
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Billing order No. Either TaskId or DealName must be entered.
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBETASKRESULTREQUEST_H_
