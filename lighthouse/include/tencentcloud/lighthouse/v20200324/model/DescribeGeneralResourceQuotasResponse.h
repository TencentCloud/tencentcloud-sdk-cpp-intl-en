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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEGENERALRESOURCEQUOTASRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEGENERALRESOURCEQUOTASRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/GeneralResourceQuota.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeGeneralResourceQuotas response structure.
                */
                class DescribeGeneralResourceQuotasResponse : public AbstractModel
                {
                public:
                    DescribeGeneralResourceQuotasResponse();
                    ~DescribeGeneralResourceQuotasResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of general resource quota details.
                     * @return GeneralResourceQuotaSet List of general resource quota details.
                     * 
                     */
                    std::vector<GeneralResourceQuota> GetGeneralResourceQuotaSet() const;

                    /**
                     * 判断参数 GeneralResourceQuotaSet 是否已赋值
                     * @return GeneralResourceQuotaSet 是否已赋值
                     * 
                     */
                    bool GeneralResourceQuotaSetHasBeenSet() const;

                private:

                    /**
                     * List of general resource quota details.
                     */
                    std::vector<GeneralResourceQuota> m_generalResourceQuotaSet;
                    bool m_generalResourceQuotaSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEGENERALRESOURCEQUOTASRESPONSE_H_
