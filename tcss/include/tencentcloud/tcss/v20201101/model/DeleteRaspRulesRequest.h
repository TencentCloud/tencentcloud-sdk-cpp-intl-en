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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DELETERASPRULESREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DELETERASPRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DeleteRaspRules request structure.
                */
                class DeleteRaspRulesRequest : public AbstractModel
                {
                public:
                    DeleteRaspRulesRequest();
                    ~DeleteRaspRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array containing IDs of rules to be deleted (maximum value: 100).
                     * @return IDs Array containing IDs of rules to be deleted (maximum value: 100).
                     * 
                     */
                    std::vector<uint64_t> GetIDs() const;

                    /**
                     * 设置Array containing IDs of rules to be deleted (maximum value: 100).
                     * @param _iDs Array containing IDs of rules to be deleted (maximum value: 100).
                     * 
                     */
                    void SetIDs(const std::vector<uint64_t>& _iDs);

                    /**
                     * 判断参数 IDs 是否已赋值
                     * @return IDs 是否已赋值
                     * 
                     */
                    bool IDsHasBeenSet() const;

                private:

                    /**
                     * Array containing IDs of rules to be deleted (maximum value: 100).
                     */
                    std::vector<uint64_t> m_iDs;
                    bool m_iDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DELETERASPRULESREQUEST_H_
