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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RUNAPPLICATIONRESPONSE_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RUNAPPLICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * RunApplication response structure.
                */
                class RunApplicationResponse : public AbstractModel
                {
                public:
                    RunApplicationResponse();
                    ~RunApplicationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Run group ID
                     * @return RunGroupId Run group ID
                     * 
                     */
                    std::string GetRunGroupId() const;

                    /**
                     * 判断参数 RunGroupId 是否已赋值
                     * @return RunGroupId 是否已赋值
                     * 
                     */
                    bool RunGroupIdHasBeenSet() const;

                private:

                    /**
                     * Run group ID
                     */
                    std::string m_runGroupId;
                    bool m_runGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RUNAPPLICATIONRESPONSE_H_
