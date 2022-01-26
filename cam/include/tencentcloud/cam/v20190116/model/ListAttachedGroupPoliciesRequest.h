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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDGROUPPOLICIESREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDGROUPPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * ListAttachedGroupPolicies request structure.
                */
                class ListAttachedGroupPoliciesRequest : public AbstractModel
                {
                public:
                    ListAttachedGroupPoliciesRequest();
                    ~ListAttachedGroupPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User group ID
                     * @return TargetGroupId User group ID
                     */
                    uint64_t GetTargetGroupId() const;

                    /**
                     * 设置User group ID
                     * @param TargetGroupId User group ID
                     */
                    void SetTargetGroupId(const uint64_t& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取Page number, which starts from 1. Default is 1
                     * @return Page Page number, which starts from 1. Default is 1
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置Page number, which starts from 1. Default is 1
                     * @param Page Page number, which starts from 1. Default is 1
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取Number of entries per page; 20 by default
                     * @return Rp Number of entries per page; 20 by default
                     */
                    uint64_t GetRp() const;

                    /**
                     * 设置Number of entries per page; 20 by default
                     * @param Rp Number of entries per page; 20 by default
                     */
                    void SetRp(const uint64_t& _rp);

                    /**
                     * 判断参数 Rp 是否已赋值
                     * @return Rp 是否已赋值
                     */
                    bool RpHasBeenSet() const;

                    /**
                     * 获取Search by keyword
                     * @return Keyword Search by keyword
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Search by keyword
                     * @param Keyword Search by keyword
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * User group ID
                     */
                    uint64_t m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * Page number, which starts from 1. Default is 1
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Number of entries per page; 20 by default
                     */
                    uint64_t m_rp;
                    bool m_rpHasBeenSet;

                    /**
                     * Search by keyword
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDGROUPPOLICIESREQUEST_H_
