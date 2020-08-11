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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_IPFILTER_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_IPFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * IP blacklist/whitelist.
                */
                class IpFilter : public AbstractModel
                {
                public:
                    IpFilter();
                    ~IpFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP blacklist/whitelist switch. Valid values: on, off.
                     * @return Switch IP blacklist/whitelist switch. Valid values: on, off.
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置IP blacklist/whitelist switch. Valid values: on, off.
                     * @param Switch IP blacklist/whitelist switch. Valid values: on, off.
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取IP blacklist/whitelist type. Valid values: whitelist, blacklist.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FilterType IP blacklist/whitelist type. Valid values: whitelist, blacklist.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置IP blacklist/whitelist type. Valid values: whitelist, blacklist.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param FilterType IP blacklist/whitelist type. Valid values: whitelist, blacklist.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFilterType(const std::string& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取IP blacklist/whitelist list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Filters IP blacklist/whitelist list.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetFilters() const;

                    /**
                     * 设置IP blacklist/whitelist list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Filters IP blacklist/whitelist list.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFilters(const std::vector<std::string>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * IP blacklist/whitelist switch. Valid values: on, off.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * IP blacklist/whitelist type. Valid values: whitelist, blacklist.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * IP blacklist/whitelist list.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_IPFILTER_H_