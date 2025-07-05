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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_RETRYSHIPPERTASKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_RETRYSHIPPERTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * RetryShipperTask request structure.
                */
                class RetryShipperTaskRequest : public AbstractModel
                {
                public:
                    RetryShipperTaskRequest();
                    ~RetryShipperTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Shipping rule ID
                     * @return ShipperId Shipping rule ID
                     * 
                     */
                    std::string GetShipperId() const;

                    /**
                     * 设置Shipping rule ID
                     * @param _shipperId Shipping rule ID
                     * 
                     */
                    void SetShipperId(const std::string& _shipperId);

                    /**
                     * 判断参数 ShipperId 是否已赋值
                     * @return ShipperId 是否已赋值
                     * 
                     */
                    bool ShipperIdHasBeenSet() const;

                    /**
                     * 获取Shipping task ID
                     * @return TaskId Shipping task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Shipping task ID
                     * @param _taskId Shipping task ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * Shipping rule ID
                     */
                    std::string m_shipperId;
                    bool m_shipperIdHasBeenSet;

                    /**
                     * Shipping task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_RETRYSHIPPERTASKREQUEST_H_
