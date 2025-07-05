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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEINSTANCEVNCURLREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEINSTANCEVNCURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeInstanceVncUrl request structure.
                */
                class DescribeInstanceVncUrlRequest : public AbstractModel
                {
                public:
                    DescribeInstanceVncUrlRequest();
                    ~DescribeInstanceVncUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, which can be obtained from the `InstanceId` field in the returned value of the `DescribeInstances` API.
                     * @return InstanceId Instance ID, which can be obtained from the `InstanceId` field in the returned value of the `DescribeInstances` API.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, which can be obtained from the `InstanceId` field in the returned value of the `DescribeInstances` API.
                     * @param _instanceId Instance ID, which can be obtained from the `InstanceId` field in the returned value of the `DescribeInstances` API.
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
                     * Instance ID, which can be obtained from the `InstanceId` field in the returned value of the `DescribeInstances` API.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEINSTANCEVNCURLREQUEST_H_
