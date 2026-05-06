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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_TSEGATEWAYSELECTOR_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_TSEGATEWAYSELECTOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Gateway service information match condition
                */
                class TSEGatewaySelector : public AbstractModel
                {
                public:
                    TSEGatewaySelector();
                    ~TSEGatewaySelector() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Gateway engine instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GatewayId Gateway engine instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Gateway engine instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _gatewayId Gateway engine instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取Gateway service
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Services Gateway service
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetServices() const;

                    /**
                     * 设置Gateway service
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _services Gateway service
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServices(const std::vector<std::string>& _services);

                    /**
                     * 判断参数 Services 是否已赋值
                     * @return Services 是否已赋值
                     * 
                     */
                    bool ServicesHasBeenSet() const;

                private:

                    /**
                     * Gateway engine instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Gateway service
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_services;
                    bool m_servicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_TSEGATEWAYSELECTOR_H_
