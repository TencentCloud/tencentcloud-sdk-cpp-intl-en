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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_REGIONINFO_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_REGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Region information
                */
                class RegionInfo : public AbstractModel
                {
                public:
                    RegionInfo();
                    ~RegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region, such as `ap-guangzhou`, `ap-shanghai` and `ap-beijing`
                     * @return Region Region, such as `ap-guangzhou`, `ap-shanghai` and `ap-beijing`
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region, such as `ap-guangzhou`, `ap-shanghai` and `ap-beijing`
                     * @param Region Region, such as `ap-guangzhou`, `ap-shanghai` and `ap-beijing`
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Region name, such as `South China (Guangzhou)`, `East China (Shanghai)`, and `North China (Beijing)`
                     * @return RegionName Region name, such as `South China (Guangzhou)`, `East China (Shanghai)`, and `North China (Beijing)`
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region name, such as `South China (Guangzhou)`, `East China (Shanghai)`, and `North China (Beijing)`
                     * @param RegionName Region name, such as `South China (Guangzhou)`, `East China (Shanghai)`, and `North China (Beijing)`
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取Region ID
                     * @return RegionId Region ID
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置Region ID
                     * @param RegionId Region ID
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Region code, such as `gz`, `sh`, and `bj`
                     * @return RegionCode Region code, such as `gz`, `sh`, and `bj`
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置Region code, such as `gz`, `sh`, and `bj`
                     * @param RegionCode Region code, such as `gz`, `sh`, and `bj`
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     */
                    bool RegionCodeHasBeenSet() const;

                private:

                    /**
                     * Region, such as `ap-guangzhou`, `ap-shanghai` and `ap-beijing`
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Region name, such as `South China (Guangzhou)`, `East China (Shanghai)`, and `North China (Beijing)`
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Region ID
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Region code, such as `gz`, `sh`, and `bj`
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_REGIONINFO_H_
