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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCALARMTHRESHOLDRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCALARMTHRESHOLDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/CCAlarmThreshold.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeCCAlarmThreshold response structure.
                */
                class DescribeCCAlarmThresholdResponse : public AbstractModel
                {
                public:
                    DescribeCCAlarmThresholdResponse();
                    ~DescribeCCAlarmThresholdResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取CC alarm threshold
                     * @return CCAlarmThreshold CC alarm threshold
                     * 
                     */
                    CCAlarmThreshold GetCCAlarmThreshold() const;

                    /**
                     * 判断参数 CCAlarmThreshold 是否已赋值
                     * @return CCAlarmThreshold 是否已赋值
                     * 
                     */
                    bool CCAlarmThresholdHasBeenSet() const;

                private:

                    /**
                     * CC alarm threshold
                     */
                    CCAlarmThreshold m_cCAlarmThreshold;
                    bool m_cCAlarmThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCALARMTHRESHOLDRESPONSE_H_
