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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATEOWNNUMBERAPPLYRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATEOWNNUMBERAPPLYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * CreateOwnNumberApply response structure.
                */
                class CreateOwnNumberApplyResponse : public AbstractModel
                {
                public:
                    CreateOwnNumberApplyResponse();
                    ~CreateOwnNumberApplyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Approval id.
                     * @return ApplyId Approval id.
                     * 
                     */
                    uint64_t GetApplyId() const;

                    /**
                     * 判断参数 ApplyId 是否已赋值
                     * @return ApplyId 是否已赋值
                     * 
                     */
                    bool ApplyIdHasBeenSet() const;

                private:

                    /**
                     * Approval id.
                     */
                    uint64_t m_applyId;
                    bool m_applyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATEOWNNUMBERAPPLYRESPONSE_H_
