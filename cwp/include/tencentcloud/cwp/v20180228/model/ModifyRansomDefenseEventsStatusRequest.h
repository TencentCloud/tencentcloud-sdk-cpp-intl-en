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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRANSOMDEFENSEEVENTSSTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRANSOMDEFENSEEVENTSSTATUSREQUEST_H_

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
                * ModifyRansomDefenseEventsStatus request structure.
                */
                class ModifyRansomDefenseEventsStatusRequest : public AbstractModel
                {
                public:
                    ModifyRansomDefenseEventsStatusRequest();
                    ~ModifyRansomDefenseEventsStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取An array of event IDs that need to be modified, and batch operation is supported.
                     * @return Ids An array of event IDs that need to be modified, and batch operation is supported.
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置An array of event IDs that need to be modified, and batch operation is supported.
                     * @param _ids An array of event IDs that need to be modified, and batch operation is supported.
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
                     * 获取Operations. 0: Pending; 1: Processed; 2: Trusted; 9: Delete Record
                     * @return Status Operations. 0: Pending; 1: Processed; 2: Trusted; 9: Delete Record
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Operations. 0: Pending; 1: Processed; 2: Trusted; 9: Delete Record
                     * @param _status Operations. 0: Pending; 1: Processed; 2: Trusted; 9: Delete Record
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether to update all events with the same path.
                     * @return All Whether to update all events with the same path.
                     * 
                     */
                    bool GetAll() const;

                    /**
                     * 设置Whether to update all events with the same path.
                     * @param _all Whether to update all events with the same path.
                     * 
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * 
                     */
                    bool AllHasBeenSet() const;

                private:

                    /**
                     * An array of event IDs that need to be modified, and batch operation is supported.
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * Operations. 0: Pending; 1: Processed; 2: Trusted; 9: Delete Record
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether to update all events with the same path.
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRANSOMDEFENSEEVENTSSTATUSREQUEST_H_
