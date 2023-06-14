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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETASKSTATUSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETASKSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeTaskStatus request structure.
                */
                class DescribeTaskStatusRequest : public AbstractModel
                {
                public:
                    DescribeTaskStatusRequest();
                    ~DescribeTaskStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Request ID, i.e., the RequestId parameter returned by the API.
                     * @return TaskId Request ID, i.e., the RequestId parameter returned by the API.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Request ID, i.e., the RequestId parameter returned by the API.
                     * @param _taskId Request ID, i.e., the RequestId parameter returned by the API.
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
                     * 获取Order ID.
Note: Either `TaskId` or `DealName` is required.
                     * @return DealName Order ID.
Note: Either `TaskId` or `DealName` is required.
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置Order ID.
Note: Either `TaskId` or `DealName` is required.
                     * @param _dealName Order ID.
Note: Either `TaskId` or `DealName` is required.
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
                     * Request ID, i.e., the RequestId parameter returned by the API.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Order ID.
Note: Either `TaskId` or `DealName` is required.
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETASKSTATUSREQUEST_H_
