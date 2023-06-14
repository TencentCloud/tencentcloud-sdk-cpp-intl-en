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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYIPSTRATEGYREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYIPSTRATEGYREQUEST_H_

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
                * ModifyIPStrategy request structure.
                */
                class ModifyIPStrategyRequest : public AbstractModel
                {
                public:
                    ModifyIPStrategyRequest();
                    ~ModifyIPStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique service ID of the policy to be modified.
                     * @return ServiceId Unique service ID of the policy to be modified.
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique service ID of the policy to be modified.
                     * @param _serviceId Unique service ID of the policy to be modified.
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Unique ID of the policy to be modified.
                     * @return StrategyId Unique ID of the policy to be modified.
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置Unique ID of the policy to be modified.
                     * @param _strategyId Unique ID of the policy to be modified.
                     * 
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取Details of the policy to be modified.
                     * @return StrategyData Details of the policy to be modified.
                     * 
                     */
                    std::string GetStrategyData() const;

                    /**
                     * 设置Details of the policy to be modified.
                     * @param _strategyData Details of the policy to be modified.
                     * 
                     */
                    void SetStrategyData(const std::string& _strategyData);

                    /**
                     * 判断参数 StrategyData 是否已赋值
                     * @return StrategyData 是否已赋值
                     * 
                     */
                    bool StrategyDataHasBeenSet() const;

                private:

                    /**
                     * Unique service ID of the policy to be modified.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Unique ID of the policy to be modified.
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * Details of the policy to be modified.
                     */
                    std::string m_strategyData;
                    bool m_strategyDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYIPSTRATEGYREQUEST_H_
