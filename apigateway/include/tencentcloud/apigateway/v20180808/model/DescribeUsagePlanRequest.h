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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEUSAGEPLANREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEUSAGEPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeUsagePlan request structure.
                */
                class DescribeUsagePlanRequest : public AbstractModel
                {
                public:
                    DescribeUsagePlanRequest();
                    ~DescribeUsagePlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of the usage plan to be queried.
                     * @return UsagePlanId Unique ID of the usage plan to be queried.
                     * 
                     */
                    std::string GetUsagePlanId() const;

                    /**
                     * 设置Unique ID of the usage plan to be queried.
                     * @param _usagePlanId Unique ID of the usage plan to be queried.
                     * 
                     */
                    void SetUsagePlanId(const std::string& _usagePlanId);

                    /**
                     * 判断参数 UsagePlanId 是否已赋值
                     * @return UsagePlanId 是否已赋值
                     * 
                     */
                    bool UsagePlanIdHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the usage plan to be queried.
                     */
                    std::string m_usagePlanId;
                    bool m_usagePlanIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEUSAGEPLANREQUEST_H_
