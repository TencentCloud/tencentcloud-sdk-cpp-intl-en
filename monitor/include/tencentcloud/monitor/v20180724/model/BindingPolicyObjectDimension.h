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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_BINDINGPOLICYOBJECTDIMENSION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_BINDINGPOLICYOBJECTDIMENSION_H_

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
                * Dimensions of instances bound to a policy
                */
                class BindingPolicyObjectDimension : public AbstractModel
                {
                public:
                    BindingPolicyObjectDimension();
                    ~BindingPolicyObjectDimension() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region name.
                     * @return Region Region name.
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region name.
                     * @param Region Region name.
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Region ID.
                     * @return RegionId Region ID.
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region ID.
                     * @param RegionId Region ID.
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Dimensions.
                     * @return Dimensions Dimensions.
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置Dimensions.
                     * @param Dimensions Dimensions.
                     */
                    void SetDimensions(const std::string& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取Event dimensions.
                     * @return EventDimensions Event dimensions.
                     */
                    std::string GetEventDimensions() const;

                    /**
                     * 设置Event dimensions.
                     * @param EventDimensions Event dimensions.
                     */
                    void SetEventDimensions(const std::string& _eventDimensions);

                    /**
                     * 判断参数 EventDimensions 是否已赋值
                     * @return EventDimensions 是否已赋值
                     */
                    bool EventDimensionsHasBeenSet() const;

                private:

                    /**
                     * Region name.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Region ID.
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Dimensions.
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * Event dimensions.
                     */
                    std::string m_eventDimensions;
                    bool m_eventDimensionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_BINDINGPOLICYOBJECTDIMENSION_H_
