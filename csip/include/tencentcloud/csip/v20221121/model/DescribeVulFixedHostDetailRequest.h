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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULFIXEDHOSTDETAILREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULFIXEDHOSTDETAILREQUEST_H_

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
                * DescribeVulFixedHostDetail request structure.
                */
                class DescribeVulFixedHostDetailRequest : public AbstractModel
                {
                public:
                    DescribeVulFixedHostDetailRequest();
                    ~DescribeVulFixedHostDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Vulnerability ID</p>
                     * @return VulId <p>Vulnerability ID</p>
                     * 
                     */
                    int64_t GetVulId() const;

                    /**
                     * 设置<p>Vulnerability ID</p>
                     * @param _vulId <p>Vulnerability ID</p>
                     * 
                     */
                    void SetVulId(const int64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取<p>Host instance ID.</p>
                     * @return InstanceId <p>Host instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Host instance ID.</p>
                     * @param _instanceId <p>Host instance ID.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Paging offset, used for associated component & path list pagination.<br>Value ranges from 0 to +∞.<br>Default value: 0.</p>
                     * @return Offset <p>Paging offset, used for associated component & path list pagination.<br>Value ranges from 0 to +∞.<br>Default value: 0.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Paging offset, used for associated component & path list pagination.<br>Value ranges from 0 to +∞.<br>Default value: 0.</p>
                     * @param _offset <p>Paging offset, used for associated component & path list pagination.<br>Value ranges from 0 to +∞.<br>Default value: 0.</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Number of results per page, used for paginating associated components & path list<br>Value ranges from 1 to 100<br>Default value: 10</p>
                     * @return Limit <p>Number of results per page, used for paginating associated components & path list<br>Value ranges from 1 to 100<br>Default value: 10</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of results per page, used for paginating associated components & path list<br>Value ranges from 1 to 100<br>Default value: 10</p>
                     * @param _limit <p>Number of results per page, used for paginating associated components & path list<br>Value ranges from 1 to 100<br>Default value: 10</p>
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
                     * 获取Group Account Member ID
                     * @return MemberId Group Account Member ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group Account Member ID
                     * @param _memberId Group Account Member ID
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * <p>Vulnerability ID</p>
                     */
                    int64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * <p>Host instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Paging offset, used for associated component & path list pagination.<br>Value ranges from 0 to +∞.<br>Default value: 0.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of results per page, used for paginating associated components & path list<br>Value ranges from 1 to 100<br>Default value: 10</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULFIXEDHOSTDETAILREQUEST_H_
