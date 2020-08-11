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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSATTACKIPREGIONMAPRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSATTACKIPREGIONMAPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/KeyValueRecord.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeDDoSAttackIPRegionMap response structure.
                */
                class DescribeDDoSAttackIPRegionMapResponse : public AbstractModel
                {
                public:
                    DescribeDDoSAttackIPRegionMapResponse();
                    ~DescribeDDoSAttackIPRegionMapResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Global region distribution data
                     * @return NationCount Global region distribution data
                     */
                    std::vector<KeyValueRecord> GetNationCount() const;

                    /**
                     * 判断参数 NationCount 是否已赋值
                     * @return NationCount 是否已赋值
                     */
                    bool NationCountHasBeenSet() const;

                    /**
                     * 获取Chinese province distribution data
                     * @return ProvinceCount Chinese province distribution data
                     */
                    std::vector<KeyValueRecord> GetProvinceCount() const;

                    /**
                     * 判断参数 ProvinceCount 是否已赋值
                     * @return ProvinceCount 是否已赋值
                     */
                    bool ProvinceCountHasBeenSet() const;

                private:

                    /**
                     * Global region distribution data
                     */
                    std::vector<KeyValueRecord> m_nationCount;
                    bool m_nationCountHasBeenSet;

                    /**
                     * Chinese province distribution data
                     */
                    std::vector<KeyValueRecord> m_provinceCount;
                    bool m_provinceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSATTACKIPREGIONMAPRESPONSE_H_