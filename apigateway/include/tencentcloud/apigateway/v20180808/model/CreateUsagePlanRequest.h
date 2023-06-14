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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEUSAGEPLANREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEUSAGEPLANREQUEST_H_

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
                * CreateUsagePlan request structure.
                */
                class CreateUsagePlanRequest : public AbstractModel
                {
                public:
                    CreateUsagePlanRequest();
                    ~CreateUsagePlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Custom usage plan name.
                     * @return UsagePlanName Custom usage plan name.
                     * 
                     */
                    std::string GetUsagePlanName() const;

                    /**
                     * 设置Custom usage plan name.
                     * @param _usagePlanName Custom usage plan name.
                     * 
                     */
                    void SetUsagePlanName(const std::string& _usagePlanName);

                    /**
                     * 判断参数 UsagePlanName 是否已赋值
                     * @return UsagePlanName 是否已赋值
                     * 
                     */
                    bool UsagePlanNameHasBeenSet() const;

                    /**
                     * 获取Custom usage plan description.
                     * @return UsagePlanDesc Custom usage plan description.
                     * 
                     */
                    std::string GetUsagePlanDesc() const;

                    /**
                     * 设置Custom usage plan description.
                     * @param _usagePlanDesc Custom usage plan description.
                     * 
                     */
                    void SetUsagePlanDesc(const std::string& _usagePlanDesc);

                    /**
                     * 判断参数 UsagePlanDesc 是否已赋值
                     * @return UsagePlanDesc 是否已赋值
                     * 
                     */
                    bool UsagePlanDescHasBeenSet() const;

                    /**
                     * 获取Total number of requests allowed. Valid values: -1, [1,99999999]. The default value is `-1`, which indicates no limit.
                     * @return MaxRequestNum Total number of requests allowed. Valid values: -1, [1,99999999]. The default value is `-1`, which indicates no limit.
                     * 
                     */
                    int64_t GetMaxRequestNum() const;

                    /**
                     * 设置Total number of requests allowed. Valid values: -1, [1,99999999]. The default value is `-1`, which indicates no limit.
                     * @param _maxRequestNum Total number of requests allowed. Valid values: -1, [1,99999999]. The default value is `-1`, which indicates no limit.
                     * 
                     */
                    void SetMaxRequestNum(const int64_t& _maxRequestNum);

                    /**
                     * 判断参数 MaxRequestNum 是否已赋值
                     * @return MaxRequestNum 是否已赋值
                     * 
                     */
                    bool MaxRequestNumHasBeenSet() const;

                    /**
                     * 获取Limit of requests per second. Valid values: -1, [1,2000]. The default value is `-1`, which indicates no limit.
                     * @return MaxRequestNumPreSec Limit of requests per second. Valid values: -1, [1,2000]. The default value is `-1`, which indicates no limit.
                     * 
                     */
                    int64_t GetMaxRequestNumPreSec() const;

                    /**
                     * 设置Limit of requests per second. Valid values: -1, [1,2000]. The default value is `-1`, which indicates no limit.
                     * @param _maxRequestNumPreSec Limit of requests per second. Valid values: -1, [1,2000]. The default value is `-1`, which indicates no limit.
                     * 
                     */
                    void SetMaxRequestNumPreSec(const int64_t& _maxRequestNumPreSec);

                    /**
                     * 判断参数 MaxRequestNumPreSec 是否已赋值
                     * @return MaxRequestNumPreSec 是否已赋值
                     * 
                     */
                    bool MaxRequestNumPreSecHasBeenSet() const;

                private:

                    /**
                     * Custom usage plan name.
                     */
                    std::string m_usagePlanName;
                    bool m_usagePlanNameHasBeenSet;

                    /**
                     * Custom usage plan description.
                     */
                    std::string m_usagePlanDesc;
                    bool m_usagePlanDescHasBeenSet;

                    /**
                     * Total number of requests allowed. Valid values: -1, [1,99999999]. The default value is `-1`, which indicates no limit.
                     */
                    int64_t m_maxRequestNum;
                    bool m_maxRequestNumHasBeenSet;

                    /**
                     * Limit of requests per second. Valid values: -1, [1,2000]. The default value is `-1`, which indicates no limit.
                     */
                    int64_t m_maxRequestNumPreSec;
                    bool m_maxRequestNumPreSecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEUSAGEPLANREQUEST_H_
