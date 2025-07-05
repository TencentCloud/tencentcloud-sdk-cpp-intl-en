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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULTOPRANKINGREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULTOPRANKINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeVulTopRanking request structure.
                */
                class DescribeVulTopRankingRequest : public AbstractModel
                {
                public:
                    DescribeVulTopRankingRequest();
                    ~DescribeVulTopRankingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Vulnerability type. Valid values: `SYSTEM` (system vulnerability); `WEB` (web application vulnerability); `EMERGENCY` (emergency vulnerability).
                     * @return CategoryType Vulnerability type. Valid values: `SYSTEM` (system vulnerability); `WEB` (web application vulnerability); `EMERGENCY` (emergency vulnerability).
                     * 
                     */
                    std::string GetCategoryType() const;

                    /**
                     * 设置Vulnerability type. Valid values: `SYSTEM` (system vulnerability); `WEB` (web application vulnerability); `EMERGENCY` (emergency vulnerability).
                     * @param _categoryType Vulnerability type. Valid values: `SYSTEM` (system vulnerability); `WEB` (web application vulnerability); `EMERGENCY` (emergency vulnerability).
                     * 
                     */
                    void SetCategoryType(const std::string& _categoryType);

                    /**
                     * 判断参数 CategoryType 是否已赋值
                     * @return CategoryType 是否已赋值
                     * 
                     */
                    bool CategoryTypeHasBeenSet() const;

                private:

                    /**
                     * Vulnerability type. Valid values: `SYSTEM` (system vulnerability); `WEB` (web application vulnerability); `EMERGENCY` (emergency vulnerability).
                     */
                    std::string m_categoryType;
                    bool m_categoryTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULTOPRANKINGREQUEST_H_
