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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DELETEREGISTERINSTANCEREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DELETEREGISTERINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DeleteRegisterInstance request structure.
                */
                class DeleteRegisterInstanceRequest : public AbstractModel
                {
                public:
                    DeleteRegisterInstanceRequest();
                    ~DeleteRegisterInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Managed instance ID.

Call the [DescribeRegisterInstances](https://www.tencentcloud.com/document/api/1340/96924?from_cn_redirect=1) api to query managed instances.
                     * @return InstanceId Managed instance ID.

Call the [DescribeRegisterInstances](https://www.tencentcloud.com/document/api/1340/96924?from_cn_redirect=1) api to query managed instances.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Managed instance ID.

Call the [DescribeRegisterInstances](https://www.tencentcloud.com/document/api/1340/96924?from_cn_redirect=1) api to query managed instances.
                     * @param _instanceId Managed instance ID.

Call the [DescribeRegisterInstances](https://www.tencentcloud.com/document/api/1340/96924?from_cn_redirect=1) api to query managed instances.
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
                     * Managed instance ID.

Call the [DescribeRegisterInstances](https://www.tencentcloud.com/document/api/1340/96924?from_cn_redirect=1) api to query managed instances.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DELETEREGISTERINSTANCEREQUEST_H_
