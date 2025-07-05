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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_RESOURCEAVAILABILITY_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_RESOURCEAVAILABILITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Resource availability
                */
                class ResourceAvailability : public AbstractModel
                {
                public:
                    ResourceAvailability();
                    ~ResourceAvailability() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specific ISP resource information. Values: `CMCC`, `CUCC`, `CTCC`, `BGP`.
                     * @return Type Specific ISP resource information. Values: `CMCC`, `CUCC`, `CTCC`, `BGP`.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Specific ISP resource information. Values: `CMCC`, `CUCC`, `CTCC`, `BGP`.
                     * @param _type Specific ISP resource information. Values: `CMCC`, `CUCC`, `CTCC`, `BGP`.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Whether the resource is available. Values: `Available`, `Unavailable`
                     * @return Availability Whether the resource is available. Values: `Available`, `Unavailable`
                     * 
                     */
                    std::string GetAvailability() const;

                    /**
                     * 设置Whether the resource is available. Values: `Available`, `Unavailable`
                     * @param _availability Whether the resource is available. Values: `Available`, `Unavailable`
                     * 
                     */
                    void SetAvailability(const std::string& _availability);

                    /**
                     * 判断参数 Availability 是否已赋值
                     * @return Availability 是否已赋值
                     * 
                     */
                    bool AvailabilityHasBeenSet() const;

                private:

                    /**
                     * Specific ISP resource information. Values: `CMCC`, `CUCC`, `CTCC`, `BGP`.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Whether the resource is available. Values: `Available`, `Unavailable`
                     */
                    std::string m_availability;
                    bool m_availabilityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_RESOURCEAVAILABILITY_H_
