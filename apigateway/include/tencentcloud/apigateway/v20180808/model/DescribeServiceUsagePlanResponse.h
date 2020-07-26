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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBESERVICEUSAGEPLANRESPONSE_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBESERVICEUSAGEPLANRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/ServiceUsagePlanSet.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeServiceUsagePlan response structure.
                */
                class DescribeServiceUsagePlanResponse : public AbstractModel
                {
                public:
                    DescribeServiceUsagePlanResponse();
                    ~DescribeServiceUsagePlanResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取List of usage plans bound to service.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Result List of usage plans bound to service.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ServiceUsagePlanSet GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * List of usage plans bound to service.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ServiceUsagePlanSet m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBESERVICEUSAGEPLANRESPONSE_H_
