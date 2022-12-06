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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBESCANRESULTLISTREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBESCANRESULTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DescribeScanResultList request structure.
                */
                class DescribeScanResultListRequest : public AbstractModel
                {
                public:
                    DescribeScanResultListRequest();
                    ~DescribeScanResultListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID, which is obtained when you create an application in the [GME console](https://console.cloud.tencent.com/gamegme).
                     * @return BizId Application ID, which is obtained when you create an application in the [GME console](https://console.cloud.tencent.com/gamegme).
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置Application ID, which is obtained when you create an application in the [GME console](https://console.cloud.tencent.com/gamegme).
                     * @param BizId Application ID, which is obtained when you create an application in the [GME console](https://console.cloud.tencent.com/gamegme).
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取List of IDs of the tasks to be queried. Up to 100 entries can be added in the ID list.
                     * @return TaskIdList List of IDs of the tasks to be queried. Up to 100 entries can be added in the ID list.
                     */
                    std::vector<std::string> GetTaskIdList() const;

                    /**
                     * 设置List of IDs of the tasks to be queried. Up to 100 entries can be added in the ID list.
                     * @param TaskIdList List of IDs of the tasks to be queried. Up to 100 entries can be added in the ID list.
                     */
                    void SetTaskIdList(const std::vector<std::string>& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     */
                    bool TaskIdListHasBeenSet() const;

                    /**
                     * 获取Number of task results to be returned. Default value: 10. Maximum value: 500. This parameter will be ignored for large file tasks where all results will be returned.
                     * @return Limit Number of task results to be returned. Default value: 10. Maximum value: 500. This parameter will be ignored for large file tasks where all results will be returned.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of task results to be returned. Default value: 10. Maximum value: 500. This parameter will be ignored for large file tasks where all results will be returned.
                     * @param Limit Number of task results to be returned. Default value: 10. Maximum value: 500. This parameter will be ignored for large file tasks where all results will be returned.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Application ID, which is obtained when you create an application in the [GME console](https://console.cloud.tencent.com/gamegme).
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * List of IDs of the tasks to be queried. Up to 100 entries can be added in the ID list.
                     */
                    std::vector<std::string> m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * Number of task results to be returned. Default value: 10. Maximum value: 500. This parameter will be ignored for large file tasks where all results will be returned.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBESCANRESULTLISTREQUEST_H_
