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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEIPSTRATEGYREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEIPSTRATEGYREQUEST_H_

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
                * CreateIPStrategy request structure.
                */
                class CreateIPStrategyRequest : public AbstractModel
                {
                public:
                    CreateIPStrategyRequest();
                    ~CreateIPStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique service ID.
                     * @return ServiceId Unique service ID.
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique service ID.
                     * @param ServiceId Unique service ID.
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Custom policy name.
                     * @return StrategyName Custom policy name.
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置Custom policy name.
                     * @param StrategyName Custom policy name.
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取Policy type. Valid values: WHITE (whitelist), BLACK (blacklist).
                     * @return StrategyType Policy type. Valid values: WHITE (whitelist), BLACK (blacklist).
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置Policy type. Valid values: WHITE (whitelist), BLACK (blacklist).
                     * @param StrategyType Policy type. Valid values: WHITE (whitelist), BLACK (blacklist).
                     */
                    void SetStrategyType(const std::string& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取Policy details.
                     * @return StrategyData Policy details.
                     */
                    std::string GetStrategyData() const;

                    /**
                     * 设置Policy details.
                     * @param StrategyData Policy details.
                     */
                    void SetStrategyData(const std::string& _strategyData);

                    /**
                     * 判断参数 StrategyData 是否已赋值
                     * @return StrategyData 是否已赋值
                     */
                    bool StrategyDataHasBeenSet() const;

                private:

                    /**
                     * Unique service ID.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Custom policy name.
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * Policy type. Valid values: WHITE (whitelist), BLACK (blacklist).
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * Policy details.
                     */
                    std::string m_strategyData;
                    bool m_strategyDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEIPSTRATEGYREQUEST_H_
