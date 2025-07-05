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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCGEOIPBLOCKCONFIG_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCGEOIPBLOCKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Anti-DDoS regional blocking configuration
                */
                class CcGeoIPBlockConfig : public AbstractModel
                {
                public:
                    CcGeoIPBlockConfig();
                    ~CcGeoIPBlockConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region type. Valid values:
`oversea`: Outside the Chinese mainland.
`china`: The Chinese mainland.
`customized`: User-specified region.
]
                     * @return RegionType Region type. Valid values:
`oversea`: Outside the Chinese mainland.
`china`: The Chinese mainland.
`customized`: User-specified region.
]
                     * 
                     */
                    std::string GetRegionType() const;

                    /**
                     * 设置Region type. Valid values:
`oversea`: Outside the Chinese mainland.
`china`: The Chinese mainland.
`customized`: User-specified region.
]
                     * @param _regionType Region type. Valid values:
`oversea`: Outside the Chinese mainland.
`china`: The Chinese mainland.
`customized`: User-specified region.
]
                     * 
                     */
                    void SetRegionType(const std::string& _regionType);

                    /**
                     * 判断参数 RegionType 是否已赋值
                     * @return RegionType 是否已赋值
                     * 
                     */
                    bool RegionTypeHasBeenSet() const;

                    /**
                     * 获取Blocking action. Valid values:
`drop`: Block the request.
`alg`: Verify the request via CAPTCHA.
]
                     * @return Action Blocking action. Valid values:
`drop`: Block the request.
`alg`: Verify the request via CAPTCHA.
]
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Blocking action. Valid values:
`drop`: Block the request.
`alg`: Verify the request via CAPTCHA.
]
                     * @param _action Blocking action. Valid values:
`drop`: Block the request.
`alg`: Verify the request via CAPTCHA.
]
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Configuration ID, which is generated after a configuration is added. This field is only required to modify or delete a configuration.
                     * @return Id Configuration ID, which is generated after a configuration is added. This field is only required to modify or delete a configuration.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Configuration ID, which is generated after a configuration is added. This field is only required to modify or delete a configuration.
                     * @param _id Configuration ID, which is generated after a configuration is added. This field is only required to modify or delete a configuration.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取This field is required when RegionType is `customized`; it can be left empty when RegionType is `china` or `oversea`.
                     * @return AreaList This field is required when RegionType is `customized`; it can be left empty when RegionType is `china` or `oversea`.
                     * 
                     */
                    std::vector<int64_t> GetAreaList() const;

                    /**
                     * 设置This field is required when RegionType is `customized`; it can be left empty when RegionType is `china` or `oversea`.
                     * @param _areaList This field is required when RegionType is `customized`; it can be left empty when RegionType is `china` or `oversea`.
                     * 
                     */
                    void SetAreaList(const std::vector<int64_t>& _areaList);

                    /**
                     * 判断参数 AreaList 是否已赋值
                     * @return AreaList 是否已赋值
                     * 
                     */
                    bool AreaListHasBeenSet() const;

                private:

                    /**
                     * Region type. Valid values:
`oversea`: Outside the Chinese mainland.
`china`: The Chinese mainland.
`customized`: User-specified region.
]
                     */
                    std::string m_regionType;
                    bool m_regionTypeHasBeenSet;

                    /**
                     * Blocking action. Valid values:
`drop`: Block the request.
`alg`: Verify the request via CAPTCHA.
]
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Configuration ID, which is generated after a configuration is added. This field is only required to modify or delete a configuration.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * This field is required when RegionType is `customized`; it can be left empty when RegionType is `china` or `oversea`.
                     */
                    std::vector<int64_t> m_areaList;
                    bool m_areaListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCGEOIPBLOCKCONFIG_H_
