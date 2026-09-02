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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEMAINTASKITEMLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEMAINTASKITEMLISTREQUEST_H_

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
                * DescribeBaselineMainTaskItemList request structure.
                */
                class DescribeBaselineMainTaskItemListRequest : public AbstractModel
                {
                public:
                    DescribeBaselineMainTaskItemListRequest();
                    ~DescribeBaselineMainTaskItemListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Baseline scan main task ID.</p>
                     * @return MainTaskID <p>Baseline scan main task ID.</p>
                     * 
                     */
                    uint64_t GetMainTaskID() const;

                    /**
                     * 设置<p>Baseline scan main task ID.</p>
                     * @param _mainTaskID <p>Baseline scan main task ID.</p>
                     * 
                     */
                    void SetMainTaskID(const uint64_t& _mainTaskID);

                    /**
                     * 判断参数 MainTaskID 是否已赋值
                     * @return MainTaskID 是否已赋值
                     * 
                     */
                    bool MainTaskIDHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Number of records to be returned per page for paging query. Default value: 10. Maximum value: 100.</p>
                     * @return Limit <p>Number of records to be returned per page for paging query. Default value: 10. Maximum value: 100.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of records to be returned per page for paging query. Default value: 10. Maximum value: 100.</p>
                     * @param _limit <p>Number of records to be returned per page for paging query. Default value: 10. Maximum value: 100.</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>Paginated query offset. Default value: 0.</p>
                     * @return Offset <p>Paginated query offset. Default value: 0.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Paginated query offset. Default value: 0.</p>
                     * @param _offset <p>Paginated query offset. Default value: 0.</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>Baseline scan main task ID.</p>
                     */
                    uint64_t m_mainTaskID;
                    bool m_mainTaskIDHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Number of records to be returned per page for paging query. Default value: 10. Maximum value: 100.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Paginated query offset. Default value: 0.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEMAINTASKITEMLISTREQUEST_H_
