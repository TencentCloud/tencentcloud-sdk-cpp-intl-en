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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEREPLAYTASKREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEREPLAYTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateReplayTask request structure.
                */
                class CreateReplayTaskRequest : public AbstractModel
                {
                public:
                    CreateReplayTaskRequest();
                    ~CreateReplayTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of replay task IDs.
                     * @return Ids List of replay task IDs.
                     * 
                     */
                    std::vector<std::string> GetIds() const;

                    /**
                     * 设置List of replay task IDs.
                     * @param _ids List of replay task IDs.
                     * 
                     */
                    void SetIds(const std::vector<std::string>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                private:

                    /**
                     * List of replay task IDs.
                     */
                    std::vector<std::string> m_ids;
                    bool m_idsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEREPLAYTASKREQUEST_H_
