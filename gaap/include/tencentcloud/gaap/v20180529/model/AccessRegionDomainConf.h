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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_ACCESSREGIONDOMAINCONF_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_ACCESSREGIONDOMAINCONF_H_

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
                * Domain name nearest access configuration
                */
                class AccessRegionDomainConf : public AbstractModel
                {
                public:
                    AccessRegionDomainConf();
                    ~AccessRegionDomainConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region ID.
                     * @return RegionId Region ID.
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Region ID.
                     * @param RegionId Region ID.
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Region/country code for the nearest access, which can be obtained via the DescribeCountryAreaMapping API.
                     * @return NationCountryInnerList Region/country code for the nearest access, which can be obtained via the DescribeCountryAreaMapping API.
                     */
                    std::vector<std::string> GetNationCountryInnerList() const;

                    /**
                     * 设置Region/country code for the nearest access, which can be obtained via the DescribeCountryAreaMapping API.
                     * @param NationCountryInnerList Region/country code for the nearest access, which can be obtained via the DescribeCountryAreaMapping API.
                     */
                    void SetNationCountryInnerList(const std::vector<std::string>& _nationCountryInnerList);

                    /**
                     * 判断参数 NationCountryInnerList 是否已赋值
                     * @return NationCountryInnerList 是否已赋值
                     */
                    bool NationCountryInnerListHasBeenSet() const;

                private:

                    /**
                     * Region ID.
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Region/country code for the nearest access, which can be obtained via the DescribeCountryAreaMapping API.
                     */
                    std::vector<std::string> m_nationCountryInnerList;
                    bool m_nationCountryInnerListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_ACCESSREGIONDOMAINCONF_H_
