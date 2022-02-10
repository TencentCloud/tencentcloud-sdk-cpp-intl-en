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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_REGIONDETAIL_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_REGIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * Region details
                */
                class RegionDetail : public AbstractModel
                {
                public:
                    RegionDetail();
                    ~RegionDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region ID
                     * @return RegionId Region ID
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Region ID
                     * @param RegionId Region ID
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Region name in Chinese or English
                     * @return RegionName Region name in Chinese or English
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region name in Chinese or English
                     * @param RegionName Region name in Chinese or English
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取Region where the data center locates
                     * @return RegionArea Region where the data center locates
                     */
                    std::string GetRegionArea() const;

                    /**
                     * 设置Region where the data center locates
                     * @param RegionArea Region where the data center locates
                     */
                    void SetRegionArea(const std::string& _regionArea);

                    /**
                     * 判断参数 RegionArea 是否已赋值
                     * @return RegionArea 是否已赋值
                     */
                    bool RegionAreaHasBeenSet() const;

                    /**
                     * 获取Name of the region where the data center locates
                     * @return RegionAreaName Name of the region where the data center locates
                     */
                    std::string GetRegionAreaName() const;

                    /**
                     * 设置Name of the region where the data center locates
                     * @param RegionAreaName Name of the region where the data center locates
                     */
                    void SetRegionAreaName(const std::string& _regionAreaName);

                    /**
                     * 判断参数 RegionAreaName 是否已赋值
                     * @return RegionAreaName 是否已赋值
                     */
                    bool RegionAreaNameHasBeenSet() const;

                    /**
                     * 获取Data center type. `dc`: data center; `ec`: edge server.
                     * @return IDCType Data center type. `dc`: data center; `ec`: edge server.
                     */
                    std::string GetIDCType() const;

                    /**
                     * 设置Data center type. `dc`: data center; `ec`: edge server.
                     * @param IDCType Data center type. `dc`: data center; `ec`: edge server.
                     */
                    void SetIDCType(const std::string& _iDCType);

                    /**
                     * 判断参数 IDCType 是否已赋值
                     * @return IDCType 是否已赋值
                     */
                    bool IDCTypeHasBeenSet() const;

                    /**
                     * 获取Feature bitmap. Valid values:
`0`: the feature is not supported;
`1`: the feature is supported.
Each bit in the bitmap represents a feature:
1st bit: layer-4 acceleration;
2nd bit: layer-7 acceleration;
3rd bit: HTTP3 access;
4th bit: IPv6;
5th bit: dedicated BGP access;
6th bit: non-BGP access;
7th bit: QoS acceleration.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return FeatureBitmap Feature bitmap. Valid values:
`0`: the feature is not supported;
`1`: the feature is supported.
Each bit in the bitmap represents a feature:
1st bit: layer-4 acceleration;
2nd bit: layer-7 acceleration;
3rd bit: HTTP3 access;
4th bit: IPv6;
5th bit: dedicated BGP access;
6th bit: non-BGP access;
7th bit: QoS acceleration.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetFeatureBitmap() const;

                    /**
                     * 设置Feature bitmap. Valid values:
`0`: the feature is not supported;
`1`: the feature is supported.
Each bit in the bitmap represents a feature:
1st bit: layer-4 acceleration;
2nd bit: layer-7 acceleration;
3rd bit: HTTP3 access;
4th bit: IPv6;
5th bit: dedicated BGP access;
6th bit: non-BGP access;
7th bit: QoS acceleration.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param FeatureBitmap Feature bitmap. Valid values:
`0`: the feature is not supported;
`1`: the feature is supported.
Each bit in the bitmap represents a feature:
1st bit: layer-4 acceleration;
2nd bit: layer-7 acceleration;
3rd bit: HTTP3 access;
4th bit: IPv6;
5th bit: dedicated BGP access;
6th bit: non-BGP access;
7th bit: QoS acceleration.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetFeatureBitmap(const uint64_t& _featureBitmap);

                    /**
                     * 判断参数 FeatureBitmap 是否已赋值
                     * @return FeatureBitmap 是否已赋值
                     */
                    bool FeatureBitmapHasBeenSet() const;

                private:

                    /**
                     * Region ID
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Region name in Chinese or English
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Region where the data center locates
                     */
                    std::string m_regionArea;
                    bool m_regionAreaHasBeenSet;

                    /**
                     * Name of the region where the data center locates
                     */
                    std::string m_regionAreaName;
                    bool m_regionAreaNameHasBeenSet;

                    /**
                     * Data center type. `dc`: data center; `ec`: edge server.
                     */
                    std::string m_iDCType;
                    bool m_iDCTypeHasBeenSet;

                    /**
                     * Feature bitmap. Valid values:
`0`: the feature is not supported;
`1`: the feature is supported.
Each bit in the bitmap represents a feature:
1st bit: layer-4 acceleration;
2nd bit: layer-7 acceleration;
3rd bit: HTTP3 access;
4th bit: IPv6;
5th bit: dedicated BGP access;
6th bit: non-BGP access;
7th bit: QoS acceleration.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_featureBitmap;
                    bool m_featureBitmapHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_REGIONDETAIL_H_
