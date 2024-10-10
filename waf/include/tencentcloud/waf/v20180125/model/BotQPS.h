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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_BOTQPS_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_BOTQPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Bot's QPS details
                */
                class BotQPS : public AbstractModel
                {
                public:
                    BotQPS();
                    ~BotQPS() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource ID
                     * @return ResourceIds Resource ID
                     * 
                     */
                    std::string GetResourceIds() const;

                    /**
                     * 设置Resource ID
                     * @param _resourceIds Resource ID
                     * 
                     */
                    void SetResourceIds(const std::string& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取Expiration time
                     * @return ValidTime Expiration time
                     * 
                     */
                    std::string GetValidTime() const;

                    /**
                     * 设置Expiration time
                     * @param _validTime Expiration time
                     * 
                     */
                    void SetValidTime(const std::string& _validTime);

                    /**
                     * 判断参数 ValidTime 是否已赋值
                     * @return ValidTime 是否已赋值
                     * 
                     */
                    bool ValidTimeHasBeenSet() const;

                    /**
                     * 获取Resource quantity.
                     * @return Count Resource quantity.
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Resource quantity.
                     * @param _count Resource quantity.
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Resource Location
                     * @return Region Resource Location
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Resource Location
                     * @param _region Resource Location
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Maximum QPS Usage
                     * @return MaxBotQPS Maximum QPS Usage
                     * 
                     */
                    uint64_t GetMaxBotQPS() const;

                    /**
                     * 设置Maximum QPS Usage
                     * @param _maxBotQPS Maximum QPS Usage
                     * 
                     */
                    void SetMaxBotQPS(const uint64_t& _maxBotQPS);

                    /**
                     * 判断参数 MaxBotQPS 是否已赋值
                     * @return MaxBotQPS 是否已赋值
                     * 
                     */
                    bool MaxBotQPSHasBeenSet() const;

                    /**
                     * 获取Renewal flag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RenewFlag Renewal flag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRenewFlag() const;

                    /**
                     * 设置Renewal flag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _renewFlag Renewal flag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRenewFlag(const uint64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * Resource ID
                     */
                    std::string m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * Expiration time
                     */
                    std::string m_validTime;
                    bool m_validTimeHasBeenSet;

                    /**
                     * Resource quantity.
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Resource Location
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Maximum QPS Usage
                     */
                    uint64_t m_maxBotQPS;
                    bool m_maxBotQPSHasBeenSet;

                    /**
                     * Renewal flag.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_BOTQPS_H_
