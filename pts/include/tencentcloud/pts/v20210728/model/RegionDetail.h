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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_REGIONDETAIL_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_REGIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Region.
                */
                class RegionDetail : public AbstractModel
                {
                public:
                    RegionDetail();
                    ~RegionDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region code.
                     * @return Region Region code.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region code.
                     * @param _region Region code.
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
                     * 获取Region ID.
                     * @return RegionId Region ID.
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region ID.
                     * @param _regionId Region ID.
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Area where the region is located.
                     * @return Area Area where the region is located.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Area where the region is located.
                     * @param _area Area where the region is located.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Region name.
                     * @return RegionName Region name.
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region name.
                     * @param _regionName Region name.
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取Region state.
                     * @return RegionState Region state.
                     * 
                     */
                    int64_t GetRegionState() const;

                    /**
                     * 设置Region state.
                     * @param _regionState Region state.
                     * 
                     */
                    void SetRegionState(const int64_t& _regionState);

                    /**
                     * 判断参数 RegionState 是否已赋值
                     * @return RegionState 是否已赋值
                     * 
                     */
                    bool RegionStateHasBeenSet() const;

                    /**
                     * 获取Region abbreviation.
                     * @return RegionShortName Region abbreviation.
                     * 
                     */
                    std::string GetRegionShortName() const;

                    /**
                     * 设置Region abbreviation.
                     * @param _regionShortName Region abbreviation.
                     * 
                     */
                    void SetRegionShortName(const std::string& _regionShortName);

                    /**
                     * 判断参数 RegionShortName 是否已赋值
                     * @return RegionShortName 是否已赋值
                     * 
                     */
                    bool RegionShortNameHasBeenSet() const;

                    /**
                     * 获取Create time.
                     * @return CreatedAt Create time.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Create time.
                     * @param _createdAt Create time.
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdatedAt Update time.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Update time.
                     * @param _updatedAt Update time.
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * Region code.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Region ID.
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Area where the region is located.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Region name.
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Region state.
                     */
                    int64_t m_regionState;
                    bool m_regionStateHasBeenSet;

                    /**
                     * Region abbreviation.
                     */
                    std::string m_regionShortName;
                    bool m_regionShortNameHasBeenSet;

                    /**
                     * Create time.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_REGIONDETAIL_H_
