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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEPORTDETECTLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEPORTDETECTLISTREQUEST_H_

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
                * DescribePortDetectList request structure.
                */
                class DescribePortDetectListRequest : public AbstractModel
                {
                public:
                    DescribePortDetectListRequest();
                    ~DescribePortDetectListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Boundary analysis ID
                     * @return ExposureID Boundary analysis ID
                     * 
                     */
                    uint64_t GetExposureID() const;

                    /**
                     * 设置Boundary analysis ID
                     * @param _exposureID Boundary analysis ID
                     * 
                     */
                    void SetExposureID(const uint64_t& _exposureID);

                    /**
                     * 判断参数 ExposureID 是否已赋值
                     * @return ExposureID 是否已赋值
                     * 
                     */
                    bool ExposureIDHasBeenSet() const;

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
                     * 获取Pagination size.
                     * @return Limit Pagination size.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Pagination size.
                     * @param _limit Pagination size.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset.
                     * @return Offset Offset.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param _offset Offset.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Boundary analysis ID
                     */
                    uint64_t m_exposureID;
                    bool m_exposureIDHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Pagination size.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEPORTDETECTLISTREQUEST_H_
