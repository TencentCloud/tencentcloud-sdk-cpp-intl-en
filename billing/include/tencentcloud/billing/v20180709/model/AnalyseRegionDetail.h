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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEREGIONDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEREGIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Cost analysis region return complex type
                */
                class AnalyseRegionDetail : public AbstractModel
                {
                public:
                    AnalyseRegionDetail();
                    ~AnalyseRegionDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionId Region ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Region ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionId Region ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Region nameNote: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionName Region nameNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region nameNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionName Region nameNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                private:

                    /**
                     * Region ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Region nameNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEREGIONDETAIL_H_
