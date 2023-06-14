/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEK8SAPIABNORMALTENDENCYREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEK8SAPIABNORMALTENDENCYREQUEST_H_

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
                * DescribeK8sApiAbnormalTendency request structure.
                */
                class DescribeK8sApiAbnormalTendencyRequest : public AbstractModel
                {
                public:
                    DescribeK8sApiAbnormalTendencyRequest();
                    ~DescribeK8sApiAbnormalTendencyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Trend period (default value: 7 days)
                     * @return TendencyPeriod Trend period (default value: 7 days)
                     * 
                     */
                    uint64_t GetTendencyPeriod() const;

                    /**
                     * 设置Trend period (default value: 7 days)
                     * @param _tendencyPeriod Trend period (default value: 7 days)
                     * 
                     */
                    void SetTendencyPeriod(const uint64_t& _tendencyPeriod);

                    /**
                     * 判断参数 TendencyPeriod 是否已赋值
                     * @return TendencyPeriod 是否已赋值
                     * 
                     */
                    bool TendencyPeriodHasBeenSet() const;

                private:

                    /**
                     * Trend period (default value: 7 days)
                     */
                    uint64_t m_tendencyPeriod;
                    bool m_tendencyPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEK8SAPIABNORMALTENDENCYREQUEST_H_
