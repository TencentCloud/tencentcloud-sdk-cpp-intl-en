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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEROLLBACKTIMEVALIDITYRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEROLLBACKTIMEVALIDITYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeRollbackTimeValidity response structure.
                */
                class DescribeRollbackTimeValidityResponse : public AbstractModel
                {
                public:
                    DescribeRollbackTimeValidityResponse();
                    ~DescribeRollbackTimeValidityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Storage `poolID`
                     * @return PoolId Storage `poolID`
                     * 
                     */
                    uint64_t GetPoolId() const;

                    /**
                     * 判断参数 PoolId 是否已赋值
                     * @return PoolId 是否已赋值
                     * 
                     */
                    bool PoolIdHasBeenSet() const;

                    /**
                     * 获取Rollback task ID, which needs to be passed in when rolling back to this time point
                     * @return QueryId Rollback task ID, which needs to be passed in when rolling back to this time point
                     * 
                     */
                    uint64_t GetQueryId() const;

                    /**
                     * 判断参数 QueryId 是否已赋值
                     * @return QueryId 是否已赋值
                     * 
                     */
                    bool QueryIdHasBeenSet() const;

                    /**
                     * 获取Whether the time point is valid. pass: check passed; fail: check failed
                     * @return Status Whether the time point is valid. pass: check passed; fail: check failed
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Suggested time point. This value takes effect only if `Status` is `fail`
                     * @return SuggestTime Suggested time point. This value takes effect only if `Status` is `fail`
                     * 
                     */
                    std::string GetSuggestTime() const;

                    /**
                     * 判断参数 SuggestTime 是否已赋值
                     * @return SuggestTime 是否已赋值
                     * 
                     */
                    bool SuggestTimeHasBeenSet() const;

                private:

                    /**
                     * Storage `poolID`
                     */
                    uint64_t m_poolId;
                    bool m_poolIdHasBeenSet;

                    /**
                     * Rollback task ID, which needs to be passed in when rolling back to this time point
                     */
                    uint64_t m_queryId;
                    bool m_queryIdHasBeenSet;

                    /**
                     * Whether the time point is valid. pass: check passed; fail: check failed
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Suggested time point. This value takes effect only if `Status` is `fail`
                     */
                    std::string m_suggestTime;
                    bool m_suggestTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEROLLBACKTIMEVALIDITYRESPONSE_H_
