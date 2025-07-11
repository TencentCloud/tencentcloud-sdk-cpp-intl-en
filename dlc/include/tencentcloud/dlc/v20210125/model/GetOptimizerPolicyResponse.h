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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_GETOPTIMIZERPOLICYRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_GETOPTIMIZERPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/SmartOptimizerPolicy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * GetOptimizerPolicy response structure.
                */
                class GetOptimizerPolicyResponse : public AbstractModel
                {
                public:
                    GetOptimizerPolicyResponse();
                    ~GetOptimizerPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Smart optimization policy
                     * @return SmartOptimizerPolicy Smart optimization policy
                     * 
                     */
                    SmartOptimizerPolicy GetSmartOptimizerPolicy() const;

                    /**
                     * 判断参数 SmartOptimizerPolicy 是否已赋值
                     * @return SmartOptimizerPolicy 是否已赋值
                     * 
                     */
                    bool SmartOptimizerPolicyHasBeenSet() const;

                private:

                    /**
                     * Smart optimization policy
                     */
                    SmartOptimizerPolicy m_smartOptimizerPolicy;
                    bool m_smartOptimizerPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_GETOPTIMIZERPOLICYRESPONSE_H_
