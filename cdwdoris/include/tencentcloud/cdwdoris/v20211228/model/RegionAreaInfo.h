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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_REGIONAREAINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_REGIONAREAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/RegionInfo.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Description of the region categories for availability zones
                */
                class RegionAreaInfo : public AbstractModel
                {
                public:
                    RegionAreaInfo();
                    ~RegionAreaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region category information, such as south_china, east_china, etc.
                     * @return Name Region category information, such as south_china, east_china, etc.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Region category information, such as south_china, east_china, etc.
                     * @param _name Region category information, such as south_china, east_china, etc.
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
                     * 获取Description of the corresponding Name, such as South China, East China, etc.
                     * @return Desc Description of the corresponding Name, such as South China, East China, etc.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Description of the corresponding Name, such as South China, East China, etc.
                     * @param _desc Description of the corresponding Name, such as South China, East China, etc.
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
                     * 获取Specific region list 1
                     * @return Regions Specific region list 1
                     * 
                     */
                    std::vector<RegionInfo> GetRegions() const;

                    /**
                     * 设置Specific region list 1
                     * @param _regions Specific region list 1
                     * 
                     */
                    void SetRegions(const std::vector<RegionInfo>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                private:

                    /**
                     * Region category information, such as south_china, east_china, etc.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description of the corresponding Name, such as South China, East China, etc.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Specific region list 1
                     */
                    std::vector<RegionInfo> m_regions;
                    bool m_regionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_REGIONAREAINFO_H_
