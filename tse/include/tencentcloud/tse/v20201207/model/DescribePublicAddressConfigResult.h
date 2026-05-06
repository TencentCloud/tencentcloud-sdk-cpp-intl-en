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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEPUBLICADDRESSCONFIGRESULT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEPUBLICADDRESSCONFIGRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/PublicAddressConfig.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Retrieve the cloud native api Gateway public IP address info response result
                */
                class DescribePublicAddressConfigResult : public AbstractModel
                {
                public:
                    DescribePublicAddressConfigResult();
                    ~DescribePublicAddressConfigResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Gateway instance ID
                     * @return GatewayId Gateway instance ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Gateway instance ID
                     * @param _gatewayId Gateway instance ID
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
                     * 获取Public IP address info
                     * @return ConfigList Public IP address info
                     * 
                     */
                    std::vector<PublicAddressConfig> GetConfigList() const;

                    /**
                     * 设置Public IP address info
                     * @param _configList Public IP address info
                     * 
                     */
                    void SetConfigList(const std::vector<PublicAddressConfig>& _configList);

                    /**
                     * 判断参数 ConfigList 是否已赋值
                     * @return ConfigList 是否已赋值
                     * 
                     */
                    bool ConfigListHasBeenSet() const;

                    /**
                     * 获取Total number	
                     * @return TotalCount Total number	
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Total number	
                     * @param _totalCount Total number	
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Gateway instance ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Public IP address info
                     */
                    std::vector<PublicAddressConfig> m_configList;
                    bool m_configListHasBeenSet;

                    /**
                     * Total number	
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEPUBLICADDRESSCONFIGRESULT_H_
