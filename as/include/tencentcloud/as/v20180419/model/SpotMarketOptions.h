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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_SPOTMARKETOPTIONS_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_SPOTMARKETOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Bidding-related options
                */
                class SpotMarketOptions : public AbstractModel
                {
                public:
                    SpotMarketOptions();
                    ~SpotMarketOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Bidding price such as "1.05"
                     * @return MaxPrice Bidding price such as "1.05"
                     * 
                     */
                    std::string GetMaxPrice() const;

                    /**
                     * 设置Bidding price such as "1.05"
                     * @param _maxPrice Bidding price such as "1.05"
                     * 
                     */
                    void SetMaxPrice(const std::string& _maxPrice);

                    /**
                     * 判断参数 MaxPrice 是否已赋值
                     * @return MaxPrice 是否已赋值
                     * 
                     */
                    bool MaxPriceHasBeenSet() const;

                    /**
                     * 获取Spot instance type. The value can only be one-time currently. Default value: one-time.
                     * @return SpotInstanceType Spot instance type. The value can only be one-time currently. Default value: one-time.
                     * 
                     */
                    std::string GetSpotInstanceType() const;

                    /**
                     * 设置Spot instance type. The value can only be one-time currently. Default value: one-time.
                     * @param _spotInstanceType Spot instance type. The value can only be one-time currently. Default value: one-time.
                     * 
                     */
                    void SetSpotInstanceType(const std::string& _spotInstanceType);

                    /**
                     * 判断参数 SpotInstanceType 是否已赋值
                     * @return SpotInstanceType 是否已赋值
                     * 
                     */
                    bool SpotInstanceTypeHasBeenSet() const;

                private:

                    /**
                     * Bidding price such as "1.05"
                     */
                    std::string m_maxPrice;
                    bool m_maxPriceHasBeenSet;

                    /**
                     * Spot instance type. The value can only be one-time currently. Default value: one-time.
                     */
                    std::string m_spotInstanceType;
                    bool m_spotInstanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_SPOTMARKETOPTIONS_H_
