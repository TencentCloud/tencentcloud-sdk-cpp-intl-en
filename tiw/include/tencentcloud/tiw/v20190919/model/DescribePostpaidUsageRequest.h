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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEPOSTPAIDUSAGEREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEPOSTPAIDUSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribePostpaidUsage request structure.
                */
                class DescribePostpaidUsageRequest : public AbstractModel
                {
                public:
                    DescribePostpaidUsageRequest();
                    ~DescribePostpaidUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time of the query period.
                     * @return BeginTime Start time of the query period.
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Start time of the query period.
                     * @param BeginTime Start time of the query period.
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取End time of the query period.
                     * @return EndTime End time of the query period.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the query period.
                     * @param EndTime End time of the query period.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Start time of the query period.
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * End time of the query period.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEPOSTPAIDUSAGEREQUEST_H_
