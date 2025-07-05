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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBECONSOLEMNPVERSIONCOMPILETASKREQUEST_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBECONSOLEMNPVERSIONCOMPILETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * DescribeConsoleMNPVersionCompileTask request structure.
                */
                class DescribeConsoleMNPVersionCompileTaskRequest : public AbstractModel
                {
                public:
                    DescribeConsoleMNPVersionCompileTaskRequest();
                    ~DescribeConsoleMNPVersionCompileTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID
                     * @return BusinessId Task ID
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置Task ID
                     * @param _businessId Task ID
                     * 
                     */
                    void SetBusinessId(const std::string& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取Platform ID
                     * @return PlatformId Platform ID
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Platform ID
                     * @param _platformId Platform ID
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * Platform ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBECONSOLEMNPVERSIONCOMPILETASKREQUEST_H_
