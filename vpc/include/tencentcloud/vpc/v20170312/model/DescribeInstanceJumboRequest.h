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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEINSTANCEJUMBOREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEINSTANCEJUMBOREQUEST_H_

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
                * DescribeInstanceJumbo request structure.
                */
                class DescribeInstanceJumboRequest : public AbstractModel
                {
                public:
                    DescribeInstanceJumboRequest();
                    ~DescribeInstanceJumboRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID list of CVM. limits up to 10 instances for each query.
                     * @return InstanceIds Instance ID list of CVM. limits up to 10 instances for each query.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID list of CVM. limits up to 10 instances for each query.
                     * @param _instanceIds Instance ID list of CVM. limits up to 10 instances for each query.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * Instance ID list of CVM. limits up to 10 instances for each query.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEINSTANCEJUMBOREQUEST_H_
