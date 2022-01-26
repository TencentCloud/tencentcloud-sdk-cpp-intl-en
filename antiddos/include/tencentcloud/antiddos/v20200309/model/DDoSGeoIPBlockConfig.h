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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DDOSGEOIPBLOCKCONFIG_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DDOSGEOIPBLOCKCONFIG_H_

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
                * Anti-DDoS region blocking configuration
                */
                class DDoSGeoIPBlockConfig : public AbstractModel
                {
                public:
                    DDoSGeoIPBlockConfig();
                    ~DDoSGeoIPBlockConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region type. Valid values:
oversea: outside the Chinese mainland
`china`: the Chinese mainland
`customized`: custom region
]
                     * @return RegionType Region type. Valid values:
oversea: outside the Chinese mainland
`china`: the Chinese mainland
`customized`: custom region
]
                     */
                    std::string GetRegionType() const;

                    /**
                     * 设置Region type. Valid values:
oversea: outside the Chinese mainland
`china`: the Chinese mainland
`customized`: custom region
]
                     * @param RegionType Region type. Valid values:
oversea: outside the Chinese mainland
`china`: the Chinese mainland
`customized`: custom region
]
                     */
                    void SetRegionType(const std::string& _regionType);

                    /**
                     * 判断参数 RegionType 是否已赋值
                     * @return RegionType 是否已赋值
                     */
                    bool RegionTypeHasBeenSet() const;

                    /**
                     * 获取Blocking action. Valid values:
`drop`: the request is blocked.
`trans`: the request is allowed.
]
                     * @return Action Blocking action. Valid values:
`drop`: the request is blocked.
`trans`: the request is allowed.
]
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Blocking action. Valid values:
`drop`: the request is blocked.
`trans`: the request is allowed.
]
                     * @param Action Blocking action. Valid values:
`drop`: the request is blocked.
`trans`: the request is allowed.
]
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Configuration ID, which is generated after a configuration is added. This field is only required to modify or delete a configuration.
                     * @return Id Configuration ID, which is generated after a configuration is added. This field is only required to modify or delete a configuration.
                     */
                    std::string GetId() const;

                    /**
                     * 设置Configuration ID, which is generated after a configuration is added. This field is only required to modify or delete a configuration.
                     * @param Id Configuration ID, which is generated after a configuration is added. This field is only required to modify or delete a configuration.
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取When `RegionType = customized`, AreaList is required and contains up to 128 areas.
                     * @return AreaList When `RegionType = customized`, AreaList is required and contains up to 128 areas.
                     */
                    std::vector<int64_t> GetAreaList() const;

                    /**
                     * 设置When `RegionType = customized`, AreaList is required and contains up to 128 areas.
                     * @param AreaList When `RegionType = customized`, AreaList is required and contains up to 128 areas.
                     */
                    void SetAreaList(const std::vector<int64_t>& _areaList);

                    /**
                     * 判断参数 AreaList 是否已赋值
                     * @return AreaList 是否已赋值
                     */
                    bool AreaListHasBeenSet() const;

                private:

                    /**
                     * Region type. Valid values:
oversea: outside the Chinese mainland
`china`: the Chinese mainland
`customized`: custom region
]
                     */
                    std::string m_regionType;
                    bool m_regionTypeHasBeenSet;

                    /**
                     * Blocking action. Valid values:
`drop`: the request is blocked.
`trans`: the request is allowed.
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
                     * When `RegionType = customized`, AreaList is required and contains up to 128 areas.
                     */
                    std::vector<int64_t> m_areaList;
                    bool m_areaListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DDOSGEOIPBLOCKCONFIG_H_
