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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DELETEMACHINETAGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DELETEMACHINETAGREQUEST_H_

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
                * DeleteMachineTag request structure.
                */
                class DeleteMachineTagRequest : public AbstractModel
                {
                public:
                    DeleteMachineTagRequest();
                    ~DeleteMachineTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Associated tag ID
                     * @return Rid Associated tag ID
                     * 
                     */
                    uint64_t GetRid() const;

                    /**
                     * 设置Associated tag ID
                     * @param _rid Associated tag ID
                     * 
                     */
                    void SetRid(const uint64_t& _rid);

                    /**
                     * 判断参数 Rid 是否已赋值
                     * @return Rid 是否已赋值
                     * 
                     */
                    bool RidHasBeenSet() const;

                private:

                    /**
                     * Associated tag ID
                     */
                    uint64_t m_rid;
                    bool m_ridHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DELETEMACHINETAGREQUEST_H_
