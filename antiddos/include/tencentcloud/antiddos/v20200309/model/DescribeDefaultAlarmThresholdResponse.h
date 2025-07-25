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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEDEFAULTALARMTHRESHOLDRESPONSE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEDEFAULTALARMTHRESHOLDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/DefaultAlarmThreshold.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeDefaultAlarmThreshold response structure.
                */
                class DescribeDefaultAlarmThresholdResponse : public AbstractModel
                {
                public:
                    DescribeDefaultAlarmThresholdResponse();
                    ~DescribeDefaultAlarmThresholdResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Default alarm threshold configuration
                     * @return DefaultAlarmConfigList Default alarm threshold configuration
                     * 
                     */
                    std::vector<DefaultAlarmThreshold> GetDefaultAlarmConfigList() const;

                    /**
                     * 判断参数 DefaultAlarmConfigList 是否已赋值
                     * @return DefaultAlarmConfigList 是否已赋值
                     * 
                     */
                    bool DefaultAlarmConfigListHasBeenSet() const;

                private:

                    /**
                     * Default alarm threshold configuration
                     */
                    std::vector<DefaultAlarmThreshold> m_defaultAlarmConfigList;
                    bool m_defaultAlarmConfigListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEDEFAULTALARMTHRESHOLDRESPONSE_H_
