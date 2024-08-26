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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_REGIONINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_REGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/ZoneInfo.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Region description information
                */
                class RegionInfo : public AbstractModel
                {
                public:
                    RegionInfo();
                    ~RegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region name, such as ap-guangzhou
                     * @return Name Region name, such as ap-guangzhou
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Region name, such as ap-guangzhou
                     * @param _name Region name, such as ap-guangzhou
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Region description, such as Guangzhou
                     * @return Desc Region description, such as Guangzhou
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Region description, such as Guangzhou
                     * @param _desc Region description, such as Guangzhou
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Unique marker of region
                     * @return RegionId Unique marker of region
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Unique marker of region
                     * @param _regionId Unique marker of region
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
                     * 获取List of all availability zones in the region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Zones List of all availability zones in the region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ZoneInfo> GetZones() const;

                    /**
                     * 设置List of all availability zones in the region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zones List of all availability zones in the region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZones(const std::vector<ZoneInfo>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取Number of clusters in the region
                     * @return Count Number of clusters in the region
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of clusters in the region
                     * @param _count Number of clusters in the region
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取0 indicates the international site; 1 indicates not.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsInternationalSite 0 indicates the international site; 1 indicates not.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsInternationalSite() const;

                    /**
                     * 设置0 indicates the international site; 1 indicates not.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isInternationalSite 0 indicates the international site; 1 indicates not.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsInternationalSite(const uint64_t& _isInternationalSite);

                    /**
                     * 判断参数 IsInternationalSite 是否已赋值
                     * @return IsInternationalSite 是否已赋值
                     * 
                     */
                    bool IsInternationalSiteHasBeenSet() const;

                    /**
                     * 获取Bucket
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Bucket Bucket
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置Bucket
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bucket Bucket
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                private:

                    /**
                     * Region name, such as ap-guangzhou
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Region description, such as Guangzhou
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Unique marker of region
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * List of all availability zones in the region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ZoneInfo> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Number of clusters in the region
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 0 indicates the international site; 1 indicates not.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isInternationalSite;
                    bool m_isInternationalSiteHasBeenSet;

                    /**
                     * Bucket
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_REGIONINFO_H_
