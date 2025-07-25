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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINEDEFENSECNTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINEDEFENSECNTRESPONSE_H_

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
                * DescribeMachineDefenseCnt response structure.
                */
                class DescribeMachineDefenseCntResponse : public AbstractModel
                {
                public:
                    DescribeMachineDefenseCntResponse();
                    ~DescribeMachineDefenseCntResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Attack detection statistics
                     * @return AttackLogs Attack detection statistics
                     * 
                     */
                    uint64_t GetAttackLogs() const;

                    /**
                     * 判断参数 AttackLogs 是否已赋值
                     * @return AttackLogs 是否已赋值
                     * 
                     */
                    bool AttackLogsHasBeenSet() const;

                    /**
                     * 获取Core file monitoring statistics
                     * @return FileTamper Core file monitoring statistics
                     * 
                     */
                    uint64_t GetFileTamper() const;

                    /**
                     * 判断参数 FileTamper 是否已赋值
                     * @return FileTamper 是否已赋值
                     * 
                     */
                    bool FileTamperHasBeenSet() const;

                private:

                    /**
                     * Attack detection statistics
                     */
                    uint64_t m_attackLogs;
                    bool m_attackLogsHasBeenSet;

                    /**
                     * Core file monitoring statistics
                     */
                    uint64_t m_fileTamper;
                    bool m_fileTamperHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINEDEFENSECNTRESPONSE_H_
