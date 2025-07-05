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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBERECORDINGUSAGERESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBERECORDINGUSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TrtcUsage.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeRecordingUsage response structure.
                */
                class DescribeRecordingUsageResponse : public AbstractModel
                {
                public:
                    DescribeRecordingUsageResponse();
                    ~DescribeRecordingUsageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The usage type. Each element of this parameter corresponds to an element of `UsageValue` in the order they are listed.
                     * @return UsageKey The usage type. Each element of this parameter corresponds to an element of `UsageValue` in the order they are listed.
                     * 
                     */
                    std::vector<std::string> GetUsageKey() const;

                    /**
                     * 判断参数 UsageKey 是否已赋值
                     * @return UsageKey 是否已赋值
                     * 
                     */
                    bool UsageKeyHasBeenSet() const;

                    /**
                     * 获取The usage data in each time unit.
                     * @return UsageList The usage data in each time unit.
                     * 
                     */
                    std::vector<TrtcUsage> GetUsageList() const;

                    /**
                     * 判断参数 UsageList 是否已赋值
                     * @return UsageList 是否已赋值
                     * 
                     */
                    bool UsageListHasBeenSet() const;

                private:

                    /**
                     * The usage type. Each element of this parameter corresponds to an element of `UsageValue` in the order they are listed.
                     */
                    std::vector<std::string> m_usageKey;
                    bool m_usageKeyHasBeenSet;

                    /**
                     * The usage data in each time unit.
                     */
                    std::vector<TrtcUsage> m_usageList;
                    bool m_usageListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBERECORDINGUSAGERESPONSE_H_
