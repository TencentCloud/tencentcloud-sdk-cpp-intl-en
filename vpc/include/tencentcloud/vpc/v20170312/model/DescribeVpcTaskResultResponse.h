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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCTASKRESULTRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCTASKRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/VpcTaskResultDetailInfo.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeVpcTaskResult response structure.
                */
                class DescribeVpcTaskResultResponse : public AbstractModel
                {
                public:
                    DescribeVpcTaskResultResponse();
                    ~DescribeVpcTaskResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The execution results of an async task. Valid values: `SUCCESS`(task executed successfully), `FAILED` (task execution failed), and `RUNNING` (task in progress). 
                     * @return Status The execution results of an async task. Valid values: `SUCCESS`(task executed successfully), `FAILED` (task execution failed), and `RUNNING` (task in progress). 
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Output of the async task execution result
                     * @return Output Output of the async task execution result
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Detailed result of an async task, such as the result of batch deleting ENIs.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return Result Detailed result of an async task, such as the result of batch deleting ENIs.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<VpcTaskResultDetailInfo> GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * The execution results of an async task. Valid values: `SUCCESS`(task executed successfully), `FAILED` (task execution failed), and `RUNNING` (task in progress). 
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Output of the async task execution result
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Detailed result of an async task, such as the result of batch deleting ENIs.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<VpcTaskResultDetailInfo> m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCTASKRESULTRESPONSE_H_
