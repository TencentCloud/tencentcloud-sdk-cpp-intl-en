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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBENFSSCANCONFRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBENFSSCANCONFRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeNFSScanConf response structure.
                */
                class DescribeNFSScanConfResponse : public AbstractModel
                {
                public:
                    DescribeNFSScanConfResponse();
                    ~DescribeNFSScanConfResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Whether NFS scan is enabled. 0: No, 1: Yes, 9: Not set. Same as 0, it is not enabled.</p>
                     * @return Enable <p>Whether NFS scan is enabled. 0: No, 1: Yes, 9: Not set. Same as 0, it is not enabled.</p>
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>Enable scope: 0 - selected host; 1 - all hosts</p>
                     * @return Scope <p>Enable scope: 0 - selected host; 1 - all hosts</p>
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>List of selected quuid configurations</p>
                     * @return IncludeQuuid <p>List of selected quuid configurations</p>
                     * 
                     */
                    std::vector<std::string> GetIncludeQuuid() const;

                    /**
                     * 判断参数 IncludeQuuid 是否已赋值
                     * @return IncludeQuuid 是否已赋值
                     * 
                     */
                    bool IncludeQuuidHasBeenSet() const;

                    /**
                     * 获取<p>List of configurations for deselecting quuid</p>
                     * @return ExcludeQuuid <p>List of configurations for deselecting quuid</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeQuuid() const;

                    /**
                     * 判断参数 ExcludeQuuid 是否已赋值
                     * @return ExcludeQuuid 是否已赋值
                     * 
                     */
                    bool ExcludeQuuidHasBeenSet() const;

                private:

                    /**
                     * <p>Whether NFS scan is enabled. 0: No, 1: Yes, 9: Not set. Same as 0, it is not enabled.</p>
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>Enable scope: 0 - selected host; 1 - all hosts</p>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>List of selected quuid configurations</p>
                     */
                    std::vector<std::string> m_includeQuuid;
                    bool m_includeQuuidHasBeenSet;

                    /**
                     * <p>List of configurations for deselecting quuid</p>
                     */
                    std::vector<std::string> m_excludeQuuid;
                    bool m_excludeQuuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBENFSSCANCONFRESPONSE_H_
