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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_NATFWFILTER_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_NATFWFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * The filter list displayed by the NAT firewall instance
                */
                class NatFwFilter : public AbstractModel
                {
                public:
                    NatFwFilter();
                    ~NatFwFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filter type, e.g., instance ID
                     * @return FilterType Filter type, e.g., instance ID
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置Filter type, e.g., instance ID
                     * @param FilterType Filter type, e.g., instance ID
                     */
                    void SetFilterType(const std::string& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取Filtered content, separated with ","
                     * @return FilterContent Filtered content, separated with ","
                     */
                    std::string GetFilterContent() const;

                    /**
                     * 设置Filtered content, separated with ","
                     * @param FilterContent Filtered content, separated with ","
                     */
                    void SetFilterContent(const std::string& _filterContent);

                    /**
                     * 判断参数 FilterContent 是否已赋值
                     * @return FilterContent 是否已赋值
                     */
                    bool FilterContentHasBeenSet() const;

                private:

                    /**
                     * Filter type, e.g., instance ID
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * Filtered content, separated with ","
                     */
                    std::string m_filterContent;
                    bool m_filterContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_NATFWFILTER_H_
