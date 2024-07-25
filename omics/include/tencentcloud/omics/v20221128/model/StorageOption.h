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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_STORAGEOPTION_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_STORAGEOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * CFS configuration
                */
                class StorageOption : public AbstractModel
                {
                public:
                    StorageOption();
                    ~StorageOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CFS type. Valid values:
- SD: standard
- HP: high-performance
- TB: standard Turbo
- TP: high-performance Turbo
                     * @return StorageType CFS type. Valid values:
- SD: standard
- HP: high-performance
- TB: standard Turbo
- TP: high-performance Turbo
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置CFS type. Valid values:
- SD: standard
- HP: high-performance
- TB: standard Turbo
- TP: high-performance Turbo
                     * @param _storageType CFS type. Valid values:
- SD: standard
- HP: high-performance
- TB: standard Turbo
- TP: high-performance Turbo
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取CFS availability zone
                     * @return Zone CFS availability zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置CFS availability zone
                     * @param _zone CFS availability zone
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取CFS capacity in GiB, required for the Turbo series
- Standard Turbo has a minimum capacity of 40 TiB, or 40,960 GiB; the capacity expansion step is 20 TiB, or 20,480 GiB.
- High-performance Turbo has a minimum capacity of 20 TiB, or 20,480 GiB; the capacity expansion step is 10 TiB, or 10,240 GiB.
                     * @return Capacity CFS capacity in GiB, required for the Turbo series
- Standard Turbo has a minimum capacity of 40 TiB, or 40,960 GiB; the capacity expansion step is 20 TiB, or 20,480 GiB.
- High-performance Turbo has a minimum capacity of 20 TiB, or 20,480 GiB; the capacity expansion step is 10 TiB, or 10,240 GiB.
                     * 
                     */
                    uint64_t GetCapacity() const;

                    /**
                     * 设置CFS capacity in GiB, required for the Turbo series
- Standard Turbo has a minimum capacity of 40 TiB, or 40,960 GiB; the capacity expansion step is 20 TiB, or 20,480 GiB.
- High-performance Turbo has a minimum capacity of 20 TiB, or 20,480 GiB; the capacity expansion step is 10 TiB, or 10,240 GiB.
                     * @param _capacity CFS capacity in GiB, required for the Turbo series
- Standard Turbo has a minimum capacity of 40 TiB, or 40,960 GiB; the capacity expansion step is 20 TiB, or 20,480 GiB.
- High-performance Turbo has a minimum capacity of 20 TiB, or 20,480 GiB; the capacity expansion step is 10 TiB, or 10,240 GiB.
                     * 
                     */
                    void SetCapacity(const uint64_t& _capacity);

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     * 
                     */
                    bool CapacityHasBeenSet() const;

                private:

                    /**
                     * CFS type. Valid values:
- SD: standard
- HP: high-performance
- TB: standard Turbo
- TP: high-performance Turbo
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * CFS availability zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * CFS capacity in GiB, required for the Turbo series
- Standard Turbo has a minimum capacity of 40 TiB, or 40,960 GiB; the capacity expansion step is 20 TiB, or 20,480 GiB.
- High-performance Turbo has a minimum capacity of 20 TiB, or 20,480 GiB; the capacity expansion step is 10 TiB, or 10,240 GiB.
                     */
                    uint64_t m_capacity;
                    bool m_capacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_STORAGEOPTION_H_
