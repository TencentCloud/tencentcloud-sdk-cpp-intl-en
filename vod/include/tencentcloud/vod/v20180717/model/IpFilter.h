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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IPFILTER_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IPFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/IpFilterPathRule.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 
                */
                class IpFilter : public AbstractModel
                {
                public:
                    IpFilter();
                    ~IpFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Switch 
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置
                     * @param _switch 
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取
                     * @return FilterType 
                     * 
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置
                     * @param _filterType 
                     * 
                     */
                    void SetFilterType(const std::string& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     * 
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Filters 
                     * 
                     */
                    std::vector<std::string> GetFilters() const;

                    /**
                     * 设置
                     * @param _filters 
                     * 
                     */
                    void SetFilters(const std::vector<std::string>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取
                     * @return FilterRules 
                     * 
                     */
                    std::vector<IpFilterPathRule> GetFilterRules() const;

                    /**
                     * 设置
                     * @param _filterRules 
                     * 
                     */
                    void SetFilterRules(const std::vector<IpFilterPathRule>& _filterRules);

                    /**
                     * 判断参数 FilterRules 是否已赋值
                     * @return FilterRules 是否已赋值
                     * 
                     */
                    bool FilterRulesHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<IpFilterPathRule> m_filterRules;
                    bool m_filterRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IPFILTER_H_
