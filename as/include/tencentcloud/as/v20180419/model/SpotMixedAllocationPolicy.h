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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_SPOTMIXEDALLOCATIONPOLICY_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_SPOTMIXEDALLOCATIONPOLICY_H_

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
                * Specifies how to assign pay-as-you-go instances and spot instances in a mixed instance mode.
                */
                class SpotMixedAllocationPolicy : public AbstractModel
                {
                public:
                    SpotMixedAllocationPolicy();
                    ~SpotMixedAllocationPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The minimum number of the scaling group’s capacity that must be fulfilled by pay-as-you-go instances. It defaults to 0 if not specified. Its value cannot exceed the max capacity of the scaling group.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return BaseCapacity The minimum number of the scaling group’s capacity that must be fulfilled by pay-as-you-go instances. It defaults to 0 if not specified. Its value cannot exceed the max capacity of the scaling group.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t GetBaseCapacity() const;

                    /**
                     * 设置The minimum number of the scaling group’s capacity that must be fulfilled by pay-as-you-go instances. It defaults to 0 if not specified. Its value cannot exceed the max capacity of the scaling group.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param BaseCapacity The minimum number of the scaling group’s capacity that must be fulfilled by pay-as-you-go instances. It defaults to 0 if not specified. Its value cannot exceed the max capacity of the scaling group.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetBaseCapacity(const uint64_t& _baseCapacity);

                    /**
                     * 判断参数 BaseCapacity 是否已赋值
                     * @return BaseCapacity 是否已赋值
                     */
                    bool BaseCapacityHasBeenSet() const;

                    /**
                     * 获取Controls the percentage of pay-as-you-go instances for the additional capacity beyond `BaseCapacity`. Valid range: 0-100. The value 0 indicates that only spot instances are provisioned, while the value 100 indicates that only pay-as-you-go instances are provisioned. It defaults to 70 if not specified. The number of pay-as-you-go instances calculated on the percentage should be rounded up.
For example, if the desired capacity is 3, the `BaseCapacity` is set to 1, and the `OnDemandPercentageAboveBaseCapacity` is set to 1, the scaling group will have 2 pay-as-you-go instance (one comes from the base capacity, and the other comes from the rounded up value of the proportion), and 1 spot instance.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return OnDemandPercentageAboveBaseCapacity Controls the percentage of pay-as-you-go instances for the additional capacity beyond `BaseCapacity`. Valid range: 0-100. The value 0 indicates that only spot instances are provisioned, while the value 100 indicates that only pay-as-you-go instances are provisioned. It defaults to 70 if not specified. The number of pay-as-you-go instances calculated on the percentage should be rounded up.
For example, if the desired capacity is 3, the `BaseCapacity` is set to 1, and the `OnDemandPercentageAboveBaseCapacity` is set to 1, the scaling group will have 2 pay-as-you-go instance (one comes from the base capacity, and the other comes from the rounded up value of the proportion), and 1 spot instance.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t GetOnDemandPercentageAboveBaseCapacity() const;

                    /**
                     * 设置Controls the percentage of pay-as-you-go instances for the additional capacity beyond `BaseCapacity`. Valid range: 0-100. The value 0 indicates that only spot instances are provisioned, while the value 100 indicates that only pay-as-you-go instances are provisioned. It defaults to 70 if not specified. The number of pay-as-you-go instances calculated on the percentage should be rounded up.
For example, if the desired capacity is 3, the `BaseCapacity` is set to 1, and the `OnDemandPercentageAboveBaseCapacity` is set to 1, the scaling group will have 2 pay-as-you-go instance (one comes from the base capacity, and the other comes from the rounded up value of the proportion), and 1 spot instance.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param OnDemandPercentageAboveBaseCapacity Controls the percentage of pay-as-you-go instances for the additional capacity beyond `BaseCapacity`. Valid range: 0-100. The value 0 indicates that only spot instances are provisioned, while the value 100 indicates that only pay-as-you-go instances are provisioned. It defaults to 70 if not specified. The number of pay-as-you-go instances calculated on the percentage should be rounded up.
For example, if the desired capacity is 3, the `BaseCapacity` is set to 1, and the `OnDemandPercentageAboveBaseCapacity` is set to 1, the scaling group will have 2 pay-as-you-go instance (one comes from the base capacity, and the other comes from the rounded up value of the proportion), and 1 spot instance.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetOnDemandPercentageAboveBaseCapacity(const uint64_t& _onDemandPercentageAboveBaseCapacity);

                    /**
                     * 判断参数 OnDemandPercentageAboveBaseCapacity 是否已赋值
                     * @return OnDemandPercentageAboveBaseCapacity 是否已赋值
                     */
                    bool OnDemandPercentageAboveBaseCapacityHasBeenSet() const;

                    /**
                     * 获取Specifies how to assign spot instances in a mixed instance mode. Valid values: `COST_OPTIMIZED` and `CAPACITY_OPTIMIZED`; default value: `COST_OPTIMIZED`.
<br><li>`COST_OPTIMIZED`: the lowest cost policy. For each model in the launch configuration, AS tries to purchase it based on the lowest unit price per core in each availability zone. If the purchase failed, try the second-lowest unit price.
<br><li>`CAPACITY_OPTIMIZED`: the optimal capacity policy. For each model in the launch configuration, AS tries to purchase it based on the largest stock in each availability zone, minimizing the automatic repossession probability of spot instances.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return SpotAllocationStrategy Specifies how to assign spot instances in a mixed instance mode. Valid values: `COST_OPTIMIZED` and `CAPACITY_OPTIMIZED`; default value: `COST_OPTIMIZED`.
<br><li>`COST_OPTIMIZED`: the lowest cost policy. For each model in the launch configuration, AS tries to purchase it based on the lowest unit price per core in each availability zone. If the purchase failed, try the second-lowest unit price.
<br><li>`CAPACITY_OPTIMIZED`: the optimal capacity policy. For each model in the launch configuration, AS tries to purchase it based on the largest stock in each availability zone, minimizing the automatic repossession probability of spot instances.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetSpotAllocationStrategy() const;

                    /**
                     * 设置Specifies how to assign spot instances in a mixed instance mode. Valid values: `COST_OPTIMIZED` and `CAPACITY_OPTIMIZED`; default value: `COST_OPTIMIZED`.
<br><li>`COST_OPTIMIZED`: the lowest cost policy. For each model in the launch configuration, AS tries to purchase it based on the lowest unit price per core in each availability zone. If the purchase failed, try the second-lowest unit price.
<br><li>`CAPACITY_OPTIMIZED`: the optimal capacity policy. For each model in the launch configuration, AS tries to purchase it based on the largest stock in each availability zone, minimizing the automatic repossession probability of spot instances.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param SpotAllocationStrategy Specifies how to assign spot instances in a mixed instance mode. Valid values: `COST_OPTIMIZED` and `CAPACITY_OPTIMIZED`; default value: `COST_OPTIMIZED`.
<br><li>`COST_OPTIMIZED`: the lowest cost policy. For each model in the launch configuration, AS tries to purchase it based on the lowest unit price per core in each availability zone. If the purchase failed, try the second-lowest unit price.
<br><li>`CAPACITY_OPTIMIZED`: the optimal capacity policy. For each model in the launch configuration, AS tries to purchase it based on the largest stock in each availability zone, minimizing the automatic repossession probability of spot instances.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetSpotAllocationStrategy(const std::string& _spotAllocationStrategy);

                    /**
                     * 判断参数 SpotAllocationStrategy 是否已赋值
                     * @return SpotAllocationStrategy 是否已赋值
                     */
                    bool SpotAllocationStrategyHasBeenSet() const;

                    /**
                     * 获取Whether to replace with pay-as-you go instances. Valid values:
<br><li>`TRUE`: yes. After the purchase of spot instances failed due to insufficient stock and other reasons, purchase pay-as-you-go instances.
<br><li>`FALSE`: no. The scaling group only tries the configured model of spot instances when it needs to add spot instances.

Default value: `TRUE`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return CompensateWithBaseInstance Whether to replace with pay-as-you go instances. Valid values:
<br><li>`TRUE`: yes. After the purchase of spot instances failed due to insufficient stock and other reasons, purchase pay-as-you-go instances.
<br><li>`FALSE`: no. The scaling group only tries the configured model of spot instances when it needs to add spot instances.

Default value: `TRUE`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool GetCompensateWithBaseInstance() const;

                    /**
                     * 设置Whether to replace with pay-as-you go instances. Valid values:
<br><li>`TRUE`: yes. After the purchase of spot instances failed due to insufficient stock and other reasons, purchase pay-as-you-go instances.
<br><li>`FALSE`: no. The scaling group only tries the configured model of spot instances when it needs to add spot instances.

Default value: `TRUE`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param CompensateWithBaseInstance Whether to replace with pay-as-you go instances. Valid values:
<br><li>`TRUE`: yes. After the purchase of spot instances failed due to insufficient stock and other reasons, purchase pay-as-you-go instances.
<br><li>`FALSE`: no. The scaling group only tries the configured model of spot instances when it needs to add spot instances.

Default value: `TRUE`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetCompensateWithBaseInstance(const bool& _compensateWithBaseInstance);

                    /**
                     * 判断参数 CompensateWithBaseInstance 是否已赋值
                     * @return CompensateWithBaseInstance 是否已赋值
                     */
                    bool CompensateWithBaseInstanceHasBeenSet() const;

                private:

                    /**
                     * The minimum number of the scaling group’s capacity that must be fulfilled by pay-as-you-go instances. It defaults to 0 if not specified. Its value cannot exceed the max capacity of the scaling group.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_baseCapacity;
                    bool m_baseCapacityHasBeenSet;

                    /**
                     * Controls the percentage of pay-as-you-go instances for the additional capacity beyond `BaseCapacity`. Valid range: 0-100. The value 0 indicates that only spot instances are provisioned, while the value 100 indicates that only pay-as-you-go instances are provisioned. It defaults to 70 if not specified. The number of pay-as-you-go instances calculated on the percentage should be rounded up.
For example, if the desired capacity is 3, the `BaseCapacity` is set to 1, and the `OnDemandPercentageAboveBaseCapacity` is set to 1, the scaling group will have 2 pay-as-you-go instance (one comes from the base capacity, and the other comes from the rounded up value of the proportion), and 1 spot instance.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_onDemandPercentageAboveBaseCapacity;
                    bool m_onDemandPercentageAboveBaseCapacityHasBeenSet;

                    /**
                     * Specifies how to assign spot instances in a mixed instance mode. Valid values: `COST_OPTIMIZED` and `CAPACITY_OPTIMIZED`; default value: `COST_OPTIMIZED`.
<br><li>`COST_OPTIMIZED`: the lowest cost policy. For each model in the launch configuration, AS tries to purchase it based on the lowest unit price per core in each availability zone. If the purchase failed, try the second-lowest unit price.
<br><li>`CAPACITY_OPTIMIZED`: the optimal capacity policy. For each model in the launch configuration, AS tries to purchase it based on the largest stock in each availability zone, minimizing the automatic repossession probability of spot instances.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_spotAllocationStrategy;
                    bool m_spotAllocationStrategyHasBeenSet;

                    /**
                     * Whether to replace with pay-as-you go instances. Valid values:
<br><li>`TRUE`: yes. After the purchase of spot instances failed due to insufficient stock and other reasons, purchase pay-as-you-go instances.
<br><li>`FALSE`: no. The scaling group only tries the configured model of spot instances when it needs to add spot instances.

Default value: `TRUE`.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool m_compensateWithBaseInstance;
                    bool m_compensateWithBaseInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_SPOTMIXEDALLOCATIONPOLICY_H_
