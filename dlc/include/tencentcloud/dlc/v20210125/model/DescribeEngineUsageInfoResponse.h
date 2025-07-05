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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEENGINEUSAGEINFORESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEENGINEUSAGEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeEngineUsageInfo response structure.
                */
                class DescribeEngineUsageInfoResponse : public AbstractModel
                {
                public:
                    DescribeEngineUsageInfoResponse();
                    ~DescribeEngineUsageInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The total cluster spec.
                     * @return Total The total cluster spec.
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取The used cluster spec.
                     * @return Used The used cluster spec.
                     * 
                     */
                    int64_t GetUsed() const;

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                    /**
                     * 获取The available cluster spec.
                     * @return Available The available cluster spec.
                     * 
                     */
                    int64_t GetAvailable() const;

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                private:

                    /**
                     * The total cluster spec.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * The used cluster spec.
                     */
                    int64_t m_used;
                    bool m_usedHasBeenSet;

                    /**
                     * The available cluster spec.
                     */
                    int64_t m_available;
                    bool m_availableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEENGINEUSAGEINFORESPONSE_H_
