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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SETBASHEVENTSSTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SETBASHEVENTSSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * SetBashEventsStatus request structure.
                */
                class SetBashEventsStatusRequest : public AbstractModel
                {
                public:
                    SetBashEventsStatusRequest();
                    ~SetBashEventsStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID array (The maximum number of IDs is 100)
                     * @return Ids ID array (The maximum number of IDs is 100)
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置ID array (The maximum number of IDs is 100)
                     * @param _ids ID array (The maximum number of IDs is 100)
                     * 
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取New status (0 - pending; 1 - high-risk; 2 - normal)
                     * @return Status New status (0 - pending; 1 - high-risk; 2 - normal)
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置New status (0 - pending; 1 - high-risk; 2 - normal)
                     * @param _status New status (0 - pending; 1 - high-risk; 2 - normal)
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * ID array (The maximum number of IDs is 100)
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * New status (0 - pending; 1 - high-risk; 2 - normal)
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SETBASHEVENTSSTATUSREQUEST_H_
