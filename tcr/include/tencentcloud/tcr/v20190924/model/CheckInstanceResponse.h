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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CHECKINSTANCERESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CHECKINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CheckInstance response structure.
                */
                class CheckInstanceResponse : public AbstractModel
                {
                public:
                    CheckInstanceResponse();
                    ~CheckInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Verification result. true: valid, false: invalid
                     * @return IsValidated Verification result. true: valid, false: invalid
                     * 
                     */
                    bool GetIsValidated() const;

                    /**
                     * 判断参数 IsValidated 是否已赋值
                     * @return IsValidated 是否已赋值
                     * 
                     */
                    bool IsValidatedHasBeenSet() const;

                    /**
                     * 获取ID of the region where the instance is located.
                     * @return RegionId ID of the region where the instance is located.
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * Verification result. true: valid, false: invalid
                     */
                    bool m_isValidated;
                    bool m_isValidatedHasBeenSet;

                    /**
                     * ID of the region where the instance is located.
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CHECKINSTANCERESPONSE_H_
