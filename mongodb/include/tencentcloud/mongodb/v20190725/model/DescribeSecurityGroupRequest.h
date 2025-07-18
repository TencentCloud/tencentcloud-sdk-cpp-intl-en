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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBESECURITYGROUPREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBESECURITYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeSecurityGroup request structure.
                */
                class DescribeSecurityGroupRequest : public AbstractModel
                {
                public:
                    DescribeSecurityGroupRequest();
                    ~DescribeSecurityGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. For example, cmgo-p8vn****.
                     * @return InstanceId Instance ID. For example, cmgo-p8vn****.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. For example, cmgo-p8vn****.
                     * @param _instanceId Instance ID. For example, cmgo-p8vn****.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID. For example, cmgo-p8vn****.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBESECURITYGROUPREQUEST_H_
