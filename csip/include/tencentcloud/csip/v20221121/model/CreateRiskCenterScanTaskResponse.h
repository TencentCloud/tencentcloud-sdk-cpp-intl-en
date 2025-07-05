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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATERISKCENTERSCANTASKRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATERISKCENTERSCANTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateRiskCenterScanTask response structure.
                */
                class CreateRiskCenterScanTaskResponse : public AbstractModel
                {
                public:
                    CreateRiskCenterScanTaskResponse();
                    ~CreateRiskCenterScanTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取`0`: Task created successfully. `-1`: There are unauthorized assets. 
                     * @return Status `0`: Task created successfully. `-1`: There are unauthorized assets. 
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取List of unauthorized assets
                     * @return UnAuthAsset List of unauthorized assets
                     * 
                     */
                    std::vector<std::string> GetUnAuthAsset() const;

                    /**
                     * 判断参数 UnAuthAsset 是否已赋值
                     * @return UnAuthAsset 是否已赋值
                     * 
                     */
                    bool UnAuthAssetHasBeenSet() const;

                private:

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * `0`: Task created successfully. `-1`: There are unauthorized assets. 
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * List of unauthorized assets
                     */
                    std::vector<std::string> m_unAuthAsset;
                    bool m_unAuthAssetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATERISKCENTERSCANTASKRESPONSE_H_
