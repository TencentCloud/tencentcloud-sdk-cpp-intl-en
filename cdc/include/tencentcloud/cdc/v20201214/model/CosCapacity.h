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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_COSCAPACITY_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_COSCAPACITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * Capacity of COS in CDC
                */
                class CosCapacity : public AbstractModel
                {
                public:
                    CosCapacity();
                    ~CosCapacity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total capacity, in GB
                     * @return TotalCapacity Total capacity, in GB
                     * 
                     */
                    double GetTotalCapacity() const;

                    /**
                     * 设置Total capacity, in GB
                     * @param _totalCapacity Total capacity, in GB
                     * 
                     */
                    void SetTotalCapacity(const double& _totalCapacity);

                    /**
                     * 判断参数 TotalCapacity 是否已赋值
                     * @return TotalCapacity 是否已赋值
                     * 
                     */
                    bool TotalCapacityHasBeenSet() const;

                    /**
                     * 获取Available capacity, in GB
                     * @return TotalFreeCapacity Available capacity, in GB
                     * 
                     */
                    double GetTotalFreeCapacity() const;

                    /**
                     * 设置Available capacity, in GB
                     * @param _totalFreeCapacity Available capacity, in GB
                     * 
                     */
                    void SetTotalFreeCapacity(const double& _totalFreeCapacity);

                    /**
                     * 判断参数 TotalFreeCapacity 是否已赋值
                     * @return TotalFreeCapacity 是否已赋值
                     * 
                     */
                    bool TotalFreeCapacityHasBeenSet() const;

                    /**
                     * 获取Used capacity, in GB
                     * @return TotalUsedCapacity Used capacity, in GB
                     * 
                     */
                    double GetTotalUsedCapacity() const;

                    /**
                     * 设置Used capacity, in GB
                     * @param _totalUsedCapacity Used capacity, in GB
                     * 
                     */
                    void SetTotalUsedCapacity(const double& _totalUsedCapacity);

                    /**
                     * 判断参数 TotalUsedCapacity 是否已赋值
                     * @return TotalUsedCapacity 是否已赋值
                     * 
                     */
                    bool TotalUsedCapacityHasBeenSet() const;

                private:

                    /**
                     * Total capacity, in GB
                     */
                    double m_totalCapacity;
                    bool m_totalCapacityHasBeenSet;

                    /**
                     * Available capacity, in GB
                     */
                    double m_totalFreeCapacity;
                    bool m_totalFreeCapacityHasBeenSet;

                    /**
                     * Used capacity, in GB
                     */
                    double m_totalUsedCapacity;
                    bool m_totalUsedCapacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_COSCAPACITY_H_
