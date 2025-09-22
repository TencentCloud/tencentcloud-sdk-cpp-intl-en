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

#ifndef TENCENTCLOUD_CDZ_V20221123_MODEL_CLOUDDEDICATEDZONERESOURCESTATISTICSINFO_H_
#define TENCENTCLOUD_CDZ_V20221123_MODEL_CLOUDDEDICATEDZONERESOURCESTATISTICSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdz
    {
        namespace V20221123
        {
            namespace Model
            {
                /**
                * Details of the queried data for the statistical item of the CDZ resource, corresponding to a specific vertical product resource statistics.
                */
                class CloudDedicatedZoneResourceStatisticsInfo : public AbstractModel
                {
                public:
                    CloudDedicatedZoneResourceStatisticsInfo();
                    ~CloudDedicatedZoneResourceStatisticsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the item name of resource statistics.
                     * @return Item Specifies the item name of resource statistics.
                     * 
                     */
                    std::string GetItem() const;

                    /**
                     * 设置Specifies the item name of resource statistics.
                     * @param _item Specifies the item name of resource statistics.
                     * 
                     */
                    void SetItem(const std::string& _item);

                    /**
                     * 判断参数 Item 是否已赋值
                     * @return Item 是否已赋值
                     * 
                     */
                    bool ItemHasBeenSet() const;

                    /**
                     * 获取Resource statistics item measurement unit.
                     * @return Unit Resource statistics item measurement unit.
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置Resource statistics item measurement unit.
                     * @param _unit Resource statistics item measurement unit.
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取Total resource amount.
                     * @return Total Total resource amount.
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置Total resource amount.
                     * @param _total Total resource amount.
                     * 
                     */
                    void SetTotal(const std::string& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Used resources.
                     * @return Usage Used resources.
                     * 
                     */
                    std::string GetUsage() const;

                    /**
                     * 设置Used resources.
                     * @param _usage Used resources.
                     * 
                     */
                    void SetUsage(const std::string& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取Specifies the percentage of used resources.
                     * @return UsageRate Specifies the percentage of used resources.
                     * 
                     */
                    std::string GetUsageRate() const;

                    /**
                     * 设置Specifies the percentage of used resources.
                     * @param _usageRate Specifies the percentage of used resources.
                     * 
                     */
                    void SetUsageRate(const std::string& _usageRate);

                    /**
                     * 判断参数 UsageRate 是否已赋值
                     * @return UsageRate 是否已赋值
                     * 
                     */
                    bool UsageRateHasBeenSet() const;

                    /**
                     * 获取Remaining resource.
                     * @return Remain Remaining resource.
                     * 
                     */
                    std::string GetRemain() const;

                    /**
                     * 设置Remaining resource.
                     * @param _remain Remaining resource.
                     * 
                     */
                    void SetRemain(const std::string& _remain);

                    /**
                     * 判断参数 Remain 是否已赋值
                     * @return Remain 是否已赋值
                     * 
                     */
                    bool RemainHasBeenSet() const;

                    /**
                     * 获取Remaining resource percentage.
                     * @return RemainRate Remaining resource percentage.
                     * 
                     */
                    std::string GetRemainRate() const;

                    /**
                     * 设置Remaining resource percentage.
                     * @param _remainRate Remaining resource percentage.
                     * 
                     */
                    void SetRemainRate(const std::string& _remainRate);

                    /**
                     * 判断参数 RemainRate 是否已赋值
                     * @return RemainRate 是否已赋值
                     * 
                     */
                    bool RemainRateHasBeenSet() const;

                    /**
                     * 获取Resource utilization rate at midnight this monday.
                     * @return ThisMondayUsageRate Resource utilization rate at midnight this monday.
                     * 
                     */
                    std::string GetThisMondayUsageRate() const;

                    /**
                     * 设置Resource utilization rate at midnight this monday.
                     * @param _thisMondayUsageRate Resource utilization rate at midnight this monday.
                     * 
                     */
                    void SetThisMondayUsageRate(const std::string& _thisMondayUsageRate);

                    /**
                     * 判断参数 ThisMondayUsageRate 是否已赋值
                     * @return ThisMondayUsageRate 是否已赋值
                     * 
                     */
                    bool ThisMondayUsageRateHasBeenSet() const;

                    /**
                     * 获取Resource growth rate this week.
                     * @return ThisMondayUsageGrowthRate Resource growth rate this week.
                     * 
                     */
                    std::string GetThisMondayUsageGrowthRate() const;

                    /**
                     * 设置Resource growth rate this week.
                     * @param _thisMondayUsageGrowthRate Resource growth rate this week.
                     * 
                     */
                    void SetThisMondayUsageGrowthRate(const std::string& _thisMondayUsageGrowthRate);

                    /**
                     * 判断参数 ThisMondayUsageGrowthRate 是否已赋值
                     * @return ThisMondayUsageGrowthRate 是否已赋值
                     * 
                     */
                    bool ThisMondayUsageGrowthRateHasBeenSet() const;

                    /**
                     * 获取Resource growth rate last week.
                     * @return LastMondayUsageGrowthRate Resource growth rate last week.
                     * 
                     */
                    std::string GetLastMondayUsageGrowthRate() const;

                    /**
                     * 设置Resource growth rate last week.
                     * @param _lastMondayUsageGrowthRate Resource growth rate last week.
                     * 
                     */
                    void SetLastMondayUsageGrowthRate(const std::string& _lastMondayUsageGrowthRate);

                    /**
                     * 判断参数 LastMondayUsageGrowthRate 是否已赋值
                     * @return LastMondayUsageGrowthRate 是否已赋值
                     * 
                     */
                    bool LastMondayUsageGrowthRateHasBeenSet() const;

                private:

                    /**
                     * Specifies the item name of resource statistics.
                     */
                    std::string m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * Resource statistics item measurement unit.
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * Total resource amount.
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Used resources.
                     */
                    std::string m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * Specifies the percentage of used resources.
                     */
                    std::string m_usageRate;
                    bool m_usageRateHasBeenSet;

                    /**
                     * Remaining resource.
                     */
                    std::string m_remain;
                    bool m_remainHasBeenSet;

                    /**
                     * Remaining resource percentage.
                     */
                    std::string m_remainRate;
                    bool m_remainRateHasBeenSet;

                    /**
                     * Resource utilization rate at midnight this monday.
                     */
                    std::string m_thisMondayUsageRate;
                    bool m_thisMondayUsageRateHasBeenSet;

                    /**
                     * Resource growth rate this week.
                     */
                    std::string m_thisMondayUsageGrowthRate;
                    bool m_thisMondayUsageGrowthRateHasBeenSet;

                    /**
                     * Resource growth rate last week.
                     */
                    std::string m_lastMondayUsageGrowthRate;
                    bool m_lastMondayUsageGrowthRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDZ_V20221123_MODEL_CLOUDDEDICATEDZONERESOURCESTATISTICSINFO_H_
