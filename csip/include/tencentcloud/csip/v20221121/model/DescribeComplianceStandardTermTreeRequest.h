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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOMPLIANCESTANDARDTERMTREEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOMPLIANCESTANDARDTERMTREEREQUEST_H_

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
                * DescribeComplianceStandardTermTree request structure.
                */
                class DescribeComplianceStandardTermTreeRequest : public AbstractModel
                {
                public:
                    DescribeComplianceStandardTermTreeRequest();
                    ~DescribeComplianceStandardTermTreeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Compliance standard ID</p>
                     * @return StandardID <p>Compliance standard ID</p>
                     * 
                     */
                    uint64_t GetStandardID() const;

                    /**
                     * 设置<p>Compliance standard ID</p>
                     * @param _standardID <p>Compliance standard ID</p>
                     * 
                     */
                    void SetStandardID(const uint64_t& _standardID);

                    /**
                     * 判断参数 StandardID 是否已赋值
                     * @return StandardID 是否已赋值
                     * 
                     */
                    bool StandardIDHasBeenSet() const;

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
                     * 获取<p>Content filtering scenario</p>
                     * @return ContentFilter <p>Content filtering scenario</p>
                     * 
                     */
                    std::string GetContentFilter() const;

                    /**
                     * 设置<p>Content filtering scenario</p>
                     * @param _contentFilter <p>Content filtering scenario</p>
                     * 
                     */
                    void SetContentFilter(const std::string& _contentFilter);

                    /**
                     * 判断参数 ContentFilter 是否已赋值
                     * @return ContentFilter 是否已赋值
                     * 
                     */
                    bool ContentFilterHasBeenSet() const;

                private:

                    /**
                     * <p>Compliance standard ID</p>
                     */
                    uint64_t m_standardID;
                    bool m_standardIDHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Content filtering scenario</p>
                     */
                    std::string m_contentFilter;
                    bool m_contentFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOMPLIANCESTANDARDTERMTREEREQUEST_H_
