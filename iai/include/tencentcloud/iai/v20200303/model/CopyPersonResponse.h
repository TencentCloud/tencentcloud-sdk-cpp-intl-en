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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_COPYPERSONRESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_COPYPERSONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * CopyPerson response structure.
                */
                class CopyPersonResponse : public AbstractModel
                {
                public:
                    CopyPersonResponse();
                    ~CopyPersonResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of groups successfully added to.
                     * @return SucGroupNum Number of groups successfully added to.
                     * 
                     */
                    uint64_t GetSucGroupNum() const;

                    /**
                     * 判断参数 SucGroupNum 是否已赋值
                     * @return SucGroupNum 是否已赋值
                     * 
                     */
                    bool SucGroupNumHasBeenSet() const;

                    /**
                     * 获取List of groups successfully added to.
                     * @return SucGroupIds List of groups successfully added to.
                     * 
                     */
                    std::vector<std::string> GetSucGroupIds() const;

                    /**
                     * 判断参数 SucGroupIds 是否已赋值
                     * @return SucGroupIds 是否已赋值
                     * 
                     */
                    bool SucGroupIdsHasBeenSet() const;

                private:

                    /**
                     * Number of groups successfully added to.
                     */
                    uint64_t m_sucGroupNum;
                    bool m_sucGroupNumHasBeenSet;

                    /**
                     * List of groups successfully added to.
                     */
                    std::vector<std::string> m_sucGroupIds;
                    bool m_sucGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_COPYPERSONRESPONSE_H_
