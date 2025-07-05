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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTINSTANCE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Object instance information returned by the DescribeBindingPolicyObjectListInstance API.
                */
                class DescribeBindingPolicyObjectListInstance : public AbstractModel
                {
                public:
                    DescribeBindingPolicyObjectListInstance();
                    ~DescribeBindingPolicyObjectListInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of the object.
                     * @return UniqueId Unique ID of the object.
                     * 
                     */
                    std::string GetUniqueId() const;

                    /**
                     * 设置Unique ID of the object.
                     * @param _uniqueId Unique ID of the object.
                     * 
                     */
                    void SetUniqueId(const std::string& _uniqueId);

                    /**
                     * 判断参数 UniqueId 是否已赋值
                     * @return UniqueId 是否已赋值
                     * 
                     */
                    bool UniqueIdHasBeenSet() const;

                    /**
                     * 获取Dimension set of an object instance, which is a jsonObj string.
                     * @return Dimensions Dimension set of an object instance, which is a jsonObj string.
                     * 
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置Dimension set of an object instance, which is a jsonObj string.
                     * @param _dimensions Dimension set of an object instance, which is a jsonObj string.
                     * 
                     */
                    void SetDimensions(const std::string& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取Whether the object is shielded. The value 0 indicates that the object is not shielded. The value 1 indicates that the object is shielded.
                     * @return IsShielded Whether the object is shielded. The value 0 indicates that the object is not shielded. The value 1 indicates that the object is shielded.
                     * 
                     */
                    int64_t GetIsShielded() const;

                    /**
                     * 设置Whether the object is shielded. The value 0 indicates that the object is not shielded. The value 1 indicates that the object is shielded.
                     * @param _isShielded Whether the object is shielded. The value 0 indicates that the object is not shielded. The value 1 indicates that the object is shielded.
                     * 
                     */
                    void SetIsShielded(const int64_t& _isShielded);

                    /**
                     * 判断参数 IsShielded 是否已赋值
                     * @return IsShielded 是否已赋值
                     * 
                     */
                    bool IsShieldedHasBeenSet() const;

                    /**
                     * 获取Region where the object resides.
                     * @return Region Region where the object resides.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region where the object resides.
                     * @param _region Region where the object resides.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the object.
                     */
                    std::string m_uniqueId;
                    bool m_uniqueIdHasBeenSet;

                    /**
                     * Dimension set of an object instance, which is a jsonObj string.
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * Whether the object is shielded. The value 0 indicates that the object is not shielded. The value 1 indicates that the object is shielded.
                     */
                    int64_t m_isShielded;
                    bool m_isShieldedHasBeenSet;

                    /**
                     * Region where the object resides.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTINSTANCE_H_
