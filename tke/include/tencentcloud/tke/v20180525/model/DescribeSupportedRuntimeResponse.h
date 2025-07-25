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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBESUPPORTEDRUNTIMERESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBESUPPORTEDRUNTIMERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/OptionalRuntimes.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeSupportedRuntime response structure.
                */
                class DescribeSupportedRuntimeResponse : public AbstractModel
                {
                public:
                    DescribeSupportedRuntimeResponse();
                    ~DescribeSupportedRuntimeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Optional runtime list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return OptionalRuntimes Optional runtime list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<OptionalRuntimes> GetOptionalRuntimes() const;

                    /**
                     * 判断参数 OptionalRuntimes 是否已赋值
                     * @return OptionalRuntimes 是否已赋值
                     * 
                     */
                    bool OptionalRuntimesHasBeenSet() const;

                private:

                    /**
                     * Optional runtime list
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<OptionalRuntimes> m_optionalRuntimes;
                    bool m_optionalRuntimesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBESUPPORTEDRUNTIMERESPONSE_H_
