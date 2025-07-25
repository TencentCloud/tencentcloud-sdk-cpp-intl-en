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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_REGIONINSTANCECOUNT_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_REGIONINSTANCECOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Number of resource instances in region
                */
                class RegionInstanceCount : public AbstractModel
                {
                public:
                    RegionInstanceCount();
                    ~RegionInstanceCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region code
                     * @return Region Region code
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region code
                     * @param _region Region code
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
                     * 获取Region code (new specification)
                     * @return RegionV3 Region code (new specification)
                     * 
                     */
                    std::string GetRegionV3() const;

                    /**
                     * 设置Region code (new specification)
                     * @param _regionV3 Region code (new specification)
                     * 
                     */
                    void SetRegionV3(const std::string& _regionV3);

                    /**
                     * 判断参数 RegionV3 是否已赋值
                     * @return RegionV3 是否已赋值
                     * 
                     */
                    bool RegionV3HasBeenSet() const;

                    /**
                     * 获取Number of resource instances
                     * @return Count Number of resource instances
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Number of resource instances
                     * @param _count Number of resource instances
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * Region code
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Region code (new specification)
                     */
                    std::string m_regionV3;
                    bool m_regionV3HasBeenSet;

                    /**
                     * Number of resource instances
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_REGIONINSTANCECOUNT_H_
