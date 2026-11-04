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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_PLATFORMUSAGESUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_PLATFORMUSAGESUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ResourceConsumption.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Aggregated details of platform resource usage (exclusive to PLATFORM domain)
                */
                class PlatformUsageSummary : public AbstractModel
                {
                public:
                    PlatformUsageSummary();
                    ~PlatformUsageSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>PLATFORM domain consumption measurement list (authoritative field): list each measurement type by unit + label, where label is the PlatformBizType enumeration name string; typical examples include unit=TIMES + label=PLATFORM_BIZ_TYPE_SECURITY_AUDIT/WEB_SEARCH/OPEN_CLAW/APP_INVOKE, unit=ITEM + label=PLATFORM_BIZ_TYPE_LONG_TERM_MEMORY</p>
                     * @return ResourceConsumptionList <p>PLATFORM domain consumption measurement list (authoritative field): list each measurement type by unit + label, where label is the PlatformBizType enumeration name string; typical examples include unit=TIMES + label=PLATFORM_BIZ_TYPE_SECURITY_AUDIT/WEB_SEARCH/OPEN_CLAW/APP_INVOKE, unit=ITEM + label=PLATFORM_BIZ_TYPE_LONG_TERM_MEMORY</p>
                     * 
                     */
                    std::vector<ResourceConsumption> GetResourceConsumptionList() const;

                    /**
                     * 设置<p>PLATFORM domain consumption measurement list (authoritative field): list each measurement type by unit + label, where label is the PlatformBizType enumeration name string; typical examples include unit=TIMES + label=PLATFORM_BIZ_TYPE_SECURITY_AUDIT/WEB_SEARCH/OPEN_CLAW/APP_INVOKE, unit=ITEM + label=PLATFORM_BIZ_TYPE_LONG_TERM_MEMORY</p>
                     * @param _resourceConsumptionList <p>PLATFORM domain consumption measurement list (authoritative field): list each measurement type by unit + label, where label is the PlatformBizType enumeration name string; typical examples include unit=TIMES + label=PLATFORM_BIZ_TYPE_SECURITY_AUDIT/WEB_SEARCH/OPEN_CLAW/APP_INVOKE, unit=ITEM + label=PLATFORM_BIZ_TYPE_LONG_TERM_MEMORY</p>
                     * 
                     */
                    void SetResourceConsumptionList(const std::vector<ResourceConsumption>& _resourceConsumptionList);

                    /**
                     * 判断参数 ResourceConsumptionList 是否已赋值
                     * @return ResourceConsumptionList 是否已赋值
                     * 
                     */
                    bool ResourceConsumptionListHasBeenSet() const;

                private:

                    /**
                     * <p>PLATFORM domain consumption measurement list (authoritative field): list each measurement type by unit + label, where label is the PlatformBizType enumeration name string; typical examples include unit=TIMES + label=PLATFORM_BIZ_TYPE_SECURITY_AUDIT/WEB_SEARCH/OPEN_CLAW/APP_INVOKE, unit=ITEM + label=PLATFORM_BIZ_TYPE_LONG_TERM_MEMORY</p>
                     */
                    std::vector<ResourceConsumption> m_resourceConsumptionList;
                    bool m_resourceConsumptionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PLATFORMUSAGESUMMARY_H_
