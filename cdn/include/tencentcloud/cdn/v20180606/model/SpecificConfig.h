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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SPECIFICCONFIG_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SPECIFICCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/MainlandConfig.h>
#include <tencentcloud/cdn/v20180606/model/OverseaConfig.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Specific configuration for domain names inside and outside mainland China by regions.
                */
                class SpecificConfig : public AbstractModel
                {
                public:
                    SpecificConfig();
                    ~SpecificConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specific configuration for domain name inside mainland China.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Mainland Specific configuration for domain name inside mainland China.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    MainlandConfig GetMainland() const;

                    /**
                     * 设置Specific configuration for domain name inside mainland China.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _mainland Specific configuration for domain name inside mainland China.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMainland(const MainlandConfig& _mainland);

                    /**
                     * 判断参数 Mainland 是否已赋值
                     * @return Mainland 是否已赋值
                     * 
                     */
                    bool MainlandHasBeenSet() const;

                    /**
                     * 获取Specific configuration for domain name outside mainland China.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Overseas Specific configuration for domain name outside mainland China.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    OverseaConfig GetOverseas() const;

                    /**
                     * 设置Specific configuration for domain name outside mainland China.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _overseas Specific configuration for domain name outside mainland China.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOverseas(const OverseaConfig& _overseas);

                    /**
                     * 判断参数 Overseas 是否已赋值
                     * @return Overseas 是否已赋值
                     * 
                     */
                    bool OverseasHasBeenSet() const;

                private:

                    /**
                     * Specific configuration for domain name inside mainland China.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    MainlandConfig m_mainland;
                    bool m_mainlandHasBeenSet;

                    /**
                     * Specific configuration for domain name outside mainland China.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    OverseaConfig m_overseas;
                    bool m_overseasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SPECIFICCONFIG_H_
