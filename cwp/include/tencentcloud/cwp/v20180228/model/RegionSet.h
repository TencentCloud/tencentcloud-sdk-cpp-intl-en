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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_REGIONSET_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_REGIONSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/ZoneInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Region information
                */
                class RegionSet : public AbstractModel
                {
                public:
                    RegionSet();
                    ~RegionSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region name
                     * @return RegionName Region name
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region name
                     * @param _regionName Region name
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
                     * 获取AZ information
                     * @return ZoneSet AZ information
                     * 
                     */
                    std::vector<ZoneInfo> GetZoneSet() const;

                    /**
                     * 设置AZ information
                     * @param _zoneSet AZ information
                     * 
                     */
                    void SetZoneSet(const std::vector<ZoneInfo>& _zoneSet);

                    /**
                     * 判断参数 ZoneSet 是否已赋值
                     * @return ZoneSet 是否已赋值
                     * 
                     */
                    bool ZoneSetHasBeenSet() const;

                private:

                    /**
                     * Region name
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * AZ information
                     */
                    std::vector<ZoneInfo> m_zoneSet;
                    bool m_zoneSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_REGIONSET_H_
