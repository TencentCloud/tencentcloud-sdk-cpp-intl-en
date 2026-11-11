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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DELETELOGINWHITELEARNEDRRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DELETELOGINWHITELEARNEDRRESPONSE_H_

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
                * DeleteLoginWhiteLearnEDR response structure.
                */
                class DeleteLoginWhiteLearnEDRResponse : public AbstractModel
                {
                public:
                    DeleteLoginWhiteLearnEDRResponse();
                    ~DeleteLoginWhiteLearnEDRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Number of deleted host record rows (a rule group may contain multiple rows, which is different from the custom allowlist API that uses the number of rules for statistics)</p>
                     * @return DeletedCount <p>Number of deleted host record rows (a rule group may contain multiple rows, which is different from the custom allowlist API that uses the number of rules for statistics)</p>
                     * 
                     */
                    int64_t GetDeletedCount() const;

                    /**
                     * 判断参数 DeletedCount 是否已赋值
                     * @return DeletedCount 是否已赋值
                     * 
                     */
                    bool DeletedCountHasBeenSet() const;

                    /**
                     * 获取<p>List of account AppIds that failed to delete; an error is returned only when all failed</p>
                     * @return FailedAppIds <p>List of account AppIds that failed to delete; an error is returned only when all failed</p>
                     * 
                     */
                    std::vector<uint64_t> GetFailedAppIds() const;

                    /**
                     * 判断参数 FailedAppIds 是否已赋值
                     * @return FailedAppIds 是否已赋值
                     * 
                     */
                    bool FailedAppIdsHasBeenSet() const;

                private:

                    /**
                     * <p>Number of deleted host record rows (a rule group may contain multiple rows, which is different from the custom allowlist API that uses the number of rules for statistics)</p>
                     */
                    int64_t m_deletedCount;
                    bool m_deletedCountHasBeenSet;

                    /**
                     * <p>List of account AppIds that failed to delete; an error is returned only when all failed</p>
                     */
                    std::vector<uint64_t> m_failedAppIds;
                    bool m_failedAppIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DELETELOGINWHITELEARNEDRRESPONSE_H_
