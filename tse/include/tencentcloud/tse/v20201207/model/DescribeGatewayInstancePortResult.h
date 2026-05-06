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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGATEWAYINSTANCEPORTRESULT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGATEWAYINSTANCEPORTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/GatewayInstanceSchemeAndPorts.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Retrieve the response result of the protocol port list for a cloud-native API gateway instance
                */
                class DescribeGatewayInstancePortResult : public AbstractModel
                {
                public:
                    DescribeGatewayInstancePortResult();
                    ~DescribeGatewayInstancePortResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cloud Native API Gateway ID
                     * @return GatewayId Cloud Native API Gateway ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Cloud Native API Gateway ID
                     * @param _gatewayId Cloud Native API Gateway ID
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
                     * 获取Gateway instance protocol port list
                     * @return GatewayInstancePortList Gateway instance protocol port list
                     * 
                     */
                    std::vector<GatewayInstanceSchemeAndPorts> GetGatewayInstancePortList() const;

                    /**
                     * 设置Gateway instance protocol port list
                     * @param _gatewayInstancePortList Gateway instance protocol port list
                     * 
                     */
                    void SetGatewayInstancePortList(const std::vector<GatewayInstanceSchemeAndPorts>& _gatewayInstancePortList);

                    /**
                     * 判断参数 GatewayInstancePortList 是否已赋值
                     * @return GatewayInstancePortList 是否已赋值
                     * 
                     */
                    bool GatewayInstancePortListHasBeenSet() const;

                private:

                    /**
                     * Cloud Native API Gateway ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Gateway instance protocol port list
                     */
                    std::vector<GatewayInstanceSchemeAndPorts> m_gatewayInstancePortList;
                    bool m_gatewayInstancePortListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGATEWAYINSTANCEPORTRESULT_H_
