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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_PUTTIMERSCALINGPOLICYREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_PUTTIMERSCALINGPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/TimerScalingPolicy.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * PutTimerScalingPolicy request structure.
                */
                class PutTimerScalingPolicyRequest : public AbstractModel
                {
                public:
                    PutTimerScalingPolicyRequest();
                    ~PutTimerScalingPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Configuration of the scheduled scaling policy
                     * @return TimerScalingPolicy Configuration of the scheduled scaling policy
                     * 
                     */
                    TimerScalingPolicy GetTimerScalingPolicy() const;

                    /**
                     * 设置Configuration of the scheduled scaling policy
                     * @param _timerScalingPolicy Configuration of the scheduled scaling policy
                     * 
                     */
                    void SetTimerScalingPolicy(const TimerScalingPolicy& _timerScalingPolicy);

                    /**
                     * 判断参数 TimerScalingPolicy 是否已赋值
                     * @return TimerScalingPolicy 是否已赋值
                     * 
                     */
                    bool TimerScalingPolicyHasBeenSet() const;

                private:

                    /**
                     * Configuration of the scheduled scaling policy
                     */
                    TimerScalingPolicy m_timerScalingPolicy;
                    bool m_timerScalingPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_PUTTIMERSCALINGPOLICYREQUEST_H_
