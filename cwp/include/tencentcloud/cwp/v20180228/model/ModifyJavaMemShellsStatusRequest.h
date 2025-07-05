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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYJAVAMEMSHELLSSTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYJAVAMEMSHELLSSTATUSREQUEST_H_

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
                * ModifyJavaMemShellsStatus request structure.
                */
                class ModifyJavaMemShellsStatusRequest : public AbstractModel
                {
                public:
                    ModifyJavaMemShellsStatusRequest();
                    ~ModifyJavaMemShellsStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Target Processing Status: 0 - Pending, 1 - Allowlisted, 2 - Deleted, 3 - Ignored, 4 - Manually Processed
                     * @return Status Target Processing Status: 0 - Pending, 1 - Allowlisted, 2 - Deleted, 3 - Ignored, 4 - Manually Processed
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Target Processing Status: 0 - Pending, 1 - Allowlisted, 2 - Deleted, 3 - Ignored, 4 - Manually Processed
                     * @param _status Target Processing Status: 0 - Pending, 1 - Allowlisted, 2 - Deleted, 3 - Ignored, 4 - Manually Processed
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
                     * 获取Event ID Array
                     * @return Ids Event ID Array
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置Event ID Array
                     * @param _ids Event ID Array
                     * 
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                private:

                    /**
                     * Target Processing Status: 0 - Pending, 1 - Allowlisted, 2 - Deleted, 3 - Ignored, 4 - Manually Processed
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Event ID Array
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYJAVAMEMSHELLSSTATUSREQUEST_H_
