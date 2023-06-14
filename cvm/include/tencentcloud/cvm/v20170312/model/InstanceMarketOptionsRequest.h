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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCEMARKETOPTIONSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCEMARKETOPTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/SpotMarketOptions.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Options related to bidding requests
                */
                class InstanceMarketOptionsRequest : public AbstractModel
                {
                public:
                    InstanceMarketOptionsRequest();
                    ~InstanceMarketOptionsRequest() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Spot-related options
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return SpotOptions Spot-related options
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    SpotMarketOptions GetSpotOptions() const;

                    /**
                     * 设置Spot-related options
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _spotOptions Spot-related options
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSpotOptions(const SpotMarketOptions& _spotOptions);

                    /**
                     * 判断参数 SpotOptions 是否已赋值
                     * @return SpotOptions 是否已赋值
                     * 
                     */
                    bool SpotOptionsHasBeenSet() const;

                    /**
                     * 获取Market type. Valid value: `spot`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return MarketType Market type. Valid value: `spot`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMarketType() const;

                    /**
                     * 设置Market type. Valid value: `spot`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _marketType Market type. Valid value: `spot`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMarketType(const std::string& _marketType);

                    /**
                     * 判断参数 MarketType 是否已赋值
                     * @return MarketType 是否已赋值
                     * 
                     */
                    bool MarketTypeHasBeenSet() const;

                private:

                    /**
                     * Spot-related options
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    SpotMarketOptions m_spotOptions;
                    bool m_spotOptionsHasBeenSet;

                    /**
                     * Market type. Valid value: `spot`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_marketType;
                    bool m_marketTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCEMARKETOPTIONSREQUEST_H_
