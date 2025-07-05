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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCREENREGIONINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCREENREGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


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
                class ScreenRegionInfo : public AbstractModel
                {
                public:
                    ScreenRegionInfo();
                    ~ScreenRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region identifiers, such as ap-guangzhou, ap-shanghai, and ap-beijing
                     * @return Region Region identifiers, such as ap-guangzhou, ap-shanghai, and ap-beijing
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region identifiers, such as ap-guangzhou, ap-shanghai, and ap-beijing
                     * @param _region Region identifiers, such as ap-guangzhou, ap-shanghai, and ap-beijing
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
                     * 获取Chinese name of region, such as South China (Guangzhou), East China (Shanghai Finance), and North China (Beijing)
                     * @return RegionName Chinese name of region, such as South China (Guangzhou), East China (Shanghai Finance), and North China (Beijing)
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Chinese name of region, such as South China (Guangzhou), East China (Shanghai Finance), and North China (Beijing)
                     * @param _regionName Chinese name of region, such as South China (Guangzhou), East China (Shanghai Finance), and North China (Beijing)
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
                     * 获取Region ID
                     * @return RegionId Region ID
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置Region ID
                     * @param _regionId Region ID
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Region code, such as gz, sh, and bj
                     * @return RegionCode Region code, such as gz, sh, and bj
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置Region code, such as gz, sh, and bj
                     * @param _regionCode Region code, such as gz, sh, and bj
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取English name of the region
                     * @return RegionNameEn English name of the region
                     * 
                     */
                    std::string GetRegionNameEn() const;

                    /**
                     * 设置English name of the region
                     * @param _regionNameEn English name of the region
                     * 
                     */
                    void SetRegionNameEn(const std::string& _regionNameEn);

                    /**
                     * 判断参数 RegionNameEn 是否已赋值
                     * @return RegionNameEn 是否已赋值
                     * 
                     */
                    bool RegionNameEnHasBeenSet() const;

                private:

                    /**
                     * Region identifiers, such as ap-guangzhou, ap-shanghai, and ap-beijing
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Chinese name of region, such as South China (Guangzhou), East China (Shanghai Finance), and North China (Beijing)
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Region ID
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Region code, such as gz, sh, and bj
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * English name of the region
                     */
                    std::string m_regionNameEn;
                    bool m_regionNameEnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCREENREGIONINFO_H_
