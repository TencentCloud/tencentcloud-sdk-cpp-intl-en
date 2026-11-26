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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SITEFAILOVERPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SITEFAILOVERPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SiteFailover.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Origin server failover configuration parameters.
                */
                class SiteFailoverParameters : public AbstractModel
                {
                public:
                    SiteFailoverParameters();
                    ~SiteFailoverParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Status code for origin fault migration condition. Origin migration is executed as specified in SiteFailoverParams only when the response status code returned by the origin hits the value of this field. The parameter value is one of 4xx and 5xx.
                     * @return SiteFailoverStatusCodes Status code for origin fault migration condition. Origin migration is executed as specified in SiteFailoverParams only when the response status code returned by the origin hits the value of this field. The parameter value is one of 4xx and 5xx.
                     * 
                     */
                    std::vector<int64_t> GetSiteFailoverStatusCodes() const;

                    /**
                     * 设置Status code for origin fault migration condition. Origin migration is executed as specified in SiteFailoverParams only when the response status code returned by the origin hits the value of this field. The parameter value is one of 4xx and 5xx.
                     * @param _siteFailoverStatusCodes Status code for origin fault migration condition. Origin migration is executed as specified in SiteFailoverParams only when the response status code returned by the origin hits the value of this field. The parameter value is one of 4xx and 5xx.
                     * 
                     */
                    void SetSiteFailoverStatusCodes(const std::vector<int64_t>& _siteFailoverStatusCodes);

                    /**
                     * 判断参数 SiteFailoverStatusCodes 是否已赋值
                     * @return SiteFailoverStatusCodes 是否已赋值
                     * 
                     */
                    bool SiteFailoverStatusCodesHasBeenSet() const;

                    /**
                     * 获取List of origin server failover configuration parameters. Minimum length: 1. Maximum length: 2.
                     * @return SiteFailoverParams List of origin server failover configuration parameters. Minimum length: 1. Maximum length: 2.
                     * 
                     */
                    std::vector<SiteFailover> GetSiteFailoverParams() const;

                    /**
                     * 设置List of origin server failover configuration parameters. Minimum length: 1. Maximum length: 2.
                     * @param _siteFailoverParams List of origin server failover configuration parameters. Minimum length: 1. Maximum length: 2.
                     * 
                     */
                    void SetSiteFailoverParams(const std::vector<SiteFailover>& _siteFailoverParams);

                    /**
                     * 判断参数 SiteFailoverParams 是否已赋值
                     * @return SiteFailoverParams 是否已赋值
                     * 
                     */
                    bool SiteFailoverParamsHasBeenSet() const;

                private:

                    /**
                     * Status code for origin fault migration condition. Origin migration is executed as specified in SiteFailoverParams only when the response status code returned by the origin hits the value of this field. The parameter value is one of 4xx and 5xx.
                     */
                    std::vector<int64_t> m_siteFailoverStatusCodes;
                    bool m_siteFailoverStatusCodesHasBeenSet;

                    /**
                     * List of origin server failover configuration parameters. Minimum length: 1. Maximum length: 2.
                     */
                    std::vector<SiteFailover> m_siteFailoverParams;
                    bool m_siteFailoverParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SITEFAILOVERPARAMETERS_H_
