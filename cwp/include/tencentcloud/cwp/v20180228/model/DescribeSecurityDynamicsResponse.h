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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYDYNAMICSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYDYNAMICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/SecurityDynamic.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeSecurityDynamics response structure.
                */
                class DescribeSecurityDynamicsResponse : public AbstractModel
                {
                public:
                    DescribeSecurityDynamicsResponse();
                    ~DescribeSecurityDynamicsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Security event message array
                     * @return SecurityDynamics Security event message array
                     * 
                     */
                    std::vector<SecurityDynamic> GetSecurityDynamics() const;

                    /**
                     * 判断参数 SecurityDynamics 是否已赋值
                     * @return SecurityDynamics 是否已赋值
                     * 
                     */
                    bool SecurityDynamicsHasBeenSet() const;

                    /**
                     * 获取Total number of records
                     * @return TotalCount Total number of records
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Security event message array
                     */
                    std::vector<SecurityDynamic> m_securityDynamics;
                    bool m_securityDynamicsHasBeenSet;

                    /**
                     * Total number of records
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYDYNAMICSRESPONSE_H_
