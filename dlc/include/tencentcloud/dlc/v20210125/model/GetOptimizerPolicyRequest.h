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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_GETOPTIMIZERPOLICYREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_GETOPTIMIZERPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/SmartPolicy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * GetOptimizerPolicy request structure.
                */
                class GetOptimizerPolicyRequest : public AbstractModel
                {
                public:
                    GetOptimizerPolicyRequest();
                    ~GetOptimizerPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Policy description
                     * @return SmartPolicy Policy description
                     * 
                     */
                    SmartPolicy GetSmartPolicy() const;

                    /**
                     * 设置Policy description
                     * @param _smartPolicy Policy description
                     * 
                     */
                    void SetSmartPolicy(const SmartPolicy& _smartPolicy);

                    /**
                     * 判断参数 SmartPolicy 是否已赋值
                     * @return SmartPolicy 是否已赋值
                     * 
                     */
                    bool SmartPolicyHasBeenSet() const;

                private:

                    /**
                     * Policy description
                     */
                    SmartPolicy m_smartPolicy;
                    bool m_smartPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_GETOPTIMIZERPOLICYREQUEST_H_
