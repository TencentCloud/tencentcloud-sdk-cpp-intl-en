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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATEBANWHITELISTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATEBANWHITELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/DuplicateHosts.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateBanWhiteList response structure.
                */
                class CreateBanWhiteListResponse : public AbstractModel
                {
                public:
                    CreateBanWhiteListResponse();
                    ~CreateBanWhiteListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether a global rule
                     * @return IsGlobal Whether a global rule
                     * 
                     */
                    bool GetIsGlobal() const;

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取Whether the addition of a rule would result in a duplicate
                     * @return IsDuplicate Whether the addition of a rule would result in a duplicate
                     * 
                     */
                    bool GetIsDuplicate() const;

                    /**
                     * 判断参数 IsDuplicate 是否已赋值
                     * @return IsDuplicate 是否已赋值
                     * 
                     */
                    bool IsDuplicateHasBeenSet() const;

                    /**
                     * 获取Information on duplicate machines
                     * @return DuplicateHosts Information on duplicate machines
                     * 
                     */
                    std::vector<DuplicateHosts> GetDuplicateHosts() const;

                    /**
                     * 判断参数 DuplicateHosts 是否已赋值
                     * @return DuplicateHosts 是否已赋值
                     * 
                     */
                    bool DuplicateHostsHasBeenSet() const;

                private:

                    /**
                     * Whether a global rule
                     */
                    bool m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * Whether the addition of a rule would result in a duplicate
                     */
                    bool m_isDuplicate;
                    bool m_isDuplicateHasBeenSet;

                    /**
                     * Information on duplicate machines
                     */
                    std::vector<DuplicateHosts> m_duplicateHosts;
                    bool m_duplicateHostsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATEBANWHITELISTRESPONSE_H_
