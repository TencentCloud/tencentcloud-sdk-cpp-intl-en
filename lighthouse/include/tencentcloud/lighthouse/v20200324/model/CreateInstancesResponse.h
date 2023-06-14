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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEINSTANCESRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * CreateInstances response structure.
                */
                class CreateInstancesResponse : public AbstractModel
                {
                public:
                    CreateInstancesResponse();
                    ~CreateInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of IDs created by using this API. The returning of IDs does not mean that the instances are created successfully.

You can call `DescribeInstances` API, and find the instance ID in the `InstancesSet` returned to check its status. If the `status` is `running`, the instance is created successfully.
                     * @return InstanceIdSet List of IDs created by using this API. The returning of IDs does not mean that the instances are created successfully.

You can call `DescribeInstances` API, and find the instance ID in the `InstancesSet` returned to check its status. If the `status` is `running`, the instance is created successfully.
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                private:

                    /**
                     * List of IDs created by using this API. The returning of IDs does not mean that the instances are created successfully.

You can call `DescribeInstances` API, and find the instance ID in the `InstancesSet` returned to check its status. If the `status` is `running`, the instance is created successfully.
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEINSTANCESRESPONSE_H_
