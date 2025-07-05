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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_AVAILABLEREGION_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_AVAILABLEREGION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Available region information.
                */
                class AvailableRegion : public AbstractModel
                {
                public:
                    AvailableRegion();
                    ~AvailableRegion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Region Region

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region

Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _region Region

Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取AZ information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AvailableZones AZ information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAvailableZones() const;

                    /**
                     * 设置AZ information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _availableZones AZ information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAvailableZones(const std::vector<std::string>& _availableZones);

                    /**
                     * 判断参数 AvailableZones 是否已赋值
                     * @return AvailableZones 是否已赋值
                     * 
                     */
                    bool AvailableZonesHasBeenSet() const;

                private:

                    /**
                     * Region

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * AZ information.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_availableZones;
                    bool m_availableZonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_AVAILABLEREGION_H_
