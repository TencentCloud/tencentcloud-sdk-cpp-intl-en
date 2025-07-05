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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBECCLEVELPOLICYRESPONSE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBECCLEVELPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeCCLevelPolicy response structure.
                */
                class DescribeCCLevelPolicyResponse : public AbstractModel
                {
                public:
                    DescribeCCLevelPolicyResponse();
                    ~DescribeCCLevelPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取CC protection level. Vaules: `loose`, `strict`, `normal`, `emergency`, `sup_loose` (super loose), `default` (used when the frequency limit is not configured) and `customized`
                     * @return Level CC protection level. Vaules: `loose`, `strict`, `normal`, `emergency`, `sup_loose` (super loose), `default` (used when the frequency limit is not configured) and `customized`
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                private:

                    /**
                     * CC protection level. Vaules: `loose`, `strict`, `normal`, `emergency`, `sup_loose` (super loose), `default` (used when the frequency limit is not configured) and `customized`
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBECCLEVELPOLICYRESPONSE_H_
