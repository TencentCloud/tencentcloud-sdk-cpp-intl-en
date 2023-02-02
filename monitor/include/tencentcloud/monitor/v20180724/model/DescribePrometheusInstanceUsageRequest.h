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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINSTANCEUSAGEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINSTANCEUSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePrometheusInstanceUsage request structure.
                */
                class DescribePrometheusInstanceUsageRequest : public AbstractModel
                {
                public:
                    DescribePrometheusInstanceUsageRequest();
                    ~DescribePrometheusInstanceUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query by one or more instance IDs. Instance ID is in the format of `prom-xxxxxxxx`. Up to 100 instances can be queried in one request.
                     * @return InstanceIds Query by one or more instance IDs. Instance ID is in the format of `prom-xxxxxxxx`. Up to 100 instances can be queried in one request.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Query by one or more instance IDs. Instance ID is in the format of `prom-xxxxxxxx`. Up to 100 instances can be queried in one request.
                     * @param InstanceIds Query by one or more instance IDs. Instance ID is in the format of `prom-xxxxxxxx`. Up to 100 instances can be queried in one request.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return StartCalcDate Start time
                     */
                    std::string GetStartCalcDate() const;

                    /**
                     * 设置Start time
                     * @param StartCalcDate Start time
                     */
                    void SetStartCalcDate(const std::string& _startCalcDate);

                    /**
                     * 判断参数 StartCalcDate 是否已赋值
                     * @return StartCalcDate 是否已赋值
                     */
                    bool StartCalcDateHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return EndCalcDate End time
                     */
                    std::string GetEndCalcDate() const;

                    /**
                     * 设置End time
                     * @param EndCalcDate End time
                     */
                    void SetEndCalcDate(const std::string& _endCalcDate);

                    /**
                     * 判断参数 EndCalcDate 是否已赋值
                     * @return EndCalcDate 是否已赋值
                     */
                    bool EndCalcDateHasBeenSet() const;

                private:

                    /**
                     * Query by one or more instance IDs. Instance ID is in the format of `prom-xxxxxxxx`. Up to 100 instances can be queried in one request.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startCalcDate;
                    bool m_startCalcDateHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endCalcDate;
                    bool m_endCalcDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINSTANCEUSAGEREQUEST_H_
