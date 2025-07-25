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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCESOPERATIONLIMITRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCESOPERATIONLIMITRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/OperationCountLimit.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeInstancesOperationLimit response structure.
                */
                class DescribeInstancesOperationLimitResponse : public AbstractModel
                {
                public:
                    DescribeInstancesOperationLimitResponse();
                    ~DescribeInstancesOperationLimitResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The maximum number of times you can modify the instance configurations (degrading the configurations)
                     * @return InstanceOperationLimitSet The maximum number of times you can modify the instance configurations (degrading the configurations)
                     * 
                     */
                    std::vector<OperationCountLimit> GetInstanceOperationLimitSet() const;

                    /**
                     * 判断参数 InstanceOperationLimitSet 是否已赋值
                     * @return InstanceOperationLimitSet 是否已赋值
                     * 
                     */
                    bool InstanceOperationLimitSetHasBeenSet() const;

                private:

                    /**
                     * The maximum number of times you can modify the instance configurations (degrading the configurations)
                     */
                    std::vector<OperationCountLimit> m_instanceOperationLimitSet;
                    bool m_instanceOperationLimitSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCESOPERATIONLIMITRESPONSE_H_
