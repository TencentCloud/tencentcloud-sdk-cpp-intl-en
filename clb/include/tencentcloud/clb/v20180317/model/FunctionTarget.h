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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_FUNCTIONTARGET_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_FUNCTIONTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/FunctionInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Whether to use SCF (Serverless Cloud Function) as the backend service
                */
                class FunctionTarget : public AbstractModel
                {
                public:
                    FunctionTarget();
                    ~FunctionTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SCF related information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Function SCF related information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    FunctionInfo GetFunction() const;

                    /**
                     * 设置SCF related information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _function SCF related information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFunction(const FunctionInfo& _function);

                    /**
                     * 判断参数 Function 是否已赋值
                     * @return Function 是否已赋值
                     * 
                     */
                    bool FunctionHasBeenSet() const;

                    /**
                     * 获取Weight
                     * @return Weight Weight
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置Weight
                     * @param _weight Weight
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * SCF related information
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    FunctionInfo m_function;
                    bool m_functionHasBeenSet;

                    /**
                     * Weight
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_FUNCTIONTARGET_H_
