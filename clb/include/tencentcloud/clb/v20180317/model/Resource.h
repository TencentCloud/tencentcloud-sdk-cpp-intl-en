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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_RESOURCE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_RESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ResourceAvailability.h>
#include <tencentcloud/clb/v20180317/model/TypeInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Resource details
                */
                class Resource : public AbstractModel
                {
                public:
                    Resource();
                    ~Resource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specific ISP resource information, Vaules: `CMCC`, `CUCC`, `CTCC`, `BGP`, and `INTERNAL`.
                     * @return Type Specific ISP resource information, Vaules: `CMCC`, `CUCC`, `CTCC`, `BGP`, and `INTERNAL`.
                     * 
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 设置Specific ISP resource information, Vaules: `CMCC`, `CUCC`, `CTCC`, `BGP`, and `INTERNAL`.
                     * @param _type Specific ISP resource information, Vaules: `CMCC`, `CUCC`, `CTCC`, `BGP`, and `INTERNAL`.
                     * 
                     */
                    void SetType(const std::vector<std::string>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取ISP information, such as `CMCC`, `CUCC`, `CTCC`, `BGP`, and `INTERNAL`.
                     * @return Isp ISP information, such as `CMCC`, `CUCC`, `CTCC`, `BGP`, and `INTERNAL`.
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置ISP information, such as `CMCC`, `CUCC`, `CTCC`, `BGP`, and `INTERNAL`.
                     * @param _isp ISP information, such as `CMCC`, `CUCC`, `CTCC`, `BGP`, and `INTERNAL`.
                     * 
                     */
                    void SetIsp(const std::string& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取Available resources
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return AvailabilitySet Available resources
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ResourceAvailability> GetAvailabilitySet() const;

                    /**
                     * 设置Available resources
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _availabilitySet Available resources
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAvailabilitySet(const std::vector<ResourceAvailability>& _availabilitySet);

                    /**
                     * 判断参数 AvailabilitySet 是否已赋值
                     * @return AvailabilitySet 是否已赋值
                     * 
                     */
                    bool AvailabilitySetHasBeenSet() const;

                    /**
                     * 获取ISP Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TypeSet ISP Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TypeInfo> GetTypeSet() const;

                    /**
                     * 设置ISP Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _typeSet ISP Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTypeSet(const std::vector<TypeInfo>& _typeSet);

                    /**
                     * 判断参数 TypeSet 是否已赋值
                     * @return TypeSet 是否已赋值
                     * 
                     */
                    bool TypeSetHasBeenSet() const;

                private:

                    /**
                     * Specific ISP resource information, Vaules: `CMCC`, `CUCC`, `CTCC`, `BGP`, and `INTERNAL`.
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * ISP information, such as `CMCC`, `CUCC`, `CTCC`, `BGP`, and `INTERNAL`.
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * Available resources
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ResourceAvailability> m_availabilitySet;
                    bool m_availabilitySetHasBeenSet;

                    /**
                     * ISP Type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TypeInfo> m_typeSet;
                    bool m_typeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_RESOURCE_H_
